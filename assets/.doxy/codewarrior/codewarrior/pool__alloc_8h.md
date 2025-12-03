

# File pool\_alloc.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Include**](dir_27c31b18688c2d3b7fe1d239b44a1620.md) **>** [**pool\_alloc.h**](pool__alloc_8h.md)

[Go to the source code of this file](pool__alloc_8h_source.md)



* `#include <ansi_parms.h>`
* `#include <size_t.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**\_\_pool\_free\_all**](#function-__pool_free_all) () <br> |
|  void \* | [**\_\_sys\_alloc**](#function-__sys_alloc) ([**\_\_std**](ansi__parms_8h.md#define-__std)([**size\_t**](size__t_8h.md#typedef-size_t)) size) <br> |
|  void | [**\_\_sys\_free**](#function-__sys_free) (void \* ptr) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**\_\_heap\_version**](pool__alloc_8h.md#define-__heap_version)  `2	/\* jg 980115 \*/ /\* hh 990227 \*/`<br> |
| define  | [**\_\_pool\_alloc\_\_**](pool__alloc_8h.md#define-__pool_alloc__)  <br> |

## Public Functions Documentation




### function \_\_pool\_free\_all 

```C++
void __pool_free_all () 
```




<hr>



### function \_\_sys\_alloc 

```C++
void * __sys_alloc (
    __std ( size_t ) size
) 
```




<hr>



### function \_\_sys\_free 

```C++
void __sys_free (
    void * ptr
) 
```




<hr>
## Macro Definition Documentation





### define \_\_heap\_version 

```C++
#define __heap_version `2	/* jg 980115 */ /* hh 990227 */`
```




<hr>



### define \_\_pool\_alloc\_\_ 

```C++
#define __pool_alloc__ 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Include/pool_alloc.h`

