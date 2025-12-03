

# File wprintf.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Include**](dir_27c31b18688c2d3b7fe1d239b44a1620.md) **>** [**wprintf.h**](wprintf_8h.md)

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
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Include/wprintf.h`

