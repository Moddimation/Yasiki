

# File printf.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Src**](dir_296ea1c022f8cfa02577b9a5b06211f5.md) **>** [**printf.c**](printf_8c.md)

[Go to the source code of this file](printf_8c_source.md)



* `#include <ansi_fp.h>`
* `#include <ctype.h>`
* `#include <float.h>`
* `#include <limits.h>`
* `#include <stdarg.h>`
* `#include <stdio.h>`
* `#include <string.h>`
* `#include <cstdlib>`
* `#include "string_io.h"`















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
|  void \* | [**\_\_FileWrite**](#function-__filewrite) (void \* File, const char \* Buffer, [**size\_t**](size__t_8h.md#typedef-size_t) NumChars) <br> |
|  void \* | [**\_\_StringWrite**](#function-__stringwrite) (void \* osc, const char \* Buffer, [**size\_t**](size__t_8h.md#typedef-size_t) NumChars) <br> |
|  int | [**fprintf**](#function-fprintf) (FILE \* file, const char \* format, ...) <br> |
|  int | [**snprintf**](#function-snprintf) (char \* s, [**size\_t**](size__t_8h.md#typedef-size_t) n, const char \* format, ...) <br> |
|  int | [**vfprintf**](#function-vfprintf) (FILE \* file, const char \* format, [**va\_list**](structva__list.md) arg) <br> |
|  int | [**vprintf**](#function-vprintf) (const char \* format, [**va\_list**](structva__list.md) arg) <br> |
|  int | [**vsnprintf**](#function-vsnprintf) (char \* s, [**size\_t**](size__t_8h.md#typedef-size_t) n, const char \* format, [**va\_list**](structva__list.md) arg) <br> |
|  int | [**vsprintf**](#function-vsprintf) (char \* s, const char \* format, [**va\_list**](structva__list.md) arg) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  int | [**\_\_pformatter**](#function-__pformatter) (void \*(\*)(void \*, const char \*, [**size\_t**](size__t_8h.md#typedef-size_t)) WriteProc, void \* WriteProcArg, const char \* format\_str, [**va\_list**](structva__list.md) arg) <br> |
|  char \* | [**float2str**](#function-float2str) ([**va\_list**](structva__list.md) arg, char \* buff, [**print\_format**](structprint__format.md) \* format, int vecIndex) <br> |
|  char \* | [**long2str**](#function-long2str) (long num, char \* buff, [**print\_format**](structprint__format.md) \* format) <br> |
|  const char \* | [**parse\_format**](#function-parse_format) (const char \* format\_string, [**va\_list**](structva__list.md) \* arg, [**print\_format**](structprint__format.md) \* format) <br> |
|  void | [**round\_decimal**](#function-round_decimal) ([**decimal**](structdecimal.md) \* dec, int new\_length) <br> |

























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**MAX\_SIG\_DIG**](printf_8c.md#define-max_sig_dig)  `32                  /\* mm 970609 \*/`<br> |
| define  | [**bad\_conversion**](printf_8c.md#define-bad_conversion)  `0xFF`<br> |
| define  | [**conversion\_buff\_size**](printf_8c.md#define-conversion_buff_size)  `512`<br> |
| define  | [**conversion\_max**](printf_8c.md#define-conversion_max)  `509`<br> |

## Public Types Documentation




### enum argument\_options 

```C++
enum argument_options {
    normal_argument,
    char_argument,
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




### function \_\_FileWrite 

```C++
void * __FileWrite (
    void * File,
    const char * Buffer,
    size_t NumChars
) 
```




<hr>



### function \_\_StringWrite 

```C++
void * __StringWrite (
    void * osc,
    const char * Buffer,
    size_t NumChars
) 
```




<hr>



### function fprintf 

```C++
int fprintf (
    FILE * file,
    const char * format,
    ...
) 
```




<hr>



### function snprintf 

```C++
int snprintf (
    char * s,
    size_t n,
    const char * format,
    ...
) 
```




<hr>



### function vfprintf 

```C++
int vfprintf (
    FILE * file,
    const char * format,
    va_list arg
) 
```




<hr>



### function vprintf 

```C++
int vprintf (
    const char * format,
    va_list arg
) 
```




<hr>



### function vsnprintf 

```C++
int vsnprintf (
    char * s,
    size_t n,
    const char * format,
    va_list arg
) 
```




<hr>



### function vsprintf 

```C++
int vsprintf (
    char * s,
    const char * format,
    va_list arg
) 
```




<hr>
## Public Static Functions Documentation




### function \_\_pformatter 

```C++
static int __pformatter (
    void *(*)(void *, const char *, size_t ) WriteProc,
    void * WriteProcArg,
    const char * format_str,
    va_list arg
) 
```




<hr>



### function float2str 

```C++
static char * float2str (
    va_list arg,
    char * buff,
    print_format * format,
    int vecIndex
) 
```




<hr>



### function long2str 

```C++
static char * long2str (
    long num,
    char * buff,
    print_format * format
) 
```




<hr>



### function parse\_format 

```C++
static const char * parse_format (
    const char * format_string,
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
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Src/printf.c`

