

# File vifuncs.h

[**File List**](files.md) **>** [**dolphin**](dir_8d73ddf10613ffd25a966cd68a313b8d.md) **>** [**vi**](dir_d26b470540d33df01cf5e4af01260c93.md) **>** [**vifuncs.h**](vifuncs_8h.md)

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


