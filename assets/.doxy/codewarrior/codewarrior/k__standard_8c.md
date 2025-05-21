

# File k\_standard.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common\_Embedded**](dir_0adfd00b5f2aabc630aa7000395ba3d6.md) **>** [**Math**](dir_42a8f53493c514304c83fd3490b3470b.md) **>** [**Double\_precision**](dir_7833348e5deec0cfbc202fbe86c1fb0a.md) **>** [**k\_standard.c**](k__standard_8c.md)

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
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common_Embedded/Math/Double_precision/k_standard.c`

