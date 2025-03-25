#include "dolphin/db/DBInterface.h"
#include <dolphin.h>
#include <types.h>

#define DB_NO_ERROR     0x0
#define DB_STAT_SEND    0x1
#define DB_STAT_RECIEVE 0x2

#define ODEMU_ADDR_NNGC2PC   0x0001C000
#define ODEMU_ADDR_PC2NNGC   0x0001E000
#define ODEMU_OFFSET_NNGC2PC 0x00001000
#define ODEMU_OFFSET_PC2NNGC 0x00001000
#define ODEMU_MAIL_MAGIC     0x1F000000
#define ODEMU_MAIL_MASK      0x1fffffff

#define ROUND_UP(x) ((x + 3) & ~3)

#pragma peephole off

typedef void (*DBGCallbackType)(u32, OSContext*);

u8 EXIInputFlag;
u8* pEXIInputFlag;
s32 RecvDataLeng;
u32 SendMailData;
DBGCallbackType DBGCallback;
MTRCallbackType MTRCallback;

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
	__PIReg[PI_INTSR] = 0x1000;

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

void CheckMailBox(void)
{
	u32 v;
	DBGReadStatus(&v);
	if (v & 1) {
		DBGReadMailbox(&v);
		v &= ODEMU_MAIL_MASK;

		if ((v & ODEMU_MAIL_MAGIC) == ODEMU_MAIL_MAGIC) {
			SendMailData = v;
			RecvDataLeng = v & 0x7fff;
			EXIInputFlag = 1;
		}
	}
}

u32 DBQueryData()
{
	BOOL irq;
	EXIInputFlag = FALSE;
	if (RecvDataLeng == 0) {
		irq = OSDisableInterrupts();
		CheckMailBox();
	}
	OSRestoreInterrupts(irq);
	return RecvDataLeng;
}

BOOL DBRead(u32* buffer, s32 count)
{
	BOOL irq = OSDisableInterrupts();
	u32 v    = SendMailData & 0x10000 ? ODEMU_OFFSET_PC2NNGC : 0;
	v += ODEMU_ADDR_PC2NNGC;

	DBGRead(v, buffer, ROUND_UP(count));

	RecvDataLeng = 0;
	EXIInputFlag = 0;

	OSRestoreInterrupts(irq);

	return 0;
}

inline u32 __DBMakeMail(u32 v, u32 size)
{
	return (ODEMU_MAIL_MAGIC) | v << 0x10 | size;
}

inline void __DBWaitForSendMail(u32* busyFlag)
{
	do {
		DBGReadStatus(busyFlag);
	} while (*busyFlag & DB_STAT_RECIEVE);
}
inline void __DBWaitForSendMailSafe(u32* busyFlag)
{
	do {
		while (!DBGReadStatus(busyFlag))
			;
	} while (*busyFlag & DB_STAT_RECIEVE);
}
inline void __DBWrite(u32 offset, void* data, u32 size)
{
	while (!DBGWrite(offset | ODEMU_ADDR_NNGC2PC, data, ROUND_UP(size)))
		;
}
inline void __DBWriteMail(u32 count, u32 size)
{
	while (!DBGWriteMailbox(__DBMakeMail(count, size)))
		;
}
BOOL DBWrite(void* data, u32 size)
{
	u32 mail;
	u32 offset;
	u32 busyFlag;
	BOOL irq;
	static u8 sendCount = 0x80;

	irq = OSDisableInterrupts();
	__DBWaitForSendMail(&busyFlag);

	sendCount++;
	offset = ((sendCount & 1) ? ODEMU_OFFSET_NNGC2PC : 0);

	__DBWrite(offset, data, size);

	__DBWaitForSendMail(&busyFlag);

	__DBWriteMail(sendCount, size);

	__DBWaitForSendMailSafe(&busyFlag);

	OSRestoreInterrupts(irq);

	return 0;
}

void DBOpen(void) { }

void DBClose(void) { }

