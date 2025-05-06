

# File GXCull.h

[**File List**](files.md) **>** [**dolphin**](dir_8d73ddf10613ffd25a966cd68a313b8d.md) **>** [**gx**](dir_049675cf3b51aca8087b2c87edff05c3.md) **>** [**GXCull.h**](_g_x_cull_8h.md)

[Go to the documentation of this file](_g_x_cull_8h.md)


```C++
#ifndef _DOLPHIN_GX_GXCULL_H_
#define _DOLPHIN_GX_GXCULL_H_

#include <dolphin/gx/GXEnum.h>

#ifdef __cplusplus
extern "C"
{
#endif

void GXSetScissor (u32 left, u32 top, u32 wd, u32 ht);
void GXSetCullMode (GXCullMode mode);
void GXSetCoPlanar (GXBool enable);

#ifdef __cplusplus
}
#endif

#endif
```


