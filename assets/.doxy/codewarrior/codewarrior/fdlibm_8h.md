

# File fdlibm.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common\_Embedded**](dir_862c03c3c35584d0a555c3abef6e72a9.md) **>** [**Math**](dir_12110d18fe016ada0ac20ca931a7efb5.md) **>** [**Include**](dir_107761e426082af4cd62fbe88c7499b7.md) **>** [**fdlibm.h**](fdlibm_8h.md)

[Go to the source code of this file](fdlibm_8h_source.md)


















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**exception**](structexception.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| enum  | [**fdversion**](#enum-fdversion)  <br> |




## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**\_LIB\_VERSION\_TYPE**](fdlibm_8h.md#define-_lib_version_type) | [**\_LIB\_VERSION**](#variable-_lib_version)  <br> |
|  int | [**signgam**](#variable-signgam)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  int [**matherr**](s__matherr_8c.md#function-matherr) | [**\_\_P**](#function-__p) ((struct [**exception**](structexception.md) \*)) <br> |
|  double significand | [**\_\_P**](#function-__p) ((double)) <br> |
|  double [**\_\_ieee754\_atan2**](e__atan2_8c.md#function-__ieee754_atan2) | [**\_\_P**](#function-__p) ((double, double)) <br> |
|  double [**\_\_ieee754\_lgamma\_r**](e__lgamma__r_8c.md#function-__ieee754_lgamma_r) | [**\_\_P**](#function-__p) ((double, int \*)) <br> |
|  double \_\_ieee754\_jn | [**\_\_P**](#function-__p) ((int, double)) <br> |
|  int [**\_\_ieee754\_rem\_pio2**](e__rem__pio2_8c.md#function-__ieee754_rem_pio2) | [**\_\_P**](#function-__p) ((double, double \*)) <br> |
|  double \_\_ieee754\_scalb | [**\_\_P**](#function-__p) ((double, int)) <br> |
|  double [**\_\_kernel\_standard**](k__standard_8c.md#function-__kernel_standard) | [**\_\_P**](#function-__p) ((double, double, int)) <br> |
|  int [**\_\_kernel\_rem\_pio2**](k__rem__pio2_8c.md#function-__kernel_rem_pio2) | [**\_\_P**](#function-__p) ((double \*, double \*, int, int, int, const int \*)) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**DOMAIN**](fdlibm_8h.md#define-domain)  `1`<br> |
| define  | [**HUGE**](fdlibm_8h.md#define-huge)  `[**MAXFLOAT**](fdlibm_8h.md#define-maxfloat)`<br> |
| define  | [**MAXFLOAT**](fdlibm_8h.md#define-maxfloat)  `((float)3.40282346638528860e+38)`<br> |
| define  | [**OVERFLOW**](fdlibm_8h.md#define-overflow)  `3`<br> |
| define  | [**PLOSS**](fdlibm_8h.md#define-ploss)  `6`<br> |
| define  | [**SING**](fdlibm_8h.md#define-sing)  `2`<br> |
| define  | [**TLOSS**](fdlibm_8h.md#define-tloss)  `5`<br> |
| define  | [**UNDERFLOW**](fdlibm_8h.md#define-underflow)  `4`<br> |
| define  | [**X\_TLOSS**](fdlibm_8h.md#define-x_tloss)  `1.41484755040568800000e+16`<br> |
| define  | [**\_IEEE\_**](fdlibm_8h.md#define-_ieee_)  `fdlibm\_ieee`<br> |
| define  | [**\_IEEE\_LIBM**](fdlibm_8h.md#define-_ieee_libm)  <br> |
| define  | [**\_LIB\_VERSION**](fdlibm_8h.md#define-_lib_version)  `\_fdlib\_version`<br> |
| define  | [**\_LIB\_VERSION\_TYPE**](fdlibm_8h.md#define-_lib_version_type)  `enum [**fdversion**](fdlibm_8h.md#enum-fdversion)`<br> |
| define  | [**\_POSIX\_**](fdlibm_8h.md#define-_posix_)  `fdlibm\_posix`<br> |
| define  | [**\_SVID\_**](fdlibm_8h.md#define-_svid_)  `fdlibm\_svid`<br> |
| define  | [**\_XOPEN\_**](fdlibm_8h.md#define-_xopen_)  `fdlibm\_xopen`<br> |
| define  | [**\_\_HIp**](fdlibm_8h.md#define-__hip) (x) `\*(int\*)x`<br> |
| define  | [**\_\_LOp**](fdlibm_8h.md#define-__lop) (x) `\*(1+(int\*)x)`<br> |
| define  | [**\_\_P**](fdlibm_8h.md#define-__p) (p) `()`<br> |

## Public Types Documentation




### enum fdversion 

```C++
enum fdversion {
    fdlibm_ieee = -1,
    fdlibm_svid,
    fdlibm_xopen,
    fdlibm_posix
};
```




<hr>
## Public Attributes Documentation




### variable \_LIB\_VERSION 

```C++
_LIB_VERSION_TYPE _LIB_VERSION;
```




<hr>



### variable signgam 

```C++
int signgam;
```




<hr>
## Public Functions Documentation




### function \_\_P 

```C++
int matherr __P (
    (struct exception *)
) 
```




<hr>



### function \_\_P 

```C++
double significand __P (
    (double)
) 
```




<hr>



### function \_\_P 

```C++
double __ieee754_atan2 __P (
    (double, double)
) 
```




<hr>



### function \_\_P 

```C++
double __ieee754_lgamma_r __P (
    (double, int *)
) 
```




<hr>



### function \_\_P 

```C++
double __ieee754_jn __P (
    (int, double)
) 
```




<hr>



### function \_\_P 

```C++
int __ieee754_rem_pio2 __P (
    (double, double *)
) 
```




<hr>



### function \_\_P 

```C++
double __ieee754_scalb __P (
    (double, int)
) 
```




<hr>



### function \_\_P 

```C++
double __kernel_standard __P (
    (double, double, int)
) 
```




<hr>



### function \_\_P 

```C++
int __kernel_rem_pio2 __P (
    (double *, double *, int, int, int, const int *)
) 
```




<hr>
## Macro Definition Documentation





### define DOMAIN 

```C++
#define DOMAIN `1`
```




<hr>



### define HUGE 

```C++
#define HUGE `MAXFLOAT`
```




<hr>



### define MAXFLOAT 

```C++
#define MAXFLOAT `((float)3.40282346638528860e+38)`
```




<hr>



### define OVERFLOW 

```C++
#define OVERFLOW `3`
```




<hr>



### define PLOSS 

```C++
#define PLOSS `6`
```




<hr>



### define SING 

```C++
#define SING `2`
```




<hr>



### define TLOSS 

```C++
#define TLOSS `5`
```




<hr>



### define UNDERFLOW 

```C++
#define UNDERFLOW `4`
```




<hr>



### define X\_TLOSS 

```C++
#define X_TLOSS `1.41484755040568800000e+16`
```




<hr>



### define \_IEEE\_ 

```C++
#define _IEEE_ `fdlibm_ieee`
```




<hr>



### define \_IEEE\_LIBM 

```C++
#define _IEEE_LIBM 
```




<hr>



### define \_LIB\_VERSION 

```C++
#define _LIB_VERSION `_fdlib_version`
```




<hr>



### define \_LIB\_VERSION\_TYPE 

```C++
#define _LIB_VERSION_TYPE `enum fdversion`
```




<hr>



### define \_POSIX\_ 

```C++
#define _POSIX_ `fdlibm_posix`
```




<hr>



### define \_SVID\_ 

```C++
#define _SVID_ `fdlibm_svid`
```




<hr>



### define \_XOPEN\_ 

```C++
#define _XOPEN_ `fdlibm_xopen`
```




<hr>



### define \_\_HIp 

```C++
#define __HIp (
    x
) `*(int*)x`
```




<hr>



### define \_\_LOp 

```C++
#define __LOp (
    x
) `*(1+(int*)x)`
```




<hr>



### define \_\_P 

```C++
#define __P (
    p
) `()`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common_Embedded/Math/Include/fdlibm.h`

