

# File wcstoul.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Src**](dir_a72881c2e453fec2ff00fd48c42297a2.md) **>** [**wcstoul.c**](wcstoul_8c.md)

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
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Src/wcstoul.c`

