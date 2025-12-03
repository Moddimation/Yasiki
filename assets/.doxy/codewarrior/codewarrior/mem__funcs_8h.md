

# File mem\_funcs.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Include**](dir_27c31b18688c2d3b7fe1d239b44a1620.md) **>** [**mem\_funcs.h**](mem__funcs_8h.md)

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
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Include/mem_funcs.h`

