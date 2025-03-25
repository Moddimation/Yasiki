#include "dolphin/db/DBInterface.h"
#include <dolphin.h>
#include <types.h>

#define DB_NO_ERROR          0
#define ODEMU_ADDR_PC2NNGC   0x10000
#define ODEMU_OFFSET_NNGC2PC 0x405
#define ODEMU_ADDR_NNGC2PC   0x1C000

#define ROUND_UP(x, align) (((x) + (align) - 1) & (-(align)))

#pragma peephole off

typedef void (*DBGCallbackType)(u32, OSContext*);

u8 EXIInputFlag;
u8* pEXIInputFlag;
s32 RecvDataLeng;
u32 SendMailData;
DBGCallbackType DBGCallback;
MTRCallbackType MTRCallback;
u8 SendCount = 0x80;

void DBGEXIClearInterrupts(void) { }

void DBGEXIInit(void) { }

void DBGEXISelect(void) { }

void DBGEXIDeselect(void) { }

void DBGEXISync(void) { }

BOOL DBGEXIImm(void* buffer, s32 bytecounter, u32 write) { return 0; }

BOOL DBGWriteMailbox(u32 p1) { return 0; }

BOOL DBGReadMailbox(u32* p1) { return 0; }

// void DBGCheckID(void) { }

BOOL DBGWrite(u32 count, void* buffer, s32 param3) { return 0; }

BOOL DBGRead(u32 count, u32* buffer, s32 param3) { return 0; }

BOOL DBGReadStatus(u32* p1) { return 0; }

void MWCallback(u32 a, OSContext* b)
{
	EXIInputFlag = TRUE;
	if (MTRCallback != nullptr)
		MTRCallback(0);
}

void DBGHandler(s16 a, OSContext* b)
{
	__PIReg[0] = 0x1000;

	if (DBGCallback != nullptr)
		DBGCallback(a, b);
}

void DBInitComm(u8** a, MTRCallbackType b)
{
	BOOL interr = OSDisableInterrupts();
	{
		pEXIInputFlag = &EXIInputFlag;
		*a            = pEXIInputFlag;
		MTRCallback   = b;
		DBGEXIInit();
	}
	OSRestoreInterrupts(interr);
}

void DBInitInterrupts(void)
{
	__OSMaskInterrupts(OS_INTERRUPTMASK_EXI_2);
	__OSMaskInterrupts(OS_INTERRUPTMASK_PI_DEBUG);
	DBGCallback = &MWCallback;
	__OSSetInterruptHandler(__OS_INTERRUPT_PI_DEBUG, DBGHandler);
	__OSUnmaskInterrupts(OS_INTERRUPTMASK_PI_DEBUG);
}

void CheckMailBox(void) { }

u32 DBQueryData()
{
	BOOL interr;
	EXIInputFlag = FALSE;
	if (RecvDataLeng == 0) {
		interr = OSDisableInterrupts();
		CheckMailBox();
	}
	OSRestoreInterrupts(interr);
	return RecvDataLeng;
}

BOOL DBRead(u32* buffer, s32 count)
{
	BOOL interrupts = OSDisableInterrupts();
	u32 v           = SendMailData & 0x10000 ? 0x1000 : 0;

	DBGRead(v + 0x1e000, buffer, ROUND_UP(count, 4));

	RecvDataLeng = 0;
	EXIInputFlag = 0;

	OSRestoreInterrupts(interrupts);

	return 0;
}

BOOL DBWrite(void* src, u32 size) { return 0; }

void DBOpen(void) { }

void DBClose(void) { }

