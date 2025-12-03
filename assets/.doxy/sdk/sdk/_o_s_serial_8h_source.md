

# File OSSerial.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**os**](dir_2e13e6cf1d2e2aa91cbc210fef9f68a3.md) **>** [**OSSerial.h**](_o_s_serial_8h.md)

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


