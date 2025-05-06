

# File mtxvec.c



[**FileList**](files.md) **>** [**dolphin**](dir_8daa6a5f7f30f79e111d6992c13d512c.md) **>** [**mtx**](dir_733f8da2b5f5697defdd7b5830b0b7b3.md) **>** [**mtxvec.c**](mtxvec_8c.md)

[Go to the source code of this file](mtxvec_8c_source.md)



* `#include <dolphin/mtx.h>`
* `#include <cmath>`
* `#include <dolphin.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**C\_MTXMultVec**](#function-c_mtxmultvec) ([**Mtx44**](mtx_8h.md#typedef-mtx44) m, [**Vec**](struct_vec.md) \* src, [**Vec**](struct_vec.md) \* dst) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**C\_MTXMultVecArray**](#function-c_mtxmultvecarray) ([**Mtx**](mtx_8h.md#typedef-mtx) m, [**Vec**](struct_vec.md) \* srcBase, [**Vec**](struct_vec.md) \* dstBase, [**u32**](types_8h.md#typedef-u32) count) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MTXMultVecArraySR**](#function-mtxmultvecarraysr) ([**Mtx44**](mtx_8h.md#typedef-mtx44) m, [**Vec**](struct_vec.md) \* srcBase, [**Vec**](struct_vec.md) \* dstBase, [**u32**](types_8h.md#typedef-u32) count) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MTXMultVecSR**](#function-mtxmultvecsr) ([**Mtx44**](mtx_8h.md#typedef-mtx44) m, [**Vec**](struct_vec.md) \* src, [**Vec**](struct_vec.md) \* dst) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PSMTXMultVec**](#function-psmtxmultvec) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Mtx44**](mtx_8h.md#typedef-mtx44) m, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Vec**](struct_vec.md) \* src, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Vec**](struct_vec.md) \* dst) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PSMTXMultVecArray**](#function-psmtxmultvecarray) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Mtx**](mtx_8h.md#typedef-mtx) m, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Vec**](struct_vec.md) \* srcBase, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Vec**](struct_vec.md) \* dstBase, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) count) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**qr0**](mtxvec_8c.md#define-qr0)  `0`<br> |

## Public Functions Documentation




### function C\_MTXMultVec 

```C++
void C_MTXMultVec (
    Mtx44 m,
    Vec * src,
    Vec * dst
) 
```




<hr>



### function C\_MTXMultVecArray 

```C++
void C_MTXMultVecArray (
    Mtx m,
    Vec * srcBase,
    Vec * dstBase,
    u32 count
) 
```




<hr>



### function MTXMultVecArraySR 

```C++
void MTXMultVecArraySR (
    Mtx44 m,
    Vec * srcBase,
    Vec * dstBase,
    u32 count
) 
```




<hr>



### function MTXMultVecSR 

```C++
void MTXMultVecSR (
    Mtx44 m,
    Vec * src,
    Vec * dst
) 
```




<hr>



### function PSMTXMultVec 

```C++
asm  void PSMTXMultVec (
    register  Mtx44 m,
    register  Vec * src,
    register  Vec * dst
) 
```




<hr>



### function PSMTXMultVecArray 

```C++
asm  void PSMTXMultVecArray (
    register  Mtx m,
    register  Vec * srcBase,
    register  Vec * dstBase,
    register  u32 count
) 
```




<hr>
## Macro Definition Documentation





### define qr0 

```C++
#define qr0 `0`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `SDK/src/dolphin/mtx/mtxvec.c`

