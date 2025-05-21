

# File wprintf.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Include**](dir_3ffa88f97e35b066b52bd9bbaed6371b.md) **>** [**wprintf.h**](wprintf_8h.md)

[Go to the source code of this file](wprintf_8h_source.md)



* `#include <ansi_parms.h>`
* `#include <cstdio>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  int | [**fwprintf**](#function-fwprintf) (FILE \* file, const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* format, ...) <br> |
|  int | [**swprintf**](#function-swprintf) ([**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* s, [**size\_t**](size__t_8h.md#typedef-size_t) n, const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* format, ...) <br> |
|  int | [**vfwprintf**](#function-vfwprintf) (FILE \* file, const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* format\_str, [**va\_list**](structva__list.md) arg) <br> |
|  int | [**vswprintf**](#function-vswprintf) ([**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* s, [**size\_t**](size__t_8h.md#typedef-size_t) n, const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* format, [**va\_list**](structva__list.md) arg) <br> |
|  int | [**vwprintf**](#function-vwprintf) (const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* format, [**va\_list**](structva__list.md) arg) <br> |
|  int | [**wprintf**](#function-wprintf) (const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* format, ...) <br> |




























## Public Functions Documentation




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
    const wchar_t * format_str,
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

------------------------------
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Include/wprintf.h`

