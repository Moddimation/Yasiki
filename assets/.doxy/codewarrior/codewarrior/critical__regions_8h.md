

# File critical\_regions.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**MSL\_Common**](dir_5ff331ae3d8ec7992933a87ab898fc05.md) **>** [**Include**](dir_27c31b18688c2d3b7fe1d239b44a1620.md) **>** [**critical\_regions.h**](critical__regions_8h.md)

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
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/MSL_Common/Include/critical_regions.h`

