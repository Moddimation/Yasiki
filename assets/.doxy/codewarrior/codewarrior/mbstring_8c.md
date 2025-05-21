

# File mbstring.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Src**](dir_a72881c2e453fec2ff00fd48c42297a2.md) **>** [**mbstring.c**](mbstring_8c.md)

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
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Src/mbstring.c`

