

# File axfx.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**axfx.h**](axfx_8h.md)

[Go to the source code of this file](axfx_8h_source.md)


















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**AXFX\_BUFFERUPDATE**](struct_a_x_f_x___b_u_f_f_e_r_u_p_d_a_t_e.md) <br> |
| struct | [**AXFX\_CHORUS**](struct_a_x_f_x___c_h_o_r_u_s.md) <br> |
| struct | [**AXFX\_CHORUS\_SRCINFO**](struct_a_x_f_x___c_h_o_r_u_s___s_r_c_i_n_f_o.md) <br> |
| struct | [**AXFX\_CHORUS\_WORK**](struct_a_x_f_x___c_h_o_r_u_s___w_o_r_k.md) <br> |
| struct | [**AXFX\_DELAY**](struct_a_x_f_x___d_e_l_a_y.md) <br> |
| struct | [**AXFX\_REVERBHI**](struct_a_x_f_x___r_e_v_e_r_b_h_i.md) <br> |
| struct | [**AXFX\_REVERBSTD**](struct_a_x_f_x___r_e_v_e_r_b_s_t_d.md) <br> |
| struct | [**AXFX\_REVHI\_DELAYLINE**](struct_a_x_f_x___r_e_v_h_i___d_e_l_a_y_l_i_n_e.md) <br> |
| struct | [**AXFX\_REVHI\_WORK**](struct_a_x_f_x___r_e_v_h_i___w_o_r_k.md) <br> |
| struct | [**AXFX\_REVSTD\_DELAYLINE**](struct_a_x_f_x___r_e_v_s_t_d___d_e_l_a_y_l_i_n_e.md) <br> |
| struct | [**AXFX\_REVSTD\_WORK**](struct_a_x_f_x___r_e_v_s_t_d___w_o_r_k.md) <br> |






















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXFXChorusCallback**](#function-axfxchoruscallback) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_BUFFERUPDATE**](struct_a_x_f_x___b_u_f_f_e_r_u_p_d_a_t_e.md) \* bufferUpdate, [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_CHORUS**](struct_a_x_f_x___c_h_o_r_u_s.md) \* chorus) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXFXChorusInit**](#function-axfxchorusinit) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_CHORUS**](struct_a_x_f_x___c_h_o_r_u_s.md) \* c) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXFXChorusSettings**](#function-axfxchorussettings) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_CHORUS**](struct_a_x_f_x___c_h_o_r_u_s.md) \* c) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXFXChorusShutdown**](#function-axfxchorusshutdown) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_CHORUS**](struct_a_x_f_x___c_h_o_r_u_s.md) \* c) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXFXDelayCallback**](#function-axfxdelaycallback) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_BUFFERUPDATE**](struct_a_x_f_x___b_u_f_f_e_r_u_p_d_a_t_e.md) \* bufferUpdate, [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_DELAY**](struct_a_x_f_x___d_e_l_a_y.md) \* delay) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXFXDelayInit**](#function-axfxdelayinit) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_DELAY**](struct_a_x_f_x___d_e_l_a_y.md) \* delay) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXFXDelaySettings**](#function-axfxdelaysettings) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_DELAY**](struct_a_x_f_x___d_e_l_a_y.md) \* delay) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXFXDelayShutdown**](#function-axfxdelayshutdown) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_DELAY**](struct_a_x_f_x___d_e_l_a_y.md) \* delay) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXFXReverbHiCallback**](#function-axfxreverbhicallback) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_BUFFERUPDATE**](struct_a_x_f_x___b_u_f_f_e_r_u_p_d_a_t_e.md) \* bufferUpdate, [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_REVERBHI**](struct_a_x_f_x___r_e_v_e_r_b_h_i.md) \* reverb) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXFXReverbHiInit**](#function-axfxreverbhiinit) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_REVERBHI**](struct_a_x_f_x___r_e_v_e_r_b_h_i.md) \* rev) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXFXReverbHiSettings**](#function-axfxreverbhisettings) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_REVERBHI**](struct_a_x_f_x___r_e_v_e_r_b_h_i.md) \* rev) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXFXReverbHiShutdown**](#function-axfxreverbhishutdown) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_REVERBHI**](struct_a_x_f_x___r_e_v_e_r_b_h_i.md) \* rev) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXFXReverbStdCallback**](#function-axfxreverbstdcallback) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_BUFFERUPDATE**](struct_a_x_f_x___b_u_f_f_e_r_u_p_d_a_t_e.md) \* bufferUpdate, [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_REVERBSTD**](struct_a_x_f_x___r_e_v_e_r_b_s_t_d.md) \* reverb) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXFXReverbStdInit**](#function-axfxreverbstdinit) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_REVERBSTD**](struct_a_x_f_x___r_e_v_e_r_b_s_t_d.md) \* rev) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXFXReverbStdSettings**](#function-axfxreverbstdsettings) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_REVERBSTD**](struct_a_x_f_x___r_e_v_e_r_b_s_t_d.md) \* rev) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXFXReverbStdShutdown**](#function-axfxreverbstdshutdown) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_REVERBSTD**](struct_a_x_f_x___r_e_v_e_r_b_s_t_d.md) \* rev) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DoCrossTalk**](#function-docrosstalk) ([**s32**](types_8h.md#typedef-s32) \* l, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* r, [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) cross, [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) invcross) <br> |




























## Public Functions Documentation




### function AXFXChorusCallback 

```C++
void AXFXChorusCallback (
    struct  AXFX_BUFFERUPDATE * bufferUpdate,
    struct  AXFX_CHORUS * chorus
) 
```




<hr>



### function AXFXChorusInit 

```C++
int AXFXChorusInit (
    struct  AXFX_CHORUS * c
) 
```




<hr>



### function AXFXChorusSettings 

```C++
int AXFXChorusSettings (
    struct  AXFX_CHORUS * c
) 
```




<hr>



### function AXFXChorusShutdown 

```C++
int AXFXChorusShutdown (
    struct  AXFX_CHORUS * c
) 
```




<hr>



### function AXFXDelayCallback 

```C++
void AXFXDelayCallback (
    struct  AXFX_BUFFERUPDATE * bufferUpdate,
    struct  AXFX_DELAY * delay
) 
```




<hr>



### function AXFXDelayInit 

```C++
int AXFXDelayInit (
    struct  AXFX_DELAY * delay
) 
```




<hr>



### function AXFXDelaySettings 

```C++
int AXFXDelaySettings (
    struct  AXFX_DELAY * delay
) 
```




<hr>



### function AXFXDelayShutdown 

```C++
int AXFXDelayShutdown (
    struct  AXFX_DELAY * delay
) 
```




<hr>



### function AXFXReverbHiCallback 

```C++
void AXFXReverbHiCallback (
    struct  AXFX_BUFFERUPDATE * bufferUpdate,
    struct  AXFX_REVERBHI * reverb
) 
```




<hr>



### function AXFXReverbHiInit 

```C++
int AXFXReverbHiInit (
    struct  AXFX_REVERBHI * rev
) 
```




<hr>



### function AXFXReverbHiSettings 

```C++
int AXFXReverbHiSettings (
    struct  AXFX_REVERBHI * rev
) 
```




<hr>



### function AXFXReverbHiShutdown 

```C++
int AXFXReverbHiShutdown (
    struct  AXFX_REVERBHI * rev
) 
```




<hr>



### function AXFXReverbStdCallback 

```C++
void AXFXReverbStdCallback (
    struct  AXFX_BUFFERUPDATE * bufferUpdate,
    struct  AXFX_REVERBSTD * reverb
) 
```




<hr>



### function AXFXReverbStdInit 

```C++
int AXFXReverbStdInit (
    struct  AXFX_REVERBSTD * rev
) 
```




<hr>



### function AXFXReverbStdSettings 

```C++
int AXFXReverbStdSettings (
    struct  AXFX_REVERBSTD * rev
) 
```




<hr>



### function AXFXReverbStdShutdown 

```C++
int AXFXReverbStdShutdown (
    struct  AXFX_REVERBSTD * rev
) 
```




<hr>



### function DoCrossTalk 

```C++
void DoCrossTalk (
    s32 * l,
    long * r,
    float cross,
    float invcross
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/axfx.h`

