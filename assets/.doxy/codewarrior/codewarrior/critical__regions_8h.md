

# File critical\_regions.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C**](dir_219b89db6f18167528da0b33a71eb580.md) **>** [**MSL\_Common**](dir_92c8450e06c94075b3621ac302a86fb9.md) **>** [**Include**](dir_3ffa88f97e35b066b52bd9bbaed6371b.md) **>** [**critical\_regions.h**](critical__regions_8h.md)

[Go to the source code of this file](critical__regions_8h_source.md)



* `#include <ansi_parms.h>`

















## Public Types

| Type | Name |
| ---: | :--- |
| enum  | [**critical\_regions**](#enum-critical_regions)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**\_\_init\_critical\_regions**](#function-__init_critical_regions) (void) <br> |
|  void | [**\_\_kill\_critical\_regions**](#function-__kill_critical_regions) (void) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**\_\_begin\_critical\_region**](critical__regions_8h.md#define-__begin_critical_region) (x) <br> |
| define  | [**\_\_end\_critical\_region**](critical__regions_8h.md#define-__end_critical_region) (x) <br> |

## Public Types Documentation




### enum critical\_regions 

```C++
enum critical_regions {
    atexit_funcs_access =0,
    malloc_pool_access =1,
    files_access =2,
    console_status_access =3,
    signal_funcs_access =4,
    num_critical_regions =5
};
```




<hr>
## Public Functions Documentation




### function \_\_init\_critical\_regions 

```C++
void __init_critical_regions (
    void
) 
```




<hr>



### function \_\_kill\_critical\_regions 

```C++
void __kill_critical_regions (
    void
) 
```




<hr>
## Macro Definition Documentation





### define \_\_begin\_critical\_region 

```C++
#define __begin_critical_region (
    x
) 
```




<hr>



### define \_\_end\_critical\_region 

```C++
#define __end_critical_region (
    x
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Include/critical_regions.h`

