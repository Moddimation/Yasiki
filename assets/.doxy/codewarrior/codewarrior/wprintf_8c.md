

# File wprintf.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Src**](dir_a72881c2e453fec2ff00fd48c42297a2.md) **>** [**wprintf.c**](wprintf_8c.md)

[Go to the source code of this file](wprintf_8c_source.md)



* `#include <ansi_parms.h>`
* `#include <cerrno>`
* `#include <cstddef>`
* `#include <ansi_fp.h>`
* `#include <climits>`
* `#include <cstdarg>`
* `#include <cstdio>`
* `#include <cstdlib>`
* `#include <cstring>`
* `#include <string_io.h>`
* `#include <wchar.h>`
* `#include <wctype.h>`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**print\_format**](structprint__format.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| enum  | [**argument\_options**](#enum-argument_options)  <br> |
| enum  | [**justification\_options**](#enum-justification_options)  <br> |
| enum  | [**sign\_options**](#enum-sign_options)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  void \* | [**\_\_wFileWrite**](#function-__wfilewrite) (void \* File, const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* Buffer, [**size\_t**](size__t_8h.md#typedef-size_t) NumChars) <br> |
|  void \* | [**\_\_wStringWrite**](#function-__wstringwrite) (void \* wosc, const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* Buffer, [**size\_t**](size__t_8h.md#typedef-size_t) NumChars) <br> |
|  int | [**fwprintf**](#function-fwprintf) (FILE \* file, const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* format, ...) <br> |
|  int | [**swprintf**](#function-swprintf) ([**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* s, [**size\_t**](size__t_8h.md#typedef-size_t) n, const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* format, ...) <br> |
|  int | [**vfwprintf**](#function-vfwprintf) (FILE \* file, const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* format, [**va\_list**](structva__list.md) arg) <br> |
|  int | [**vswprintf**](#function-vswprintf) ([**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* s, [**size\_t**](size__t_8h.md#typedef-size_t) n, const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* format, [**va\_list**](structva__list.md) arg) <br> |
|  int | [**vwprintf**](#function-vwprintf) (const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* format, [**va\_list**](structva__list.md) arg) <br> |
|  int | [**wprintf**](#function-wprintf) (const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* format, ...) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  int | [**\_\_wpformatter**](#function-__wpformatter) (void \*(\*)(void \*, const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \*, [**size\_t**](size__t_8h.md#typedef-size_t)) wWriteProc, void \* WriteProcArg, const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* format\_str, [**va\_list**](structva__list.md) arg) <br> |
|  [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* | [**float2str**](#function-float2str) (long double num, [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* wbuff, [**print\_format**](structprint__format.md) format) <br> |
|  [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* | [**long2str**](#function-long2str) (long num, [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* buff, [**print\_format**](structprint__format.md) format) <br> |
|  const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* | [**parse\_format**](#function-parse_format) (const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* format\_string, [**va\_list**](structva__list.md) \* arg, [**print\_format**](structprint__format.md) \* format) <br> |
|  void | [**round\_decimal**](#function-round_decimal) ([**decimal**](structdecimal.md) \* dec, int new\_length) <br> |

























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**MAX\_SIG\_DIG**](wprintf_8c.md#define-max_sig_dig)  `32                  /\* mm 970609 \*/`<br> |
| define  | [**bad\_conversion**](wprintf_8c.md#define-bad_conversion)  `0xFF`<br> |
| define  | [**conversion\_buff\_size**](wprintf_8c.md#define-conversion_buff_size)  `512`<br> |
| define  | [**conversion\_max**](wprintf_8c.md#define-conversion_max)  `509`<br> |

## Public Types Documentation




### enum argument\_options 

```C++
enum argument_options {
    normal_argument,
    short_argument,
    long_argument,
    long_double_argument,
    wchar_argument
};
```




<hr>



### enum justification\_options 

```C++
enum justification_options {
    left_justification,
    right_justification,
    zero_fill
};
```




<hr>



### enum sign\_options 

```C++
enum sign_options {
    only_minus,
    sign_always,
    space_holder
};
```




<hr>
## Public Functions Documentation




### function \_\_wFileWrite 

```C++
void * __wFileWrite (
    void * File,
    const wchar_t * Buffer,
    size_t NumChars
) 
```




<hr>



### function \_\_wStringWrite 

```C++
void * __wStringWrite (
    void * wosc,
    const wchar_t * Buffer,
    size_t NumChars
) 
```




<hr>



### function fwprintf 

```C++
int fwprintf (
    FILE * file,
    const wchar_t * format,
    ...
) 
```




<hr>



### function swprintf 

```C++
int swprintf (
    wchar_t * s,
    size_t n,
    const wchar_t * format,
    ...
) 
```




<hr>



### function vfwprintf 

```C++
int vfwprintf (
    FILE * file,
    const wchar_t * format,
    va_list arg
) 
```




<hr>



### function vswprintf 

```C++
int vswprintf (
    wchar_t * s,
    size_t n,
    const wchar_t * format,
    va_list arg
) 
```




<hr>



### function vwprintf 

```C++
int vwprintf (
    const wchar_t * format,
    va_list arg
) 
```




<hr>



### function wprintf 

```C++
int wprintf (
    const wchar_t * format,
    ...
) 
```




<hr>
## Public Static Functions Documentation




### function \_\_wpformatter 

```C++
static int __wpformatter (
    void *(*)(void *, const wchar_t *, size_t ) wWriteProc,
    void * WriteProcArg,
    const wchar_t * format_str,
    va_list arg
) 
```




<hr>



### function float2str 

```C++
static wchar_t * float2str (
    long double num,
    wchar_t * wbuff,
    print_format format
) 
```




<hr>



### function long2str 

```C++
static wchar_t * long2str (
    long num,
    wchar_t * buff,
    print_format format
) 
```




<hr>



### function parse\_format 

```C++
static const wchar_t * parse_format (
    const wchar_t * format_string,
    va_list * arg,
    print_format * format
) 
```




<hr>



### function round\_decimal 

```C++
static void round_decimal (
    decimal * dec,
    int new_length
) 
```




<hr>
## Macro Definition Documentation





### define MAX\_SIG\_DIG 

```C++
#define MAX_SIG_DIG `32                  /* mm 970609 */`
```




<hr>



### define bad\_conversion 

```C++
#define bad_conversion `0xFF`
```




<hr>



### define conversion\_buff\_size 

```C++
#define conversion_buff_size `512`
```




<hr>



### define conversion\_max 

```C++
#define conversion_max `509`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Src/wprintf.c`

