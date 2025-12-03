

# File synctrl.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**syn**](dir_69283c2dbc63a8d4f909cdea61511c2a.md) **>** [**synctrl.c**](synctrl_8c.md)

[Go to the source code of this file](synctrl_8c_source.md)



* `#include <dolphin/ax.h>`
* `#include <dolphin/mix.h>`
* `#include <dolphin/syn.h>`
* `#include <dolphin.h>`
* `#include "fake_tgmath.h"`
* `#include "SYNPrivate.h"`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNn128**](#variable-__synn128)   = `/* multi line expression */`<br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**u8**](types_8h.md#typedef-u8) | [**SYNGetMidiController**](#function-syngetmidicontroller) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNSYNTH**](struct_s_y_n_s_y_n_t_h.md) \* synth, [**u8**](types_8h.md#typedef-u8) midiChannel, [**u8**](types_8h.md#typedef-u8) function) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNClearAllNotes**](#function-__synclearallnotes) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNSYNTH**](struct_s_y_n_s_y_n_t_h.md) \* synth) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNResetAllControllers**](#function-__synresetallcontrollers) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNSYNTH**](struct_s_y_n_s_y_n_t_h.md) \* synth) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNResetController**](#function-__synresetcontroller) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNSYNTH**](struct_s_y_n_s_y_n_t_h.md) \* synth, [**u8**](types_8h.md#typedef-u8) midiChannel) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNResetController0**](#function-__synresetcontroller0) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNSYNTH**](struct_s_y_n_s_y_n_t_h.md) \* synth, [**u8**](types_8h.md#typedef-u8) midiChannel) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNRunInputBufferEvents**](#function-__synruninputbufferevents) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNSYNTH**](struct_s_y_n_s_y_n_t_h.md) \* synth) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNSetController**](#function-__synsetcontroller) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNSYNTH**](struct_s_y_n_s_y_n_t_h.md) \* synth, [**u8**](types_8h.md#typedef-u8) midiChannel, [**u8**](types_8h.md#typedef-u8) function, [**u8**](types_8h.md#typedef-u8) value) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNMidiIn**](#function-__synmidiin) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNSYNTH**](struct_s_y_n_s_y_n_t_h.md) \* synth, [**u8**](types_8h.md#typedef-u8) \* input) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNNoteOff**](#function-__synnoteoff) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNSYNTH**](struct_s_y_n_s_y_n_t_h.md) \* synth, [**u8**](types_8h.md#typedef-u8) midiChannel, [**u8**](types_8h.md#typedef-u8) keyNum) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNNoteOn**](#function-__synnoteon) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNSYNTH**](struct_s_y_n_s_y_n_t_h.md) \* synth, [**u8**](types_8h.md#typedef-u8) midiChannel, [**u8**](types_8h.md#typedef-u8) keyNum, [**u8**](types_8h.md#typedef-u8) keyVel) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNPitchWheel**](#function-__synpitchwheel) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNSYNTH**](struct_s_y_n_s_y_n_t_h.md) \* synth, [**u8**](types_8h.md#typedef-u8) midiChannel, [**u8**](types_8h.md#typedef-u8) lsb, [**u8**](types_8h.md#typedef-u8) msb) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNProgramChange**](#function-__synprogramchange) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNSYNTH**](struct_s_y_n_s_y_n_t_h.md) \* synth, [**u8**](types_8h.md#typedef-u8) midiChannel, [**u8**](types_8h.md#typedef-u8) program) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNReleaseChannelNotes**](#function-__synreleasechannelnotes) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNSYNTH**](struct_s_y_n_s_y_n_t_h.md) \* synth, [**u8**](types_8h.md#typedef-u8) midiChannel) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNSetData**](#function-__synsetdata) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNSYNTH**](struct_s_y_n_s_y_n_t_h.md) \* synth, [**u8**](types_8h.md#typedef-u8) midiChannel) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SYNSetSustainPedal**](#function-__synsetsustainpedal) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNSYNTH**](struct_s_y_n_s_y_n_t_h.md) \* synth, [**u8**](types_8h.md#typedef-u8) midiChannel, [**u8**](types_8h.md#typedef-u8) data) <br> |


























## Public Attributes Documentation




### variable \_\_SYNn128 

```C++
float __SYNn128[128];
```




<hr>
## Public Functions Documentation




### function SYNGetMidiController 

```C++
u8 SYNGetMidiController (
    struct  SYNSYNTH * synth,
    u8 midiChannel,
    u8 function
) 
```




<hr>



### function \_\_SYNClearAllNotes 

```C++
void __SYNClearAllNotes (
    struct  SYNSYNTH * synth
) 
```




<hr>



### function \_\_SYNResetAllControllers 

```C++
void __SYNResetAllControllers (
    struct  SYNSYNTH * synth
) 
```




<hr>



### function \_\_SYNResetController 

```C++
void __SYNResetController (
    struct  SYNSYNTH * synth,
    u8 midiChannel
) 
```




<hr>



### function \_\_SYNResetController0 

```C++
void __SYNResetController0 (
    struct  SYNSYNTH * synth,
    u8 midiChannel
) 
```




<hr>



### function \_\_SYNRunInputBufferEvents 

```C++
void __SYNRunInputBufferEvents (
    struct  SYNSYNTH * synth
) 
```




<hr>



### function \_\_SYNSetController 

```C++
void __SYNSetController (
    struct  SYNSYNTH * synth,
    u8 midiChannel,
    u8 function,
    u8 value
) 
```




<hr>
## Public Static Functions Documentation




### function \_\_SYNMidiIn 

```C++
static void __SYNMidiIn (
    struct  SYNSYNTH * synth,
    u8 * input
) 
```




<hr>



### function \_\_SYNNoteOff 

```C++
static void __SYNNoteOff (
    struct  SYNSYNTH * synth,
    u8 midiChannel,
    u8 keyNum
) 
```




<hr>



### function \_\_SYNNoteOn 

```C++
static void __SYNNoteOn (
    struct  SYNSYNTH * synth,
    u8 midiChannel,
    u8 keyNum,
    u8 keyVel
) 
```




<hr>



### function \_\_SYNPitchWheel 

```C++
static void __SYNPitchWheel (
    struct  SYNSYNTH * synth,
    u8 midiChannel,
    u8 lsb,
    u8 msb
) 
```




<hr>



### function \_\_SYNProgramChange 

```C++
static void __SYNProgramChange (
    struct  SYNSYNTH * synth,
    u8 midiChannel,
    u8 program
) 
```




<hr>



### function \_\_SYNReleaseChannelNotes 

```C++
static void __SYNReleaseChannelNotes (
    struct  SYNSYNTH * synth,
    u8 midiChannel
) 
```




<hr>



### function \_\_SYNSetData 

```C++
static void __SYNSetData (
    struct  SYNSYNTH * synth,
    u8 midiChannel
) 
```




<hr>



### function \_\_SYNSetSustainPedal 

```C++
static void __SYNSetSustainPedal (
    struct  SYNSYNTH * synth,
    u8 midiChannel,
    u8 data
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/syn/synctrl.c`

