

# File synmix.c



[**FileList**](files.md) **>** [**dolphin**](dir_8daa6a5f7f30f79e111d6992c13d512c.md) **>** [**syn**](dir_f9c9afb3fb51976b25257421660f33b2.md) **>** [**synmix.c**](synmix_8c.md)

[Go to the source code of this file](synmix_8c_source.md)



* `#include <dolphin/ax.h>`
* `#include <dolphin/mix.h>`
* `#include <dolphin/syn.h>`
* `#include <dolphin.h>`
* `#include "fake_tgmath.h"`
* `#include "SYNPrivate.h"`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_SYNAttackAttnTable**](#variable-__synattackattntable)   = `/* multi line expression */`<br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_SYNVolumeAttenuation**](#variable-__synvolumeattenuation)   = `/* multi line expression */`<br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_SYNGetVoiceFader**](#function-__syngetvoicefader) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNVOICE**](struct_s_y_n_v_o_i_c_e.md) \* voice) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_SYNGetVoiceInput**](#function-__syngetvoiceinput) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNVOICE**](struct_s_y_n_v_o_i_c_e.md) \* voice) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNSetupPan**](#function-__synsetuppan) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNVOICE**](struct_s_y_n_v_o_i_c_e.md) \* voice) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNSetupVolume**](#function-__synsetupvolume) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNVOICE**](struct_s_y_n_v_o_i_c_e.md) \* voice) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNUpdateMix**](#function-__synupdatemix) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNVOICE**](struct_s_y_n_v_o_i_c_e.md) \* voice) <br> |




























## Public Attributes Documentation




### variable \_\_SYNAttackAttnTable 

```C++
s32 __SYNAttackAttnTable[100];
```




<hr>



### variable \_\_SYNVolumeAttenuation 

```C++
s32 __SYNVolumeAttenuation[128];
```




<hr>
## Public Functions Documentation




### function \_\_SYNGetVoiceFader 

```C++
s32 __SYNGetVoiceFader (
    struct  SYNVOICE * voice
) 
```




<hr>



### function \_\_SYNGetVoiceInput 

```C++
s32 __SYNGetVoiceInput (
    struct  SYNVOICE * voice
) 
```




<hr>



### function \_\_SYNSetupPan 

```C++
void __SYNSetupPan (
    struct  SYNVOICE * voice
) 
```




<hr>



### function \_\_SYNSetupVolume 

```C++
void __SYNSetupVolume (
    struct  SYNVOICE * voice
) 
```




<hr>



### function \_\_SYNUpdateMix 

```C++
void __SYNUpdateMix (
    struct  SYNVOICE * voice
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `SDK/src/dolphin/syn/synmix.c`

