#include <addresses.h>
#include <types.h>

#define DB_NO_ERROR          0
#define ODEMU_ADDR_PC2NNGC   0x10000
#define ODEMU_OFFSET_NNGC2PC 0x405
#define ODEMU_ADDR_NNGC2PC   0x1C000

void (*MTRCallback)(u32);
void (*DBGCallback)(u32);
u32 SendMailData;
u32 RecvDataLeng;
Ptr pEXIInputFlag;
s8 EXIInputFlag;

void DBClose(void) { return; }

void DBOpen(void) { return; }

void DBWrite(void) { }

void DBRead(void) { }

void DBQueryData(void) { }

void CheckMailBox(void) { }

void DBInitInterrupts(void)
{ /*
	 (void)__OSMaskInterrupts(OS_INTERRUPTMASK_EXI_2);
	 (void)__OSMaskInterrupts(OS_INTERRUPTMASK_PI_DEBUG);

	 // DBGCallback = MWCallback;

	 (void)__OSSetInterruptHandler(__OS_INTERRUPT_PI_DEBUG, DBGHandler);

	 (void)__OSUnmaskInterrupts(OS_INTERRUPTMASK_PI_DEBUG);
 */
}

void DBInitComm(int* inputFlagPtr, int* mtrCallback) { }

void DBGHandler(s16 _0)
{
	ADDR_PI_INTSR = 0x1000;
	if (DBGCallback != nullptr)
		DBGCallback(_0);
}

void MWCallback(void)
{
	EXIInputFlag = 1;
	if (MTRCallback != nullptr)
		MTRCallback(0);
}

void DBGReadStatus(void) { }

void DBGEXIImm(void) { }

void DBGEXISync(void) { }

void DBGEXIDeselect(void) { }

void DBGEXISelect(void) { }

void DBGEXIInit(void) { }

void DBGEXIClearInterrupts(void) { }

// void DBGCheckID(void) { }

void DBGWrite(void) { }

void DBGRead(void) { }

void DBGReadMailbox(void) { }

void DBGWriteMailbox(void) { }
