

# File k\_standard.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common\_Embedded**](dir_862c03c3c35584d0a555c3abef6e72a9.md) **>** [**Math**](dir_12110d18fe016ada0ac20ca931a7efb5.md) **>** [**Double\_precision**](dir_4aa136d99b9df2fc861ef3e829b58508.md) **>** [**k\_standard.c**](k__standard_8c.md)

[Go to the source code of this file](k__standard_8c_source.md)



* `#include "fdlibm.h"`
* `#include <errno.h>`
* `#include <stdio.h>`























## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  double | [**zero**](#variable-zero)   = `0.0`<br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  double | [**\_\_kernel\_standard**](#function-__kernel_standard) (double x, double y, int type) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**HUGE\_VAL**](k__standard_8c.md#define-huge_val)  `inf`<br> |
| define  | [**WRITE2**](k__standard_8c.md#define-write2) (u, v) `[**fputs**](char__io_8c.md#function-fputs)(u, stderr)`<br> |

## Public Static Attributes Documentation




### variable zero 

```C++
double zero;
```




<hr>
## Public Functions Documentation




### function \_\_kernel\_standard 

```C++
double __kernel_standard (
    double x,
    double y,
    int type
) 
```




<hr>
## Macro Definition Documentation





### define HUGE\_VAL 

```C++
#define HUGE_VAL `inf`
```




<hr>



### define WRITE2 

```C++
#define WRITE2 (
    u,
    v
) `fputs (u, stderr)`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common_Embedded/Math/Double_precision/k_standard.c`

