

# File GXPixel.h

[**File List**](files.md) **>** [**dolphin**](dir_8d73ddf10613ffd25a966cd68a313b8d.md) **>** [**gx**](dir_049675cf3b51aca8087b2c87edff05c3.md) **>** [**GXPixel.h**](_g_x_pixel_8h.md)

[Go to the documentation of this file](_g_x_pixel_8h.md)


```C++
#ifndef _DOLPHIN_GX_GXPIXEL_H_
#define _DOLPHIN_GX_GXPIXEL_H_

#include <dolphin/gx/GXEnum.h>

#ifdef __cplusplus
extern "C"
{
#endif

void GXSetFog (GXFogType type, f32 startz, f32 endz, f32 nearz, f32 farz, GXColor color);
void GXInitFogAdjTable (GXFogAdjTable* table, u16 width, f32 projmtx[4][4]);
void GXSetFogRangeAdj (GXBool enable, u16 center, GXFogAdjTable* table);
void GXSetBlendMode (GXBlendMode   type,
                     GXBlendFactor src_factor,
                     GXBlendFactor dst_factor,
                     GXLogicOp     op);
void GXSetColorUpdate (GXBool update_enable);
void GXSetAlphaUpdate (GXBool update_enable);
void GXSetZMode (GXBool compare_enable, GXCompare func, GXBool update_enable);
void GXSetZCompLoc (GXBool before_tex);
void GXSetPixelFmt (GXPixelFmt pix_fmt, GXZFmt16 z_fmt);
void GXSetDither (GXBool dither);
void GXSetDstAlpha (GXBool enable, u8 alpha);
void GXSetFieldMask (GXBool odd_mask, GXBool even_mask);
void GXSetFieldMode (GXBool field_mode, GXBool half_aspect_ratio);

#ifdef __cplusplus
}
#endif

#endif
```


