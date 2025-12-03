

# File mem\_funcs.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Src**](dir_296ea1c022f8cfa02577b9a5b06211f5.md) **>** [**mem\_funcs.c**](mem__funcs_8c.md)

[Go to the source code of this file](mem__funcs_8c_source.md)



* `#include "mem_funcs.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**\_\_copy\_longs\_aligned**](#function-__copy_longs_aligned) (void \* dst, const void \* src, unsigned long n) <br> |
|  void | [**\_\_copy\_longs\_rev\_aligned**](#function-__copy_longs_rev_aligned) (void \* dst, const void \* src, unsigned long n) <br> |
|  void | [**\_\_copy\_longs\_rev\_unaligned**](#function-__copy_longs_rev_unaligned) (void \* dst, const void \* src, unsigned long n) <br> |
|  void | [**\_\_copy\_longs\_unaligned**](#function-__copy_longs_unaligned) (void \* dst, const void \* src, unsigned long n) <br> |
|  void | [**\_\_copy\_mem**](#function-__copy_mem) (void \* dst, const void \* src, unsigned long n) <br> |
|  void | [**\_\_fill\_mem**](#function-__fill_mem) (void \* dst, int val, unsigned long n) <br> |
|  void | [**\_\_move\_mem**](#function-__move_mem) (void \* dst, const void \* src, unsigned long n) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**cpd**](mem__funcs_8c.md#define-cpd)  `((unsigned char \*) dst)`<br> |
| define  | [**cps**](mem__funcs_8c.md#define-cps)  `((unsigned char \*) src)`<br> |
| define  | [**deref\_auto\_inc**](mem__funcs_8c.md#define-deref_auto_inc) (p) `\*(p)++`<br> |
| define  | [**lpd**](mem__funcs_8c.md#define-lpd)  `((unsigned long \*) dst)`<br> |
| define  | [**lps**](mem__funcs_8c.md#define-lps)  `((unsigned long \*) src)`<br> |

## Public Functions Documentation




### function \_\_copy\_longs\_aligned 

```C++
void __copy_longs_aligned (
    void * dst,
    const void * src,
    unsigned long n
) 
```




<hr>



### function \_\_copy\_longs\_rev\_aligned 

```C++
void __copy_longs_rev_aligned (
    void * dst,
    const void * src,
    unsigned long n
) 
```




<hr>



### function \_\_copy\_longs\_rev\_unaligned 

```C++
void __copy_longs_rev_unaligned (
    void * dst,
    const void * src,
    unsigned long n
) 
```




<hr>



### function \_\_copy\_longs\_unaligned 

```C++
void __copy_longs_unaligned (
    void * dst,
    const void * src,
    unsigned long n
) 
```




<hr>



### function \_\_copy\_mem 

```C++
void __copy_mem (
    void * dst,
    const void * src,
    unsigned long n
) 
```




<hr>



### function \_\_fill\_mem 

```C++
void __fill_mem (
    void * dst,
    int val,
    unsigned long n
) 
```




<hr>



### function \_\_move\_mem 

```C++
void __move_mem (
    void * dst,
    const void * src,
    unsigned long n
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
) `*(p)++`
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
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Src/mem_funcs.c`

