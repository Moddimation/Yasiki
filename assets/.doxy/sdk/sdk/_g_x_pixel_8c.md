

# File GXPixel.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**gx**](dir_b80c028b3e970eff7f2a07684ffcf104.md) **>** [**GXPixel.c**](_g_x_pixel_8c.md)

[Go to the source code of this file](_g_x_pixel_8c_source.md)



* `#include <dolphin/gx.h>`
* `#include <dolphin/os.h>`
* `#include <macros.h>`
* `#include <math.h>`
* `#include "GXPrivate.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXInitFogAdjTable**](#function-gxinitfogadjtable) ([**GXFogAdjTable**](_g_x_struct_8h.md#typedef-gxfogadjtable) \* table, [**u16**](types_8h.md#typedef-u16) width, [**f32**](types_8h.md#typedef-f32) projmtx) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetAlphaUpdate**](#function-gxsetalphaupdate) ([**GXBool**](_g_x_enum_8h.md#typedef-gxbool) update\_enable) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetBlendMode**](#function-gxsetblendmode) ([**GXBlendMode**](_g_x_enum_8h.md#typedef-gxblendmode) type, [**GXBlendFactor**](_g_x_enum_8h.md#typedef-gxblendfactor) src\_factor, [**GXBlendFactor**](_g_x_enum_8h.md#typedef-gxblendfactor) dst\_factor, [**GXLogicOp**](_g_x_enum_8h.md#typedef-gxlogicop) op) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetColorUpdate**](#function-gxsetcolorupdate) ([**GXBool**](_g_x_enum_8h.md#typedef-gxbool) update\_enable) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetDither**](#function-gxsetdither) ([**GXBool**](_g_x_enum_8h.md#typedef-gxbool) dither) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetDstAlpha**](#function-gxsetdstalpha) ([**GXBool**](_g_x_enum_8h.md#typedef-gxbool) enable, [**u8**](types_8h.md#typedef-u8) alpha) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetFieldMask**](#function-gxsetfieldmask) ([**GXBool**](_g_x_enum_8h.md#typedef-gxbool) odd\_mask, [**GXBool**](_g_x_enum_8h.md#typedef-gxbool) even\_mask) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetFieldMode**](#function-gxsetfieldmode) ([**GXBool**](_g_x_enum_8h.md#typedef-gxbool) field\_mode, [**GXBool**](_g_x_enum_8h.md#typedef-gxbool) half\_aspect\_ratio) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetFog**](#function-gxsetfog) ([**GXFogType**](_g_x_enum_8h.md#typedef-gxfogtype) type, [**f32**](types_8h.md#typedef-f32) startz, [**f32**](types_8h.md#typedef-f32) endz, [**f32**](types_8h.md#typedef-f32) nearz, [**f32**](types_8h.md#typedef-f32) farz, [**GXColor**](_g_x_struct_8h.md#typedef-gxcolor) color) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetFogRangeAdj**](#function-gxsetfograngeadj) ([**GXBool**](_g_x_enum_8h.md#typedef-gxbool) enable, [**u16**](types_8h.md#typedef-u16) center, [**GXFogAdjTable**](_g_x_struct_8h.md#typedef-gxfogadjtable) \* table) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetPixelFmt**](#function-gxsetpixelfmt) ([**GXPixelFmt**](_g_x_enum_8h.md#typedef-gxpixelfmt) pix\_fmt, [**GXZFmt16**](_g_x_enum_8h.md#typedef-gxzfmt16) z\_fmt) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetZCompLoc**](#function-gxsetzcomploc) ([**GXBool**](_g_x_enum_8h.md#typedef-gxbool) before\_tex) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetZMode**](#function-gxsetzmode) ([**GXBool**](_g_x_enum_8h.md#typedef-gxbool) compare\_enable, [**GXCompare**](_g_x_enum_8h.md#typedef-gxcompare) func, [**GXBool**](_g_x_enum_8h.md#typedef-gxbool) update\_enable) <br> |




























## Public Functions Documentation




### function GXInitFogAdjTable 

```C++
void GXInitFogAdjTable (
    GXFogAdjTable * table,
    u16 width,
    f32 projmtx
) 
```




<hr>



### function GXSetAlphaUpdate 

```C++
void GXSetAlphaUpdate (
    GXBool update_enable
) 
```




<hr>



### function GXSetBlendMode 

```C++
void GXSetBlendMode (
    GXBlendMode type,
    GXBlendFactor src_factor,
    GXBlendFactor dst_factor,
    GXLogicOp op
) 
```




<hr>



### function GXSetColorUpdate 

```C++
void GXSetColorUpdate (
    GXBool update_enable
) 
```




<hr>



### function GXSetDither 

```C++
void GXSetDither (
    GXBool dither
) 
```




<hr>



### function GXSetDstAlpha 

```C++
void GXSetDstAlpha (
    GXBool enable,
    u8 alpha
) 
```




<hr>



### function GXSetFieldMask 

```C++
void GXSetFieldMask (
    GXBool odd_mask,
    GXBool even_mask
) 
```




<hr>



### function GXSetFieldMode 

```C++
void GXSetFieldMode (
    GXBool field_mode,
    GXBool half_aspect_ratio
) 
```




<hr>



### function GXSetFog 

```C++
void GXSetFog (
    GXFogType type,
    f32 startz,
    f32 endz,
    f32 nearz,
    f32 farz,
    GXColor color
) 
```




<hr>



### function GXSetFogRangeAdj 

```C++
void GXSetFogRangeAdj (
    GXBool enable,
    u16 center,
    GXFogAdjTable * table
) 
```




<hr>



### function GXSetPixelFmt 

```C++
void GXSetPixelFmt (
    GXPixelFmt pix_fmt,
    GXZFmt16 z_fmt
) 
```




<hr>



### function GXSetZCompLoc 

```C++
void GXSetZCompLoc (
    GXBool before_tex
) 
```




<hr>



### function GXSetZMode 

```C++
void GXSetZMode (
    GXBool compare_enable,
    GXCompare func,
    GXBool update_enable
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/gx/GXPixel.c`

