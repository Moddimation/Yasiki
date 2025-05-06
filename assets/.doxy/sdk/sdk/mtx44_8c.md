

# File mtx44.c



[**FileList**](files.md) **>** [**dolphin**](dir_8daa6a5f7f30f79e111d6992c13d512c.md) **>** [**mtx**](dir_733f8da2b5f5697defdd7b5830b0b7b3.md) **>** [**mtx44.c**](mtx44_8c.md)

[Go to the source code of this file](mtx44_8c_source.md)



* `#include <dolphin/mtx.h>`
* `#include <cmath>`
* `#include <dolphin.h>`





































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
The documentation for this class was generated from the following file `SDK/src/dolphin/mtx/mtx44.c`

