

# File GXGeometry.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**gx**](dir_b80c028b3e970eff7f2a07684ffcf104.md) **>** [**GXGeometry.c**](_g_x_geometry_8c.md)

[Go to the source code of this file](_g_x_geometry_8c_source.md)



* `#include <dolphin/gx.h>`
* `#include <dolphin/os.h>`
* `#include "GXPrivate.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXBegin**](#function-gxbegin) ([**GXPrimitive**](_g_x_enum_8h.md#typedef-gxprimitive) type, [**GXVtxFmt**](_g_x_enum_8h.md#typedef-gxvtxfmt) vtxfmt, [**u16**](types_8h.md#typedef-u16) nverts) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXEnableTexOffsets**](#function-gxenabletexoffsets) ([**GXTexCoordID**](_g_x_enum_8h.md#typedef-gxtexcoordid) coord, [**u8**](types_8h.md#typedef-u8) line\_enable, [**u8**](types_8h.md#typedef-u8) point\_enable) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXGetCullMode**](#function-gxgetcullmode) ([**GXCullMode**](_g_x_enum_8h.md#typedef-gxcullmode) \* mode) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXGetLineWidth**](#function-gxgetlinewidth) ([**u8**](types_8h.md#typedef-u8) \* width, [**GXTexOffset**](_g_x_enum_8h.md#typedef-gxtexoffset) \* texOffsets) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXGetPointSize**](#function-gxgetpointsize) ([**u8**](types_8h.md#typedef-u8) \* pointSize, [**GXTexOffset**](_g_x_enum_8h.md#typedef-gxtexoffset) \* texOffsets) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetCoPlanar**](#function-gxsetcoplanar) ([**GXBool**](_g_x_enum_8h.md#typedef-gxbool) enable) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetCullMode**](#function-gxsetcullmode) ([**GXCullMode**](_g_x_enum_8h.md#typedef-gxcullmode) mode) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetLineWidth**](#function-gxsetlinewidth) ([**u8**](types_8h.md#typedef-u8) width, [**GXTexOffset**](_g_x_enum_8h.md#typedef-gxtexoffset) texOffsets) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetPointSize**](#function-gxsetpointsize) ([**u8**](types_8h.md#typedef-u8) pointSize, [**GXTexOffset**](_g_x_enum_8h.md#typedef-gxtexoffset) texOffsets) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXSendFlushPrim**](#function-__gxsendflushprim) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXSetDirtyState**](#function-__gxsetdirtystate) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXSetGenMode**](#function-__gxsetgenmode) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |




























## Public Functions Documentation




### function GXBegin 

```C++
void GXBegin (
    GXPrimitive type,
    GXVtxFmt vtxfmt,
    u16 nverts
) 
```




<hr>



### function GXEnableTexOffsets 

```C++
void GXEnableTexOffsets (
    GXTexCoordID coord,
    u8 line_enable,
    u8 point_enable
) 
```




<hr>



### function GXGetCullMode 

```C++
void GXGetCullMode (
    GXCullMode * mode
) 
```




<hr>



### function GXGetLineWidth 

```C++
void GXGetLineWidth (
    u8 * width,
    GXTexOffset * texOffsets
) 
```




<hr>



### function GXGetPointSize 

```C++
void GXGetPointSize (
    u8 * pointSize,
    GXTexOffset * texOffsets
) 
```




<hr>



### function GXSetCoPlanar 

```C++
void GXSetCoPlanar (
    GXBool enable
) 
```




<hr>



### function GXSetCullMode 

```C++
void GXSetCullMode (
    GXCullMode mode
) 
```




<hr>



### function GXSetLineWidth 

```C++
void GXSetLineWidth (
    u8 width,
    GXTexOffset texOffsets
) 
```




<hr>



### function GXSetPointSize 

```C++
void GXSetPointSize (
    u8 pointSize,
    GXTexOffset texOffsets
) 
```




<hr>



### function \_\_GXSendFlushPrim 

```C++
void __GXSendFlushPrim (
    void
) 
```




<hr>



### function \_\_GXSetDirtyState 

```C++
void __GXSetDirtyState (
    void
) 
```




<hr>



### function \_\_GXSetGenMode 

```C++
void __GXSetGenMode (
    void
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/gx/GXGeometry.c`

