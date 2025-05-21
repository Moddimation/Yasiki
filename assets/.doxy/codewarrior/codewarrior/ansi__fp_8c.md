

# File ansi\_fp.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common\_Embedded**](dir_0adfd00b5f2aabc630aa7000395ba3d6.md) **>** [**Src**](dir_fb71fded672b541f8f0e87a8352217f5.md) **>** [**ansi\_fp.c**](ansi__fp_8c.md)

[Go to the source code of this file](ansi__fp_8c_source.md)



* `#include "ansi_fp.h"`
* `#include <errno.h>`
* `#include <float.h>`
* `#include <stdlib.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**\_INT32**](msl__t_8h.md#typedef-_int32) | [**\_\_double\_nan**](#variable-__double_nan)  <br> |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  const double | [**bit\_values**](#variable-bit_values)   = `/* multi line expression */`<br> |
|  const double | [**digit\_values**](#variable-digit_values)   = `/* multi line expression */`<br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  double | [**\_\_dec2num**](#function-__dec2num) (const [**decimal**](structdecimal.md) \* d) <br> |
|  void | [**\_\_num2dec**](#function-__num2dec) (const [**decform**](structdecform.md) \* f, double x, [**decimal**](structdecimal.md) \* d) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**Inf**](ansi__fp_8c.md#define-inf)  `[**HUGE\_VAL**](k__standard_8c.md#define-huge_val)   /\*  [**HUGE\_VAL**](k__standard_8c.md#define-huge_val) is the double encoding of infinity \*/`<br> |
| define  | [**NaN**](ansi__fp_8c.md#define-nan)  `(\* (double \*) [**\_\_double\_nan**](float_8c.md#variable-__double_nan) )`<br> |
| define  | [**max\_bits**](ansi__fp_8c.md#define-max_bits)  `511		/\* (2\*\*n)-1 where n is the number of elements in [**bit\_values**](ansi__fp_8c.md#variable-bit_values) \*/`<br> |

## Public Attributes Documentation




### variable \_\_double\_nan 

```C++
_INT32 __double_nan[];
```




<hr>
## Public Static Attributes Documentation




### variable bit\_values 

```C++
const double bit_values[];
```




<hr>



### variable digit\_values 

```C++
const double digit_values[];
```




<hr>
## Public Functions Documentation




### function \_\_dec2num 

```C++
double __dec2num (
    const decimal * d
) 
```




<hr>



### function \_\_num2dec 

```C++
void __num2dec (
    const decform * f,
    double x,
    decimal * d
) 
```




<hr>
## Macro Definition Documentation





### define Inf 

```C++
#define Inf `HUGE_VAL /* HUGE_VAL is the double encoding of infinity */`
```




<hr>



### define NaN 

```C++
#define NaN `(* (double *) __double_nan )`
```




<hr>



### define max\_bits 

```C++
#define max_bits `511		/* (2**n)-1 where n is the number of elements in bit_values */`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common_Embedded/Src/ansi_fp.c`

