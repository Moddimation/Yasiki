

# File GXTev.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**gx**](dir_7aad653e595702d688ea3e342b8a405d.md) **>** [**GXTev.h**](_g_x_tev_8h.md)

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


