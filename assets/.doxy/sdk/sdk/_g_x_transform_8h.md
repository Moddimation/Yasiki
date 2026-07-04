

# File GXTransform.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**gx**](dir_7aad653e595702d688ea3e342b8a405d.md) **>** [**GXTransform.h**](_g_x_transform_8h.md)

[Go to the source code of this file](_g_x_transform_8h_source.md)



* `#include <dolphin/gx/GXEnum.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
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
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetScissorBoxOffset**](#function-gxsetscissorboxoffset) ([**s32**](types_8h.md#typedef-s32) x\_off, [**s32**](types_8h.md#typedef-s32) y\_off) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetViewport**](#function-gxsetviewport) ([**f32**](types_8h.md#typedef-f32) left, [**f32**](types_8h.md#typedef-f32) top, [**f32**](types_8h.md#typedef-f32) wd, [**f32**](types_8h.md#typedef-f32) ht, [**f32**](types_8h.md#typedef-f32) nearz, [**f32**](types_8h.md#typedef-f32) farz) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetViewportJitter**](#function-gxsetviewportjitter) ([**f32**](types_8h.md#typedef-f32) left, [**f32**](types_8h.md#typedef-f32) top, [**f32**](types_8h.md#typedef-f32) wd, [**f32**](types_8h.md#typedef-f32) ht, [**f32**](types_8h.md#typedef-f32) nearz, [**f32**](types_8h.md#typedef-f32) farz, [**u32**](types_8h.md#typedef-u32) field) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**GX\_PROJECTION\_SZ**](_g_x_transform_8h.md#define-gx_projection_sz)  `7`<br> |
| define  | [**GX\_VIEWPORT\_SZ**](_g_x_transform_8h.md#define-gx_viewport_sz)  `6`<br> |

## Public Functions Documentation




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
## Macro Definition Documentation





### define GX\_PROJECTION\_SZ 

```C++
#define GX_PROJECTION_SZ `7`
```




<hr>



### define GX\_VIEWPORT\_SZ 

```C++
#define GX_VIEWPORT_SZ `6`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/gx/GXTransform.h`

