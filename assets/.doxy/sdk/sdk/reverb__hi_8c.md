

# File reverb\_hi.c



[**FileList**](files.md) **>** [**axfx**](dir_2bd0f0afbf5da90c596578eb9887bbaf.md) **>** [**reverb\_hi.c**](reverb__hi_8c.md)

[Go to the source code of this file](reverb__hi_8c_source.md)



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
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXFXReverbHiCallback**](#function-axfxreverbhicallback) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_BUFFERUPDATE**](struct_a_x_f_x___b_u_f_f_e_r_u_p_d_a_t_e.md) \* bufferUpdate, [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_REVERBHI**](struct_a_x_f_x___r_e_v_e_r_b_h_i.md) \* reverb) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXFXReverbHiInit**](#function-axfxreverbhiinit) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_REVERBHI**](struct_a_x_f_x___r_e_v_e_r_b_h_i.md) \* rev) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXFXReverbHiSettings**](#function-axfxreverbhisettings) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_REVERBHI**](struct_a_x_f_x___r_e_v_e_r_b_h_i.md) \* rev) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXFXReverbHiShutdown**](#function-axfxreverbhishutdown) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_REVERBHI**](struct_a_x_f_x___r_e_v_e_r_b_h_i.md) \* rev) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DLcreate**](#function-dlcreate) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_REVHI\_DELAYLINE**](struct_a_x_f_x___r_e_v_h_i___d_e_l_a_y_l_i_n_e.md) \* dl, [**s32**](types_8h.md#typedef-s32) max\_length) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DLdelete**](#function-dldelete) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_REVHI\_DELAYLINE**](struct_a_x_f_x___r_e_v_h_i___d_e_l_a_y_l_i_n_e.md) \* dl) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DLsetdelay**](#function-dlsetdelay) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_REVHI\_DELAYLINE**](struct_a_x_f_x___r_e_v_h_i___d_e_l_a_y_l_i_n_e.md) \* dl, [**s32**](types_8h.md#typedef-s32) lag) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DoCrossTalk**](#function-docrosstalk) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**s32**](types_8h.md#typedef-s32) \* l, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* r, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) cross, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) invcross) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**HandleReverb**](#function-handlereverb) ([**s32**](types_8h.md#typedef-s32) \* sptr, [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_REVHI\_WORK**](struct_a_x_f_x___r_e_v_h_i___w_o_r_k.md) \* rv, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) k) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**HandleReverb**](#function-handlereverb) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**s32**](types_8h.md#typedef-s32) \* sptr, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_REVHI\_WORK**](struct_a_x_f_x___r_e_v_h_i___w_o_r_k.md) \* rv, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) k) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ReverbHICallback**](#function-reverbhicallback) ([**s32**](types_8h.md#typedef-s32) \* left, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* right, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* surround, [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_REVHI\_WORK**](struct_a_x_f_x___r_e_v_h_i___w_o_r_k.md) \* rv) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ReverbHICreate**](#function-reverbhicreate) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_REVHI\_WORK**](struct_a_x_f_x___r_e_v_h_i___w_o_r_k.md) \* rv, [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) coloration, [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) time, [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) mix, [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) damping, [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) preDelay, [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) crosstalk) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ReverbHIFree**](#function-reverbhifree) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_REVHI\_WORK**](struct_a_x_f_x___r_e_v_h_i___w_o_r_k.md) \* rv) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ReverbHIModify**](#function-reverbhimodify) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_REVHI\_WORK**](struct_a_x_f_x___r_e_v_h_i___w_o_r_k.md) \* rv, [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) coloration, [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) time, [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) mix, [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) damping, [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) preDelay, [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) crosstalk) <br> |


























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
## Public Static Functions Documentation




### function DLcreate 

```C++
static void DLcreate (
    struct  AXFX_REVHI_DELAYLINE * dl,
    s32 max_length
) 
```




<hr>



### function DLdelete 

```C++
static void DLdelete (
    struct  AXFX_REVHI_DELAYLINE * dl
) 
```




<hr>



### function DLsetdelay 

```C++
static void DLsetdelay (
    struct  AXFX_REVHI_DELAYLINE * dl,
    s32 lag
) 
```




<hr>



### function DoCrossTalk 

```C++
static asm  void DoCrossTalk (
    register  s32 * l,
    register  long * r,
    register  float cross,
    register  float invcross
) 
```




<hr>



### function HandleReverb 

```C++
static void HandleReverb (
    s32 * sptr,
    struct  AXFX_REVHI_WORK * rv,
    long k
) 
```




<hr>



### function HandleReverb 

```C++
static asm  void HandleReverb (
    register  s32 * sptr,
    register  struct  AXFX_REVHI_WORK * rv,
    register  long k
) 
```




<hr>



### function ReverbHICallback 

```C++
static void ReverbHICallback (
    s32 * left,
    long * right,
    long * surround,
    struct  AXFX_REVHI_WORK * rv
) 
```




<hr>



### function ReverbHICreate 

```C++
static int ReverbHICreate (
    struct  AXFX_REVHI_WORK * rv,
    float coloration,
    float time,
    float mix,
    float damping,
    float preDelay,
    float crosstalk
) 
```




<hr>



### function ReverbHIFree 

```C++
static void ReverbHIFree (
    struct  AXFX_REVHI_WORK * rv
) 
```




<hr>



### function ReverbHIModify 

```C++
static int ReverbHIModify (
    struct  AXFX_REVHI_WORK * rv,
    float coloration,
    float time,
    float mix,
    float damping,
    float preDelay,
    float crosstalk
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/axfx/reverb_hi.c`

