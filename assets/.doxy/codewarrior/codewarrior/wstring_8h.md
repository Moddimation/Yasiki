

# File wstring.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Include**](dir_27c31b18688c2d3b7fe1d239b44a1620.md) **>** [**wstring.h**](wstring_8h.md)

[Go to the source code of this file](wstring_8h_source.md)



* `#include <ansi_parms.h>`
* `#include <cstddef>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* | [**wcscat**](#function-wcscat) ([**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* dst, const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* src) <br> |
|  [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* | [**wcschr**](#function-wcschr) (const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* str, const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) chr) <br> |
|  int | [**wcscmp**](#function-wcscmp) (const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* str1, const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* str2) <br> |
|  int | [**wcscoll**](#function-wcscoll) (const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* str1, const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* str2) <br> |
|  [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \*() | [**wcscpy**](#function-wcscpy) ([**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* dst, const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* src) <br> |
|  [**size\_t**](size__t_8h.md#typedef-size_t) | [**wcscspn**](#function-wcscspn) (const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* str, const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* set) <br> |
|  [**size\_t**](size__t_8h.md#typedef-size_t)() | [**wcslen**](#function-wcslen) (const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* str) <br> |
|  [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* | [**wcsncat**](#function-wcsncat) ([**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* dst, const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* src, [**size\_t**](size__t_8h.md#typedef-size_t) n) <br> |
|  int | [**wcsncmp**](#function-wcsncmp) (const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* str1, const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* str2, [**size\_t**](size__t_8h.md#typedef-size_t) n) <br> |
|  [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* | [**wcsncpy**](#function-wcsncpy) ([**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* dst, const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* src, [**size\_t**](size__t_8h.md#typedef-size_t) n) <br> |
|  [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* | [**wcspbrk**](#function-wcspbrk) (const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* str, const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* set) <br> |
|  [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* | [**wcsrchr**](#function-wcsrchr) (const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* str, [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) chr) <br> |
|  [**size\_t**](size__t_8h.md#typedef-size_t) | [**wcsspn**](#function-wcsspn) (const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* str, const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* set) <br> |
|  [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* | [**wcsstr**](#function-wcsstr) (const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* str, const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* pat) <br> |
|  [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* | [**wcstok**](#function-wcstok) ([**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* str, const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* set) <br> |
|  [**size\_t**](size__t_8h.md#typedef-size_t) | [**wcsxfrm**](#function-wcsxfrm) ([**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* str1, const [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) \* str2, [**size\_t**](size__t_8h.md#typedef-size_t) n) <br> |




























## Public Functions Documentation




### function wcscat 

```C++
wchar_t * wcscat (
    wchar_t * dst,
    const wchar_t * src
) 
```




<hr>



### function wcschr 

```C++
wchar_t * wcschr (
    const wchar_t * str,
    const wchar_t chr
) 
```




<hr>



### function wcscmp 

```C++
int wcscmp (
    const wchar_t * str1,
    const wchar_t * str2
) 
```




<hr>



### function wcscoll 

```C++
int wcscoll (
    const wchar_t * str1,
    const wchar_t * str2
) 
```




<hr>



### function wcscpy 

```C++
wchar_t *() wcscpy (
    wchar_t * dst,
    const wchar_t * src
) 
```




<hr>



### function wcscspn 

```C++
size_t wcscspn (
    const wchar_t * str,
    const wchar_t * set
) 
```




<hr>



### function wcslen 

```C++
size_t () wcslen (
    const wchar_t * str
) 
```




<hr>



### function wcsncat 

```C++
wchar_t * wcsncat (
    wchar_t * dst,
    const wchar_t * src,
    size_t n
) 
```




<hr>



### function wcsncmp 

```C++
int wcsncmp (
    const wchar_t * str1,
    const wchar_t * str2,
    size_t n
) 
```




<hr>



### function wcsncpy 

```C++
wchar_t * wcsncpy (
    wchar_t * dst,
    const wchar_t * src,
    size_t n
) 
```




<hr>



### function wcspbrk 

```C++
wchar_t * wcspbrk (
    const wchar_t * str,
    const wchar_t * set
) 
```




<hr>



### function wcsrchr 

```C++
wchar_t * wcsrchr (
    const wchar_t * str,
    wchar_t chr
) 
```




<hr>



### function wcsspn 

```C++
size_t wcsspn (
    const wchar_t * str,
    const wchar_t * set
) 
```




<hr>



### function wcsstr 

```C++
wchar_t * wcsstr (
    const wchar_t * str,
    const wchar_t * pat
) 
```




<hr>



### function wcstok 

```C++
wchar_t * wcstok (
    wchar_t * str,
    const wchar_t * set
) 
```




<hr>



### function wcsxfrm 

```C++
size_t wcsxfrm (
    wchar_t * str1,
    const wchar_t * str2,
    size_t n
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Include/wstring.h`

