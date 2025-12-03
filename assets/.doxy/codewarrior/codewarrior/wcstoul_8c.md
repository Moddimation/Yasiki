

# File wcstoul.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Src**](dir_296ea1c022f8cfa02577b9a5b06211f5.md) **>** [**wcstoul.c**](wcstoul_8c.md)

[Go to the source code of this file](wcstoul_8c_source.md)



* `#include <cctype>`
* `#include <cerrno>`
* `#include <climits>`
* `#include <cstdio>`
* `#include <cstdlib>`
* `#include <string.h>`
* `#include <string_io.h>`
* `#include <inttypes.h>`
* `#include <wchar.h>`
* `#include <wctype.h>`

















## Public Types

| Type | Name |
| ---: | :--- |
| enum  | [**scan\_states**](#enum-scan_states)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  unsigned long | [**\_\_wcstoul**](#function-__wcstoul) (int base, int max\_width, wint\_t(\*)(void \*, wint\_t, int) wReadProc, void \* wReadProcArg, int \* chars\_scanned, int \* negative, int \* overflow) <br> |
|  int | [**watoi**](#function-watoi) (const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* str) <br> |
|  long | [**watol**](#function-watol) (const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* str) <br> |
|  intmax\_t() | [**wcstoimax**](#function-wcstoimax) (const char \* nptr, char \*\* endptr, int base) <br> |
|  long | [**wcstol**](#function-wcstol) (const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* str, [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \*\* end, int base) <br> |
|  unsigned long | [**wcstoul**](#function-wcstoul) (const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* str, [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \*\* end, int base) <br> |
|  uintmax\_t() | [**wcstoumax**](#function-wcstoumax) (const char \* nptr, char \*\* endptr, int base) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**fetch**](wcstoul_8c.md#define-fetch) () `([**count**](targimpl_8c.md#define-count)++, (\*wReadProc)(wReadProcArg, 0, \_\_GetAwChar)) /\* mm 990311 \*/`<br> |
| define  | [**final\_state**](wcstoul_8c.md#define-final_state) (scan\_state) `(scan\_state & (finished \| failure))`<br> |
| define  | [**success**](wcstoul_8c.md#define-success) (scan\_state) `(scan\_state & (leading\_zero \| digit\_loop \| finished))`<br> |
| define  | [**unfetch**](wcstoul_8c.md#define-unfetch) (c) `(\*wReadProc)(wReadProcArg, c, \_\_UngetAwChar)			/\* mm 990311 \*/`<br> |

## Public Types Documentation




### enum scan\_states 

```C++
enum scan_states {
    start = 0x01,
    check_for_zero = 0x02,
    leading_zero = 0x04,
    need_digit = 0x08,
    digit_loop = 0x10,
    finished = 0x20,
    failure = 0x40
};
```




<hr>
## Public Functions Documentation




### function \_\_wcstoul 

```C++
unsigned long __wcstoul (
    int base,
    int max_width,
    wint_t(*)(void *, wint_t, int) wReadProc,
    void * wReadProcArg,
    int * chars_scanned,
    int * negative,
    int * overflow
) 
```




<hr>



### function watoi 

```C++
int watoi (
    const wchar_t * str
) 
```




<hr>



### function watol 

```C++
long watol (
    const wchar_t * str
) 
```




<hr>



### function wcstoimax 

```C++
intmax_t() wcstoimax (
    const char * nptr,
    char ** endptr,
    int base
) 
```




<hr>



### function wcstol 

```C++
long wcstol (
    const wchar_t * str,
    wchar_t ** end,
    int base
) 
```




<hr>



### function wcstoul 

```C++
unsigned long wcstoul (
    const wchar_t * str,
    wchar_t ** end,
    int base
) 
```




<hr>



### function wcstoumax 

```C++
uintmax_t() wcstoumax (
    const char * nptr,
    char ** endptr,
    int base
) 
```




<hr>
## Macro Definition Documentation





### define fetch 

```C++
#define fetch (
    
) `( count ++, (*wReadProc)(wReadProcArg, 0, __GetAwChar)) /* mm 990311 */`
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
) `(scan_state & ( leading_zero | digit_loop | finished ))`
```




<hr>



### define unfetch 

```C++
#define unfetch (
    c
) `(*wReadProc)(wReadProcArg, c, __UngetAwChar)			/* mm 990311 */`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Src/wcstoul.c`

