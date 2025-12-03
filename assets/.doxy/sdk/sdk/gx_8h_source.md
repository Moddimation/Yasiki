

# File gx.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**gx.h**](gx_8h.md)

[Go to the documentation of this file](gx_8h.md)


```C++
#ifndef _DOLPHIN_GX_H_
#define _DOLPHIN_GX_H_

#include <dolphin/gx/GXBump.h>
#include <dolphin/gx/GXCommandList.h>
#include <dolphin/gx/GXCpu2Efb.h>
#include <dolphin/gx/GXCull.h>
#include <dolphin/gx/GXDispList.h>
#include <dolphin/gx/GXDraw.h>
#include <dolphin/gx/GXFifo.h>
#include <dolphin/gx/GXFrameBuffer.h>
#include <dolphin/gx/GXGeometry.h>
#include <dolphin/gx/GXGet.h>
#include <dolphin/gx/GXLighting.h>
#include <dolphin/gx/GXManage.h>
#include <dolphin/gx/GXPerf.h>
#include <dolphin/gx/GXPixel.h>
#include <dolphin/gx/GXStruct.h>
#include <dolphin/gx/GXTev.h>
#include <dolphin/gx/GXTexture.h>
#include <dolphin/gx/GXTransform.h>
#include <dolphin/gx/GXVerify.h>
#include <dolphin/gx/GXVert.h>

// unsorted GX externs

#ifdef __cplusplus
extern "C"
{
#endif

// GXMisc
void (*GXSetDrawSyncCallback (void (*cb) (u16))) (u16);
void GXSetDrawSync (u16 token);

#ifdef __cplusplus
}
#endif

#endif
```


