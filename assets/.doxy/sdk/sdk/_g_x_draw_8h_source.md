

# File GXDraw.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**gx**](dir_7aad653e595702d688ea3e342b8a405d.md) **>** [**GXDraw.h**](_g_x_draw_8h.md)

[Go to the documentation of this file](_g_x_draw_8h.md)


```C++
#ifndef _DOLPHIN_GX_GXDRAW_H_
#define _DOLPHIN_GX_GXDRAW_H_

#include <types.h>

#ifdef __cplusplus
extern "C"
{
#endif

void GXDrawCylinder (u8 numEdges);
void GXDrawTorus (f32 rc, u8 numc, u8 numt);
void GXDrawSphere (u8 numMajor, u8 numMinor);
void GXDrawCube (void);
void GXDrawDodeca (void);
void GXDrawOctahedron (void);
void GXDrawIcosahedron (void);
void GXDrawSphere1 (u8 depth);
u32  GXGenNormalTable (u8 depth, f32* table);

#ifdef __cplusplus
}
#endif

#endif
```


