

# Struct AXFX\_REVSTD\_WORK



[**ClassList**](annotated.md) **>** [**AXFX\_REVSTD\_WORK**](struct_a_x_f_x___r_e_v_s_t_d___w_o_r_k.md)





* `#include <axfx.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_REVSTD\_DELAYLINE**](struct_a_x_f_x___r_e_v_s_t_d___d_e_l_a_y_l_i_n_e.md) | [**AP**](#variable-ap)  <br>_0x000_  |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_REVSTD\_DELAYLINE**](struct_a_x_f_x___r_e_v_s_t_d___d_e_l_a_y_l_i_n_e.md) | [**C**](#variable-c)  <br>_0x078_  |
|  [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**allPassCoeff**](#variable-allpasscoeff)  <br>_0x0F0_  |
|  [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**combCoef**](#variable-combcoef)  <br>_0x0F4_  |
|  [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**damping**](#variable-damping)  <br>_0x11C_  |
|  [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**level**](#variable-level)  <br>_0x118_  |
|  [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**lpLastout**](#variable-lplastout)  <br>_0x10C_  |
|  [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**preDelayLine**](#variable-predelayline)  <br>_0x124_  |
|  [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**preDelayPtr**](#variable-predelayptr)  <br>_0x130_  |
|  [**s32**](types_8h.md#typedef-s32) | [**preDelayTime**](#variable-predelaytime)  <br>_0x120_  |












































## Public Attributes Documentation




### variable AP 

_0x000_ 
```C++
struct AXFX_REVSTD_DELAYLINE AXFX_REVSTD_WORK::AP[6];
```




<hr>



### variable C 

_0x078_ 
```C++
struct AXFX_REVSTD_DELAYLINE AXFX_REVSTD_WORK::C[6];
```




<hr>



### variable allPassCoeff 

_0x0F0_ 
```C++
float AXFX_REVSTD_WORK::allPassCoeff;
```




<hr>



### variable combCoef 

_0x0F4_ 
```C++
float AXFX_REVSTD_WORK::combCoef[6];
```




<hr>



### variable damping 

_0x11C_ 
```C++
float AXFX_REVSTD_WORK::damping;
```




<hr>



### variable level 

_0x118_ 
```C++
float AXFX_REVSTD_WORK::level;
```




<hr>



### variable lpLastout 

_0x10C_ 
```C++
float AXFX_REVSTD_WORK::lpLastout[3];
```




<hr>



### variable preDelayLine 

_0x124_ 
```C++
float* AXFX_REVSTD_WORK::preDelayLine[3];
```




<hr>



### variable preDelayPtr 

_0x130_ 
```C++
float* AXFX_REVSTD_WORK::preDelayPtr[3];
```




<hr>



### variable preDelayTime 

_0x120_ 
```C++
s32 AXFX_REVSTD_WORK::preDelayTime;
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/axfx.h`

