

# File GXTransform.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**gx**](dir_b80c028b3e970eff7f2a07684ffcf104.md) **>** [**GXTransform.c**](_g_x_transform_8c.md)

[Go to the source code of this file](_g_x_transform_8c_source.md)



* `#include <dolphin/gx.h>`
* `#include <dolphin/mtx.h>`
* `#include <dolphin/os.h>`
* `#include <macros.h>`
* `#include "GXPrivate.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXGetProjectionv**](#function-gxgetprojectionv) ([**f32**](types_8h.md#typedef-f32) \* ptr) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXGetScissor**](#function-gxgetscissor) ([**u32**](types_8h.md#typedef-u32) \* left, [**u32**](types_8h.md#typedef-u32) \* top, [**u32**](types_8h.md#typedef-u32) \* wd, [**u32**](types_8h.md#typedef-u32) \* ht) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXGetViewportv**](#function-gxgetviewportv) ([**f32**](types_8h.md#typedef-f32) \* vp) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXLoadNrmMtxImm**](#function-gxloadnrmmtximm) ([**f32**](types_8h.md#typedef-f32) mtx, [**u32**](types_8h.md#typedef-u32) id) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXLoadNrmMtxImm3x3**](#function-gxloadnrmmtximm3x3) ([**f32**](types_8h.md#typedef-f32) mtx, [**u32**](types_8h.md#typedef-u32) id) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXLoadNrmMtxIndx3x3**](#function-gxloadnrmmtxindx3x3) ([**u16**](types_8h.md#typedef-u16) mtx\_indx, [**u32**](types_8h.md#typedef-u32) id) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXLoadPosMtxImm**](#function-gxloadposmtximm) ([**f32**](types_8h.md#typedef-f32) mtx, [**u32**](types_8h.md#typedef-u32) id) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXLoadPosMtxIndx**](#function-gxloadposmtxindx) ([**u16**](types_8h.md#typedef-u16) mtx\_indx, [**u32**](types_8h.md#typedef-u32) id) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXLoadTexMtxImm**](#function-gxloadtexmtximm) ([**f32**](types_8h.md#typedef-f32) mtx, [**u32**](types_8h.md#typedef-u32) id, [**GXTexMtxType**](_g_x_enum_8h.md#typedef-gxtexmtxtype) type) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXLoadTexMtxIndx**](#function-gxloadtexmtxindx) ([**u16**](types_8h.md#typedef-u16) mtx\_indx, [**u32**](types_8h.md#typedef-u32) id, [**GXTexMtxType**](_g_x_enum_8h.md#typedef-gxtexmtxtype) type) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXProject**](#function-gxproject) ([**f32**](types_8h.md#typedef-f32) x, [**f32**](types_8h.md#typedef-f32) y, [**f32**](types_8h.md#typedef-f32) z, [**f32**](types_8h.md#typedef-f32) mtx, [**f32**](types_8h.md#typedef-f32) \* pm, [**f32**](types_8h.md#typedef-f32) \* vp, [**f32**](types_8h.md#typedef-f32) \* sx, [**f32**](types_8h.md#typedef-f32) \* sy, [**f32**](types_8h.md#typedef-f32) \* sz) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetClipMode**](#function-gxsetclipmode) ([**GXClipMode**](_g_x_enum_8h.md#typedef-gxclipmode) mode) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetCurrentMtx**](#function-gxsetcurrentmtx) ([**u32**](types_8h.md#typedef-u32) id) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetProjection**](#function-gxsetprojection) ([**f32**](types_8h.md#typedef-f32) mtx, [**GXProjectionType**](_g_x_enum_8h.md#typedef-gxprojectiontype) type) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetProjectionv**](#function-gxsetprojectionv) ([**f32**](types_8h.md#typedef-f32) \* ptr) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetScissor**](#function-gxsetscissor) ([**u32**](types_8h.md#typedef-u32) left, [**u32**](types_8h.md#typedef-u32) top, [**u32**](types_8h.md#typedef-u32) wd, [**u32**](types_8h.md#typedef-u32) ht) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetScissorBoxOffset**](#function-gxsetscissorboxoffset) ([**s32**](types_8h.md#typedef-s32) x\_off, [**s32**](types_8h.md#typedef-s32) y\_off) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetViewport**](#function-gxsetviewport) ([**f32**](types_8h.md#typedef-f32) left, [**f32**](types_8h.md#typedef-f32) top, [**f32**](types_8h.md#typedef-f32) wd, [**f32**](types_8h.md#typedef-f32) ht, [**f32**](types_8h.md#typedef-f32) nearz, [**f32**](types_8h.md#typedef-f32) farz) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetViewportJitter**](#function-gxsetviewportjitter) ([**f32**](types_8h.md#typedef-f32) left, [**f32**](types_8h.md#typedef-f32) top, [**f32**](types_8h.md#typedef-f32) wd, [**f32**](types_8h.md#typedef-f32) ht, [**f32**](types_8h.md#typedef-f32) nearz, [**f32**](types_8h.md#typedef-f32) farz, [**u32**](types_8h.md#typedef-u32) field) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXSetMatrixIndex**](#function-__gxsetmatrixindex) ([**GXAttr**](_g_x_enum_8h.md#typedef-gxattr) matIdxAttr) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**WriteMTXPS3x3**](#function-writemtxps3x3) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**f32**](types_8h.md#typedef-f32) mtx, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**f32**](types_8h.md#typedef-f32) \* dest) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**WriteMTXPS3x3from3x4**](#function-writemtxps3x3from3x4) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**f32**](types_8h.md#typedef-f32) mtx, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**f32**](types_8h.md#typedef-f32) \* dest) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**WriteMTXPS4x2**](#function-writemtxps4x2) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**f32**](types_8h.md#typedef-f32) mtx, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**f32**](types_8h.md#typedef-f32) \* dest) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**WriteMTXPS4x3**](#function-writemtxps4x3) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**f32**](types_8h.md#typedef-f32) mtx, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**f32**](types_8h.md#typedef-f32) \* dest) <br> |

























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**GX\_WRITE\_MTX\_ELEM**](_g_x_transform_8c.md#define-gx_write_mtx_elem) (addr, value) `/* multi line expression */`<br> |
| define  | [**SET\_REG\_FIELD\_**](_g_x_transform_8c.md#define-set_reg_field_) (line, reg, size, shift, val) `/* multi line expression */`<br> |
| define  | [**qr0**](_g_x_transform_8c.md#define-qr0)  `0`<br> |

## Public Functions Documentation




### function GXGetProjectionv 

```C++
void GXGetProjectionv (
    f32 * ptr
) 
```




<hr>



### function GXGetScissor 

```C++
void GXGetScissor (
    u32 * left,
    u32 * top,
    u32 * wd,
    u32 * ht
) 
```




<hr>



### function GXGetViewportv 

```C++
void GXGetViewportv (
    f32 * vp
) 
```




<hr>



### function GXLoadNrmMtxImm 

```C++
void GXLoadNrmMtxImm (
    f32 mtx,
    u32 id
) 
```




<hr>



### function GXLoadNrmMtxImm3x3 

```C++
void GXLoadNrmMtxImm3x3 (
    f32 mtx,
    u32 id
) 
```




<hr>



### function GXLoadNrmMtxIndx3x3 

```C++
void GXLoadNrmMtxIndx3x3 (
    u16 mtx_indx,
    u32 id
) 
```




<hr>



### function GXLoadPosMtxImm 

```C++
void GXLoadPosMtxImm (
    f32 mtx,
    u32 id
) 
```




<hr>



### function GXLoadPosMtxIndx 

```C++
void GXLoadPosMtxIndx (
    u16 mtx_indx,
    u32 id
) 
```




<hr>



### function GXLoadTexMtxImm 

```C++
void GXLoadTexMtxImm (
    f32 mtx,
    u32 id,
    GXTexMtxType type
) 
```




<hr>



### function GXLoadTexMtxIndx 

```C++
void GXLoadTexMtxIndx (
    u16 mtx_indx,
    u32 id,
    GXTexMtxType type
) 
```




<hr>



### function GXProject 

```C++
void GXProject (
    f32 x,
    f32 y,
    f32 z,
    f32 mtx,
    f32 * pm,
    f32 * vp,
    f32 * sx,
    f32 * sy,
    f32 * sz
) 
```




<hr>



### function GXSetClipMode 

```C++
void GXSetClipMode (
    GXClipMode mode
) 
```




<hr>



### function GXSetCurrentMtx 

```C++
void GXSetCurrentMtx (
    u32 id
) 
```




<hr>



### function GXSetProjection 

```C++
void GXSetProjection (
    f32 mtx,
    GXProjectionType type
) 
```




<hr>



### function GXSetProjectionv 

```C++
void GXSetProjectionv (
    f32 * ptr
) 
```




<hr>



### function GXSetScissor 

```C++
void GXSetScissor (
    u32 left,
    u32 top,
    u32 wd,
    u32 ht
) 
```




<hr>



### function GXSetScissorBoxOffset 

```C++
void GXSetScissorBoxOffset (
    s32 x_off,
    s32 y_off
) 
```




<hr>



### function GXSetViewport 

```C++
void GXSetViewport (
    f32 left,
    f32 top,
    f32 wd,
    f32 ht,
    f32 nearz,
    f32 farz
) 
```




<hr>



### function GXSetViewportJitter 

```C++
void GXSetViewportJitter (
    f32 left,
    f32 top,
    f32 wd,
    f32 ht,
    f32 nearz,
    f32 farz,
    u32 field
) 
```




<hr>



### function \_\_GXSetMatrixIndex 

```C++
void __GXSetMatrixIndex (
    GXAttr matIdxAttr
) 
```




<hr>
## Public Static Functions Documentation




### function WriteMTXPS3x3 

```C++
static asm  void WriteMTXPS3x3 (
    register  f32 mtx,
    register  volatile  f32 * dest
) 
```




<hr>



### function WriteMTXPS3x3from3x4 

```C++
static asm  void WriteMTXPS3x3from3x4 (
    register  f32 mtx,
    register  volatile  f32 * dest
) 
```




<hr>



### function WriteMTXPS4x2 

```C++
static asm  void WriteMTXPS4x2 (
    register  f32 mtx,
    register  volatile  f32 * dest
) 
```




<hr>



### function WriteMTXPS4x3 

```C++
static asm  void WriteMTXPS4x3 (
    register  f32 mtx,
    register  volatile  f32 * dest
) 
```




<hr>
## Macro Definition Documentation





### define GX\_WRITE\_MTX\_ELEM 

```C++
#define GX_WRITE_MTX_ELEM (
    addr,
    value
) `/* multi line expression */`
```




<hr>



### define SET\_REG\_FIELD\_ 

```C++
#define SET_REG_FIELD_ (
    line,
    reg,
    size,
    shift,
    val
) `/* multi line expression */`
```




<hr>



### define qr0 

```C++
#define qr0 `0`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/gx/GXTransform.c`

