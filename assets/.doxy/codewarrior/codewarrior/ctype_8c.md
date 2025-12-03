

# File ctype.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Src**](dir_296ea1c022f8cfa02577b9a5b06211f5.md) **>** [**ctype.c**](ctype_8c.md)

[Go to the source code of this file](ctype_8c_source.md)



* `#include <ctype.h>`
* `#include <stdio.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  const unsigned char | [**\_\_ctype\_map**](#variable-__ctype_map)  <br> |
|  const unsigned char | [**\_\_lower\_map**](#variable-__lower_map)   = `/* multi line expression */`<br> |
|  const unsigned char | [**\_\_upper\_map**](#variable-__upper_map)   = `/* multi line expression */`<br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  int() | [**isalnum**](#function-isalnum) (int c) <br> |
|  int() | [**isalpha**](#function-isalpha) (int c) <br> |
|  int() | [**iscntrl**](#function-iscntrl) (int c) <br> |
|  int() | [**isdigit**](#function-isdigit) (int c) <br> |
|  int() | [**isgraph**](#function-isgraph) (int c) <br> |
|  int() | [**islower**](#function-islower) (int c) <br> |
|  int() | [**isprint**](#function-isprint) (int c) <br> |
|  int() | [**ispunct**](#function-ispunct) (int c) <br> |
|  int() | [**isspace**](#function-isspace) (int c) <br> |
|  int() | [**isupper**](#function-isupper) (int c) <br> |
|  int() | [**isxdigit**](#function-isxdigit) (int c) <br> |
|  int | [**tolower**](#function-tolower) (int c) <br> |
|  int | [**toupper**](#function-toupper) (int c) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**ctrl**](ctype_8c.md#define-ctrl)  `\_\_control\_char`<br> |
| define  | [**dhex**](ctype_8c.md#define-dhex)  `([**hexd**](ctype_8c.md#define-hexd) \| [**digi**](ctype_8c.md#define-digi))`<br> |
| define  | [**digi**](ctype_8c.md#define-digi)  `\_\_digit`<br> |
| define  | [**hexd**](ctype_8c.md#define-hexd)  `\_\_hex\_digit`<br> |
| define  | [**lhex**](ctype_8c.md#define-lhex)  `([**hexd**](ctype_8c.md#define-hexd) \| [**lowc**](ctype_8c.md#define-lowc))`<br> |
| define  | [**lowc**](ctype_8c.md#define-lowc)  `\_\_lower\_case`<br> |
| define  | [**motn**](ctype_8c.md#define-motn)  `\_\_motion\_char`<br> |
| define  | [**punc**](ctype_8c.md#define-punc)  `\_\_punctuation`<br> |
| define  | [**spac**](ctype_8c.md#define-spac)  `\_\_space\_char`<br> |
| define  | [**uhex**](ctype_8c.md#define-uhex)  `([**hexd**](ctype_8c.md#define-hexd) \| [**uppc**](ctype_8c.md#define-uppc))`<br> |
| define  | [**uppc**](ctype_8c.md#define-uppc)  `\_\_upper\_case`<br> |

## Public Attributes Documentation




### variable \_\_ctype\_map 

```C++
const unsigned char __ctype_map[256];
```




<hr>



### variable \_\_lower\_map 

```C++
const unsigned char __lower_map[256];
```




<hr>



### variable \_\_upper\_map 

```C++
const unsigned char __upper_map[256];
```




<hr>
## Public Functions Documentation




### function isalnum 

```C++
int() isalnum (
    int c
) 
```




<hr>



### function isalpha 

```C++
int() isalpha (
    int c
) 
```




<hr>



### function iscntrl 

```C++
int() iscntrl (
    int c
) 
```




<hr>



### function isdigit 

```C++
int() isdigit (
    int c
) 
```




<hr>



### function isgraph 

```C++
int() isgraph (
    int c
) 
```




<hr>



### function islower 

```C++
int() islower (
    int c
) 
```




<hr>



### function isprint 

```C++
int() isprint (
    int c
) 
```




<hr>



### function ispunct 

```C++
int() ispunct (
    int c
) 
```




<hr>



### function isspace 

```C++
int() isspace (
    int c
) 
```




<hr>



### function isupper 

```C++
int() isupper (
    int c
) 
```




<hr>



### function isxdigit 

```C++
int() isxdigit (
    int c
) 
```




<hr>



### function tolower 

```C++
int tolower (
    int c
) 
```




<hr>



### function toupper 

```C++
int toupper (
    int c
) 
```




<hr>
## Macro Definition Documentation





### define ctrl 

```C++
#define ctrl `__control_char`
```




<hr>



### define dhex 

```C++
#define dhex `( hexd | digi )`
```




<hr>



### define digi 

```C++
#define digi `__digit`
```




<hr>



### define hexd 

```C++
#define hexd `__hex_digit`
```




<hr>



### define lhex 

```C++
#define lhex `( hexd | lowc )`
```




<hr>



### define lowc 

```C++
#define lowc `__lower_case`
```




<hr>



### define motn 

```C++
#define motn `__motion_char`
```




<hr>



### define punc 

```C++
#define punc `__punctuation`
```




<hr>



### define spac 

```C++
#define spac `__space_char`
```




<hr>



### define uhex 

```C++
#define uhex `( hexd | uppc )`
```




<hr>



### define uppc 

```C++
#define uppc `__upper_case`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Src/ctype.c`

