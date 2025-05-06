

# File psmtx.c



[**FileList**](files.md) **>** [**dolphin**](dir_8daa6a5f7f30f79e111d6992c13d512c.md) **>** [**mtx**](dir_733f8da2b5f5697defdd7b5830b0b7b3.md) **>** [**psmtx.c**](psmtx_8c.md)

[Go to the source code of this file](psmtx_8c_source.md)



* `#include <dolphin/mtx.h>`
* `#include <dolphin.h>`
* `#include "fake_tgmath.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PSMTXMultS16VecArray**](#function-psmtxmults16vecarray) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Mtx44**](mtx_8h.md#typedef-mtx44) \* m, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**S16Vec**](struct_s16_vec.md) \* srcBase, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Vec**](struct_vec.md) \* dstBase, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) count) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PSMTXROMultS16VecArray**](#function-psmtxromults16vecarray) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**ROMtx**](mtx_8h.md#typedef-romtx) \* m, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**S16Vec**](struct_s16_vec.md) \* srcBase, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Vec**](struct_vec.md) \* dstBase, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) count) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PSMTXROMultVecArray**](#function-psmtxromultvecarray) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**ROMtx**](mtx_8h.md#typedef-romtx) \* m, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Vec**](struct_vec.md) \* srcBase, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Vec**](struct_vec.md) \* dstBase, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) count) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PSMTXROSkin2VecArray**](#function-psmtxroskin2vecarray) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**ROMtx**](mtx_8h.md#typedef-romtx) \* m0, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**ROMtx**](mtx_8h.md#typedef-romtx) \* m1, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**f32**](types_8h.md#typedef-f32) \* wtBase, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Vec**](struct_vec.md) \* srcBase, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Vec**](struct_vec.md) \* dstBase, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) count) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PSMTXReorder**](#function-psmtxreorder) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Mtx**](mtx_8h.md#typedef-mtx) src, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**ROMtx**](mtx_8h.md#typedef-romtx) dest) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**qr0**](psmtx_8c.md#define-qr0)  `0`<br> |
| define  | [**qr1**](psmtx_8c.md#define-qr1)  `1`<br> |
| define  | [**qr6**](psmtx_8c.md#define-qr6)  `6`<br> |

## Public Functions Documentation




### function PSMTXMultS16VecArray 

```C++
asm  void PSMTXMultS16VecArray (
    register  Mtx44 * m,
    register  S16Vec * srcBase,
    register  Vec * dstBase,
    register  u32 count
) 
```




<hr>



### function PSMTXROMultS16VecArray 

```C++
asm  void PSMTXROMultS16VecArray (
    register  ROMtx * m,
    register  S16Vec * srcBase,
    register  Vec * dstBase,
    register  u32 count
) 
```




<hr>



### function PSMTXROMultVecArray 

```C++
asm  void PSMTXROMultVecArray (
    register  ROMtx * m,
    register  Vec * srcBase,
    register  Vec * dstBase,
    register  u32 count
) 
```




<hr>



### function PSMTXROSkin2VecArray 

```C++
asm  void PSMTXROSkin2VecArray (
    register  ROMtx * m0,
    register  ROMtx * m1,
    register  f32 * wtBase,
    register  Vec * srcBase,
    register  Vec * dstBase,
    register  u32 count
) 
```




<hr>



### function PSMTXReorder 

```C++
asm  void PSMTXReorder (
    register  Mtx src,
    register  ROMtx dest
) 
```




<hr>
## Macro Definition Documentation





### define qr0 

```C++
#define qr0 `0`
```




<hr>



### define qr1 

```C++
#define qr1 `1`
```




<hr>



### define qr6 

```C++
#define qr6 `6`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `SDK/src/dolphin/mtx/psmtx.c`

