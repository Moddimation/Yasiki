

# File scanf.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Src**](dir_296ea1c022f8cfa02577b9a5b06211f5.md) **>** [**scanf.c**](scanf_8c.md)

[Go to the source code of this file](scanf_8c_source.md)



* `#include <ansi_fp.h>`
* `#include <ctype.h>`
* `#include <errno.h>`
* `#include <float.h>`
* `#include <limits.h>`
* `#include <stdarg.h>`
* `#include <stdio.h>`
* `#include <stdlib.h>`
* `#include <string.h>`
* `#include "string_io.h"`
* `#include "strtold.h"`
* `#include "strtoul.h"`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**scan\_format**](structscan__format.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| enum  | [**argument\_options**](#enum-argument_options)  <br> |
| typedef unsigned char | [**char\_map**](#typedef-char_map)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  int | [**\_\_FileRead**](#function-__fileread) (void \* File, int ch, int Action) <br> |
|  int | [**\_\_StringRead**](#function-__stringread) (void \* isc, int ch, int Action) <br> |
|  int | [**\_\_vsscanf**](#function-__vsscanf) (const char \* s, const char \* format, [**va\_list**](structva__list.md) arg) <br> |
|  int | [**fscanf**](#function-fscanf) (FILE \* file, const char \* format, ...) <br> |
|  int | [**scanf**](#function-scanf) (const char \* format, ...) <br> |
|  int | [**sscanf**](#function-sscanf) (const char \* s, const char \* format, ...) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  int | [**\_\_sformatter**](#function-__sformatter) (int(\*)(void \*, int, int) ReadProc, void \* ReadProcArg, const char \* format\_str, [**va\_list**](structva__list.md) arg) <br> |
|  const char \* | [**parse\_format**](#function-parse_format) (const char \* format\_string, [**scan\_format**](structscan__format.md) \* format) <br> |

























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**bad\_conversion**](scanf_8c.md#define-bad_conversion)  `0xFF`<br> |
| define  | [**conversion\_buff\_size**](scanf_8c.md#define-conversion_buff_size)  `512`<br> |
| define  | [**conversion\_max**](scanf_8c.md#define-conversion_max)  `509`<br> |
| define  | [**set\_char\_map**](scanf_8c.md#define-set_char_map) (map, ch) `map[(unsigned char)ch&gt;&gt;3] \|= (1 &lt;&lt; (ch&7))			/\* mm 990716 \*/`<br> |
| define  | [**tst\_char\_map**](scanf_8c.md#define-tst_char_map) (map, ch) `(map[(unsigned char)ch&gt;&gt;3] &  (1 &lt;&lt; (ch&7)))			/\* mm 990716 \*/`<br> |

## Public Types Documentation




### enum argument\_options 

```C++
enum argument_options {
    normal_argument,
    char_argument,
    short_argument,
    long_argument,
    long_long_argument,
    double_argument,
    long_double_argument,
    wchar_argument
};
```




<hr>



### typedef char\_map 

```C++
typedef unsigned char char_map[32];
```




<hr>
## Public Functions Documentation




### function \_\_FileRead 

```C++
int __FileRead (
    void * File,
    int ch,
    int Action
) 
```




<hr>



### function \_\_StringRead 

```C++
int __StringRead (
    void * isc,
    int ch,
    int Action
) 
```




<hr>



### function \_\_vsscanf 

```C++
int __vsscanf (
    const char * s,
    const char * format,
    va_list arg
) 
```




<hr>



### function fscanf 

```C++
int fscanf (
    FILE * file,
    const char * format,
    ...
) 
```




<hr>



### function scanf 

```C++
int scanf (
    const char * format,
    ...
) 
```




<hr>



### function sscanf 

```C++
int sscanf (
    const char * s,
    const char * format,
    ...
) 
```




<hr>
## Public Static Functions Documentation




### function \_\_sformatter 

```C++
static int __sformatter (
    int(*)(void *, int, int) ReadProc,
    void * ReadProcArg,
    const char * format_str,
    va_list arg
) 
```




<hr>



### function parse\_format 

```C++
static const char * parse_format (
    const char * format_string,
    scan_format * format
) 
```




<hr>
## Macro Definition Documentation





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



### define set\_char\_map 

```C++
#define set_char_map (
    map,
    ch
) `map[(unsigned char)ch>>3] |= (1 << (ch&7))			/* mm 990716 */`
```




<hr>



### define tst\_char\_map 

```C++
#define tst_char_map (
    map,
    ch
) `(map[(unsigned char)ch>>3] &  (1 << (ch&7)))			/* mm 990716 */`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Src/scanf.c`

