

# File GXCull.h

[**File List**](files.md) **>** [**dolphin**](dir_f645f2e507aca82374da44bd9d3eb5ac.md) **>** [**gx**](dir_9c5d6c2893da168c7817d80a53db0c8c.md) **>** [**GXCull.h**](_g_x_cull_8h.md)

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


