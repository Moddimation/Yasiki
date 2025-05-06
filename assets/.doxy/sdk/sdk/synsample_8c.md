

# File synsample.c



[**FileList**](files.md) **>** [**dolphin**](dir_8daa6a5f7f30f79e111d6992c13d512c.md) **>** [**syn**](dir_f9c9afb3fb51976b25257421660f33b2.md) **>** [**synsample.c**](synsample_8c.md)

[Go to the source code of this file](synsample_8c_source.md)



* `#include <dolphin/ax.h>`
* `#include <dolphin/syn.h>`
* `#include <dolphin.h>`
* `#include "fake_tgmath.h"`
* `#include "SYNPrivate.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNSetupSample**](#function-__synsetupsample) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNVOICE**](struct_s_y_n_v_o_i_c_e.md) \* voice) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**u32**](types_8h.md#typedef-u32) | [**\_\_SYNGetNibbleAddress**](#function-__syngetnibbleaddress) ([**u32**](types_8h.md#typedef-u32) count) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNSetupAdpcm**](#function-__synsetupadpcm) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNVOICE**](struct_s_y_n_v_o_i_c_e.md) \* voice) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNSetupPcm16**](#function-__synsetuppcm16) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNVOICE**](struct_s_y_n_v_o_i_c_e.md) \* voice) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNSetupPcm8**](#function-__synsetuppcm8) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNVOICE**](struct_s_y_n_v_o_i_c_e.md) \* voice) <br> |


























## Public Functions Documentation




### function \_\_SYNSetupSample 

```C++
void __SYNSetupSample (
    struct  SYNVOICE * voice
) 
```




<hr>
## Public Static Functions Documentation




### function \_\_SYNGetNibbleAddress 

```C++
static u32 __SYNGetNibbleAddress (
    u32 count
) 
```




<hr>



### function \_\_SYNSetupAdpcm 

```C++
static void __SYNSetupAdpcm (
    struct  SYNVOICE * voice
) 
```




<hr>



### function \_\_SYNSetupPcm16 

```C++
static void __SYNSetupPcm16 (
    struct  SYNVOICE * voice
) 
```




<hr>



### function \_\_SYNSetupPcm8 

```C++
static void __SYNSetupPcm8 (
    struct  SYNVOICE * voice
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `SDK/src/dolphin/syn/synsample.c`

