

# File strtold.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Src**](dir_296ea1c022f8cfa02577b9a5b06211f5.md) **>** [**strtold.c**](strtold_8c.md)

[Go to the source code of this file](strtold_8c_source.md)



* `#include "ansi_fp.h"`
* `#include <ctype.h>`
* `#include <errno.h>`
* `#include <float.h>`
* `#include "lconv.h"`
* `#include <limits.h>`
* `#include <locale.h>`
* `#include <stdio.h>`
* `#include <stdlib.h>`
* `#include <string.h>`
* `#include "string_io.h"`
* `#include "strtold.h"`

















## Public Types

| Type | Name |
| ---: | :--- |
| enum  | [**scan\_states**](#enum-scan_states)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  long double | [**\_\_strtold**](#function-__strtold) (int max\_width, int(\*)(void \*, int, int) ReadProc, void \* ReadProcArg, int \* chars\_scanned, int \* overflow) <br> |
|  double | [**atof**](#function-atof) (const char \* str) <br> |
|  double | [**strtod**](#function-strtod) (const char \* str, char \*\* end) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**MAX\_SIG\_DIG**](strtold_8c.md#define-max_sig_dig)  `20               /\* mm 970609  \*/`<br> |
| define  | [**fetch**](strtold_8c.md#define-fetch) () `([**count**](targimpl_8c.md#define-count)++, (\*ReadProc)(ReadProcArg, 0, \_\_GetAChar)) /\* mm 990325 \*/`<br> |
| define  | [**final\_state**](strtold_8c.md#define-final_state) (scan\_state) `(scan\_state & (finished \| failure))`<br> |
| define  | [**success**](strtold_8c.md#define-success) (scan\_state) `/* multi line expression */`<br> |
| define  | [**unfetch**](strtold_8c.md#define-unfetch) (c) `(\*ReadProc)(ReadProcArg, c, \_\_UngetAChar)			/\* mm 990325 \*/`<br> |

## Public Types Documentation




### enum scan\_states 

```C++
enum scan_states {
    start = 0x0001,
    sig_start = 0x0002,
    leading_sig_zeroes = 0x0004,
    int_digit_loop = 0x0008,
    frac_start = 0x0010,
    frac_digit_loop = 0x0020,
    sig_end = 0x0040,
    exp_start = 0x0080,
    leading_exp_digit = 0x0100,
    leading_exp_zeroes = 0x0200,
    exp_digit_loop = 0x0400,
    finished = 0x0800,
    failure = 0x1000
};
```




<hr>
## Public Functions Documentation




### function \_\_strtold 

```C++
long double __strtold (
    int max_width,
    int(*)(void *, int, int) ReadProc,
    void * ReadProcArg,
    int * chars_scanned,
    int * overflow
) 
```




<hr>



### function atof 

```C++
double atof (
    const char * str
) 
```




<hr>



### function strtod 

```C++
double strtod (
    const char * str,
    char ** end
) 
```




<hr>
## Macro Definition Documentation





### define MAX\_SIG\_DIG 

```C++
#define MAX_SIG_DIG `20               /* mm 970609  */`
```




<hr>



### define fetch 

```C++
#define fetch (
    
) `( count ++, (*ReadProc)(ReadProcArg, 0, __GetAChar)) /* mm 990325 */`
```




<hr>



### define final\_state 

```C++
#define final_state (
    scan_state
) `(scan_state & ( finished | failure ))`
```




<hr>



### define success 

```C++
#define success (
    scan_state
) `(scan_state & ( leading_sig_zeroes |			\ int_digit_loop |			\ frac_digit_loop |			\ leading_exp_zeroes |			\ exp_digit_loop |			\ finished ))`
```




<hr>



### define unfetch 

```C++
#define unfetch (
    c
) `(*ReadProc)(ReadProcArg, c, __UngetAChar)			/* mm 990325 */`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Src/strtold.c`

