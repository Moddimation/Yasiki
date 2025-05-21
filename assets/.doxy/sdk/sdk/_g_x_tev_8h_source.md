

# File GXTev.h

[**File List**](files.md) **>** [**dolphin**](dir_f645f2e507aca82374da44bd9d3eb5ac.md) **>** [**gx**](dir_9c5d6c2893da168c7817d80a53db0c8c.md) **>** [**GXTev.h**](_g_x_tev_8h.md)

[Go to the documentation of this file](_g_x_tev_8h.md)


```C++
#ifndef _DOLPHIN_GX_GXTEV_H_
#define _DOLPHIN_GX_GXTEV_H_

#include <dolphin/gx/GXEnum.h>

#ifdef __cplusplus
extern "C"
{
#endif

void GXSetTevOp (GXTevStageID id, GXTevMode mode);
void GXSetTevColorIn (GXTevStageID  stage,
                      GXTevColorArg a,
                      GXTevColorArg b,
                      GXTevColorArg c,
                      GXTevColorArg d);
void GXSetTevAlphaIn (GXTevStageID  stage,
                      GXTevAlphaArg a,
                      GXTevAlphaArg b,
                      GXTevAlphaArg c,
                      GXTevAlphaArg d);
void GXSetTevColorOp (GXTevStageID stage,
                      GXTevOp      op,
                      GXTevBias    bias,
                      GXTevScale   scale,
                      GXBool       clamp,
                      GXTevRegID   out_reg);
void GXSetTevAlphaOp (GXTevStageID stage,
                      GXTevOp      op,
                      GXTevBias    bias,
                      GXTevScale   scale,
                      GXBool       clamp,
                      GXTevRegID   out_reg);
void GXSetTevColor (GXTevRegID id, GXColor color);
void GXSetTevColorS10 (GXTevRegID id, GXColorS10 color);
void GXSetTevKColor (GXTevKColorID id, GXColor color);
void GXSetTevKColorSel (GXTevStageID stage, GXTevKColorSel sel);
void GXSetTevKAlphaSel (GXTevStageID stage, GXTevKAlphaSel sel);
void GXSetTevSwapMode (GXTevStageID stage, GXTevSwapSel ras_sel, GXTevSwapSel tex_sel);
void GXSetTevSwapModeTable (GXTevSwapSel   table,
                            GXTevColorChan red,
                            GXTevColorChan green,
                            GXTevColorChan blue,
                            GXTevColorChan alpha);
void GXSetTevClampMode (void);
void GXSetAlphaCompare (GXCompare comp0, u8 ref0, GXAlphaOp op, GXCompare comp1, u8 ref1);
void GXSetZTexture (GXZTexOp op, GXTexFmt fmt, u32 bias);
void GXSetTevOrder (GXTevStageID stage, GXTexCoordID coord, GXTexMapID map, GXChannelID color);
void GXSetNumTevStages (u8 nStages);

#ifdef __cplusplus
}
#endif

#endif
```


