

# File dtk.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**dtk**](dir_1d471b1f96371d391f50bf9f8bbe7b25.md) **>** [**dtk.c**](dtk_8c.md)

[Go to the source code of this file](dtk_8c_source.md)



* `#include <macros.h>`
* `#include <dolphin/ai.h>`
* `#include <dolphin/dtk.h>`
* `#include <dolphin/dvd.h>`
* `#include <dolphin/os.h>`























## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**DTKTrack**](struct_d_t_k_track.md) \* | [**\_\_DTKCurrentTrack**](#variable-__dtkcurrenttrack)  <br> |
|  [**DTKFlushCallback**](dtk_8h.md#typedef-dtkflushcallback) | [**\_\_DTKFlushCallback**](#variable-__dtkflushcallback)  <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) | [**\_\_DTKInterruptFrequency**](#variable-__dtkinterruptfrequency)  <br> |
|  [**DTKTrack**](struct_d_t_k_track.md) \* | [**\_\_DTKPlayListHead**](#variable-__dtkplaylisthead)  <br> |
|  [**DTKTrack**](struct_d_t_k_track.md) \* | [**\_\_DTKPlayListTail**](#variable-__dtkplaylisttail)  <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) | [**\_\_DTKPosition**](#variable-__dtkposition)  <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) | [**\_\_DTKRepeatMode**](#variable-__dtkrepeatmode)  <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) | [**\_\_DTKShutdownFlag**](#variable-__dtkshutdownflag)  <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) | [**\_\_DTKState**](#variable-__dtkstate)  <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) | [**\_\_DTKTempState**](#variable-__dtktempstate)  <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) | [**\_\_DTKTrackEnded**](#variable-__dtktrackended)  <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u8**](types_8h.md#typedef-u8) | [**\_\_DTKVolumeL**](#variable-__dtkvolumel)  <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u8**](types_8h.md#typedef-u8) | [**\_\_DTKVolumeR**](#variable-__dtkvolumer)  <br> |
|  [**DVDCommandBlock**](struct_d_v_d_command_block.md) | [**\_\_block\_for\_ais\_isr**](#variable-__block_for_ais_isr)  <br> |
|  [**DVDCommandBlock**](struct_d_v_d_command_block.md) | [**\_\_block\_for\_flushtracks**](#variable-__block_for_flushtracks)  <br> |
|  [**DVDCommandBlock**](struct_d_v_d_command_block.md) | [**\_\_block\_for\_next\_track**](#variable-__block_for_next_track)  <br> |
|  [**DVDCommandBlock**](struct_d_v_d_command_block.md) | [**\_\_block\_for\_prep\_callback**](#variable-__block_for_prep_callback)  <br> |
|  [**DVDCommandBlock**](struct_d_v_d_command_block.md) | [**\_\_block\_for\_prev\_track**](#variable-__block_for_prev_track)  <br> |
|  [**DVDCommandBlock**](struct_d_v_d_command_block.md) | [**\_\_block\_for\_repeatmode**](#variable-__block_for_repeatmode)  <br> |
|  [**DVDCommandBlock**](struct_d_v_d_command_block.md) | [**\_\_block\_for\_run\_callback**](#variable-__block_for_run_callback)  <br> |
|  [**DVDCommandBlock**](struct_d_v_d_command_block.md) | [**\_\_block\_for\_set\_state**](#variable-__block_for_set_state)  <br> |
|  [**DVDCommandBlock**](struct_d_v_d_command_block.md) | [**\_\_block\_for\_stream\_status**](#variable-__block_for_stream_status)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DTKFlushTracks**](#function-dtkflushtracks) ([**DTKFlushCallback**](dtk_8h.md#typedef-dtkflushcallback) callback) <br> |
|  [**DTKTrack**](struct_d_t_k_track.md) \* | [**DTKGetCurrentTrack**](#function-dtkgetcurrenttrack) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**DTKGetInterruptFrequency**](#function-dtkgetinterruptfrequency) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**DTKGetPosition**](#function-dtkgetposition) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**DTKGetRepeatMode**](#function-dtkgetrepeatmode) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**DTKGetSampleRate**](#function-dtkgetsamplerate) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**DTKGetState**](#function-dtkgetstate) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u16**](types_8h.md#typedef-u16) | [**DTKGetVolume**](#function-dtkgetvolume) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DTKInit**](#function-dtkinit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DTKNextTrack**](#function-dtknexttrack) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DTKPrevTrack**](#function-dtkprevtrack) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**DTKQueueTrack**](#function-dtkqueuetrack) ([**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* fileName, [**DTKTrack**](struct_d_t_k_track.md) \* track, [**u32**](types_8h.md#typedef-u32) eventMask, [**DTKCallback**](dtk_8h.md#typedef-dtkcallback) callback) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**DTKRemoveTrack**](#function-dtkremovetrack) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DTKTrack**](struct_d_t_k_track.md) \* track) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DTKSetInterruptFrequency**](#function-dtksetinterruptfrequency) ([**u32**](types_8h.md#typedef-u32) samples) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DTKSetRepeatMode**](#function-dtksetrepeatmode) ([**u32**](types_8h.md#typedef-u32) repeat) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DTKSetSampleRate**](#function-dtksetsamplerate) ([**u32**](types_8h.md#typedef-u32) samplerate) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DTKSetState**](#function-dtksetstate) ([**u32**](types_8h.md#typedef-u32) state) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DTKSetVolume**](#function-dtksetvolume) ([**u8**](types_8h.md#typedef-u8) left, [**u8**](types_8h.md#typedef-u8) right) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DTKShutdown**](#function-dtkshutdown) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DTKBackward**](#function-__dtkbackward) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DTKCallbackForAIInterrupt**](#function-__dtkcallbackforaiinterrupt) ([**u32**](types_8h.md#typedef-u32) count) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DTKCallbackForFlush**](#function-__dtkcallbackforflush) ([**s32**](types_8h.md#typedef-s32) result, [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DTKCallbackForNextTrack**](#function-__dtkcallbackfornexttrack) ([**s32**](types_8h.md#typedef-s32) result, [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DTKCallbackForPlaylist**](#function-__dtkcallbackforplaylist) ([**s32**](types_8h.md#typedef-s32) result, [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DTKCallbackForPreparePaused**](#function-__dtkcallbackforpreparepaused) ([**s32**](types_8h.md#typedef-s32) result, [**DVDFileInfo**](struct_d_v_d_file_info.md) \* fileInfo) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DTKCallbackForPrevTrack**](#function-__dtkcallbackforprevtrack) ([**s32**](types_8h.md#typedef-s32) result, [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DTKCallbackForRun**](#function-__dtkcallbackforrun) ([**s32**](types_8h.md#typedef-s32) result, [**DVDFileInfo**](struct_d_v_d_file_info.md) \* fileInfo) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DTKCallbackForStop**](#function-__dtkcallbackforstop) ([**s32**](types_8h.md#typedef-s32) result, [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DTKCallbackForStreamStatus**](#function-__dtkcallbackforstreamstatus) ([**s32**](types_8h.md#typedef-s32) result, [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DTKCheckUserCallback**](#function-__dtkcheckusercallback) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DTKTrack**](struct_d_t_k_track.md) \* track, [**u32**](types_8h.md#typedef-u32) event) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DTKForward**](#function-__dtkforward) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DTKPrepareCurrentTrack**](#function-__dtkpreparecurrenttrack) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DTKPrepareCurrentTrackPaused**](#function-__dtkpreparecurrenttrackpaused) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DTKStartAi**](#function-__dtkstartai) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DTKStopAi**](#function-__dtkstopai) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |


























## Public Static Attributes Documentation




### variable \_\_DTKCurrentTrack 

```C++
DTKTrack* __DTKCurrentTrack;
```




<hr>



### variable \_\_DTKFlushCallback 

```C++
DTKFlushCallback __DTKFlushCallback;
```




<hr>



### variable \_\_DTKInterruptFrequency 

```C++
volatile u32 __DTKInterruptFrequency;
```




<hr>



### variable \_\_DTKPlayListHead 

```C++
DTKTrack* __DTKPlayListHead;
```




<hr>



### variable \_\_DTKPlayListTail 

```C++
DTKTrack* __DTKPlayListTail;
```




<hr>



### variable \_\_DTKPosition 

```C++
volatile u32 __DTKPosition;
```




<hr>



### variable \_\_DTKRepeatMode 

```C++
volatile u32 __DTKRepeatMode;
```




<hr>



### variable \_\_DTKShutdownFlag 

```C++
volatile u32 __DTKShutdownFlag;
```




<hr>



### variable \_\_DTKState 

```C++
volatile u32 __DTKState;
```




<hr>



### variable \_\_DTKTempState 

```C++
volatile u32 __DTKTempState;
```




<hr>



### variable \_\_DTKTrackEnded 

```C++
volatile u32 __DTKTrackEnded;
```




<hr>



### variable \_\_DTKVolumeL 

```C++
volatile u8 __DTKVolumeL;
```




<hr>



### variable \_\_DTKVolumeR 

```C++
volatile u8 __DTKVolumeR;
```




<hr>



### variable \_\_block\_for\_ais\_isr 

```C++
DVDCommandBlock __block_for_ais_isr;
```




<hr>



### variable \_\_block\_for\_flushtracks 

```C++
DVDCommandBlock __block_for_flushtracks;
```




<hr>



### variable \_\_block\_for\_next\_track 

```C++
DVDCommandBlock __block_for_next_track;
```




<hr>



### variable \_\_block\_for\_prep\_callback 

```C++
DVDCommandBlock __block_for_prep_callback;
```




<hr>



### variable \_\_block\_for\_prev\_track 

```C++
DVDCommandBlock __block_for_prev_track;
```




<hr>



### variable \_\_block\_for\_repeatmode 

```C++
DVDCommandBlock __block_for_repeatmode;
```




<hr>



### variable \_\_block\_for\_run\_callback 

```C++
DVDCommandBlock __block_for_run_callback;
```




<hr>



### variable \_\_block\_for\_set\_state 

```C++
DVDCommandBlock __block_for_set_state;
```




<hr>



### variable \_\_block\_for\_stream\_status 

```C++
DVDCommandBlock __block_for_stream_status;
```




<hr>
## Public Functions Documentation




### function DTKFlushTracks 

```C++
void DTKFlushTracks (
    DTKFlushCallback callback
) 
```




<hr>



### function DTKGetCurrentTrack 

```C++
DTKTrack * DTKGetCurrentTrack (
    void
) 
```




<hr>



### function DTKGetInterruptFrequency 

```C++
u32 DTKGetInterruptFrequency (
    void
) 
```




<hr>



### function DTKGetPosition 

```C++
u32 DTKGetPosition (
    void
) 
```




<hr>



### function DTKGetRepeatMode 

```C++
u32 DTKGetRepeatMode (
    void
) 
```




<hr>



### function DTKGetSampleRate 

```C++
u32 DTKGetSampleRate (
    void
) 
```




<hr>



### function DTKGetState 

```C++
u32 DTKGetState (
    void
) 
```




<hr>



### function DTKGetVolume 

```C++
u16 DTKGetVolume (
    void
) 
```




<hr>



### function DTKInit 

```C++
void DTKInit (
    void
) 
```




<hr>



### function DTKNextTrack 

```C++
void DTKNextTrack (
    void
) 
```




<hr>



### function DTKPrevTrack 

```C++
void DTKPrevTrack (
    void
) 
```




<hr>



### function DTKQueueTrack 

```C++
u32 DTKQueueTrack (
    char * fileName,
    DTKTrack * track,
    u32 eventMask,
    DTKCallback callback
) 
```




<hr>



### function DTKRemoveTrack 

```C++
u32 DTKRemoveTrack (
    struct  DTKTrack * track
) 
```




<hr>



### function DTKSetInterruptFrequency 

```C++
void DTKSetInterruptFrequency (
    u32 samples
) 
```




<hr>



### function DTKSetRepeatMode 

```C++
void DTKSetRepeatMode (
    u32 repeat
) 
```




<hr>



### function DTKSetSampleRate 

```C++
void DTKSetSampleRate (
    u32 samplerate
) 
```




<hr>



### function DTKSetState 

```C++
void DTKSetState (
    u32 state
) 
```




<hr>



### function DTKSetVolume 

```C++
void DTKSetVolume (
    u8 left,
    u8 right
) 
```




<hr>



### function DTKShutdown 

```C++
void DTKShutdown (
    void
) 
```




<hr>
## Public Static Functions Documentation




### function \_\_DTKBackward 

```C++
static void __DTKBackward (
    void
) 
```




<hr>



### function \_\_DTKCallbackForAIInterrupt 

```C++
static void __DTKCallbackForAIInterrupt (
    u32 count
) 
```




<hr>



### function \_\_DTKCallbackForFlush 

```C++
static void __DTKCallbackForFlush (
    s32 result,
    DVDCommandBlock * block
) 
```




<hr>



### function \_\_DTKCallbackForNextTrack 

```C++
static void __DTKCallbackForNextTrack (
    s32 result,
    DVDCommandBlock * block
) 
```




<hr>



### function \_\_DTKCallbackForPlaylist 

```C++
static void __DTKCallbackForPlaylist (
    s32 result,
    DVDCommandBlock * block
) 
```




<hr>



### function \_\_DTKCallbackForPreparePaused 

```C++
static void __DTKCallbackForPreparePaused (
    s32 result,
    DVDFileInfo * fileInfo
) 
```




<hr>



### function \_\_DTKCallbackForPrevTrack 

```C++
static void __DTKCallbackForPrevTrack (
    s32 result,
    DVDCommandBlock * block
) 
```




<hr>



### function \_\_DTKCallbackForRun 

```C++
static void __DTKCallbackForRun (
    s32 result,
    DVDFileInfo * fileInfo
) 
```




<hr>



### function \_\_DTKCallbackForStop 

```C++
static void __DTKCallbackForStop (
    s32 result,
    DVDCommandBlock * block
) 
```




<hr>



### function \_\_DTKCallbackForStreamStatus 

```C++
static void __DTKCallbackForStreamStatus (
    s32 result,
    DVDCommandBlock * block
) 
```




<hr>



### function \_\_DTKCheckUserCallback 

```C++
static void __DTKCheckUserCallback (
    struct  DTKTrack * track,
    u32 event
) 
```




<hr>



### function \_\_DTKForward 

```C++
static void __DTKForward (
    void
) 
```




<hr>



### function \_\_DTKPrepareCurrentTrack 

```C++
static void __DTKPrepareCurrentTrack (
    void
) 
```




<hr>



### function \_\_DTKPrepareCurrentTrackPaused 

```C++
static void __DTKPrepareCurrentTrackPaused (
    void
) 
```




<hr>



### function \_\_DTKStartAi 

```C++
static void __DTKStartAi (
    void
) 
```




<hr>



### function \_\_DTKStopAi 

```C++
static void __DTKStopAi (
    void
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/dtk/dtk.c`

