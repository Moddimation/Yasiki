

# File mtx.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**mtx**](dir_26b6e6c4cda21e7491fcc30d526d19d0.md) **>** [**mtx.c**](mtx_8c.md)

[Go to the source code of this file](mtx_8c_source.md)



* `#include <dolphin/mtx.h>`
* `#include <cmath>`























## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**Unit01**](#variable-unit01)   = `{ 0.0f, 1.0f }`<br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**C\_MTXConcat**](#function-c_mtxconcat) ([**Mtx**](mtx_8h.md#typedef-mtx) a, [**Mtx**](mtx_8h.md#typedef-mtx) b, [**Mtx**](mtx_8h.md#typedef-mtx) ab) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**C\_MTXCopy**](#function-c_mtxcopy) ([**Mtx**](mtx_8h.md#typedef-mtx) src, [**Mtx**](mtx_8h.md#typedef-mtx) dst) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**C\_MTXIdentity**](#function-c_mtxidentity) ([**Mtx**](mtx_8h.md#typedef-mtx) m) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**C\_MTXInvXpose**](#function-c_mtxinvxpose) ([**Mtx**](mtx_8h.md#typedef-mtx) src, [**Mtx**](mtx_8h.md#typedef-mtx) invX) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**C\_MTXInverse**](#function-c_mtxinverse) ([**Mtx**](mtx_8h.md#typedef-mtx) src, [**Mtx**](mtx_8h.md#typedef-mtx) inv) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**C\_MTXTranspose**](#function-c_mtxtranspose) ([**Mtx**](mtx_8h.md#typedef-mtx) src, [**Mtx**](mtx_8h.md#typedef-mtx) xPose) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MTXLightFrustum**](#function-mtxlightfrustum) ([**Mtx**](mtx_8h.md#typedef-mtx) m, [**f32**](types_8h.md#typedef-f32) t, [**f32**](types_8h.md#typedef-f32) b, [**f32**](types_8h.md#typedef-f32) l, [**f32**](types_8h.md#typedef-f32) r, [**f32**](types_8h.md#typedef-f32) n, [**f32**](types_8h.md#typedef-f32) scaleS, [**f32**](types_8h.md#typedef-f32) scaleT, [**f32**](types_8h.md#typedef-f32) transS, [**f32**](types_8h.md#typedef-f32) transT) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MTXLightOrtho**](#function-mtxlightortho) ([**Mtx**](mtx_8h.md#typedef-mtx) m, [**f32**](types_8h.md#typedef-f32) t, [**f32**](types_8h.md#typedef-f32) b, [**f32**](types_8h.md#typedef-f32) l, [**f32**](types_8h.md#typedef-f32) r, [**f32**](types_8h.md#typedef-f32) scaleS, [**f32**](types_8h.md#typedef-f32) scaleT, [**f32**](types_8h.md#typedef-f32) transS, [**f32**](types_8h.md#typedef-f32) transT) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MTXLightPerspective**](#function-mtxlightperspective) ([**Mtx**](mtx_8h.md#typedef-mtx) m, [**f32**](types_8h.md#typedef-f32) fovY, [**f32**](types_8h.md#typedef-f32) aspect, [**f32**](types_8h.md#typedef-f32) scaleS, [**f32**](types_8h.md#typedef-f32) scaleT, [**f32**](types_8h.md#typedef-f32) transS, [**f32**](types_8h.md#typedef-f32) transT) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MTXLookAt**](#function-mtxlookat) ([**Mtx**](mtx_8h.md#typedef-mtx) m, [**Vec**](struct_vec.md) \* camPos, [**Vec**](struct_vec.md) \* camUp, [**Vec**](struct_vec.md) \* target) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MTXQuat**](#function-mtxquat) ([**Mtx**](mtx_8h.md#typedef-mtx) m, [**QuaternionPtr**](mtx_8h.md#typedef-quaternionptr) q) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MTXReflect**](#function-mtxreflect) ([**Mtx**](mtx_8h.md#typedef-mtx) m, [**Vec**](struct_vec.md) \* p, [**Vec**](struct_vec.md) \* n) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MTXRotAxisRad**](#function-mtxrotaxisrad) ([**Mtx**](mtx_8h.md#typedef-mtx) m, [**Vec**](struct_vec.md) \* axis, [**f32**](types_8h.md#typedef-f32) rad) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MTXRotRad**](#function-mtxrotrad) ([**Mtx**](mtx_8h.md#typedef-mtx) m, [**s8**](types_8h.md#typedef-s8) axis, [**f32**](types_8h.md#typedef-f32) rad) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MTXRotTrig**](#function-mtxrottrig) ([**Mtx**](mtx_8h.md#typedef-mtx) m, [**s8**](types_8h.md#typedef-s8) axis, [**f32**](types_8h.md#typedef-f32) sinA, [**f32**](types_8h.md#typedef-f32) cosA) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MTXScale**](#function-mtxscale) ([**Mtx**](mtx_8h.md#typedef-mtx) m, [**f32**](types_8h.md#typedef-f32) xS, [**f32**](types_8h.md#typedef-f32) yS, [**f32**](types_8h.md#typedef-f32) zS) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MTXScaleApply**](#function-mtxscaleapply) ([**Mtx**](mtx_8h.md#typedef-mtx) src, [**Mtx**](mtx_8h.md#typedef-mtx) dst, [**f32**](types_8h.md#typedef-f32) xS, [**f32**](types_8h.md#typedef-f32) yS, [**f32**](types_8h.md#typedef-f32) zS) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MTXTrans**](#function-mtxtrans) ([**Mtx**](mtx_8h.md#typedef-mtx) m, [**f32**](types_8h.md#typedef-f32) xT, [**f32**](types_8h.md#typedef-f32) yT, [**f32**](types_8h.md#typedef-f32) zT) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MTXTransApply**](#function-mtxtransapply) ([**Mtx**](mtx_8h.md#typedef-mtx) src, [**Mtx**](mtx_8h.md#typedef-mtx) dst, [**f32**](types_8h.md#typedef-f32) xT, [**f32**](types_8h.md#typedef-f32) yT, [**f32**](types_8h.md#typedef-f32) zT) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PSMTXConcat**](#function-psmtxconcat) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Mtx**](mtx_8h.md#typedef-mtx) mA, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Mtx**](mtx_8h.md#typedef-mtx) mB, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Mtx**](mtx_8h.md#typedef-mtx) mAB) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PSMTXCopy**](#function-psmtxcopy) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Mtx**](mtx_8h.md#typedef-mtx) src, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Mtx**](mtx_8h.md#typedef-mtx) dst) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PSMTXIdentity**](#function-psmtxidentity) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Mtx**](mtx_8h.md#typedef-mtx) m) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) | [**PSMTXInvXpose**](#function-psmtxinvxpose) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Mtx**](mtx_8h.md#typedef-mtx) src, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Mtx**](mtx_8h.md#typedef-mtx) invX) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) | [**PSMTXInverse**](#function-psmtxinverse) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Mtx**](mtx_8h.md#typedef-mtx) src, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Mtx**](mtx_8h.md#typedef-mtx) inv) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PSMTXTranspose**](#function-psmtxtranspose) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Mtx**](mtx_8h.md#typedef-mtx) src, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Mtx**](mtx_8h.md#typedef-mtx) xPose) <br> |
|  [**f32**](types_8h.md#typedef-f32) | [**cosf**](#function-cosf) ([**f32**](types_8h.md#typedef-f32)) <br> |
|  [**f32**](types_8h.md#typedef-f32) | [**sinf**](#function-sinf) ([**f32**](types_8h.md#typedef-f32)) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**qr0**](mtx_8c.md#define-qr0)  `0`<br> |

## Public Static Attributes Documentation




### variable Unit01 

```C++
float Unit01[2];
```




<hr>
## Public Functions Documentation




### function C\_MTXConcat 

```C++
void C_MTXConcat (
    Mtx a,
    Mtx b,
    Mtx ab
) 
```




<hr>



### function C\_MTXCopy 

```C++
void C_MTXCopy (
    Mtx src,
    Mtx dst
) 
```




<hr>



### function C\_MTXIdentity 

```C++
void C_MTXIdentity (
    Mtx m
) 
```




<hr>



### function C\_MTXInvXpose 

```C++
u32 C_MTXInvXpose (
    Mtx src,
    Mtx invX
) 
```




<hr>



### function C\_MTXInverse 

```C++
u32 C_MTXInverse (
    Mtx src,
    Mtx inv
) 
```




<hr>



### function C\_MTXTranspose 

```C++
void C_MTXTranspose (
    Mtx src,
    Mtx xPose
) 
```




<hr>



### function MTXLightFrustum 

```C++
void MTXLightFrustum (
    Mtx m,
    f32 t,
    f32 b,
    f32 l,
    f32 r,
    f32 n,
    f32 scaleS,
    f32 scaleT,
    f32 transS,
    f32 transT
) 
```




<hr>



### function MTXLightOrtho 

```C++
void MTXLightOrtho (
    Mtx m,
    f32 t,
    f32 b,
    f32 l,
    f32 r,
    f32 scaleS,
    f32 scaleT,
    f32 transS,
    f32 transT
) 
```




<hr>



### function MTXLightPerspective 

```C++
void MTXLightPerspective (
    Mtx m,
    f32 fovY,
    f32 aspect,
    f32 scaleS,
    f32 scaleT,
    f32 transS,
    f32 transT
) 
```




<hr>



### function MTXLookAt 

```C++
void MTXLookAt (
    Mtx m,
    Vec * camPos,
    Vec * camUp,
    Vec * target
) 
```




<hr>



### function MTXQuat 

```C++
void MTXQuat (
    Mtx m,
    QuaternionPtr q
) 
```




<hr>



### function MTXReflect 

```C++
void MTXReflect (
    Mtx m,
    Vec * p,
    Vec * n
) 
```




<hr>



### function MTXRotAxisRad 

```C++
void MTXRotAxisRad (
    Mtx m,
    Vec * axis,
    f32 rad
) 
```




<hr>



### function MTXRotRad 

```C++
void MTXRotRad (
    Mtx m,
    s8 axis,
    f32 rad
) 
```




<hr>



### function MTXRotTrig 

```C++
void MTXRotTrig (
    Mtx m,
    s8 axis,
    f32 sinA,
    f32 cosA
) 
```




<hr>



### function MTXScale 

```C++
void MTXScale (
    Mtx m,
    f32 xS,
    f32 yS,
    f32 zS
) 
```




<hr>



### function MTXScaleApply 

```C++
void MTXScaleApply (
    Mtx src,
    Mtx dst,
    f32 xS,
    f32 yS,
    f32 zS
) 
```




<hr>



### function MTXTrans 

```C++
void MTXTrans (
    Mtx m,
    f32 xT,
    f32 yT,
    f32 zT
) 
```




<hr>



### function MTXTransApply 

```C++
void MTXTransApply (
    Mtx src,
    Mtx dst,
    f32 xT,
    f32 yT,
    f32 zT
) 
```




<hr>



### function PSMTXConcat 

```C++
asm  void PSMTXConcat (
    register  Mtx mA,
    register  Mtx mB,
    register  Mtx mAB
) 
```




<hr>



### function PSMTXCopy 

```C++
asm  void PSMTXCopy (
    register  Mtx src,
    register  Mtx dst
) 
```




<hr>



### function PSMTXIdentity 

```C++
void PSMTXIdentity (
    register  Mtx m
) 
```




<hr>



### function PSMTXInvXpose 

```C++
asm  u32 PSMTXInvXpose (
    register  Mtx src,
    register  Mtx invX
) 
```




<hr>



### function PSMTXInverse 

```C++
asm  u32 PSMTXInverse (
    register  Mtx src,
    register  Mtx inv
) 
```




<hr>



### function PSMTXTranspose 

```C++
void PSMTXTranspose (
    register  Mtx src,
    register  Mtx xPose
) 
```




<hr>



### function cosf 

```C++
f32 cosf (
    f32
) 
```




<hr>



### function sinf 

```C++
f32 sinf (
    f32
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
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/mtx/mtx.c`

