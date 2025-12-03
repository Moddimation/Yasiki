

# File wctype.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Src**](dir_296ea1c022f8cfa02577b9a5b06211f5.md) **>** [**wctype.c**](wctype_8c.md)

[Go to the source code of this file](wctype_8c_source.md)



* `#include <cstdio>`
* `#include <wctype.h>`
* `#include <string.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) | [**\_\_wctype\_map**](#variable-__wctype_map)  <br> |
|  [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) | [**\_\_wlower\_map**](#variable-__wlower_map)   = `/* multi line expression */`<br> |
|  [**wchar\_t**](wchar__t_8h.md#typedef-wchar_t) | [**\_\_wupper\_map**](#variable-__wupper_map)   = `/* multi line expression */`<br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  int | [**iswctype**](#function-iswctype) (wint\_t wc, wctype\_t desc) <br> |
|  wctype\_t | [**wctype**](#function-wctype) (const char \* property) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**wctrl**](wctype_8c.md#define-wctrl)  `\_\_wcontrol\_char`<br> |
| define  | [**wdhex**](wctype_8c.md#define-wdhex)  `([**whexd**](wctype_8c.md#define-whexd) \| [**wdigi**](wctype_8c.md#define-wdigi))`<br> |
| define  | [**wdigi**](wctype_8c.md#define-wdigi)  `\_\_wdigit`<br> |
| define  | [**whexd**](wctype_8c.md#define-whexd)  `\_\_whex\_digit`<br> |
| define  | [**wlhex**](wctype_8c.md#define-wlhex)  `([**whexd**](wctype_8c.md#define-whexd) \| [**wlowc**](wctype_8c.md#define-wlowc))`<br> |
| define  | [**wlowc**](wctype_8c.md#define-wlowc)  `\_\_wlower\_case`<br> |
| define  | [**wmotn**](wctype_8c.md#define-wmotn)  `\_\_wmotion\_char`<br> |
| define  | [**wpunc**](wctype_8c.md#define-wpunc)  `\_\_wpunctuation`<br> |
| define  | [**wspac**](wctype_8c.md#define-wspac)  `\_\_wspace\_char`<br> |
| define  | [**wuhex**](wctype_8c.md#define-wuhex)  `([**whexd**](wctype_8c.md#define-whexd) \| [**wuppc**](wctype_8c.md#define-wuppc))`<br> |
| define  | [**wuppc**](wctype_8c.md#define-wuppc)  `\_\_wupper\_case`<br> |

## Public Attributes Documentation




### variable \_\_wctype\_map 

```C++
wchar_t __wctype_map[__WCMAP_SIZE];
```




<hr>



### variable \_\_wlower\_map 

```C++
wchar_t __wlower_map[__WCMAP_SIZE];
```




<hr>



### variable \_\_wupper\_map 

```C++
wchar_t __wupper_map[__WCMAP_SIZE];
```




<hr>
## Public Functions Documentation




### function iswctype 

```C++
int iswctype (
    wint_t wc,
    wctype_t desc
) 
```




<hr>



### function wctype 

```C++
wctype_t wctype (
    const char * property
) 
```




<hr>
## Macro Definition Documentation





### define wctrl 

```C++
#define wctrl `__wcontrol_char`
```




<hr>



### define wdhex 

```C++
#define wdhex `( whexd | wdigi )`
```




<hr>



### define wdigi 

```C++
#define wdigi `__wdigit`
```




<hr>



### define whexd 

```C++
#define whexd `__whex_digit`
```




<hr>



### define wlhex 

```C++
#define wlhex `( whexd | wlowc )`
```




<hr>



### define wlowc 

```C++
#define wlowc `__wlower_case`
```




<hr>



### define wmotn 

```C++
#define wmotn `__wmotion_char`
```




<hr>



### define wpunc 

```C++
#define wpunc `__wpunctuation`
```




<hr>



### define wspac 

```C++
#define wspac `__wspace_char`
```




<hr>



### define wuhex 

```C++
#define wuhex `( whexd | wuppc )`
```




<hr>



### define wuppc 

```C++
#define wuppc `__wupper_case`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Src/wctype.c`

