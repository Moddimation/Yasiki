

# File GXDraw.h

[**File List**](files.md) **>** [**dolphin**](dir_f645f2e507aca82374da44bd9d3eb5ac.md) **>** [**gx**](dir_9c5d6c2893da168c7817d80a53db0c8c.md) **>** [**GXDraw.h**](_g_x_draw_8h.md)

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


