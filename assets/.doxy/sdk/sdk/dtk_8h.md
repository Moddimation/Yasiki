

# File dtk.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**dtk.h**](dtk_8h.md)

[Go to the source code of this file](dtk_8h_source.md)



* `#include <dolphin/dvd.h>`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**DTKTrack**](struct_d_t_k_track.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**DTKCallback**](#typedef-dtkcallback)  <br> |
| typedef [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**DTKFlushCallback**](#typedef-dtkflushcallback)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DTKTrack**](struct_d_t_k_track.md) | [**DTKTrack**](#typedef-dtktrack)  <br> |




















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



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**DTK\_MODE\_ALLREPEAT**](dtk_8h.md#define-dtk_mode_allrepeat)  `1`<br> |
| define  | [**DTK\_MODE\_NOREPEAT**](dtk_8h.md#define-dtk_mode_norepeat)  `0`<br> |
| define  | [**DTK\_MODE\_REPEAT1**](dtk_8h.md#define-dtk_mode_repeat1)  `2`<br> |
| define  | [**DTK\_STATE\_BUSY**](dtk_8h.md#define-dtk_state_busy)  `3`<br> |
| define  | [**DTK\_STATE\_PAUSE**](dtk_8h.md#define-dtk_state_pause)  `2`<br> |
| define  | [**DTK\_STATE\_PREPARE**](dtk_8h.md#define-dtk_state_prepare)  `4`<br> |
| define  | [**DTK\_STATE\_RUN**](dtk_8h.md#define-dtk_state_run)  `1`<br> |
| define  | [**DTK\_STATE\_STOP**](dtk_8h.md#define-dtk_state_stop)  `0`<br> |

## Public Types Documentation




### typedef DTKCallback 

```C++
typedef void(* DTKCallback) (u32 eventMask);
```




<hr>



### typedef DTKFlushCallback 

```C++
typedef void(* DTKFlushCallback) (void);
```




<hr>



### typedef DTKTrack 

```C++
typedef struct DTKTrack DTKTrack;
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
## Macro Definition Documentation





### define DTK\_MODE\_ALLREPEAT 

```C++
#define DTK_MODE_ALLREPEAT `1`
```




<hr>



### define DTK\_MODE\_NOREPEAT 

```C++
#define DTK_MODE_NOREPEAT `0`
```




<hr>



### define DTK\_MODE\_REPEAT1 

```C++
#define DTK_MODE_REPEAT1 `2`
```




<hr>



### define DTK\_STATE\_BUSY 

```C++
#define DTK_STATE_BUSY `3`
```




<hr>



### define DTK\_STATE\_PAUSE 

```C++
#define DTK_STATE_PAUSE `2`
```




<hr>



### define DTK\_STATE\_PREPARE 

```C++
#define DTK_STATE_PREPARE `4`
```




<hr>



### define DTK\_STATE\_RUN 

```C++
#define DTK_STATE_RUN `1`
```




<hr>



### define DTK\_STATE\_STOP 

```C++
#define DTK_STATE_STOP `0`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/dtk.h`

