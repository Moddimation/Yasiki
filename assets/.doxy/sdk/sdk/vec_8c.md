

# File vec.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**mtx**](dir_26b6e6c4cda21e7491fcc30d526d19d0.md) **>** [**vec.c**](vec_8c.md)

[Go to the source code of this file](vec_8c_source.md)



* `#include <dolphin/mtx.h>`
* `#include <cmath>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**C\_VECAdd**](#function-c_vecadd) ([**Vec**](struct_vec.md) \* a, [**Vec**](struct_vec.md) \* b, [**Vec**](struct_vec.md) \* c) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**C\_VECCrossProduct**](#function-c_veccrossproduct) ([**Vec**](struct_vec.md) \* a, [**Vec**](struct_vec.md) \* b, [**Vec**](struct_vec.md) \* axb) <br> |
|  [**f32**](types_8h.md#typedef-f32) | [**C\_VECDotProduct**](#function-c_vecdotproduct) ([**Vec**](struct_vec.md) \* a, [**Vec**](struct_vec.md) \* b) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**C\_VECNormalize**](#function-c_vecnormalize) ([**Vec**](struct_vec.md) \* src, [**Vec**](struct_vec.md) \* unit) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**C\_VECScale**](#function-c_vecscale) ([**Vec**](struct_vec.md) \* src, [**Vec**](struct_vec.md) \* dst, [**f32**](types_8h.md#typedef-f32) scale) <br> |
|  [**f32**](types_8h.md#typedef-f32) | [**C\_VECSquareDistance**](#function-c_vecsquaredistance) ([**Vec**](struct_vec.md) \* a, [**Vec**](struct_vec.md) \* b) <br> |
|  [**f32**](types_8h.md#typedef-f32) | [**C\_VECSquareMag**](#function-c_vecsquaremag) ([**Vec**](struct_vec.md) \* v) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**C\_VECSubtract**](#function-c_vecsubtract) ([**Vec**](struct_vec.md) \* a, [**Vec**](struct_vec.md) \* b, [**Vec**](struct_vec.md) \* c) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PSVECAdd**](#function-psvecadd) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Vec**](struct_vec.md) \* a, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Vec**](struct_vec.md) \* b, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Vec**](struct_vec.md) \* c) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PSVECCrossProduct**](#function-psveccrossproduct) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Vec**](struct_vec.md) \* vec1, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Vec**](struct_vec.md) \* vec2, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Vec**](struct_vec.md) \* dst) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**f32**](types_8h.md#typedef-f32) | [**PSVECDotProduct**](#function-psvecdotproduct) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Vec**](struct_vec.md) \* vec1, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Vec**](struct_vec.md) \* vec2) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PSVECNormalize**](#function-psvecnormalize) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Vec**](struct_vec.md) \* vec1, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Vec**](struct_vec.md) \* dst) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PSVECScale**](#function-psvecscale) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Vec**](struct_vec.md) \* src, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Vec**](struct_vec.md) \* dst, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**f32**](types_8h.md#typedef-f32) mult) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**f32**](types_8h.md#typedef-f32) | [**PSVECSquareDistance**](#function-psvecsquaredistance) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Vec**](struct_vec.md) \* vec1, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Vec**](struct_vec.md) \* vec2) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**f32**](types_8h.md#typedef-f32) | [**PSVECSquareMag**](#function-psvecsquaremag) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Vec**](struct_vec.md) \* vec1) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PSVECSubtract**](#function-psvecsubtract) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Vec**](struct_vec.md) \* a, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Vec**](struct_vec.md) \* b, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Vec**](struct_vec.md) \* c) <br> |
|  [**f32**](types_8h.md#typedef-f32) | [**VECDistance**](#function-vecdistance) ([**Vec**](struct_vec.md) \* a, [**Vec**](struct_vec.md) \* b) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**VECHalfAngle**](#function-vechalfangle) ([**Vec**](struct_vec.md) \* a, [**Vec**](struct_vec.md) \* b, [**Vec**](struct_vec.md) \* half) <br> |
|  [**f32**](types_8h.md#typedef-f32) | [**VECMag**](#function-vecmag) ([**Vec**](struct_vec.md) \* v) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**VECReflect**](#function-vecreflect) ([**Vec**](struct_vec.md) \* src, [**Vec**](struct_vec.md) \* normal, [**Vec**](struct_vec.md) \* dst) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**qr0**](vec_8c.md#define-qr0)  `0`<br> |

## Public Functions Documentation




### function C\_VECAdd 

```C++
void C_VECAdd (
    Vec * a,
    Vec * b,
    Vec * c
) 
```




<hr>



### function C\_VECCrossProduct 

```C++
void C_VECCrossProduct (
    Vec * a,
    Vec * b,
    Vec * axb
) 
```




<hr>



### function C\_VECDotProduct 

```C++
f32 C_VECDotProduct (
    Vec * a,
    Vec * b
) 
```




<hr>



### function C\_VECNormalize 

```C++
void C_VECNormalize (
    Vec * src,
    Vec * unit
) 
```




<hr>



### function C\_VECScale 

```C++
void C_VECScale (
    Vec * src,
    Vec * dst,
    f32 scale
) 
```




<hr>



### function C\_VECSquareDistance 

```C++
f32 C_VECSquareDistance (
    Vec * a,
    Vec * b
) 
```




<hr>



### function C\_VECSquareMag 

```C++
f32 C_VECSquareMag (
    Vec * v
) 
```




<hr>



### function C\_VECSubtract 

```C++
void C_VECSubtract (
    Vec * a,
    Vec * b,
    Vec * c
) 
```




<hr>



### function PSVECAdd 

```C++
asm  void PSVECAdd (
    register  Vec * a,
    register  Vec * b,
    register  Vec * c
) 
```




<hr>



### function PSVECCrossProduct 

```C++
asm  void PSVECCrossProduct (
    register  Vec * vec1,
    register  Vec * vec2,
    register  Vec * dst
) 
```




<hr>



### function PSVECDotProduct 

```C++
asm  f32 PSVECDotProduct (
    register  Vec * vec1,
    register  Vec * vec2
) 
```




<hr>



### function PSVECNormalize 

```C++
void PSVECNormalize (
    register  Vec * vec1,
    register  Vec * dst
) 
```




<hr>



### function PSVECScale 

```C++
asm  void PSVECScale (
    register  Vec * src,
    register  Vec * dst,
    register  f32 mult
) 
```




<hr>



### function PSVECSquareDistance 

```C++
asm  f32 PSVECSquareDistance (
    register  Vec * vec1,
    register  Vec * vec2
) 
```




<hr>



### function PSVECSquareMag 

```C++
asm  f32 PSVECSquareMag (
    register  Vec * vec1
) 
```




<hr>



### function PSVECSubtract 

```C++
asm  void PSVECSubtract (
    register  Vec * a,
    register  Vec * b,
    register  Vec * c
) 
```




<hr>



### function VECDistance 

```C++
f32 VECDistance (
    Vec * a,
    Vec * b
) 
```




<hr>



### function VECHalfAngle 

```C++
void VECHalfAngle (
    Vec * a,
    Vec * b,
    Vec * half
) 
```




<hr>



### function VECMag 

```C++
f32 VECMag (
    Vec * v
) 
```




<hr>



### function VECReflect 

```C++
void VECReflect (
    Vec * src,
    Vec * normal,
    Vec * dst
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
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/mtx/vec.c`

