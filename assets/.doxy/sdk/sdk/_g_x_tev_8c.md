

# File GXTev.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**gx**](dir_b80c028b3e970eff7f2a07684ffcf104.md) **>** [**GXTev.c**](_g_x_tev_8c.md)

[Go to the source code of this file](_g_x_tev_8c_source.md)



* `#include <dolphin/gx.h>`
* `#include <dolphin/os.h>`
* `#include <macros.h>`
* `#include "GXPrivate.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetAlphaCompare**](#function-gxsetalphacompare) ([**GXCompare**](_g_x_enum_8h.md#typedef-gxcompare) comp0, [**u8**](types_8h.md#typedef-u8) ref0, [**GXAlphaOp**](_g_x_enum_8h.md#typedef-gxalphaop) op, [**GXCompare**](_g_x_enum_8h.md#typedef-gxcompare) comp1, [**u8**](types_8h.md#typedef-u8) ref1) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetNumTevStages**](#function-gxsetnumtevstages) ([**u8**](types_8h.md#typedef-u8) nStages) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetTevAlphaIn**](#function-gxsettevalphain) ([**GXTevStageID**](_g_x_enum_8h.md#typedef-gxtevstageid) stage, [**GXTevAlphaArg**](_g_x_enum_8h.md#typedef-gxtevalphaarg) a, [**GXTevAlphaArg**](_g_x_enum_8h.md#typedef-gxtevalphaarg) b, [**GXTevAlphaArg**](_g_x_enum_8h.md#typedef-gxtevalphaarg) c, [**GXTevAlphaArg**](_g_x_enum_8h.md#typedef-gxtevalphaarg) d) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetTevAlphaOp**](#function-gxsettevalphaop) ([**GXTevStageID**](_g_x_enum_8h.md#typedef-gxtevstageid) stage, [**GXTevOp**](_g_x_enum_8h.md#typedef-gxtevop) op, [**GXTevBias**](_g_x_enum_8h.md#typedef-gxtevbias) bias, [**GXTevScale**](_g_x_enum_8h.md#typedef-gxtevscale) scale, [**GXBool**](_g_x_enum_8h.md#typedef-gxbool) clamp, [**GXTevRegID**](_g_x_enum_8h.md#typedef-gxtevregid) out\_reg) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetTevClampMode**](#function-gxsettevclampmode) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetTevColor**](#function-gxsettevcolor) ([**GXTevRegID**](_g_x_enum_8h.md#typedef-gxtevregid) id, [**GXColor**](_g_x_struct_8h.md#typedef-gxcolor) color) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetTevColorIn**](#function-gxsettevcolorin) ([**GXTevStageID**](_g_x_enum_8h.md#typedef-gxtevstageid) stage, [**GXTevColorArg**](_g_x_enum_8h.md#typedef-gxtevcolorarg) a, [**GXTevColorArg**](_g_x_enum_8h.md#typedef-gxtevcolorarg) b, [**GXTevColorArg**](_g_x_enum_8h.md#typedef-gxtevcolorarg) c, [**GXTevColorArg**](_g_x_enum_8h.md#typedef-gxtevcolorarg) d) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetTevColorOp**](#function-gxsettevcolorop) ([**GXTevStageID**](_g_x_enum_8h.md#typedef-gxtevstageid) stage, [**GXTevOp**](_g_x_enum_8h.md#typedef-gxtevop) op, [**GXTevBias**](_g_x_enum_8h.md#typedef-gxtevbias) bias, [**GXTevScale**](_g_x_enum_8h.md#typedef-gxtevscale) scale, [**GXBool**](_g_x_enum_8h.md#typedef-gxbool) clamp, [**GXTevRegID**](_g_x_enum_8h.md#typedef-gxtevregid) out\_reg) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetTevColorS10**](#function-gxsettevcolors10) ([**GXTevRegID**](_g_x_enum_8h.md#typedef-gxtevregid) id, [**GXColorS10**](_g_x_struct_8h.md#typedef-gxcolors10) color) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetTevKAlphaSel**](#function-gxsettevkalphasel) ([**GXTevStageID**](_g_x_enum_8h.md#typedef-gxtevstageid) stage, [**GXTevKAlphaSel**](_g_x_enum_8h.md#typedef-gxtevkalphasel) sel) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetTevKColor**](#function-gxsettevkcolor) ([**GXTevKColorID**](_g_x_enum_8h.md#typedef-gxtevkcolorid) id, [**GXColor**](_g_x_struct_8h.md#typedef-gxcolor) color) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetTevKColorSel**](#function-gxsettevkcolorsel) ([**GXTevStageID**](_g_x_enum_8h.md#typedef-gxtevstageid) stage, [**GXTevKColorSel**](_g_x_enum_8h.md#typedef-gxtevkcolorsel) sel) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetTevOp**](#function-gxsettevop) ([**GXTevStageID**](_g_x_enum_8h.md#typedef-gxtevstageid) id, [**GXTevMode**](_g_x_enum_8h.md#typedef-gxtevmode) mode) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetTevOrder**](#function-gxsettevorder) ([**GXTevStageID**](_g_x_enum_8h.md#typedef-gxtevstageid) stage, [**GXTexCoordID**](_g_x_enum_8h.md#typedef-gxtexcoordid) coord, [**GXTexMapID**](_g_x_enum_8h.md#typedef-gxtexmapid) map, [**GXChannelID**](_g_x_enum_8h.md#typedef-gxchannelid) color) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetTevSwapMode**](#function-gxsettevswapmode) ([**GXTevStageID**](_g_x_enum_8h.md#typedef-gxtevstageid) stage, [**GXTevSwapSel**](_g_x_enum_8h.md#typedef-gxtevswapsel) ras\_sel, [**GXTevSwapSel**](_g_x_enum_8h.md#typedef-gxtevswapsel) tex\_sel) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetTevSwapModeTable**](#function-gxsettevswapmodetable) ([**GXTevSwapSel**](_g_x_enum_8h.md#typedef-gxtevswapsel) table, [**GXTevColorChan**](_g_x_enum_8h.md#typedef-gxtevcolorchan) red, [**GXTevColorChan**](_g_x_enum_8h.md#typedef-gxtevcolorchan) green, [**GXTevColorChan**](_g_x_enum_8h.md#typedef-gxtevcolorchan) blue, [**GXTevColorChan**](_g_x_enum_8h.md#typedef-gxtevcolorchan) alpha) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetZTexture**](#function-gxsetztexture) ([**GXZTexOp**](_g_x_enum_8h.md#typedef-gxztexop) op, [**GXTexFmt**](_g_x_enum_8h.md#typedef-gxtexfmt) fmt, [**u32**](types_8h.md#typedef-u32) bias) <br> |




























## Public Functions Documentation




### function GXSetAlphaCompare 

```C++
void GXSetAlphaCompare (
    GXCompare comp0,
    u8 ref0,
    GXAlphaOp op,
    GXCompare comp1,
    u8 ref1
) 
```




<hr>



### function GXSetNumTevStages 

```C++
void GXSetNumTevStages (
    u8 nStages
) 
```




<hr>



### function GXSetTevAlphaIn 

```C++
void GXSetTevAlphaIn (
    GXTevStageID stage,
    GXTevAlphaArg a,
    GXTevAlphaArg b,
    GXTevAlphaArg c,
    GXTevAlphaArg d
) 
```




<hr>



### function GXSetTevAlphaOp 

```C++
void GXSetTevAlphaOp (
    GXTevStageID stage,
    GXTevOp op,
    GXTevBias bias,
    GXTevScale scale,
    GXBool clamp,
    GXTevRegID out_reg
) 
```




<hr>



### function GXSetTevClampMode 

```C++
void GXSetTevClampMode (
    void
) 
```




<hr>



### function GXSetTevColor 

```C++
void GXSetTevColor (
    GXTevRegID id,
    GXColor color
) 
```




<hr>



### function GXSetTevColorIn 

```C++
void GXSetTevColorIn (
    GXTevStageID stage,
    GXTevColorArg a,
    GXTevColorArg b,
    GXTevColorArg c,
    GXTevColorArg d
) 
```




<hr>



### function GXSetTevColorOp 

```C++
void GXSetTevColorOp (
    GXTevStageID stage,
    GXTevOp op,
    GXTevBias bias,
    GXTevScale scale,
    GXBool clamp,
    GXTevRegID out_reg
) 
```




<hr>



### function GXSetTevColorS10 

```C++
void GXSetTevColorS10 (
    GXTevRegID id,
    GXColorS10 color
) 
```




<hr>



### function GXSetTevKAlphaSel 

```C++
void GXSetTevKAlphaSel (
    GXTevStageID stage,
    GXTevKAlphaSel sel
) 
```




<hr>



### function GXSetTevKColor 

```C++
void GXSetTevKColor (
    GXTevKColorID id,
    GXColor color
) 
```




<hr>



### function GXSetTevKColorSel 

```C++
void GXSetTevKColorSel (
    GXTevStageID stage,
    GXTevKColorSel sel
) 
```




<hr>



### function GXSetTevOp 

```C++
void GXSetTevOp (
    GXTevStageID id,
    GXTevMode mode
) 
```




<hr>



### function GXSetTevOrder 

```C++
void GXSetTevOrder (
    GXTevStageID stage,
    GXTexCoordID coord,
    GXTexMapID map,
    GXChannelID color
) 
```




<hr>



### function GXSetTevSwapMode 

```C++
void GXSetTevSwapMode (
    GXTevStageID stage,
    GXTevSwapSel ras_sel,
    GXTevSwapSel tex_sel
) 
```




<hr>



### function GXSetTevSwapModeTable 

```C++
void GXSetTevSwapModeTable (
    GXTevSwapSel table,
    GXTevColorChan red,
    GXTevColorChan green,
    GXTevColorChan blue,
    GXTevColorChan alpha
) 
```




<hr>



### function GXSetZTexture 

```C++
void GXSetZTexture (
    GXZTexOp op,
    GXTexFmt fmt,
    u32 bias
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/gx/GXTev.c`

