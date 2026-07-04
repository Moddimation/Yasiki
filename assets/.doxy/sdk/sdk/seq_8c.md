

# File seq.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**seq**](dir_5d353e38bc710c008caaf00d8b6cf945.md) **>** [**seq.c**](seq_8c.md)

[Go to the source code of this file](seq_8c_source.md)



* `#include <dolphin/seq.h>`
* `#include <dolphin.h>`























## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**u8**](types_8h.md#typedef-u8) | [**\_\_SEQMidiEventLength**](#variable-__seqmidieventlength)   = `/* multi line expression */`<br> |
|  [**SEQSEQUENCE**](seq_8h.md#typedef-seqsequence) \* | [**\_\_SEQSequenceList**](#variable-__seqsequencelist)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SEQAddSequence**](#function-seqaddsequence) ([**SEQSEQUENCE**](seq_8h.md#typedef-seqsequence) \* sequence, [**u32**](types_8h.md#typedef-u32) \* midiStream, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* wt, [**u32**](types_8h.md#typedef-u32) aramBase, [**u32**](types_8h.md#typedef-u32) priorityVoiceAlloc, [**u32**](types_8h.md#typedef-u32) priorityNoteOn, [**u32**](types_8h.md#typedef-u32) priorityNoteRelease) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**SEQGetState**](#function-seqgetstate) ([**SEQSEQUENCE**](seq_8h.md#typedef-seqsequence) \* sequence) <br> |
|  [**f32**](types_8h.md#typedef-f32) | [**SEQGetTempo**](#function-seqgettempo) ([**SEQSEQUENCE**](seq_8h.md#typedef-seqsequence) \* sequence, [**u32**](types_8h.md#typedef-u32) trackIndex) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**SEQGetVolume**](#function-seqgetvolume) ([**SEQSEQUENCE**](seq_8h.md#typedef-seqsequence) \* sequence) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SEQInit**](#function-seqinit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SEQQuit**](#function-seqquit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SEQRegisterControllerCallback**](#function-seqregistercontrollercallback) ([**SEQSEQUENCE**](seq_8h.md#typedef-seqsequence) \* sequence, [**u8**](types_8h.md#typedef-u8) controller, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \*, [**u16**](types_8h.md#typedef-u16)) callback) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SEQRemoveSequence**](#function-seqremovesequence) ([**SEQSEQUENCE**](seq_8h.md#typedef-seqsequence) \* sequence) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SEQRunAudioFrame**](#function-seqrunaudioframe) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SEQSetState**](#function-seqsetstate) ([**SEQSEQUENCE**](seq_8h.md#typedef-seqsequence) \* sequence, [**u32**](types_8h.md#typedef-u32) state) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SEQSetTempo**](#function-seqsettempo) ([**SEQSEQUENCE**](seq_8h.md#typedef-seqsequence) \* sequence, [**u32**](types_8h.md#typedef-u32) trackIndex, [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) bpm) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SEQSetVolume**](#function-seqsetvolume) ([**SEQSEQUENCE**](seq_8h.md#typedef-seqsequence) \* sequence, [**s32**](types_8h.md#typedef-s32) dB) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**u32**](types_8h.md#typedef-u32) | [**\_\_SEQGetIntTrack**](#function-__seqgetinttrack) ([**SEQTRACK**](seq_8h.md#typedef-seqtrack) \* track) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SEQHandleMetaEvent**](#function-__seqhandlemetaevent) ([**SEQTRACK**](seq_8h.md#typedef-seqtrack) \* track) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SEQHandleSynthEvent**](#function-__seqhandlesynthevent) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNSYNTH**](struct_s_y_n_s_y_n_t_h.md) \* synth, [**SEQTRACK**](seq_8h.md#typedef-seqtrack) \* track) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SEQHandleSysExEvent**](#function-__seqhandlesysexevent) ([**SEQTRACK**](seq_8h.md#typedef-seqtrack) \* track) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SEQInitTracks**](#function-__seqinittracks) ([**SEQSEQUENCE**](seq_8h.md#typedef-seqsequence) \* sequence, [**u8**](types_8h.md#typedef-u8) \* read, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) tracks) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SEQPushSequenceList**](#function-__seqpushsequencelist) ([**SEQSEQUENCE**](seq_8h.md#typedef-seqsequence) \* sequence) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SEQReadHeader**](#function-__seqreadheader) ([**SEQSEQUENCE**](seq_8h.md#typedef-seqsequence) \* sequence, [**u8**](types_8h.md#typedef-u8) \* midiStream) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SEQRemoveSequenceFromList**](#function-__seqremovesequencefromlist) ([**SEQSEQUENCE**](seq_8h.md#typedef-seqsequence) \* sequence) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SEQRunEvent**](#function-__seqrunevent) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNSYNTH**](struct_s_y_n_s_y_n_t_h.md) \* synth, [**SEQTRACK**](seq_8h.md#typedef-seqtrack) \* track) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SEQSetTicksPerFrame**](#function-__seqsetticksperframe) ([**SEQTRACK**](seq_8h.md#typedef-seqtrack) \* track, [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) bps) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SEQTempoMetaEvent**](#function-__seqtempometaevent) ([**SEQTRACK**](seq_8h.md#typedef-seqtrack) \* track) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SEQTrackEnd**](#function-__seqtrackend) ([**SEQTRACK**](seq_8h.md#typedef-seqtrack) \* track) <br> |


























## Public Static Attributes Documentation




### variable \_\_SEQMidiEventLength 

```C++
u8 __SEQMidiEventLength[128];
```




<hr>



### variable \_\_SEQSequenceList 

```C++
SEQSEQUENCE* __SEQSequenceList;
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
    void (*)( void *, u16 ) callback
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
## Public Static Functions Documentation




### function \_\_SEQGetIntTrack 

```C++
static u32 __SEQGetIntTrack (
    SEQTRACK * track
) 
```




<hr>



### function \_\_SEQHandleMetaEvent 

```C++
static void __SEQHandleMetaEvent (
    SEQTRACK * track
) 
```




<hr>



### function \_\_SEQHandleSynthEvent 

```C++
static void __SEQHandleSynthEvent (
    struct  SYNSYNTH * synth,
    SEQTRACK * track
) 
```




<hr>



### function \_\_SEQHandleSysExEvent 

```C++
static void __SEQHandleSysExEvent (
    SEQTRACK * track
) 
```




<hr>



### function \_\_SEQInitTracks 

```C++
static void __SEQInitTracks (
    SEQSEQUENCE * sequence,
    u8 * read,
    int tracks
) 
```




<hr>



### function \_\_SEQPushSequenceList 

```C++
static void __SEQPushSequenceList (
    SEQSEQUENCE * sequence
) 
```




<hr>



### function \_\_SEQReadHeader 

```C++
static void __SEQReadHeader (
    SEQSEQUENCE * sequence,
    u8 * midiStream
) 
```




<hr>



### function \_\_SEQRemoveSequenceFromList 

```C++
static void __SEQRemoveSequenceFromList (
    SEQSEQUENCE * sequence
) 
```




<hr>



### function \_\_SEQRunEvent 

```C++
static void __SEQRunEvent (
    struct  SYNSYNTH * synth,
    SEQTRACK * track
) 
```




<hr>



### function \_\_SEQSetTicksPerFrame 

```C++
static void __SEQSetTicksPerFrame (
    SEQTRACK * track,
    float bps
) 
```




<hr>



### function \_\_SEQTempoMetaEvent 

```C++
static void __SEQTempoMetaEvent (
    SEQTRACK * track
) 
```




<hr>



### function \_\_SEQTrackEnd 

```C++
static void __SEQTrackEnd (
    SEQTRACK * track
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/seq/seq.c`

