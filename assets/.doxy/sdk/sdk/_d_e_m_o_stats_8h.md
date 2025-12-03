

# File DEMOStats.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**demo**](dir_331bf99e07843061bc97f5d482e7f04d.md) **>** [**DEMOStats.h**](_d_e_m_o_stats_8h.md)

[Go to the source code of this file](_d_e_m_o_stats_8h_source.md)



* `#include <types.h>`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**DemoStatData**](struct_demo_stat_data.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| enum  | [**DEMO\_STAT\_DISP**](#enum-demo_stat_disp)  <br> |
| enum  | [**DEMO\_STAT\_TYPE**](#enum-demo_stat_type)  <br> |
| typedef [**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DEMO\_STAT\_TYPE**](_d_e_m_o_stats_8h.md#enum-demo_stat_type) | [**DEMO\_STAT\_TYPE**](#typedef-demo_stat_type)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DemoStatData**](struct_demo_stat_data.md) | [**DemoStatData**](#typedef-demostatdata)  <br> |




## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**u16**](types_8h.md#typedef-u16) | [**DemoStatEnable**](#variable-demostatenable)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOPrintStats**](#function-demoprintstats) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOSetStats**](#function-demosetstats) ([**DemoStatData**](struct_demo_stat_data.md) \* stat, [**u32**](types_8h.md#typedef-u32) nstats, [**DEMO\_STAT\_DISP**](_d_e_m_o_stats_8h.md#enum-demo_stat_disp) disp) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOUpdateStats**](#function-demoupdatestats) ([**u16**](types_8h.md#typedef-u16) inc) <br> |




























## Public Types Documentation




### enum DEMO\_STAT\_DISP 

```C++
enum DEMO_STAT_DISP {
    DEMO_STAT_TL = 0,
    DEMO_STAT_BL = 1,
    DEMO_STAT_TLD = 2,
    DEMO_STAT_BLD = 3,
    DEMO_STAT_IO = 4
};
```




<hr>



### enum DEMO\_STAT\_TYPE 

```C++
enum DEMO_STAT_TYPE {
    DEMO_STAT_GP0 = 0,
    DEMO_STAT_GP1 = 1,
    DEMO_STAT_MEM = 2,
    DEMO_STAT_PIX = 3,
    DEMO_STAT_VC = 4,
    DEMO_STAT_FR = 5,
    DEMO_STAT_TBW = 6,
    DEMO_STAT_TBP = 7,
    DEMO_STAT_MYC = 8,
    DEMO_STAT_MYR = 9
};
```




<hr>



### typedef DEMO\_STAT\_TYPE 

```C++
typedef enum DEMO_STAT_TYPE DEMO_STAT_TYPE;
```




<hr>



### typedef DemoStatData 

```C++
typedef struct DemoStatData DemoStatData;
```




<hr>
## Public Attributes Documentation




### variable DemoStatEnable 

```C++
u16 DemoStatEnable;
```




<hr>
## Public Functions Documentation




### function DEMOPrintStats 

```C++
void DEMOPrintStats (
    void
) 
```




<hr>



### function DEMOSetStats 

```C++
void DEMOSetStats (
    DemoStatData * stat,
    u32 nstats,
    DEMO_STAT_DISP disp
) 
```




<hr>



### function DEMOUpdateStats 

```C++
void DEMOUpdateStats (
    u16 inc
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/demo/DEMOStats.h`

