

# File trigf.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common\_Embedded**](dir_862c03c3c35584d0a555c3abef6e72a9.md) **>** [**Math**](dir_12110d18fe016ada0ac20ca931a7efb5.md) **>** [**Single\_precision**](dir_e8afb2b224d923f9df254cf5acbdc830.md) **>** [**trigf.c**](trigf_8c.md)

[Go to the source code of this file](trigf_8c_source.md)



* `#include <math.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  const float | [**\_\_sincos\_on\_quadrant**](#variable-__sincos_on_quadrant)  <br> |
|  const float | [**\_\_sincos\_poly**](#variable-__sincos_poly)  <br> |
|  const int | [**tmp\_float**](#variable-tmp_float)   = `{0x3E800000,0x3Cbe6080,0x34372200,0x2da44152}`<br> |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  const float | [**\_\_four\_over\_pi\_m1**](#variable-__four_over_pi_m1)   = `/* multi line expression */`<br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  float | [**cosf**](#function-cosf) (float x) <br> |
|  float | [**sinf**](#function-sinf) (float x) <br> |
|  float | [**tanf**](#function-tanf) (float x) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**\_\_FAST\_MATH\_MODE\_\_**](trigf_8c.md#define-__fast_math_mode__)  `0`<br> |
| define  | [**\_\_FAST\_MATH\_MODE\_\_**](trigf_8c.md#define-__fast_math_mode__)  `0`<br> |
| define  | [**\_\_PI**](trigf_8c.md#define-__pi)  `3.1415926535897932384626433832795f`<br> |
| define  | [**\_\_PIO2\_\_**](trigf_8c.md#define-__pio2__)  `1.57079632679489661923132169163975f`<br> |
| define  | [**\_\_SQRT\_FLT\_EPSILON\_\_**](trigf_8c.md#define-__sqrt_flt_epsilon__)  `3.4526698300e-04f`<br> |
| define  | [**\_\_four\_over\_pi**](trigf_8c.md#define-__four_over_pi)  `1.27323954473516268615107010698011f`<br> |
| define  | [**\_\_ln2**](trigf_8c.md#define-__ln2)  `0.6931471805599f`<br> |
| define  | [**\_\_sqrt2\_m1**](trigf_8c.md#define-__sqrt2_m1)  `.41421356237f`<br> |
| define  | [**\_\_two\_over\_pi**](trigf_8c.md#define-__two_over_pi)  `.636619772367581343075535053490057f`<br> |

## Public Attributes Documentation




### variable \_\_sincos\_on\_quadrant 

```C++
const float __sincos_on_quadrant[];
```




<hr>



### variable \_\_sincos\_poly 

```C++
const float __sincos_poly[];
```




<hr>



### variable tmp\_float 

```C++
const int tmp_float[4];
```




<hr>
## Public Static Attributes Documentation




### variable \_\_four\_over\_pi\_m1 

```C++
const float __four_over_pi_m1[];
```




<hr>
## Public Functions Documentation




### function cosf 

```C++
float cosf (
    float x
) 
```




<hr>



### function sinf 

```C++
float sinf (
    float x
) 
```




<hr>



### function tanf 

```C++
float tanf (
    float x
) 
```




<hr>
## Macro Definition Documentation





### define \_\_FAST\_MATH\_MODE\_\_ 

```C++
#define __FAST_MATH_MODE__ `0`
```




<hr>



### define \_\_FAST\_MATH\_MODE\_\_ 

```C++
#define __FAST_MATH_MODE__ `0`
```




<hr>



### define \_\_PI 

```C++
#define __PI `3.1415926535897932384626433832795f`
```




<hr>



### define \_\_PIO2\_\_ 

```C++
#define __PIO2__ `1.57079632679489661923132169163975f`
```




<hr>



### define \_\_SQRT\_FLT\_EPSILON\_\_ 

```C++
#define __SQRT_FLT_EPSILON__ `3.4526698300e-04f`
```




<hr>



### define \_\_four\_over\_pi 

```C++
#define __four_over_pi `1.27323954473516268615107010698011f`
```




<hr>



### define \_\_ln2 

```C++
#define __ln2 `0.6931471805599f`
```




<hr>



### define \_\_sqrt2\_m1 

```C++
#define __sqrt2_m1 `.41421356237f`
```




<hr>



### define \_\_two\_over\_pi 

```C++
#define __two_over_pi `.636619772367581343075535053490057f`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common_Embedded/Math/Single_precision/trigf.c`

