

# File vifuncs.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**vi**](dir_c06ed8b441bec63d463886439e7a1449.md) **>** [**vifuncs.h**](vifuncs_8h.md)

[Go to the documentation of this file](vifuncs_8h.md)


```C++
#ifndef _DOLPHIN_VIFUNCS_H_
#define _DOLPHIN_VIFUNCS_H_

#include <types.h>

#include <dolphin/gx/GXStruct.h>
#include <dolphin/vi/vitypes.h>

#ifdef __cplusplus
extern "C"
{
#endif

VIRetraceCallback VISetPreRetraceCallback (VIRetraceCallback cb);
VIRetraceCallback VISetPostRetraceCallback (VIRetraceCallback cb);
void              VIInit (void);
void              VIWaitForRetrace (void);
void              VIConfigure (GXRenderModeObj* rm);
void              VIConfigurePan (u16 xOrg, u16 yOrg, u16 width, u16 height);
void              VIFlush (void);
void              VISetNextFrameBuffer (void* fb);
void              VISetNextRightFrameBuffer (void* fb);
void              VISetBlack (BOOL black);
void              VISet3D (BOOL threeD);
u32               VIGetRetraceCount (void);
u32               VIGetNextField (void);
u32               VIGetCurrentLine (void);
u32               VIGetTvFormat (void);
u16               VIGetDTVStatus (void);

#ifdef __cplusplus
}
#endif

#endif
```


