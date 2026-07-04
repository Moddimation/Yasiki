

# File GXCpu2Efb.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**gx**](dir_7aad653e595702d688ea3e342b8a405d.md) **>** [**GXCpu2Efb.h**](_g_x_cpu2_efb_8h.md)

[Go to the source code of this file](_g_x_cpu2_efb_8h_source.md)



* `#include <dolphin/gx/GXEnum.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**u32**](types_8h.md#typedef-u32) | [**GXCompressZ16**](#function-gxcompressz16) ([**u32**](types_8h.md#typedef-u32) z24, [**GXZFmt16**](_g_x_enum_8h.md#typedef-gxzfmt16) zfmt) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**GXDecompressZ16**](#function-gxdecompressz16) ([**u32**](types_8h.md#typedef-u32) z16, [**GXZFmt16**](_g_x_enum_8h.md#typedef-gxzfmt16) zfmt) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXPeekARGB**](#function-gxpeekargb) ([**u16**](types_8h.md#typedef-u16) x, [**u16**](types_8h.md#typedef-u16) y, [**u32**](types_8h.md#typedef-u32) \* color) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXPeekZ**](#function-gxpeekz) ([**u16**](types_8h.md#typedef-u16) x, [**u16**](types_8h.md#typedef-u16) y, [**u32**](types_8h.md#typedef-u32) \* z) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXPokeARGB**](#function-gxpokeargb) ([**u16**](types_8h.md#typedef-u16) x, [**u16**](types_8h.md#typedef-u16) y, [**u32**](types_8h.md#typedef-u32) color) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXPokeAlphaMode**](#function-gxpokealphamode) ([**GXCompare**](_g_x_enum_8h.md#typedef-gxcompare) func, [**u8**](types_8h.md#typedef-u8) threshold) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXPokeAlphaRead**](#function-gxpokealpharead) ([**GXAlphaReadMode**](_g_x_enum_8h.md#typedef-gxalphareadmode) mode) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXPokeAlphaUpdate**](#function-gxpokealphaupdate) ([**GXBool**](_g_x_enum_8h.md#typedef-gxbool) update\_enable) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXPokeBlendMode**](#function-gxpokeblendmode) ([**GXBlendMode**](_g_x_enum_8h.md#typedef-gxblendmode) type, [**GXBlendFactor**](_g_x_enum_8h.md#typedef-gxblendfactor) src\_factor, [**GXBlendFactor**](_g_x_enum_8h.md#typedef-gxblendfactor) dst\_factor, [**GXLogicOp**](_g_x_enum_8h.md#typedef-gxlogicop) op) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXPokeColorUpdate**](#function-gxpokecolorupdate) ([**GXBool**](_g_x_enum_8h.md#typedef-gxbool) update\_enable) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXPokeDither**](#function-gxpokedither) ([**GXBool**](_g_x_enum_8h.md#typedef-gxbool) dither) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXPokeDstAlpha**](#function-gxpokedstalpha) ([**GXBool**](_g_x_enum_8h.md#typedef-gxbool) enable, [**u8**](types_8h.md#typedef-u8) alpha) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXPokeZ**](#function-gxpokez) ([**u16**](types_8h.md#typedef-u16) x, [**u16**](types_8h.md#typedef-u16) y, [**u32**](types_8h.md#typedef-u32) z) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXPokeZMode**](#function-gxpokezmode) ([**GXBool**](_g_x_enum_8h.md#typedef-gxbool) compare\_enable, [**GXCompare**](_g_x_enum_8h.md#typedef-gxcompare) func, [**GXBool**](_g_x_enum_8h.md#typedef-gxbool) update\_enable) <br> |




























## Public Functions Documentation




### function GXCompressZ16 

```C++
u32 GXCompressZ16 (
    u32 z24,
    GXZFmt16 zfmt
) 
```




<hr>



### function GXDecompressZ16 

```C++
u32 GXDecompressZ16 (
    u32 z16,
    GXZFmt16 zfmt
) 
```




<hr>



### function GXPeekARGB 

```C++
void GXPeekARGB (
    u16 x,
    u16 y,
    u32 * color
) 
```




<hr>



### function GXPeekZ 

```C++
void GXPeekZ (
    u16 x,
    u16 y,
    u32 * z
) 
```




<hr>



### function GXPokeARGB 

```C++
void GXPokeARGB (
    u16 x,
    u16 y,
    u32 color
) 
```




<hr>



### function GXPokeAlphaMode 

```C++
void GXPokeAlphaMode (
    GXCompare func,
    u8 threshold
) 
```




<hr>



### function GXPokeAlphaRead 

```C++
void GXPokeAlphaRead (
    GXAlphaReadMode mode
) 
```




<hr>



### function GXPokeAlphaUpdate 

```C++
void GXPokeAlphaUpdate (
    GXBool update_enable
) 
```




<hr>



### function GXPokeBlendMode 

```C++
void GXPokeBlendMode (
    GXBlendMode type,
    GXBlendFactor src_factor,
    GXBlendFactor dst_factor,
    GXLogicOp op
) 
```




<hr>



### function GXPokeColorUpdate 

```C++
void GXPokeColorUpdate (
    GXBool update_enable
) 
```




<hr>



### function GXPokeDither 

```C++
void GXPokeDither (
    GXBool dither
) 
```




<hr>



### function GXPokeDstAlpha 

```C++
void GXPokeDstAlpha (
    GXBool enable,
    u8 alpha
) 
```




<hr>



### function GXPokeZ 

```C++
void GXPokeZ (
    u16 x,
    u16 y,
    u32 z
) 
```




<hr>



### function GXPokeZMode 

```C++
void GXPokeZMode (
    GXBool compare_enable,
    GXCompare func,
    GXBool update_enable
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/gx/GXCpu2Efb.h`

