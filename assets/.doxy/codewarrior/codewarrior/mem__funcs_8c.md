

# File mem\_funcs.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Src**](dir_a72881c2e453fec2ff00fd48c42297a2.md) **>** [**mem\_funcs.c**](mem__funcs_8c.md)

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
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Src/mem_funcs.c`

