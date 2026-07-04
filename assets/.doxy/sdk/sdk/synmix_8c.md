

# File synmix.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**syn**](dir_69283c2dbc63a8d4f909cdea61511c2a.md) **>** [**synmix.c**](synmix_8c.md)

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
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/syn/synmix.c`

