

# File wscanf.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Include**](dir_27c31b18688c2d3b7fe1d239b44a1620.md) **>** [**wscanf.h**](wscanf_8h.md)

[Go to the source code of this file](wscanf_8h_source.md)



* `#include <ansi_parms.h>`
* `#include <cstdio>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  int | [**\_\_vfwscanf**](#function-__vfwscanf) (FILE \* file, const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* format\_str, [**va\_list**](structva__list.md) arg) <br> |
|  int | [**\_\_vswscanf**](#function-__vswscanf) (const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* s, const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* format, [**va\_list**](structva__list.md) arg) <br> |
|  int | [**fwscanf**](#function-fwscanf) (FILE \* file, const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* format, ...) <br> |
|  int | [**swscanf**](#function-swscanf) (const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* s, const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* format, ...) <br> |
|  int | [**vwscanf**](#function-vwscanf) (const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* format, [**va\_list**](structva__list.md) arg) <br> |
|  int | [**wscanf**](#function-wscanf) (const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* format, ...) <br> |




























## Public Functions Documentation




### function \_\_vfwscanf 

```C++
int __vfwscanf (
    FILE * file,
    const wchar_t * format_str,
    va_list arg
) 
```




<hr>



### function \_\_vswscanf 

```C++
int __vswscanf (
    const wchar_t * s,
    const wchar_t * format,
    va_list arg
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

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Include/wscanf.h`

