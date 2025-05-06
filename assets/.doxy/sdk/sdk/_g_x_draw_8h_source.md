

# File GXDraw.h

[**File List**](files.md) **>** [**dolphin**](dir_8d73ddf10613ffd25a966cd68a313b8d.md) **>** [**gx**](dir_049675cf3b51aca8087b2c87edff05c3.md) **>** [**GXDraw.h**](_g_x_draw_8h.md)

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


