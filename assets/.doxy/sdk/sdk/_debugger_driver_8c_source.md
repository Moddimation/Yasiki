

# File DebuggerDriver.c

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**OdemuExi2**](dir_3db02da560834236de46d8d627abd3de.md) **>** [**DebuggerDriver.c**](_debugger_driver_8c.md)

[Go to the documentation of this file](_debugger_driver_8c.md)


```C++

#include <dolphin/db.h>
#include <dolphin/gx.h>
#include <dolphin/os.h>
#include <types.h>

#include "macros.h"

#define DB_NO_ERROR       0x0
#define DB_STAT_SEND      0x1
#define DB_STAT_RECIEVE   0x2

#define ODEMU_NO_ERROR    1;
#define ODEMU_ERROR       1;

#define ODEMU_ADDR_RECV   0x0001E000
#define ODEMU_OFFSET_RECV 0x00001000
#define ODEMU_MAIL_MAGIC  0x1F000000
#define ODEMU_MAIL_MASK   0x1fffffff

typedef void (*DBGCallbackType) (u32, OSContext*);

u8              EXIInputFlag;
u8*             pEXIInputFlag;
s32             RecvDataLeng;
u32             SendMailData;
DBGCallbackType DBGCallback;
MTRCallbackType MTRCallback;

#ifdef VERSION_GLMJ01
#pragma peephole off // they likely had assembly somewhere, and that caused the peephole=off
                     // bug.
#pragma optimization_level 4 // only this way this matches.
#undef ODEMU_ERROR
#define ODEMU_ERROR 0
#endif

void DBGEXIClearInterrupts (void);
void DBGEXIInit (void);
BOOL DBGEXISelect (u32 v);
BOOL DBGEXIDeselect (void);
BOOL DBGEXISync (void);
BOOL DBGEXIImm (const void* data, s32 size, u32 mode);
BOOL DBGWriteMailbox (u32 v);
BOOL DBGReadMailbox (u32* v);
BOOL DBGRead (u32 addr, const u32* data, s32 byte_size);
BOOL DBGWrite (u32 addr, const void* data, s32 size);
BOOL DBGReadStatus (u32* status);
void MWCallback (u32 a, OSContext* b);
void DBGHandler (s16 a, OSContext* b);
void DBInitComm (u8** a, MTRCallbackType b);
void DBInitInterrupts (void);
void CheckMailBox (void);
s32  DBQueryData ();
BOOL DBRead (const u32* data, s32 size);
BOOL DBWrite (const s32* data, u32 size);
void DBOpen (void);
void DBClose (void);

void
DBGEXIClearInterrupts (void)
{
#ifdef VERSION_GLMJ01
    __SIRegs[SI_EXILK] = 0;
#endif
}

void
DBGEXIInit (void)
{
    __OSMaskInterrupts (OS_INTERRUPTMASK_EXI_2);
    DBGEXIClearInterrupts();
    __EXIRegs[EXI_C2_SR] = 0;
}

BOOL
DBGEXISelect (u32 v)
{
    u32 regs              = __EXIRegs[EXI_C2_SR];
    regs                 &= 0x405;
    regs                 |= 0x80 | (v << 4);
    __EXIRegs[EXI_C2_SR]  = regs;
    return ODEMU_NO_ERROR;
}

BOOL
DBGEXIDeselect (void)
{
    __EXIRegs[EXI_C2_SR] = __EXIRegs[EXI_C2_SR] & 0x405;
    return ODEMU_NO_ERROR;
}

BOOL
DBGEXISync (void)
{
    do {
    }
    while ((__EXIRegs[EXI_C2_CR] & 1) != 0);
    return ODEMU_NO_ERROR;
}

BOOL
DBGEXIImm (const void* data, s32 size, u32 mode)
{
    u32 writeVal;
    u32 readVal;
    int i;

    if (mode)
    {
        writeVal = 0;
        for (i = 0; i < size; ++i)
        {
            u8* nextWordPtr  = (u8*)data + i;
            writeVal        |= *nextWordPtr << ((3 - i) << 3);
        }
        __EXIRegs[14] = writeVal;
    }

    __EXIRegs[13] = 1 | (mode << 2) | ((size - 1U) << 4);

    DBGEXISync();
    if (!mode)
    {
        u8* dataPtr = (u8*)data;
        readVal     = __EXIRegs[14];
        for (i = 0; i < size; ++i) { *dataPtr++ = (u8)(readVal >> ((3 - i) << 3)); }
    }

    return ODEMU_NO_ERROR;
}

BOOL
DBGWriteMailbox (u32 v)
{
    BOOL err = FALSE;
    u32  value;

    if (!DBGEXISelect (4))
    {
        return ODEMU_ERROR;
    }

    value  = 0xc0000000 | (v & 0x1fffffff);
    err   |= !DBGEXIImm (&value, 4, 1);
    err   |= !DBGEXISync();
    err   |= !DBGEXIDeselect();

    return !err;
}

BOOL
DBGReadMailbox (u32* v)
{
    BOOL err = FALSE;
    u32  value;

    if (!DBGEXISelect (4))
    {
        return ODEMU_ERROR;
    }

    value  = 0x60000000;
    err   |= !DBGEXIImm (&value, 2, 1);
    err   |= !DBGEXISync();
    err   |= !DBGEXIImm (v, 4, 0);
    err   |= !DBGEXISync();
    err   |= !DBGEXIDeselect();

    return !err;
}

BOOL
DBGRead (u32 addr, const u32* data, s32 byte_size)
{
    BOOL err     = FALSE;
    u32* dataPtr = (u32*)data;
    u32  writeValue;
    u32  readValue;

    if (!DBGEXISelect (4))
    {
        return ODEMU_ERROR;
    }

    writeValue  = 0x20000000 | ((addr << 8) & 0x01fffc00);
    err        |= !DBGEXIImm (&writeValue, 4, 1);
    err        |= !DBGEXISync();

    while (byte_size != 0)
    {
        err        |= !DBGEXIImm (&readValue, 4, 0);
        err        |= !DBGEXISync();

        *dataPtr++  = readValue;

        byte_size  -= 4;
        if (byte_size < 0)
        {
            byte_size = 0;
        }
    }
    err |= !DBGEXIDeselect();

    return !err;
}

// void DBGCheckID(void) { }

BOOL
DBGWrite (u32 addr, const void* data, s32 size)
{
    BOOL err     = FALSE;
    u32* dataPtr = (u32*)data;
    u32  value;
    u32  nextWord;

    if (!DBGEXISelect (4))
    {
        return ODEMU_ERROR;
    }

    value  = 0xa0000000 | ((addr << 8) & 0x01fffc00);
    err   |= !DBGEXIImm ((u8*)&value, sizeof (value), 1);
    err   |= !DBGEXISync();

    while (size != 0)
    {
        nextWord  = *dataPtr++;

        err      |= !DBGEXIImm ((u8*)&nextWord, sizeof (nextWord), 1);
        err      |= !DBGEXISync();

        size     -= 4;
        if (size < 0)
        {
            size = 0;
        }
    }

    err |= !DBGEXIDeselect();

    return !err;
}

BOOL
DBGReadStatus (u32* status)
{
    BOOL err = FALSE;
    u32  cmd;

    if (!DBGEXISelect (4))
    {
        return ODEMU_ERROR;
    }

    cmd  = 0x40000000;
    err |= !DBGEXIImm (&cmd, 2, 1); // TODO: Enums: 1 = Write, 0 = Read
    err |= !DBGEXISync();
    err |= !DBGEXIImm (status, 4, 0);
    err |= !DBGEXISync();
    err |= !DBGEXIDeselect();

    return !err;
}

void
MWCallback (u32 a, OSContext* b)
{
#pragma unused(a)
#pragma unused(b)

    EXIInputFlag = TRUE;
    if (MTRCallback != NULL)
    {
        MTRCallback (0);
    }
}

void
DBGHandler (s16 a, OSContext* b)
{
    __PIRegs[PI_INTSR] = 0x1000;

    if (DBGCallback != NULL)
    {
        DBGCallback (a, b);
    }
}

void
DBInitComm (u8** a, MTRCallbackType b)
{
    BOOL interr = OSDisableInterrupts();
    {
        pEXIInputFlag = &EXIInputFlag;
        *a            = pEXIInputFlag;
        MTRCallback   = b;
        DBGEXIInit();
    }

    OSRestoreInterrupts (interr);
}

void
DBInitInterrupts (void)
{
    __OSMaskInterrupts (OS_INTERRUPTMASK_EXI_2);
    __OSMaskInterrupts (OS_INTERRUPTMASK_PI_DEBUG);
    DBGCallback = &MWCallback;
    __OSSetInterruptHandler (__OS_INTERRUPT_PI_DEBUG, DBGHandler);
    __OSUnmaskInterrupts (OS_INTERRUPTMASK_PI_DEBUG);
}

void
CheckMailBox (void)
{
    u32 v;
    DBGReadStatus (&v);
    if (v & 1)
    {
        DBGReadMailbox (&v);
        v &= ODEMU_MAIL_MASK;

        if ((v & ODEMU_MAIL_MAGIC) == ODEMU_MAIL_MAGIC)
        {
            SendMailData = v;
            RecvDataLeng = (s32)(v & 0x7FFF);
            EXIInputFlag = 1;
        }
    }
}

s32
DBQueryData (void)
{
    BOOL irq;
    EXIInputFlag = FALSE;
    if (RecvDataLeng == 0)
    {
        irq = OSDisableInterrupts();
        CheckMailBox();
    }
    OSRestoreInterrupts (irq);

    return RecvDataLeng;
}

BOOL
DBRead (const u32* data, s32 size)
{
    BOOL irq  = OSDisableInterrupts();
    u32  v    = (u32)(SendMailData & 0x10000 ? ODEMU_OFFSET_RECV : 0);
    v        += ODEMU_ADDR_RECV;

    DBGRead (v, data, ALIGN_NEXT (size, 4));

    RecvDataLeng = 0;
    EXIInputFlag = 0;

    OSRestoreInterrupts (irq);

    return DB_NO_ERROR;
}

BOOL
DBWrite (const s32* data, u32 size)
{
    u32       value;
    u32       busyFlag;
    BOOL      irq;
    static u8 SendCount = 0x80;

    irq                 = OSDisableInterrupts();

    do {
        DBGReadStatus (&busyFlag);
    }
    while (busyFlag & DB_STAT_RECIEVE);

    ++SendCount;

    value = (u32)((SendCount & 1) ? 0x1000 : 0);
    while (!DBGWrite (value | 0x1C000, data, (s32)ALIGN_NEXT (size, 4))) {}

    do {
        DBGReadStatus (&busyFlag);
    }
    while (busyFlag & DB_STAT_RECIEVE);

    value = ODEMU_MAIL_MAGIC | SendCount << 0x10 | size;
    while (!DBGWriteMailbox (value)) {}

    do {
        while (!DBGReadStatus (&busyFlag)) {}
    }
    while (busyFlag & DB_STAT_RECIEVE);

    OSRestoreInterrupts (irq);

    return DB_NO_ERROR;
}

void
DBOpen (void)
{}

void
DBClose (void)
{}
```


