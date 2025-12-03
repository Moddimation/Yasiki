

# File mbstring.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Src**](dir_296ea1c022f8cfa02577b9a5b06211f5.md) **>** [**mbstring.c**](mbstring_8c.md)

[Go to the source code of this file](mbstring_8c_source.md)



* `#include <stdlib.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  int | [**mblen**](#function-mblen) (const char \* s, [**size\_t**](size__t_8h.md#typedef-size_t) n) <br> |
|  [**size\_t**](size__t_8h.md#typedef-size_t) | [**mbstowcs**](#function-mbstowcs) ([**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* pwcs, const char \* s, [**size\_t**](size__t_8h.md#typedef-size_t) n) <br> |
|  int | [**mbtowc**](#function-mbtowc) ([**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* pwc, const char \* s, [**size\_t**](size__t_8h.md#typedef-size_t) n) <br> |
|  [**size\_t**](size__t_8h.md#typedef-size_t) | [**wcstombs**](#function-wcstombs) (char \* s, const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* pwcs, [**size\_t**](size__t_8h.md#typedef-size_t) n) <br> |
|  int | [**wctomb**](#function-wctomb) (char \* s, [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) wchar) <br> |




























## Public Functions Documentation




### function mblen 

```C++
int mblen (
    const char * s,
    size_t n
) 
```




<hr>



### function mbstowcs 

```C++
size_t mbstowcs (
    wchar_t * pwcs,
    const char * s,
    size_t n
) 
```




<hr>



### function mbtowc 

```C++
int mbtowc (
    wchar_t * pwc,
    const char * s,
    size_t n
) 
```




<hr>



### function wcstombs 

```C++
size_t wcstombs (
    char * s,
    const wchar_t * pwcs,
    size_t n
) 
```




<hr>



### function wctomb 

```C++
int wctomb (
    char * s,
    wchar_t wchar
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Src/mbstring.c`

