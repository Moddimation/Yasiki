

# File GXLight.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**gx**](dir_b80c028b3e970eff7f2a07684ffcf104.md) **>** [**GXLight.c**](_g_x_light_8c.md)

[Go to the source code of this file](_g_x_light_8c_source.md)



* `#include <dolphin/gx.h>`
* `#include <dolphin/os.h>`
* `#include <macros.h>`
* `#include <math.h>`
* `#include "GXPrivate.h"`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**\_\_GXLightObjInt\_struct**](struct_____g_x_light_obj_int__struct.md) <br> |






















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXGetLightAttnA**](#function-gxgetlightattna) ([**GXLightObj**](_g_x_struct_8h.md#typedef-gxlightobj) \* lt\_obj, [**f32**](types_8h.md#typedef-f32) \* a0, [**f32**](types_8h.md#typedef-f32) \* a1, [**f32**](types_8h.md#typedef-f32) \* a2) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXGetLightAttnK**](#function-gxgetlightattnk) ([**GXLightObj**](_g_x_struct_8h.md#typedef-gxlightobj) \* lt\_obj, [**f32**](types_8h.md#typedef-f32) \* k0, [**f32**](types_8h.md#typedef-f32) \* k1, [**f32**](types_8h.md#typedef-f32) \* k2) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXGetLightColor**](#function-gxgetlightcolor) ([**GXLightObj**](_g_x_struct_8h.md#typedef-gxlightobj) \* lt\_obj, [**GXColor**](_g_x_struct_8h.md#typedef-gxcolor) \* color) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXGetLightDir**](#function-gxgetlightdir) ([**GXLightObj**](_g_x_struct_8h.md#typedef-gxlightobj) \* lt\_obj, [**f32**](types_8h.md#typedef-f32) \* nx, [**f32**](types_8h.md#typedef-f32) \* ny, [**f32**](types_8h.md#typedef-f32) \* nz) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXGetLightPos**](#function-gxgetlightpos) ([**GXLightObj**](_g_x_struct_8h.md#typedef-gxlightobj) \* lt\_obj, [**f32**](types_8h.md#typedef-f32) \* x, [**f32**](types_8h.md#typedef-f32) \* y, [**f32**](types_8h.md#typedef-f32) \* z) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXInitLightAttn**](#function-gxinitlightattn) ([**GXLightObj**](_g_x_struct_8h.md#typedef-gxlightobj) \* lt\_obj, [**f32**](types_8h.md#typedef-f32) a0, [**f32**](types_8h.md#typedef-f32) a1, [**f32**](types_8h.md#typedef-f32) a2, [**f32**](types_8h.md#typedef-f32) k0, [**f32**](types_8h.md#typedef-f32) k1, [**f32**](types_8h.md#typedef-f32) k2) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXInitLightAttnA**](#function-gxinitlightattna) ([**GXLightObj**](_g_x_struct_8h.md#typedef-gxlightobj) \* lt\_obj, [**f32**](types_8h.md#typedef-f32) a0, [**f32**](types_8h.md#typedef-f32) a1, [**f32**](types_8h.md#typedef-f32) a2) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXInitLightAttnK**](#function-gxinitlightattnk) ([**GXLightObj**](_g_x_struct_8h.md#typedef-gxlightobj) \* lt\_obj, [**f32**](types_8h.md#typedef-f32) k0, [**f32**](types_8h.md#typedef-f32) k1, [**f32**](types_8h.md#typedef-f32) k2) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXInitLightColor**](#function-gxinitlightcolor) ([**GXLightObj**](_g_x_struct_8h.md#typedef-gxlightobj) \* lt\_obj, [**GXColor**](_g_x_struct_8h.md#typedef-gxcolor) color) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXInitLightDir**](#function-gxinitlightdir) ([**GXLightObj**](_g_x_struct_8h.md#typedef-gxlightobj) \* lt\_obj, [**f32**](types_8h.md#typedef-f32) nx, [**f32**](types_8h.md#typedef-f32) ny, [**f32**](types_8h.md#typedef-f32) nz) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXInitLightDistAttn**](#function-gxinitlightdistattn) ([**GXLightObj**](_g_x_struct_8h.md#typedef-gxlightobj) \* lt\_obj, [**f32**](types_8h.md#typedef-f32) ref\_dist, [**f32**](types_8h.md#typedef-f32) ref\_br, [**GXDistAttnFn**](_g_x_enum_8h.md#typedef-gxdistattnfn) dist\_func) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXInitLightPos**](#function-gxinitlightpos) ([**GXLightObj**](_g_x_struct_8h.md#typedef-gxlightobj) \* lt\_obj, [**f32**](types_8h.md#typedef-f32) x, [**f32**](types_8h.md#typedef-f32) y, [**f32**](types_8h.md#typedef-f32) z) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXInitLightSpot**](#function-gxinitlightspot) ([**GXLightObj**](_g_x_struct_8h.md#typedef-gxlightobj) \* lt\_obj, [**f32**](types_8h.md#typedef-f32) cutoff, [**GXSpotFn**](_g_x_enum_8h.md#typedef-gxspotfn) spot\_func) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXInitSpecularDir**](#function-gxinitspeculardir) ([**GXLightObj**](_g_x_struct_8h.md#typedef-gxlightobj) \* lt\_obj, [**f32**](types_8h.md#typedef-f32) nx, [**f32**](types_8h.md#typedef-f32) ny, [**f32**](types_8h.md#typedef-f32) nz) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXInitSpecularDirHA**](#function-gxinitspeculardirha) ([**GXLightObj**](_g_x_struct_8h.md#typedef-gxlightobj) \* lt\_obj, [**f32**](types_8h.md#typedef-f32) nx, [**f32**](types_8h.md#typedef-f32) ny, [**f32**](types_8h.md#typedef-f32) nz, [**f32**](types_8h.md#typedef-f32) hx, [**f32**](types_8h.md#typedef-f32) hy, [**f32**](types_8h.md#typedef-f32) hz) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXLoadLightObjImm**](#function-gxloadlightobjimm) ([**GXLightObj**](_g_x_struct_8h.md#typedef-gxlightobj) \* lt\_obj, [**GXLightID**](_g_x_enum_8h.md#typedef-gxlightid) light) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXLoadLightObjIndx**](#function-gxloadlightobjindx) ([**u32**](types_8h.md#typedef-u32) lt\_obj\_indx, [**GXLightID**](_g_x_enum_8h.md#typedef-gxlightid) light) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetChanAmbColor**](#function-gxsetchanambcolor) ([**GXChannelID**](_g_x_enum_8h.md#typedef-gxchannelid) chan, [**GXColor**](_g_x_struct_8h.md#typedef-gxcolor) amb\_color) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetChanCtrl**](#function-gxsetchanctrl) ([**GXChannelID**](_g_x_enum_8h.md#typedef-gxchannelid) chan, [**GXBool**](_g_x_enum_8h.md#typedef-gxbool) enable, [**GXColorSrc**](_g_x_enum_8h.md#typedef-gxcolorsrc) amb\_src, [**GXColorSrc**](_g_x_enum_8h.md#typedef-gxcolorsrc) mat\_src, [**u32**](types_8h.md#typedef-u32) light\_mask, [**GXDiffuseFn**](_g_x_enum_8h.md#typedef-gxdiffusefn) diff\_fn, [**GXAttnFn**](_g_x_enum_8h.md#typedef-gxattnfn) attn\_fn) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetChanMatColor**](#function-gxsetchanmatcolor) ([**GXChannelID**](_g_x_enum_8h.md#typedef-gxchannelid) chan, [**GXColor**](_g_x_struct_8h.md#typedef-gxcolor) mat\_color) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetNumChans**](#function-gxsetnumchans) ([**u8**](types_8h.md#typedef-u8) nChans) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**WRITE\_SOME\_LIGHT\_REG1**](_g_x_light_8c.md#define-write_some_light_reg1) (val, addr) `[**GX\_WRITE\_U32**](_g_x_vert_8h.md#define-gx_write_u32) (val)`<br> |
| define  | [**WRITE\_SOME\_LIGHT\_REG2**](_g_x_light_8c.md#define-write_some_light_reg2) (val, addr) `[**GX\_WRITE\_F32**](_g_x_vert_8h.md#define-gx_write_f32) (val)`<br> |

## Public Functions Documentation




### function GXGetLightAttnA 

```C++
void GXGetLightAttnA (
    GXLightObj * lt_obj,
    f32 * a0,
    f32 * a1,
    f32 * a2
) 
```




<hr>



### function GXGetLightAttnK 

```C++
void GXGetLightAttnK (
    GXLightObj * lt_obj,
    f32 * k0,
    f32 * k1,
    f32 * k2
) 
```




<hr>



### function GXGetLightColor 

```C++
void GXGetLightColor (
    GXLightObj * lt_obj,
    GXColor * color
) 
```




<hr>



### function GXGetLightDir 

```C++
void GXGetLightDir (
    GXLightObj * lt_obj,
    f32 * nx,
    f32 * ny,
    f32 * nz
) 
```




<hr>



### function GXGetLightPos 

```C++
void GXGetLightPos (
    GXLightObj * lt_obj,
    f32 * x,
    f32 * y,
    f32 * z
) 
```




<hr>



### function GXInitLightAttn 

```C++
void GXInitLightAttn (
    GXLightObj * lt_obj,
    f32 a0,
    f32 a1,
    f32 a2,
    f32 k0,
    f32 k1,
    f32 k2
) 
```




<hr>



### function GXInitLightAttnA 

```C++
void GXInitLightAttnA (
    GXLightObj * lt_obj,
    f32 a0,
    f32 a1,
    f32 a2
) 
```




<hr>



### function GXInitLightAttnK 

```C++
void GXInitLightAttnK (
    GXLightObj * lt_obj,
    f32 k0,
    f32 k1,
    f32 k2
) 
```




<hr>



### function GXInitLightColor 

```C++
void GXInitLightColor (
    GXLightObj * lt_obj,
    GXColor color
) 
```




<hr>



### function GXInitLightDir 

```C++
void GXInitLightDir (
    GXLightObj * lt_obj,
    f32 nx,
    f32 ny,
    f32 nz
) 
```




<hr>



### function GXInitLightDistAttn 

```C++
void GXInitLightDistAttn (
    GXLightObj * lt_obj,
    f32 ref_dist,
    f32 ref_br,
    GXDistAttnFn dist_func
) 
```




<hr>



### function GXInitLightPos 

```C++
void GXInitLightPos (
    GXLightObj * lt_obj,
    f32 x,
    f32 y,
    f32 z
) 
```




<hr>



### function GXInitLightSpot 

```C++
void GXInitLightSpot (
    GXLightObj * lt_obj,
    f32 cutoff,
    GXSpotFn spot_func
) 
```




<hr>



### function GXInitSpecularDir 

```C++
void GXInitSpecularDir (
    GXLightObj * lt_obj,
    f32 nx,
    f32 ny,
    f32 nz
) 
```




<hr>



### function GXInitSpecularDirHA 

```C++
void GXInitSpecularDirHA (
    GXLightObj * lt_obj,
    f32 nx,
    f32 ny,
    f32 nz,
    f32 hx,
    f32 hy,
    f32 hz
) 
```




<hr>



### function GXLoadLightObjImm 

```C++
void GXLoadLightObjImm (
    GXLightObj * lt_obj,
    GXLightID light
) 
```




<hr>



### function GXLoadLightObjIndx 

```C++
void GXLoadLightObjIndx (
    u32 lt_obj_indx,
    GXLightID light
) 
```




<hr>



### function GXSetChanAmbColor 

```C++
void GXSetChanAmbColor (
    GXChannelID chan,
    GXColor amb_color
) 
```




<hr>



### function GXSetChanCtrl 

```C++
void GXSetChanCtrl (
    GXChannelID chan,
    GXBool enable,
    GXColorSrc amb_src,
    GXColorSrc mat_src,
    u32 light_mask,
    GXDiffuseFn diff_fn,
    GXAttnFn attn_fn
) 
```




<hr>



### function GXSetChanMatColor 

```C++
void GXSetChanMatColor (
    GXChannelID chan,
    GXColor mat_color
) 
```




<hr>



### function GXSetNumChans 

```C++
void GXSetNumChans (
    u8 nChans
) 
```




<hr>
## Macro Definition Documentation





### define WRITE\_SOME\_LIGHT\_REG1 

```C++
#define WRITE_SOME_LIGHT_REG1 (
    val,
    addr
) `GX_WRITE_U32 (val)`
```




<hr>



### define WRITE\_SOME\_LIGHT\_REG2 

```C++
#define WRITE_SOME_LIGHT_REG2 (
    val,
    addr
) `GX_WRITE_F32 (val)`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/gx/GXLight.c`

