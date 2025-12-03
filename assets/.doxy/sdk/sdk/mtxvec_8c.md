

# File mtxvec.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**mtx**](dir_26b6e6c4cda21e7491fcc30d526d19d0.md) **>** [**mtxvec.c**](mtxvec_8c.md)

[Go to the source code of this file](mtxvec_8c_source.md)



* `#include <dolphin/mtx.h>`
* `#include <cmath>`





































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
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/mtx/mtxvec.c`

