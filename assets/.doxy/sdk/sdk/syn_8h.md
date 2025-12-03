

# File syn.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**syn.h**](syn_8h.md)

[Go to the source code of this file](syn_8h_source.md)



* `#include <dolphin/ax.h>`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**SYNSYNTH**](struct_s_y_n_s_y_n_t_h.md) <br> |
| struct | [**SYNVOICE**](struct_s_y_n_v_o_i_c_e.md) <br> |
| struct | [**WTADPCM**](struct_w_t_a_d_p_c_m.md) <br> |
| struct | [**WTART**](struct_w_t_a_r_t.md) <br> |
| struct | [**WTINST**](struct_w_t_i_n_s_t.md) <br> |
| struct | [**WTREGION**](struct_w_t_r_e_g_i_o_n.md) <br> |
| struct | [**WTSAMPLE**](struct_w_t_s_a_m_p_l_e.md) <br> |






















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**u32**](types_8h.md#typedef-u32) | [**SYNGetActiveNotes**](#function-syngetactivenotes) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNSYNTH**](struct_s_y_n_s_y_n_t_h.md) \* synth) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**SYNGetMasterVolume**](#function-syngetmastervolume) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNSYNTH**](struct_s_y_n_s_y_n_t_h.md) \* synth) <br> |
|  [**u8**](types_8h.md#typedef-u8) | [**SYNGetMidiController**](#function-syngetmidicontroller) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNSYNTH**](struct_s_y_n_s_y_n_t_h.md) \* synth, [**u8**](types_8h.md#typedef-u8) midiChannel, [**u8**](types_8h.md#typedef-u8) function) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SYNInit**](#function-syninit) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SYNInitSynth**](#function-syninitsynth) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNSYNTH**](struct_s_y_n_s_y_n_t_h.md) \* synth, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* wavetable, [**u32**](types_8h.md#typedef-u32) aramBase, [**u32**](types_8h.md#typedef-u32) priorityVoiceAlloc, [**u32**](types_8h.md#typedef-u32) priorityNoteOn, [**u32**](types_8h.md#typedef-u32) priorityNoteRelease) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SYNMidiInput**](#function-synmidiinput) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNSYNTH**](struct_s_y_n_s_y_n_t_h.md) \* synth, [**u8**](types_8h.md#typedef-u8) \* input) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SYNQuit**](#function-synquit) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SYNQuitSynth**](#function-synquitsynth) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNSYNTH**](struct_s_y_n_s_y_n_t_h.md) \* synth) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SYNRunAudioFrame**](#function-synrunaudioframe) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SYNSetMasterVolume**](#function-synsetmastervolume) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNSYNTH**](struct_s_y_n_s_y_n_t_h.md) \* synth, [**s32**](types_8h.md#typedef-s32) dB) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**SYN\_INPUT\_BUFFER\_SIZE**](syn_8h.md#define-syn_input_buffer_size)  `0x100`<br> |
| define  | [**SYN\_SAMPLE\_FORMAT\_ADPCM**](syn_8h.md#define-syn_sample_format_adpcm)  `0`<br> |
| define  | [**SYN\_SAMPLE\_FORMAT\_PCM16**](syn_8h.md#define-syn_sample_format_pcm16)  `1`<br> |
| define  | [**SYN\_SAMPLE\_FORMAT\_PCM8**](syn_8h.md#define-syn_sample_format_pcm8)  `2`<br> |

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



### function SYNGetMidiController 

```C++
u8 SYNGetMidiController (
    struct  SYNSYNTH * synth,
    u8 midiChannel,
    u8 function
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
## Macro Definition Documentation





### define SYN\_INPUT\_BUFFER\_SIZE 

```C++
#define SYN_INPUT_BUFFER_SIZE `0x100`
```




<hr>



### define SYN\_SAMPLE\_FORMAT\_ADPCM 

```C++
#define SYN_SAMPLE_FORMAT_ADPCM `0`
```




<hr>



### define SYN\_SAMPLE\_FORMAT\_PCM16 

```C++
#define SYN_SAMPLE_FORMAT_PCM16 `1`
```




<hr>



### define SYN\_SAMPLE\_FORMAT\_PCM8 

```C++
#define SYN_SAMPLE_FORMAT_PCM8 `2`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/syn.h`

