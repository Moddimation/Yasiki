#include <dolphin.h>

#define DB_NO_ERROR          0
#define ODEMU_ADDR_PC2NNGC   0x10000
#define ODEMU_OFFSET_NNGC2PC 0x405
#define ODEMU_ADDR_NNGC2PC   0x1C000

void DBGEXIInit(void) { }

void DBGEXISelect(void) { }

void DBGEXIDeselect(void) { }

void DBGEXISync(void) { }
void DBGEXIImm(void) { }

void DBGEXIClearInterrupts(void) { }

void DBGCheckID(void) { }
void DBGWriteMailbox(void) { }

void DBGReadMailbox(void) { }

void DBGRead(void) { }

void DBGWrite(void) { }

void DBGReadStatus(void) { }

void MWCallback(void) { }

void DBGHandler(void) { }

void DBInitComm(int* inputFlagPtr, int* mtrCallback) { }

void DBInitInterrupts(void)
{ /*
	 (void)__OSMaskInterrupts(OS_INTERRUPTMASK_EXI_2);
	 (void)__OSMaskInterrupts(OS_INTERRUPTMASK_PI_DEBUG);

	 // DBGCallback = MWCallback;

	 (void)__OSSetInterruptHandler(__OS_INTERRUPT_PI_DEBUG, DBGHandler);

	 (void)__OSUnmaskInterrupts(OS_INTERRUPTMASK_PI_DEBUG);
 */
}

void CheckMailBox(void) { }

void DBQueryData(void) { }

void DBRead(void) { }

void DBWrite(void) { }

void DBOpen(void) { return; }

void DBClose(void) { return; }
