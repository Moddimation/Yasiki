

# File synvoice.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**syn**](dir_69283c2dbc63a8d4f909cdea61511c2a.md) **>** [**synvoice.c**](synvoice_8c.md)

[Go to the source code of this file](synvoice_8c_source.md)



* `#include <dolphin/ax.h>`
* `#include <dolphin/mix.h>`
* `#include <dolphin/syn.h>`
* `#include <dolphin.h>`
* `#include "fake_tgmath.h"`
* `#include "SYNPrivate.h"`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNVOICE**](struct_s_y_n_v_o_i_c_e.md) | [**\_\_SYNVoice**](#variable-__synvoice)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNClearVoiceReferences**](#function-__synclearvoicereferences) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* p) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNServiceVoice**](#function-__synservicevoice) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) i) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNSetVoiceToRelease**](#function-__synsetvoicetorelease) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNVOICE**](struct_s_y_n_v_o_i_c_e.md) \* voice, [**u32**](types_8h.md#typedef-u32) priority) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**AX\_MAX\_VOICES**](synvoice_8c.md#define-ax_max_voices)  `64`<br> |

## Public Attributes Documentation




### variable \_\_SYNVoice 

```C++
struct SYNVOICE __SYNVoice[64];
```




<hr>
## Public Functions Documentation




### function \_\_SYNClearVoiceReferences 

```C++
void __SYNClearVoiceReferences (
    void * p
) 
```




<hr>



### function \_\_SYNServiceVoice 

```C++
void __SYNServiceVoice (
    int i
) 
```




<hr>



### function \_\_SYNSetVoiceToRelease 

```C++
void __SYNSetVoiceToRelease (
    struct  SYNVOICE * voice,
    u32 priority
) 
```




<hr>
## Macro Definition Documentation





### define AX\_MAX\_VOICES 

```C++
#define AX_MAX_VOICES `64`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/syn/synvoice.c`

