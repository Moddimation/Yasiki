

# File strtoul.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Src**](dir_296ea1c022f8cfa02577b9a5b06211f5.md) **>** [**strtoul.c**](strtoul_8c.md)

[Go to the source code of this file](strtoul_8c_source.md)



* `#include <ctype.h>`
* `#include <errno.h>`
* `#include <limits.h>`
* `#include <stdio.h>`
* `#include <stdlib.h>`
* `#include <string.h>`
* `#include <inttypes.h>`
* `#include "string_io.h"`
* `#include "strtoul.h"`

















## Public Types

| Type | Name |
| ---: | :--- |
| enum  | [**scan\_states**](#enum-scan_states)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  unsigned long | [**\_\_strtoul**](#function-__strtoul) (int base, int max\_width, int(\*)(void \*, int, int) ReadProc, void \* ReadProcArg, int \* chars\_scanned, int \* negative, int \* overflow) <br> |
|  int | [**atoi**](#function-atoi) (const char \* str) <br> |
|  long | [**atol**](#function-atol) (const char \* str) <br> |
|  intmax\_t() | [**strtoimax**](#function-strtoimax) (const char \* nptr, char \*\* endptr, int base) <br> |
|  long | [**strtol**](#function-strtol) (const char \* str, char \*\* end, int base) <br> |
|  unsigned long | [**strtoul**](#function-strtoul) (const char \* str, char \*\* end, int base) <br> |
|  uintmax\_t() | [**strtoumax**](#function-strtoumax) (const char \* nptr, char \*\* endptr, int base) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**fetch**](strtoul_8c.md#define-fetch) () `([**count**](targimpl_8c.md#define-count)++, (\*ReadProc)(ReadProcArg, 0, \_\_GetAChar))		/\* mm 990325 \*/`<br> |
| define  | [**final\_state**](strtoul_8c.md#define-final_state) (scan\_state) `(scan\_state & (finished \| failure))`<br> |
| define  | [**success**](strtoul_8c.md#define-success) (scan\_state) `(scan\_state & (leading\_zero \| digit\_loop \| finished))`<br> |
| define  | [**unfetch**](strtoul_8c.md#define-unfetch) (c) `(\*ReadProc)(ReadProcArg, c, \_\_UngetAChar)				/\* mm 990325 \*/`<br> |

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




### function \_\_strtoul 

```C++
unsigned long __strtoul (
    int base,
    int max_width,
    int(*)(void *, int, int) ReadProc,
    void * ReadProcArg,
    int * chars_scanned,
    int * negative,
    int * overflow
) 
```




<hr>



### function atoi 

```C++
int atoi (
    const char * str
) 
```




<hr>



### function atol 

```C++
long atol (
    const char * str
) 
```




<hr>



### function strtoimax 

```C++
intmax_t() strtoimax (
    const char * nptr,
    char ** endptr,
    int base
) 
```




<hr>



### function strtol 

```C++
long strtol (
    const char * str,
    char ** end,
    int base
) 
```




<hr>



### function strtoul 

```C++
unsigned long strtoul (
    const char * str,
    char ** end,
    int base
) 
```




<hr>



### function strtoumax 

```C++
uintmax_t() strtoumax (
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
    
) `( count ++, (*ReadProc)(ReadProcArg, 0, __GetAChar))		/* mm 990325 */`
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
) `(*ReadProc)(ReadProcArg, c, __UngetAChar)				/* mm 990325 */`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Src/strtoul.c`

