

# File synpitch.c



[**FileList**](files.md) **>** [**dolphin**](dir_8daa6a5f7f30f79e111d6992c13d512c.md) **>** [**syn**](dir_f9c9afb3fb51976b25257421660f33b2.md) **>** [**synpitch.c**](synpitch_8c.md)

[Go to the source code of this file](synpitch_8c_source.md)



* `#include <dolphin/syn.h>`
* `#include <dolphin.h>`
* `#include "fake_tgmath.h"`
* `#include "SYNPrivate.h"`























## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNCentsTable**](#variable-__syncentstable)   = `/* multi line expression */`<br> |
|  [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNOctavesTableUp**](#variable-__synoctavestableup)   = `/* multi line expression */`<br> |
|  [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNSemitonesTableDown**](#variable-__synsemitonestabledown)   = `/* multi line expression */`<br> |
|  [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNSemitonesTableUp**](#variable-__synsemitonestableup)   = `/* multi line expression */`<br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNGetRelativePitch**](#function-__syngetrelativepitch) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNVOICE**](struct_s_y_n_v_o_i_c_e.md) \* voice) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNSetupPitch**](#function-__synsetuppitch) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNVOICE**](struct_s_y_n_v_o_i_c_e.md) \* voice) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNSetupSrc**](#function-__synsetupsrc) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNVOICE**](struct_s_y_n_v_o_i_c_e.md) \* voice) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNUpdateSrc**](#function-__synupdatesrc) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNVOICE**](struct_s_y_n_v_o_i_c_e.md) \* voice) <br> |




























## Public Static Attributes Documentation




### variable \_\_SYNCentsTable 

```C++
float __SYNCentsTable[100];
```




<hr>



### variable \_\_SYNOctavesTableUp 

```C++
float __SYNOctavesTableUp[12];
```




<hr>



### variable \_\_SYNSemitonesTableDown 

```C++
float __SYNSemitonesTableDown[128];
```




<hr>



### variable \_\_SYNSemitonesTableUp 

```C++
float __SYNSemitonesTableUp[12];
```




<hr>
## Public Functions Documentation




### function \_\_SYNGetRelativePitch 

```C++
float __SYNGetRelativePitch (
    struct  SYNVOICE * voice
) 
```




<hr>



### function \_\_SYNSetupPitch 

```C++
void __SYNSetupPitch (
    struct  SYNVOICE * voice
) 
```




<hr>



### function \_\_SYNSetupSrc 

```C++
void __SYNSetupSrc (
    struct  SYNVOICE * voice
) 
```




<hr>



### function \_\_SYNUpdateSrc 

```C++
void __SYNUpdateSrc (
    struct  SYNVOICE * voice
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `SDK/src/dolphin/syn/synpitch.c`

