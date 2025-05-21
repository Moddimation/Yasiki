

# File OSSerial.h

[**File List**](files.md) **>** [**dolphin**](dir_f645f2e507aca82374da44bd9d3eb5ac.md) **>** [**os**](dir_c13ebdd3af764081039ea1aa77ad78f7.md) **>** [**OSSerial.h**](_o_s_serial_8h.md)

[Go to the documentation of this file](_o_s_serial_8h.md)


```C++
#ifndef _DOLPHIN_OSSERIAL_H
#define _DOLPHIN_OSSERIAL_H

#include <dolphin/hw_regs.h>
#include <dolphin/os/OSContext.h>

BOOL SIBusy ();
void SIInit ();
u32  SISync ();
u32  SIGetStatus ();
void SISetCommand (s32 chan, u32 command);
u32  SIGetCommand (s32 chan);
void SITransferCommands ();
u32  SISetXY (u32 x, u32 y);
u32  SIEnablePolling (u32 poll);
u32  SIDisablePolling (u32 poll);
void SIGetResponse (s32 chan, void* data);
BOOL SITransfer (s32   chan,
                 void* output,
                 u32   outputBytes,
                 void* input,
                 u32   inputBytes,
                 void  (*callback) (s32, u32, OSContext*),
                 s64   time);

#endif // _DOLPHIN_OSSERIAL_H
```


