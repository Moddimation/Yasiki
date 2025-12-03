

# File reverb\_std.c



[**FileList**](files.md) **>** [**axfx**](dir_2bd0f0afbf5da90c596578eb9887bbaf.md) **>** [**reverb\_std.c**](reverb__std_8c.md)

[Go to the source code of this file](reverb__std_8c_source.md)



* `#include <dolphin/ax.h>`
* `#include <dolphin/axfx.h>`
* `#include <dolphin.h>`
* `#include "fake_tgmath.h"`























## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**double**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**i2fMagic**](#variable-i2fmagic)   = `4503601774854144.0`<br> |
|  [**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**value0\_3**](#variable-value0_3)   = `0.3f`<br> |
|  [**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**value0\_6**](#variable-value0_6)   = `0.6f`<br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXFXReverbStdCallback**](#function-axfxreverbstdcallback) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_BUFFERUPDATE**](struct_a_x_f_x___b_u_f_f_e_r_u_p_d_a_t_e.md) \* bufferUpdate, [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_REVERBSTD**](struct_a_x_f_x___r_e_v_e_r_b_s_t_d.md) \* reverb) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXFXReverbStdInit**](#function-axfxreverbstdinit) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_REVERBSTD**](struct_a_x_f_x___r_e_v_e_r_b_s_t_d.md) \* rev) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXFXReverbStdSettings**](#function-axfxreverbstdsettings) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_REVERBSTD**](struct_a_x_f_x___r_e_v_e_r_b_s_t_d.md) \* rev) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXFXReverbStdShutdown**](#function-axfxreverbstdshutdown) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_REVERBSTD**](struct_a_x_f_x___r_e_v_e_r_b_s_t_d.md) \* rev) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DLcreate**](#function-dlcreate) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_REVSTD\_DELAYLINE**](struct_a_x_f_x___r_e_v_s_t_d___d_e_l_a_y_l_i_n_e.md) \* dl, [**s32**](types_8h.md#typedef-s32) max\_length) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DLdelete**](#function-dldelete) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_REVSTD\_DELAYLINE**](struct_a_x_f_x___r_e_v_s_t_d___d_e_l_a_y_l_i_n_e.md) \* dl) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DLsetdelay**](#function-dlsetdelay) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_REVSTD\_DELAYLINE**](struct_a_x_f_x___r_e_v_s_t_d___d_e_l_a_y_l_i_n_e.md) \* dl, [**s32**](types_8h.md#typedef-s32) lag) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**HandleReverb**](#function-handlereverb) ([**s32**](types_8h.md#typedef-s32) \* sptr, [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_REVSTD\_WORK**](struct_a_x_f_x___r_e_v_s_t_d___w_o_r_k.md) \* rv) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**HandleReverb**](#function-handlereverb) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**s32**](types_8h.md#typedef-s32) \* sptr, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_REVSTD\_WORK**](struct_a_x_f_x___r_e_v_s_t_d___w_o_r_k.md) \* rv) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ReverbSTDCallback**](#function-reverbstdcallback) ([**s32**](types_8h.md#typedef-s32) \* left, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* right, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* surround, [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_REVSTD\_WORK**](struct_a_x_f_x___r_e_v_s_t_d___w_o_r_k.md) \* rv) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ReverbSTDCreate**](#function-reverbstdcreate) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_REVSTD\_WORK**](struct_a_x_f_x___r_e_v_s_t_d___w_o_r_k.md) \* rv, [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) coloration, [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) time, [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) mix, [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) damping, [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) predelay) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ReverbSTDFree**](#function-reverbstdfree) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_REVSTD\_WORK**](struct_a_x_f_x___r_e_v_s_t_d___w_o_r_k.md) \* rv) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ReverbSTDModify**](#function-reverbstdmodify) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_REVSTD\_WORK**](struct_a_x_f_x___r_e_v_s_t_d___w_o_r_k.md) \* rv, [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) coloration, [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) time, [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) mix, [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) damping, [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) predelay) <br> |


























## Public Static Attributes Documentation




### variable i2fMagic 

```C++
const double i2fMagic;
```




<hr>



### variable value0\_3 

```C++
const float value0_3;
```




<hr>



### variable value0\_6 

```C++
const float value0_6;
```




<hr>
## Public Functions Documentation




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
## Public Static Functions Documentation




### function DLcreate 

```C++
static void DLcreate (
    struct  AXFX_REVSTD_DELAYLINE * dl,
    s32 max_length
) 
```




<hr>



### function DLdelete 

```C++
static void DLdelete (
    struct  AXFX_REVSTD_DELAYLINE * dl
) 
```




<hr>



### function DLsetdelay 

```C++
static void DLsetdelay (
    struct  AXFX_REVSTD_DELAYLINE * dl,
    s32 lag
) 
```




<hr>



### function HandleReverb 

```C++
static void HandleReverb (
    s32 * sptr,
    struct  AXFX_REVSTD_WORK * rv
) 
```




<hr>



### function HandleReverb 

```C++
static asm  void HandleReverb (
    register  s32 * sptr,
    register  struct  AXFX_REVSTD_WORK * rv
) 
```




<hr>



### function ReverbSTDCallback 

```C++
static void ReverbSTDCallback (
    s32 * left,
    long * right,
    long * surround,
    struct  AXFX_REVSTD_WORK * rv
) 
```




<hr>



### function ReverbSTDCreate 

```C++
static int ReverbSTDCreate (
    struct  AXFX_REVSTD_WORK * rv,
    float coloration,
    float time,
    float mix,
    float damping,
    float predelay
) 
```




<hr>



### function ReverbSTDFree 

```C++
static void ReverbSTDFree (
    struct  AXFX_REVSTD_WORK * rv
) 
```




<hr>



### function ReverbSTDModify 

```C++
static int ReverbSTDModify (
    struct  AXFX_REVSTD_WORK * rv,
    float coloration,
    float time,
    float mix,
    float damping,
    float predelay
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/axfx/reverb_std.c`

