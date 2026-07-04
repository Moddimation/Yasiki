

# File GXTransform.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**gx**](dir_7aad653e595702d688ea3e342b8a405d.md) **>** [**GXTransform.h**](_g_x_transform_8h.md)

[Go to the documentation of this file](_g_x_transform_8h.md)


```C++
#ifndef _DOLPHIN_GX_GXTRANSFORM_H_
#define _DOLPHIN_GX_GXTRANSFORM_H_

#include <dolphin/gx/GXEnum.h>

#ifdef __cplusplus
extern "C"
{
#endif

#define GX_PROJECTION_SZ 7
#define GX_VIEWPORT_SZ   6

void GXProject (f32 x, f32 y, f32 z, f32 mtx[3][4], f32* pm, f32* vp, f32* sx, f32* sy, f32* sz);
void GXSetProjection (f32 mtx[4][4], GXProjectionType type);
void GXSetProjectionv (f32* ptr);
void GXLoadPosMtxImm (f32 mtx[3][4], u32 id);
void GXLoadPosMtxIndx (u16 mtx_indx, u32 id);
void GXLoadNrmMtxImm (f32 mtx[3][4], u32 id);
void GXLoadNrmMtxImm3x3 (f32 mtx[3][3], u32 id);
void GXLoadNrmMtxIndx3x3 (u16 mtx_indx, u32 id);
void GXSetCurrentMtx (u32 id);
void GXLoadTexMtxImm (f32 mtx[][4], u32 id, GXTexMtxType type);
void GXLoadTexMtxIndx (u16 mtx_indx, u32 id, GXTexMtxType type);
void GXSetViewportJitter (f32 left, f32 top, f32 wd, f32 ht, f32 nearz, f32 farz, u32 field);
void GXSetViewport (f32 left, f32 top, f32 wd, f32 ht, f32 nearz, f32 farz);
void GXSetScissorBoxOffset (s32 x_off, s32 y_off);
void GXSetClipMode (GXClipMode mode);

#ifdef __cplusplus
}
#endif

#endif
```


