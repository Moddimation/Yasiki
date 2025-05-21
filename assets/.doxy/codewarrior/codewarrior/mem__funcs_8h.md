

# File mem\_funcs.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Include**](dir_3ffa88f97e35b066b52bd9bbaed6371b.md) **>** [**mem\_funcs.h**](mem__funcs_8h.md)

[Go to the source code of this file](mem__funcs_8h_source.md)



* `#include <ansi_parms.h>`





































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
| define  | [**\_\_min\_bytes\_for\_long\_copy**](mem__funcs_8h.md#define-__min_bytes_for_long_copy)  `32		/\* NEVER let this be &lt; 16 \*/`<br> |

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





### define \_\_min\_bytes\_for\_long\_copy 

```C++
#define __min_bytes_for_long_copy `32		/* NEVER let this be < 16 */`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Include/mem_funcs.h`

