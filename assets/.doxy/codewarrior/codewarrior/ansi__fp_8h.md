

# File ansi\_fp.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Include**](dir_27c31b18688c2d3b7fe1d239b44a1620.md) **>** [**ansi\_fp.h**](ansi__fp_8h.md)

[Go to the source code of this file](ansi__fp_8h_source.md)



* `#include <ansi_parms.h>`
* `#include <cmath>`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**decform**](structdecform.md) <br> |
| struct | [**decimal**](structdecimal.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef struct [**decform**](structdecform.md) | [**decform**](#typedef-decform)  <br> |
| typedef struct [**decimal**](structdecimal.md) | [**decimal**](#typedef-decimal)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  double\_t | [**\_\_dec2num**](#function-__dec2num) (const [**decimal**](structdecimal.md) \* d) <br> |
|  void | [**\_\_num2dec**](#function-__num2dec) (const [**decform**](structdecform.md) \* f, double\_t x, [**decimal**](structdecimal.md) \* d) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**FIXEDDECIMAL**](ansi__fp_8h.md#define-fixeddecimal)  `((char)(1))`<br> |
| define  | [**FLOATDECIMAL**](ansi__fp_8h.md#define-floatdecimal)  `((char)(0))`<br> |
| define  | [**SIGDIGLEN**](ansi__fp_8h.md#define-sigdiglen)  `32`<br> |
| define  | [**\_MSL\_C9X\_\_**](ansi__fp_8h.md#define-_msl_c9x__)  `1`<br> |
| define  | [**\_\_dec2num**](ansi__fp_8h.md#define-__dec2num)  `dec2num`<br> |
| define  | [**\_\_num2dec**](ansi__fp_8h.md#define-__num2dec)  `num2dec`<br> |

## Public Types Documentation




### typedef decform 

```C++
typedef struct decform decform;
```




<hr>



### typedef decimal 

```C++
typedef struct decimal decimal;
```




<hr>
## Public Functions Documentation




### function \_\_dec2num 

```C++
double_t __dec2num (
    const decimal * d
) 
```




<hr>



### function \_\_num2dec 

```C++
void __num2dec (
    const decform * f,
    double_t x,
    decimal * d
) 
```




<hr>
## Macro Definition Documentation





### define FIXEDDECIMAL 

```C++
#define FIXEDDECIMAL `((char)(1))`
```




<hr>



### define FLOATDECIMAL 

```C++
#define FLOATDECIMAL `((char)(0))`
```




<hr>



### define SIGDIGLEN 

```C++
#define SIGDIGLEN `32`
```




<hr>



### define \_MSL\_C9X\_\_ 

```C++
#define _MSL_C9X__ `1`
```




<hr>



### define \_\_dec2num 

```C++
#define __dec2num `dec2num`
```




<hr>



### define \_\_num2dec 

```C++
#define __num2dec `num2dec`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Include/ansi_fp.h`

