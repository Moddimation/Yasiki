

# File synenv.c



[**FileList**](files.md) **>** [**dolphin**](dir_8daa6a5f7f30f79e111d6992c13d512c.md) **>** [**syn**](dir_f9c9afb3fb51976b25257421660f33b2.md) **>** [**synenv.c**](synenv_8c.md)

[Go to the source code of this file](synenv_8c_source.md)



* `#include <dolphin/ax.h>`
* `#include <dolphin/syn.h>`
* `#include <dolphin.h>`
* `#include "cmath.h"`
* `#include "fake_tgmath.h"`
* `#include "SYNPrivate.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_SYNGetEnvelopeTime**](#function-__syngetenvelopetime) ([**s32**](types_8h.md#typedef-s32) scale, [**s32**](types_8h.md#typedef-s32) mod, [**u8**](types_8h.md#typedef-u8) key) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNRunPitchEnvelope**](#function-__synrunpitchenvelope) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNVOICE**](struct_s_y_n_v_o_i_c_e.md) \* voice) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNRunVolumeEnvelope**](#function-__synrunvolumeenvelope) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNVOICE**](struct_s_y_n_v_o_i_c_e.md) \* voice) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNSetupPitchEnvelope**](#function-__synsetuppitchenvelope) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNVOICE**](struct_s_y_n_v_o_i_c_e.md) \* voice) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNSetupVolumeEnvelope**](#function-__synsetupvolumeenvelope) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNVOICE**](struct_s_y_n_v_o_i_c_e.md) \* voice) <br> |




























## Public Functions Documentation




### function \_\_SYNGetEnvelopeTime 

```C++
s32 __SYNGetEnvelopeTime (
    s32 scale,
    s32 mod,
    u8 key
) 
```




<hr>



### function \_\_SYNRunPitchEnvelope 

```C++
void __SYNRunPitchEnvelope (
    struct  SYNVOICE * voice
) 
```




<hr>



### function \_\_SYNRunVolumeEnvelope 

```C++
void __SYNRunVolumeEnvelope (
    struct  SYNVOICE * voice
) 
```




<hr>



### function \_\_SYNSetupPitchEnvelope 

```C++
void __SYNSetupPitchEnvelope (
    struct  SYNVOICE * voice
) 
```




<hr>



### function \_\_SYNSetupVolumeEnvelope 

```C++
void __SYNSetupVolumeEnvelope (
    struct  SYNVOICE * voice
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `SDK/src/dolphin/syn/synenv.c`

