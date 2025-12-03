

# File time.dolphin.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**Msl**](dir_f3cdfadcca1881c964e98cde56e67e68.md) **>** [**MSL\_C**](dir_30eb297d72d9bf6e37ae97b245365a16.md) **>** [**PPC\_EABI**](dir_c1d1bd04e3565fc1d2309a4becb25213.md) **>** [**SRC**](dir_618995e550e2af44021355ee08c1ffde.md) **>** [**time.dolphin.c**](time_8dolphin_8c.md)

[Go to the source code of this file](time_8dolphin_8c_source.md)



* `#include <time.h>`
* `#include <dolphin/os.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  clock\_t | [**\_\_get\_clock**](#function-__get_clock) (void) <br> |
|  time\_t | [**\_\_get\_time**](#function-__get_time) (void) <br> |
|  int | [**\_\_to\_gm\_time**](#function-__to_gm_time) (time\_t \* time) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**BIAS**](time_8dolphin_8c.md#define-bias)  `((100 \* 365LU + 24) \* 86400)`<br> |

## Public Functions Documentation




### function \_\_get\_clock 

```C++
clock_t __get_clock (
    void
) 
```




<hr>



### function \_\_get\_time 

```C++
time_t __get_time (
    void
) 
```




<hr>



### function \_\_to\_gm\_time 

```C++
int __to_gm_time (
    time_t * time
) 
```




<hr>
## Macro Definition Documentation





### define BIAS 

```C++
#define BIAS `((100 * 365LU + 24) * 86400)`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C/PPC_EABI/SRC/time.dolphin.c`

