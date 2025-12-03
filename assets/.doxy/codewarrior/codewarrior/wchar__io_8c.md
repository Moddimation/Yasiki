

# File wchar\_io.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Src**](dir_296ea1c022f8cfa02577b9a5b06211f5.md) **>** [**wchar\_io.c**](wchar__io_8c.md)

[Go to the source code of this file](wchar__io_8c_source.md)



* `#include <cstdio>`
* `#include "ansi_files.h"`
* `#include "wstdio.h"`
* `#include "wchar.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) | [**fgetwc**](#function-fgetwc) (FILE \* file) <br> |
|  [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* | [**fgetws**](#function-fgetws) ([**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* s, int n, FILE \* file) <br> |
|  [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) | [**fputwc**](#function-fputwc) ([**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) c, FILE \* file) <br> |
|  int | [**fputws**](#function-fputws) (const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* s, FILE \* file) <br> |
|  int | [**fwide**](#function-fwide) (FILE \* stream, int mode) <br> |
|  [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) | [**getwc**](#function-getwc) (FILE \* file) <br> |
|  [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) | [**getwchar**](#function-getwchar) (void) <br> |
|  [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) | [**putwc**](#function-putwc) ([**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) c, FILE \* file) <br> |
|  [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) | [**putwchar**](#function-putwchar) ([**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) c) <br> |
|  [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) | [**ungetwc**](#function-ungetwc) ([**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) c, FILE \* file) <br> |




























## Public Functions Documentation




### function fgetwc 

```C++
wchar_t fgetwc (
    FILE * file
) 
```




<hr>



### function fgetws 

```C++
wchar_t * fgetws (
    wchar_t * s,
    int n,
    FILE * file
) 
```




<hr>



### function fputwc 

```C++
wchar_t fputwc (
    wchar_t c,
    FILE * file
) 
```




<hr>



### function fputws 

```C++
int fputws (
    const wchar_t * s,
    FILE * file
) 
```




<hr>



### function fwide 

```C++
int fwide (
    FILE * stream,
    int mode
) 
```




<hr>



### function getwc 

```C++
wchar_t getwc (
    FILE * file
) 
```




<hr>



### function getwchar 

```C++
wchar_t getwchar (
    void
) 
```




<hr>



### function putwc 

```C++
wchar_t putwc (
    wchar_t c,
    FILE * file
) 
```




<hr>



### function putwchar 

```C++
wchar_t putwchar (
    wchar_t c
) 
```




<hr>



### function ungetwc 

```C++
wchar_t ungetwc (
    wchar_t c,
    FILE * file
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Src/wchar_io.c`

