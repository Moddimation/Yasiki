

# File wscanf.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Include**](dir_3ffa88f97e35b066b52bd9bbaed6371b.md) **>** [**wscanf.h**](wscanf_8h.md)

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
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Include/wscanf.h`

