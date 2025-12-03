

# File mtx44.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**mtx**](dir_26b6e6c4cda21e7491fcc30d526d19d0.md) **>** [**mtx44.c**](mtx44_8c.md)

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
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/mtx/mtx44.c`

