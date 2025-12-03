

# File GXLighting.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**gx**](dir_7aad653e595702d688ea3e342b8a405d.md) **>** [**GXLighting.h**](_g_x_lighting_8h.md)

[Go to the documentation of this file](_g_x_lighting_8h.md)


```C++
#ifndef _DOLPHIN_GX_GXLIGHTING_H_
#define _DOLPHIN_GX_GXLIGHTING_H_

#include <dolphin/gx/GXEnum.h>
#include <dolphin/gx/GXStruct.h>

#ifdef __cplusplus
extern "C"
{
#endif

void GXInitLightAttn (GXLightObj* lt_obj, f32 a0, f32 a1, f32 a2, f32 k0, f32 k1, f32 k2);
void GXInitLightAttnA (GXLightObj* lt_obj, f32 a0, f32 a1, f32 a2);
void GXInitLightAttnK (GXLightObj* lt_obj, f32 k0, f32 k1, f32 k2);
void GXInitLightSpot (GXLightObj* lt_obj, f32 cutoff, GXSpotFn spot_func);
void GXInitLightDistAttn (GXLightObj* lt_obj, f32 ref_dist, f32 ref_br, GXDistAttnFn dist_func);
void GXInitLightPos (GXLightObj* lt_obj, f32 x, f32 y, f32 z);
void GXInitLightDir (GXLightObj* lt_obj, f32 nx, f32 ny, f32 nz);
void GXInitSpecularDir (GXLightObj* lt_obj, f32 nx, f32 ny, f32 nz);
void GXInitSpecularDirHA (GXLightObj* lt_obj, f32 nx, f32 ny, f32 nz, f32 hx, f32 hy, f32 hz);
void GXInitLightColor (GXLightObj* lt_obj, GXColor color);
void GXLoadLightObjImm (GXLightObj* lt_obj, GXLightID light);
void GXLoadLightObjIndx (u32 lt_obj_indx, GXLightID light);
void GXSetChanAmbColor (GXChannelID chan, GXColor amb_color);
void GXSetChanMatColor (GXChannelID chan, GXColor mat_color);
void GXSetNumChans (u8 nChans);
void GXSetChanCtrl (GXChannelID chan,
                    GXBool      enable,
                    GXColorSrc  amb_src,
                    GXColorSrc  mat_src,
                    u32         light_mask,
                    GXDiffuseFn diff_fn,
                    GXAttnFn    attn_fn);

#ifdef __cplusplus
}
#endif

#endif
```


