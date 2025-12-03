

# File string.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Src**](dir_296ea1c022f8cfa02577b9a5b06211f5.md) **>** [**string.c**](string_8c.md)

[Go to the source code of this file](string_8c_source.md)



* `#include <errno.h>`
* `#include <stdio.h>`
* `#include <string.h>`
* `#include <ThreadLocalData.h>`

















## Public Types

| Type | Name |
| ---: | :--- |
| typedef unsigned char | [**char\_map**](#typedef-char_map)  <br> |






## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  int | [**K1**](#variable-k1)   = `0x80808080`<br> |
|  int | [**K2**](#variable-k2)   = `0xfefefeff`<br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  char \* | [**\_\_strerror**](#function-__strerror) (int errnum, char \* str) <br> |
|  char \* | [**strcat**](#function-strcat) (char \* dst, const char \* src) <br> |
|  int | [**strcmp**](#function-strcmp) (const char \* str1, const char \* str2) <br> |
|  int | [**strcoll**](#function-strcoll) (const char \* str1, const char \* str2) <br> |
|  char \*() | [**strcpy**](#function-strcpy) (char \* dst, const char \* src) <br> |
|  [**size\_t**](size__t_8h.md#typedef-size_t) | [**strcspn**](#function-strcspn) (const char \* str, const char \* set) <br> |
|  char \* | [**strerror**](#function-strerror) (int errnum) <br> |
|  char \* | [**strncat**](#function-strncat) (char \* dst, const char \* src, [**size\_t**](size__t_8h.md#typedef-size_t) n) <br> |
|  int | [**strncmp**](#function-strncmp) (const char \* str1, const char \* str2, [**size\_t**](size__t_8h.md#typedef-size_t) n) <br> |
|  char \* | [**strncpy**](#function-strncpy) (char \* dst, const char \* src, [**size\_t**](size__t_8h.md#typedef-size_t) n) <br> |
|  char \* | [**strpbrk**](#function-strpbrk) (const char \* str, const char \* set) <br> |
|  char \* | [**strrchr**](#function-strrchr) (const char \* str, int chr) <br> |
|  [**size\_t**](size__t_8h.md#typedef-size_t) | [**strspn**](#function-strspn) (const char \* str, const char \* set) <br> |
|  char \* | [**strstr**](#function-strstr) (const char \* str, const char \* pat) <br> |
|  char \* | [**strtok**](#function-strtok) (char \* str, const char \* set) <br> |
|  [**size\_t**](size__t_8h.md#typedef-size_t) | [**strxfrm**](#function-strxfrm) (char \* str1, const char \* str2, [**size\_t**](size__t_8h.md#typedef-size_t) n) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**set\_char\_map**](string_8c.md#define-set_char_map) (map, ch) `map[ch&gt;&gt;3] \|= (1 &lt;&lt; (ch&7))`<br> |
| define  | [**tst\_char\_map**](string_8c.md#define-tst_char_map) (map, ch) `(map[ch&gt;&gt;3] &  (1 &lt;&lt; (ch&7)))`<br> |

## Public Types Documentation




### typedef char\_map 

```C++
typedef unsigned char char_map[32];
```




<hr>
## Public Static Attributes Documentation




### variable K1 

```C++
int K1;
```




<hr>



### variable K2 

```C++
int K2;
```




<hr>
## Public Functions Documentation




### function \_\_strerror 

```C++
char * __strerror (
    int errnum,
    char * str
) 
```




<hr>



### function strcat 

```C++
char * strcat (
    char * dst,
    const char * src
) 
```




<hr>



### function strcmp 

```C++
int strcmp (
    const char * str1,
    const char * str2
) 
```




<hr>



### function strcoll 

```C++
int strcoll (
    const char * str1,
    const char * str2
) 
```




<hr>



### function strcpy 

```C++
char *() strcpy (
    char * dst,
    const char * src
) 
```




<hr>



### function strcspn 

```C++
size_t strcspn (
    const char * str,
    const char * set
) 
```




<hr>



### function strerror 

```C++
char * strerror (
    int errnum
) 
```




<hr>



### function strncat 

```C++
char * strncat (
    char * dst,
    const char * src,
    size_t n
) 
```




<hr>



### function strncmp 

```C++
int strncmp (
    const char * str1,
    const char * str2,
    size_t n
) 
```




<hr>



### function strncpy 

```C++
char * strncpy (
    char * dst,
    const char * src,
    size_t n
) 
```




<hr>



### function strpbrk 

```C++
char * strpbrk (
    const char * str,
    const char * set
) 
```




<hr>



### function strrchr 

```C++
char * strrchr (
    const char * str,
    int chr
) 
```




<hr>



### function strspn 

```C++
size_t strspn (
    const char * str,
    const char * set
) 
```




<hr>



### function strstr 

```C++
char * strstr (
    const char * str,
    const char * pat
) 
```




<hr>



### function strtok 

```C++
char * strtok (
    char * str,
    const char * set
) 
```




<hr>



### function strxfrm 

```C++
size_t strxfrm (
    char * str1,
    const char * str2,
    size_t n
) 
```




<hr>
## Macro Definition Documentation





### define set\_char\_map 

```C++
#define set_char_map (
    map,
    ch
) `map[ch>>3] |= (1 << (ch&7))`
```




<hr>



### define tst\_char\_map 

```C++
#define tst_char_map (
    map,
    ch
) `(map[ch>>3] &  (1 << (ch&7)))`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Src/string.c`

