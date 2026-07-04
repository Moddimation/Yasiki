

# File seq.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**seq.h**](seq_8h.md)

[Go to the source code of this file](seq_8h_source.md)



* `#include <dolphin/syn.h>`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**\_SEQSEQUENCE**](struct___s_e_q_s_e_q_u_e_n_c_e.md) <br> |
| struct | [**\_SEQTRACK**](struct___s_e_q_t_r_a_c_k.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**\_SEQSEQUENCE**](struct___s_e_q_s_e_q_u_e_n_c_e.md) | [**SEQSEQUENCE**](#typedef-seqsequence)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**\_SEQTRACK**](struct___s_e_q_t_r_a_c_k.md) | [**SEQTRACK**](#typedef-seqtrack)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SEQAddSequence**](#function-seqaddsequence) ([**SEQSEQUENCE**](seq_8h.md#typedef-seqsequence) \* sequence, [**u32**](types_8h.md#typedef-u32) \* midiStream, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* wt, [**u32**](types_8h.md#typedef-u32) aramBase, [**u32**](types_8h.md#typedef-u32) priorityVoiceAlloc, [**u32**](types_8h.md#typedef-u32) priorityNoteOn, [**u32**](types_8h.md#typedef-u32) priorityNoteRelease) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**SEQGetState**](#function-seqgetstate) ([**SEQSEQUENCE**](seq_8h.md#typedef-seqsequence) \* sequence) <br> |
|  [**f32**](types_8h.md#typedef-f32) | [**SEQGetTempo**](#function-seqgettempo) ([**SEQSEQUENCE**](seq_8h.md#typedef-seqsequence) \* sequence, [**u32**](types_8h.md#typedef-u32) trackIndex) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**SEQGetVolume**](#function-seqgetvolume) ([**SEQSEQUENCE**](seq_8h.md#typedef-seqsequence) \* sequence) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SEQInit**](#function-seqinit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SEQQuit**](#function-seqquit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SEQRegisterControllerCallback**](#function-seqregistercontrollercallback) ([**SEQSEQUENCE**](seq_8h.md#typedef-seqsequence) \* sequence, [**u8**](types_8h.md#typedef-u8) controller, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \*, [**u8**](types_8h.md#typedef-u8)) callback) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SEQRemoveSequence**](#function-seqremovesequence) ([**SEQSEQUENCE**](seq_8h.md#typedef-seqsequence) \* sequence) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SEQRunAudioFrame**](#function-seqrunaudioframe) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SEQSetState**](#function-seqsetstate) ([**SEQSEQUENCE**](seq_8h.md#typedef-seqsequence) \* sequence, [**u32**](types_8h.md#typedef-u32) state) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SEQSetTempo**](#function-seqsettempo) ([**SEQSEQUENCE**](seq_8h.md#typedef-seqsequence) \* sequence, [**u32**](types_8h.md#typedef-u32) trackIndex, [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) bpm) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SEQSetVolume**](#function-seqsetvolume) ([**SEQSEQUENCE**](seq_8h.md#typedef-seqsequence) \* sequence, [**s32**](types_8h.md#typedef-s32) dB) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**SEQ\_ALL\_TRACKS**](seq_8h.md#define-seq_all_tracks)  `-1`<br> |

## Public Types Documentation




### typedef SEQSEQUENCE 

```C++
typedef struct _SEQSEQUENCE SEQSEQUENCE;
```




<hr>



### typedef SEQTRACK 

```C++
typedef struct _SEQTRACK SEQTRACK;
```




<hr>
## Public Functions Documentation




### function SEQAddSequence 

```C++
void SEQAddSequence (
    SEQSEQUENCE * sequence,
    u32 * midiStream,
    void * wt,
    u32 aramBase,
    u32 priorityVoiceAlloc,
    u32 priorityNoteOn,
    u32 priorityNoteRelease
) 
```




<hr>



### function SEQGetState 

```C++
u32 SEQGetState (
    SEQSEQUENCE * sequence
) 
```




<hr>



### function SEQGetTempo 

```C++
f32 SEQGetTempo (
    SEQSEQUENCE * sequence,
    u32 trackIndex
) 
```




<hr>



### function SEQGetVolume 

```C++
s32 SEQGetVolume (
    SEQSEQUENCE * sequence
) 
```




<hr>



### function SEQInit 

```C++
void SEQInit (
    void
) 
```




<hr>



### function SEQQuit 

```C++
void SEQQuit (
    void
) 
```




<hr>



### function SEQRegisterControllerCallback 

```C++
void SEQRegisterControllerCallback (
    SEQSEQUENCE * sequence,
    u8 controller,
    void (*)( void *, u8 ) callback
) 
```




<hr>



### function SEQRemoveSequence 

```C++
void SEQRemoveSequence (
    SEQSEQUENCE * sequence
) 
```




<hr>



### function SEQRunAudioFrame 

```C++
void SEQRunAudioFrame (
    void
) 
```




<hr>



### function SEQSetState 

```C++
void SEQSetState (
    SEQSEQUENCE * sequence,
    u32 state
) 
```




<hr>



### function SEQSetTempo 

```C++
void SEQSetTempo (
    SEQSEQUENCE * sequence,
    u32 trackIndex,
    float bpm
) 
```




<hr>



### function SEQSetVolume 

```C++
void SEQSetVolume (
    SEQSEQUENCE * sequence,
    s32 dB
) 
```




<hr>
## Macro Definition Documentation





### define SEQ\_ALL\_TRACKS 

```C++
#define SEQ_ALL_TRACKS `-1`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/seq.h`

