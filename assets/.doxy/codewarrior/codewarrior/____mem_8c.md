

# File \_\_mem.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Runtime**](dir_e69745e3285a8d4f155d29d88e1a7b6b.md) **>** [**Src**](dir_1789e36d750963f536ec280b459db2bf.md) **>** [**\_\_mem.c**](____mem_8c.md)

[Go to the source code of this file](____mem_8c_source.md)



* `#include <__mem.h>`
* `#include <string.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**\_\_fill\_mem**](#function-__fill_mem) (void \* dst, int val, unsigned long n) <br> |
|  void \* | [**memcpy**](#function-memcpy) (void \* dst, const void \* src, [**size\_t**](size__t_8h.md#typedef-size_t) n) <br> |
|  void \* | [**memset**](#function-memset) (void \* dst, int val, [**size\_t**](size__t_8h.md#typedef-size_t) n) <br> |
|  [**size\_t**](size__t_8h.md#typedef-size_t)() | [**strlen**](#function-strlen) (const char \* str) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**cpd**](____mem_8c.md#define-cpd)  `((unsigned char \*) dst)`<br> |
| define  | [**cps**](____mem_8c.md#define-cps)  `((unsigned char \*) src)`<br> |
| define  | [**deref\_auto\_inc**](____mem_8c.md#define-deref_auto_inc) (p) `\*++(p)`<br> |
| define  | [**lpd**](____mem_8c.md#define-lpd)  `((unsigned long \*) dst)`<br> |
| define  | [**lps**](____mem_8c.md#define-lps)  `((unsigned long \*) src)`<br> |

## Public Functions Documentation




### function \_\_fill\_mem 

```C++
void __fill_mem (
    void * dst,
    int val,
    unsigned long n
) 
```




<hr>



### function memcpy 

```C++
void * memcpy (
    void * dst,
    const void * src,
    size_t n
) 
```




<hr>



### function memset 

```C++
void * memset (
    void * dst,
    int val,
    size_t n
) 
```




<hr>



### function strlen 

```C++
size_t () strlen (
    const char * str
) 
```




<hr>
## Macro Definition Documentation





### define cpd 

```C++
#define cpd `((unsigned char *) dst)`
```




<hr>



### define cps 

```C++
#define cps `((unsigned char *) src)`
```




<hr>



### define deref\_auto\_inc 

```C++
#define deref_auto_inc (
    p
) `*++(p)`
```




<hr>



### define lpd 

```C++
#define lpd `((unsigned long *) dst)`
```




<hr>



### define lps 

```C++
#define lps `((unsigned long *) src)`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Runtime/Src/__mem.c`

