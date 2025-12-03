

# File GXVert.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**gx**](dir_7aad653e595702d688ea3e342b8a405d.md) **>** [**GXVert.h**](_g_x_vert_8h.md)

[Go to the source code of this file](_g_x_vert_8h_source.md)



* `#include <types.h>`

















## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**union**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**uPPCWGPipe**](unionu_p_p_c_w_g_pipe.md) | [**PPCWGPipe**](#typedef-ppcwgpipe)  <br> |
| union  | [**uPPCWGPipe**](#union-uppcwgpipe)  <br> |




## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**PPCWGPipe**](_g_x_vert_8h.md#typedef-ppcwgpipe) | [**GXWGFifo**](#variable-gxwgfifo)  <br> |











































## Macros

| Type | Name |
| ---: | :--- |
| define  | [**FUNC\_1PARAM**](_g_x_vert_8h.md#define-func_1param) (name, T) `/* multi line expression */`<br> |
| define  | [**FUNC\_2PARAM**](_g_x_vert_8h.md#define-func_2param) (name, T) `/* multi line expression */`<br> |
| define  | [**FUNC\_3PARAM**](_g_x_vert_8h.md#define-func_3param) (name, T) `/* multi line expression */`<br> |
| define  | [**FUNC\_4PARAM**](_g_x_vert_8h.md#define-func_4param) (name, T) `/* multi line expression */`<br> |
| define  | [**FUNC\_INDEX16**](_g_x_vert_8h.md#define-func_index16) (name) `/* multi line expression */`<br> |
| define  | [**FUNC\_INDEX8**](_g_x_vert_8h.md#define-func_index8) (name) `/* multi line expression */`<br> |
| define  | [**GXFIFO\_ADDR**](_g_x_vert_8h.md#define-gxfifo_addr)  `0xCC008000`<br> |
| define  | [**GX\_WRITE\_F32**](_g_x_vert_8h.md#define-gx_write_f32) (f) `[**GXWGFifo.f32**](types_8h.md#typedef-f32) = ([**f32**](types_8h.md#typedef-f32))(f);`<br> |
| define  | [**GX\_WRITE\_U16**](_g_x_vert_8h.md#define-gx_write_u16) (us) `[**GXWGFifo.u16**](types_8h.md#typedef-u16) = ([**u16**](types_8h.md#typedef-u16))([**us**](_c_a_r_d_private_8h.md#define-card_max_mount_step))`<br> |
| define  | [**GX\_WRITE\_U32**](_g_x_vert_8h.md#define-gx_write_u32) (ui) `[**GXWGFifo.u32**](types_8h.md#typedef-u32) = ([**u32**](types_8h.md#typedef-u32))([**ui**](_c_a_r_d_private_8h.md#define-card_max_mount_step))`<br> |
| define  | [**GX\_WRITE\_U8**](_g_x_vert_8h.md#define-gx_write_u8) (ub) `[**GXWGFifo.u8**](types_8h.md#typedef-u8) = ([**u8**](types_8h.md#typedef-u8))([**ub**](_c_a_r_d_private_8h.md#define-card_max_mount_step))`<br> |

## Public Types Documentation




### typedef PPCWGPipe 

```C++
typedef union uPPCWGPipe PPCWGPipe;
```




<hr>



### union uPPCWGPipe 

```C++

```




<hr>
## Public Attributes Documentation




### variable GXWGFifo 

```C++
volatile PPCWGPipe GXWGFifo;
```




<hr>
## Macro Definition Documentation





### define FUNC\_1PARAM 

```C++
#define FUNC_1PARAM (
    name,
    T
) `/* multi line expression */`
```




<hr>



### define FUNC\_2PARAM 

```C++
#define FUNC_2PARAM (
    name,
    T
) `/* multi line expression */`
```




<hr>



### define FUNC\_3PARAM 

```C++
#define FUNC_3PARAM (
    name,
    T
) `/* multi line expression */`
```




<hr>



### define FUNC\_4PARAM 

```C++
#define FUNC_4PARAM (
    name,
    T
) `/* multi line expression */`
```




<hr>



### define FUNC\_INDEX16 

```C++
#define FUNC_INDEX16 (
    name
) `/* multi line expression */`
```




<hr>



### define FUNC\_INDEX8 

```C++
#define FUNC_INDEX8 (
    name
) `/* multi line expression */`
```




<hr>



### define GXFIFO\_ADDR 

```C++
#define GXFIFO_ADDR `0xCC008000`
```




<hr>



### define GX\_WRITE\_F32 

```C++
#define GX_WRITE_F32 (
    f
) `GXWGFifo.f32 = ( f32 )(f);`
```




<hr>



### define GX\_WRITE\_U16 

```C++
#define GX_WRITE_U16 (
    us
) `GXWGFifo.u16 = ( u16 )( us )`
```




<hr>



### define GX\_WRITE\_U32 

```C++
#define GX_WRITE_U32 (
    ui
) `GXWGFifo.u32 = ( u32 )( ui )`
```




<hr>



### define GX\_WRITE\_U8 

```C++
#define GX_WRITE_U8 (
    ub
) `GXWGFifo.u8 = ( u8 )( ub )`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/gx/GXVert.h`

