

# File GXBump.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**gx**](dir_7aad653e595702d688ea3e342b8a405d.md) **>** [**GXBump.h**](_g_x_bump_8h.md)

[Go to the documentation of this file](_g_x_bump_8h.md)


```C++
#ifndef _DOLPHIN_GX_GXBUMP_H_
#define _DOLPHIN_GX_GXBUMP_H_

#include <dolphin/gx/GXEnum.h>

#ifdef __cplusplus
extern "C"
{
#endif

void GXSetTevIndirect (GXTevStageID     tev_stage,
                       GXIndTexStageID  ind_stage,
                       GXIndTexFormat   format,
                       GXIndTexBiasSel  bias_sel,
                       GXIndTexMtxID    matrix_sel,
                       GXIndTexWrap     wrap_s,
                       GXIndTexWrap     wrap_t,
                       GXBool           add_prev,
                       GXBool           utc_lod,
                       GXIndTexAlphaSel alpha_sel);
void GXSetIndTexMtx (GXIndTexMtxID mtx_id, f32 offset[2][3], s8 scale_exp);
void GXSetIndTexCoordScale (GXIndTexStageID ind_state,
                            GXIndTexScale   scale_s,
                            GXIndTexScale   scale_t);
void GXSetIndTexOrder (GXIndTexStageID ind_stage, GXTexCoordID tex_coord, GXTexMapID tex_map);
void GXSetNumIndStages (u8 nIndStages);
void GXSetTevDirect (GXTevStageID tev_stage);
void GXSetTevIndWarp (GXTevStageID    tev_stage,
                      GXIndTexStageID ind_stage,
                      u8              signed_offset,
                      u8              replace_mode,
                      GXIndTexMtxID   matrix_sel);
void GXSetTevIndTile (GXTevStageID     tev_stage,
                      GXIndTexStageID  ind_stage,
                      u16              tilesize_s,
                      u16              tilesize_t,
                      u16              tilespacing_s,
                      u16              tilespacing_t,
                      GXIndTexFormat   format,
                      GXIndTexMtxID    matrix_sel,
                      GXIndTexBiasSel  bias_sel,
                      GXIndTexAlphaSel alpha_sel);
void GXSetTevIndBumpST (GXTevStageID    tev_stage,
                        GXIndTexStageID ind_stage,
                        GXIndTexMtxID   matrix_sel);
void GXSetTevIndBumpXYZ (GXTevStageID    tev_stage,
                         GXIndTexStageID ind_stage,
                         GXIndTexMtxID   matrix_sel);
void GXSetTevIndRepeat (GXTevStageID tev_stage);

#ifdef __cplusplus
}
#endif

#endif
```


