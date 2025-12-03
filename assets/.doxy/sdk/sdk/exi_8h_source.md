

# File exi.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**exi.h**](exi_8h.md)

[Go to the documentation of this file](exi_8h.md)


```C++
#ifndef _DOLPHIN_EXI_H_
#define _DOLPHIN_EXI_H_

#include <dolphin/os/OSContext.h>

typedef void (*EXICallback) (s32 chan, OSContext* context);

EXICallback EXISetExiCallback (s32 channel, EXICallback callback);

void EXIInit (void);
BOOL EXILock (s32 channel, u32 device, EXICallback callback);
BOOL EXIUnlock (s32 channel);
BOOL EXISelect (s32 channel, u32 device, u32 frequency);
BOOL EXIDeselect (s32 channel);
BOOL EXIImm (s32 channel, void* buffer, s32 length, u32 type, EXICallback callback);
BOOL EXIImmEx (s32 channel, void* buffer, s32 length, u32 type);
BOOL EXIDma (s32 channel, void* buffer, s32 length, u32 type, EXICallback callback);
BOOL EXISync (s32 channel);
BOOL EXIProbe (s32 channel);
s32  EXIProbeEx (s32 channel);
BOOL EXIAttach (s32 channel, EXICallback callback);
BOOL EXIDetach (s32 channel);
u32  EXIGetState (s32 channel);
s32  EXIGetID (s32 channel, u32 device, u32* id);
void EXIProbeReset (void);

#endif
```


