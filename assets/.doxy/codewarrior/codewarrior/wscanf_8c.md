

# File wscanf.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Src**](dir_a72881c2e453fec2ff00fd48c42297a2.md) **>** [**wscanf.c**](wscanf_8c.md)

[Go to the source code of this file](wscanf_8c_source.md)



* `#include <ansi_parms.h>`
* `#include <cstdio>`
* `#include <cstddef>`
* `#include <cerrno>`
* `#include <climits>`
* `#include <cstdarg>`
* `#include <cstring>`
* `#include <string_io.h>`
* `#include <cstdlib>`
* `#include <wchar.h>`
* `#include <wctype.h>`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**scan\_format**](structscan__format.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| enum  | [**argument\_options**](#enum-argument_options)  <br> |
| typedef [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) | [**char\_map**](#typedef-char_map)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  int | [**\_\_vswscanf**](#function-__vswscanf) (const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* s, const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* format, [**va\_list**](structva__list.md) arg) <br> |
|  wint\_t | [**\_\_wFileRead**](#function-__wfileread) (void \* File, wint\_t ch, int Action) <br> |
|  wint\_t | [**\_\_wStringRead**](#function-__wstringread) (void \* isc, wint\_t ch, int Action) <br> |
|  int | [**fwscanf**](#function-fwscanf) (FILE \* file, const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* format, ...) <br> |
|  int | [**swscanf**](#function-swscanf) (const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* s, const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* format, ...) <br> |
|  int | [**vwscanf**](#function-vwscanf) (const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* format, [**va\_list**](structva__list.md) arg) <br> |
|  int | [**wscanf**](#function-wscanf) (const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* format, ...) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  int | [**\_\_wsformatter**](#function-__wsformatter) (wint\_t(\*)(void \*, wint\_t, int) wReadProc, void \* wReadProcArg, const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* format\_str, [**va\_list**](structva__list.md) arg) <br> |
|  const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* | [**parse\_format**](#function-parse_format) (const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* format\_string, [**scan\_format**](structscan__format.md) \* format) <br> |

























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**bad\_conversion**](wscanf_8c.md#define-bad_conversion)  `0xFFFF`<br> |
| define  | [**conversion\_buff\_size**](wscanf_8c.md#define-conversion_buff_size)  `512`<br> |
| define  | [**conversion\_max**](wscanf_8c.md#define-conversion_max)  `509`<br> |
| define  | [**set\_char\_map**](wscanf_8c.md#define-set_char_map) (map, ch) `map[ch&gt;&gt;3] \|= (1 &lt;&lt; (ch&7))`<br> |
| define  | [**tst\_char\_map**](wscanf_8c.md#define-tst_char_map) (map, ch) `(map[ch&gt;&gt;3] &  (1 &lt;&lt; (ch&7)))`<br> |

## Public Types Documentation




### enum argument\_options 

```C++
enum argument_options {
    normal_argument,
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
typedef wchar_t char_map[32];
```




<hr>
## Public Functions Documentation




### function \_\_vswscanf 

```C++
int __vswscanf (
    const wchar_t * s,
    const wchar_t * format,
    va_list arg
) 
```




<hr>



### function \_\_wFileRead 

```C++
wint_t __wFileRead (
    void * File,
    wint_t ch,
    int Action
) 
```




<hr>



### function \_\_wStringRead 

```C++
wint_t __wStringRead (
    void * isc,
    wint_t ch,
    int Action
) 
```




<hr>



### function fwscanf 

```C++
int fwscanf (
    FILE * file,
    const wchar_t * format,
    ...
) 
```




<hr>



### function swscanf 

```C++
int swscanf (
    const wchar_t * s,
    const wchar_t * format,
    ...
) 
```




<hr>



### function vwscanf 

```C++
int vwscanf (
    const wchar_t * format,
    va_list arg
) 
```




<hr>



### function wscanf 

```C++
int wscanf (
    const wchar_t * format,
    ...
) 
```




<hr>
## Public Static Functions Documentation




### function \_\_wsformatter 

```C++
static int __wsformatter (
    wint_t(*)(void *, wint_t, int) wReadProc,
    void * wReadProcArg,
    const wchar_t * format_str,
    va_list arg
) 
```




<hr>



### function parse\_format 

```C++
static const wchar_t * parse_format (
    const wchar_t * format_string,
    scan_format * format
) 
```




<hr>
## Macro Definition Documentation





### define bad\_conversion 

```C++
#define bad_conversion `0xFFFF`
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
) `map[ch>>3] |= (1 << (ch&7))`
```




<hr>



### define tst\_char\_map 

```C++
#define tst_char_map (
    map,
    ch
) `(map[ch>>3] &  (1 << (ch&7)))`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Src/wscanf.c`

