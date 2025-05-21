

# File mtx44.c



[**FileList**](files.md) **>** [**dolphin**](dir_5daac82a3cf194997369e9388ff34711.md) **>** [**mtx**](dir_3df7d3ebe925e50757ee36b8bed3d4e2.md) **>** [**mtx44.c**](mtx44_8c.md)

[Go to the source code of this file](mtx44_8c_source.md)



* `#include <dolphin/mtx.h>`
* `#include <cmath>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MTXFrustum**](#function-mtxfrustum) ([**Mtx**](mtx_8h.md#typedef-mtx) m, [**f32**](types_8h.md#typedef-f32) t, [**f32**](types_8h.md#typedef-f32) b, [**f32**](types_8h.md#typedef-f32) l, [**f32**](types_8h.md#typedef-f32) r, [**f32**](types_8h.md#typedef-f32) n, [**f32**](types_8h.md#typedef-f32) f) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MTXOrtho**](#function-mtxortho) ([**Mtx**](mtx_8h.md#typedef-mtx) m, [**f32**](types_8h.md#typedef-f32) t, [**f32**](types_8h.md#typedef-f32) b, [**f32**](types_8h.md#typedef-f32) l, [**f32**](types_8h.md#typedef-f32) r, [**f32**](types_8h.md#typedef-f32) n, [**f32**](types_8h.md#typedef-f32) f) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MTXPerspective**](#function-mtxperspective) ([**Mtx**](mtx_8h.md#typedef-mtx) m, [**f32**](types_8h.md#typedef-f32) fovY, [**f32**](types_8h.md#typedef-f32) aspect, [**f32**](types_8h.md#typedef-f32) n, [**f32**](types_8h.md#typedef-f32) f) <br> |




























## Public Functions Documentation




### function MTXFrustum 

```C++
void MTXFrustum (
    Mtx m,
    f32 t,
    f32 b,
    f32 l,
    f32 r,
    f32 n,
    f32 f
) 
```




<hr>



### function MTXOrtho 

```C++
void MTXOrtho (
    Mtx m,
    f32 t,
    f32 b,
    f32 l,
    f32 r,
    f32 n,
    f32 f
) 
```




<hr>



### function MTXPerspective 

```C++
void MTXPerspective (
    Mtx m,
    f32 fovY,
    f32 aspect,
    f32 n,
    f32 f
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `DolphinSDK/src/dolphin/mtx/mtx44.c`

