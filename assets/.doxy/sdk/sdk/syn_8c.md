

# File syn.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**syn**](dir_69283c2dbc63a8d4f909cdea61511c2a.md) **>** [**syn.c**](syn_8c.md)

[Go to the source code of this file](syn_8c_source.md)



* `#include <dolphin/ax.h>`
* `#include <dolphin/mix.h>`
* `#include <dolphin/os.h>`
* `#include <dolphin/syn.h>`
* `#include <dolphin.h>`
* `#include "fake_tgmath.h"`
* `#include "SYNPrivate.h"`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNSYNTH**](struct_s_y_n_s_y_n_t_h.md) \* | [**\_\_SYNSynthList**](#variable-__synsynthlist)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**u32**](types_8h.md#typedef-u32) | [**SYNGetActiveNotes**](#function-syngetactivenotes) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNSYNTH**](struct_s_y_n_s_y_n_t_h.md) \* synth) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**SYNGetMasterVolume**](#function-syngetmastervolume) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNSYNTH**](struct_s_y_n_s_y_n_t_h.md) \* synth) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SYNInit**](#function-syninit) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SYNInitSynth**](#function-syninitsynth) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNSYNTH**](struct_s_y_n_s_y_n_t_h.md) \* synth, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* wavetable, [**u32**](types_8h.md#typedef-u32) aramBase, [**u32**](types_8h.md#typedef-u32) priorityVoiceAlloc, [**u32**](types_8h.md#typedef-u32) priorityNoteOn, [**u32**](types_8h.md#typedef-u32) priorityNoteRelease) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SYNMidiInput**](#function-synmidiinput) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNSYNTH**](struct_s_y_n_s_y_n_t_h.md) \* synth, [**u8**](types_8h.md#typedef-u8) \* input) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SYNQuit**](#function-synquit) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SYNQuitSynth**](#function-synquitsynth) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNSYNTH**](struct_s_y_n_s_y_n_t_h.md) \* synth) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SYNRunAudioFrame**](#function-synrunaudioframe) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SYNSetMasterVolume**](#function-synsetmastervolume) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNSYNTH**](struct_s_y_n_s_y_n_t_h.md) \* synth, [**s32**](types_8h.md#typedef-s32) dB) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNAddSynthToList**](#function-__synaddsynthtolist) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNSYNTH**](struct_s_y_n_s_y_n_t_h.md) \* synth) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNRemoveSynthFromList**](#function-__synremovesynthfromlist) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNSYNTH**](struct_s_y_n_s_y_n_t_h.md) \* synth) <br> |


























## Public Attributes Documentation




### variable \_\_SYNSynthList 

```C++
struct SYNSYNTH* __SYNSynthList;
```




<hr>
## Public Functions Documentation




### function SYNGetActiveNotes 

```C++
u32 SYNGetActiveNotes (
    struct  SYNSYNTH * synth
) 
```




<hr>



### function SYNGetMasterVolume 

```C++
s32 SYNGetMasterVolume (
    struct  SYNSYNTH * synth
) 
```




<hr>



### function SYNInit 

```C++
void SYNInit () 
```




<hr>



### function SYNInitSynth 

```C++
void SYNInitSynth (
    struct  SYNSYNTH * synth,
    void * wavetable,
    u32 aramBase,
    u32 priorityVoiceAlloc,
    u32 priorityNoteOn,
    u32 priorityNoteRelease
) 
```




<hr>



### function SYNMidiInput 

```C++
void SYNMidiInput (
    struct  SYNSYNTH * synth,
    u8 * input
) 
```




<hr>



### function SYNQuit 

```C++
void SYNQuit () 
```




<hr>



### function SYNQuitSynth 

```C++
void SYNQuitSynth (
    struct  SYNSYNTH * synth
) 
```




<hr>



### function SYNRunAudioFrame 

```C++
void SYNRunAudioFrame () 
```




<hr>



### function SYNSetMasterVolume 

```C++
void SYNSetMasterVolume (
    struct  SYNSYNTH * synth,
    s32 dB
) 
```




<hr>
## Public Static Functions Documentation




### function \_\_SYNAddSynthToList 

```C++
static void __SYNAddSynthToList (
    struct  SYNSYNTH * synth
) 
```




<hr>



### function \_\_SYNRemoveSynthFromList 

```C++
static void __SYNRemoveSynthFromList (
    struct  SYNSYNTH * synth
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/syn/syn.c`

