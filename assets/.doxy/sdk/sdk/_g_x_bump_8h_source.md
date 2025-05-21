

# File GXBump.h

[**File List**](files.md) **>** [**dolphin**](dir_f645f2e507aca82374da44bd9d3eb5ac.md) **>** [**gx**](dir_9c5d6c2893da168c7817d80a53db0c8c.md) **>** [**GXBump.h**](_g_x_bump_8h.md)

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


