

# File pool\_alloc.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Include**](dir_3ffa88f97e35b066b52bd9bbaed6371b.md) **>** [**pool\_alloc.h**](pool__alloc_8h.md)

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
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Include/pool_alloc.h`

