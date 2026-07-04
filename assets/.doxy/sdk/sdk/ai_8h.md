

# File ai.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**ai.h**](ai_8h.md)

[Go to the source code of this file](ai_8h_source.md)



* `#include <types.h>`

















## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**AIDCallback**](#typedef-aidcallback)  <br> |
| typedef [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**AISCallback**](#typedef-aiscallback)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**BOOL**](types_8h.md#typedef-bool) | [**AICheckInit**](#function-aicheckinit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**AIGetDMABytesLeft**](#function-aigetdmabytesleft) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**AIGetDMAEnableFlag**](#function-aigetdmaenableflag) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**AIGetDMALength**](#function-aigetdmalength) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**AIGetDMAStartAddr**](#function-aigetdmastartaddr) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**AIGetDSPSampleRate**](#function-aigetdspsamplerate) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**AIGetStreamPlayState**](#function-aigetstreamplaystate) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**AIGetStreamSampleCount**](#function-aigetstreamsamplecount) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**AIGetStreamSampleRate**](#function-aigetstreamsamplerate) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**AIGetStreamTrigger**](#function-aigetstreamtrigger) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u8**](types_8h.md#typedef-u8) | [**AIGetStreamVolLeft**](#function-aigetstreamvolleft) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u8**](types_8h.md#typedef-u8) | [**AIGetStreamVolRight**](#function-aigetstreamvolright) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AIInit**](#function-aiinit) ([**u8**](types_8h.md#typedef-u8) \* stack) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AIInitDMA**](#function-aiinitdma) ([**u32**](types_8h.md#typedef-u32) start\_addr, [**u32**](types_8h.md#typedef-u32) length) <br> |
|  [**AIDCallback**](ai_8h.md#typedef-aidcallback) | [**AIRegisterDMACallback**](#function-airegisterdmacallback) ([**AIDCallback**](ai_8h.md#typedef-aidcallback) callback) <br> |
|  [**AISCallback**](ai_8h.md#typedef-aiscallback) | [**AIRegisterStreamCallback**](#function-airegisterstreamcallback) ([**AISCallback**](ai_8h.md#typedef-aiscallback) callback) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AIReset**](#function-aireset) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AIResetStreamSampleCount**](#function-airesetstreamsamplecount) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AISetDSPSampleRate**](#function-aisetdspsamplerate) ([**u32**](types_8h.md#typedef-u32) rate) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AISetStreamPlayState**](#function-aisetstreamplaystate) ([**u32**](types_8h.md#typedef-u32) state) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AISetStreamSampleRate**](#function-aisetstreamsamplerate) ([**u32**](types_8h.md#typedef-u32) rate) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AISetStreamTrigger**](#function-aisetstreamtrigger) ([**u32**](types_8h.md#typedef-u32) trigger) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AISetStreamVolLeft**](#function-aisetstreamvolleft) ([**u8**](types_8h.md#typedef-u8) vol) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AISetStreamVolRight**](#function-aisetstreamvolright) ([**u8**](types_8h.md#typedef-u8) vol) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AIStartDMA**](#function-aistartdma) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AIStopDMA**](#function-aistopdma) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**AI\_SAMPLERATE\_32KHZ**](ai_8h.md#define-ai_samplerate_32khz)  `0`<br> |
| define  | [**AI\_SAMPLERATE\_48KHZ**](ai_8h.md#define-ai_samplerate_48khz)  `1`<br> |
| define  | [**AI\_STREAM\_START**](ai_8h.md#define-ai_stream_start)  `1`<br> |
| define  | [**AI\_STREAM\_STOP**](ai_8h.md#define-ai_stream_stop)  `0`<br> |

## Public Types Documentation




### typedef AIDCallback 

```C++
typedef void(* AIDCallback) ();
```




<hr>



### typedef AISCallback 

```C++
typedef void(* AISCallback) (u32 count);
```




<hr>
## Public Functions Documentation




### function AICheckInit 

```C++
BOOL AICheckInit (
    void
) 
```




<hr>



### function AIGetDMABytesLeft 

```C++
u32 AIGetDMABytesLeft (
    void
) 
```




<hr>



### function AIGetDMAEnableFlag 

```C++
BOOL AIGetDMAEnableFlag (
    void
) 
```




<hr>



### function AIGetDMALength 

```C++
u32 AIGetDMALength (
    void
) 
```




<hr>



### function AIGetDMAStartAddr 

```C++
u32 AIGetDMAStartAddr (
    void
) 
```




<hr>



### function AIGetDSPSampleRate 

```C++
u32 AIGetDSPSampleRate (
    void
) 
```




<hr>



### function AIGetStreamPlayState 

```C++
u32 AIGetStreamPlayState (
    void
) 
```




<hr>



### function AIGetStreamSampleCount 

```C++
u32 AIGetStreamSampleCount (
    void
) 
```




<hr>



### function AIGetStreamSampleRate 

```C++
u32 AIGetStreamSampleRate (
    void
) 
```




<hr>



### function AIGetStreamTrigger 

```C++
u32 AIGetStreamTrigger (
    void
) 
```




<hr>



### function AIGetStreamVolLeft 

```C++
u8 AIGetStreamVolLeft (
    void
) 
```




<hr>



### function AIGetStreamVolRight 

```C++
u8 AIGetStreamVolRight (
    void
) 
```




<hr>



### function AIInit 

```C++
void AIInit (
    u8 * stack
) 
```




<hr>



### function AIInitDMA 

```C++
void AIInitDMA (
    u32 start_addr,
    u32 length
) 
```




<hr>



### function AIRegisterDMACallback 

```C++
AIDCallback AIRegisterDMACallback (
    AIDCallback callback
) 
```




<hr>



### function AIRegisterStreamCallback 

```C++
AISCallback AIRegisterStreamCallback (
    AISCallback callback
) 
```




<hr>



### function AIReset 

```C++
void AIReset (
    void
) 
```




<hr>



### function AIResetStreamSampleCount 

```C++
void AIResetStreamSampleCount (
    void
) 
```




<hr>



### function AISetDSPSampleRate 

```C++
void AISetDSPSampleRate (
    u32 rate
) 
```




<hr>



### function AISetStreamPlayState 

```C++
void AISetStreamPlayState (
    u32 state
) 
```




<hr>



### function AISetStreamSampleRate 

```C++
void AISetStreamSampleRate (
    u32 rate
) 
```




<hr>



### function AISetStreamTrigger 

```C++
void AISetStreamTrigger (
    u32 trigger
) 
```




<hr>



### function AISetStreamVolLeft 

```C++
void AISetStreamVolLeft (
    u8 vol
) 
```




<hr>



### function AISetStreamVolRight 

```C++
void AISetStreamVolRight (
    u8 vol
) 
```




<hr>



### function AIStartDMA 

```C++
void AIStartDMA (
    void
) 
```




<hr>



### function AIStopDMA 

```C++
void AIStopDMA (
    void
) 
```




<hr>
## Macro Definition Documentation





### define AI\_SAMPLERATE\_32KHZ 

```C++
#define AI_SAMPLERATE_32KHZ `0`
```




<hr>



### define AI\_SAMPLERATE\_48KHZ 

```C++
#define AI_SAMPLERATE_48KHZ `1`
```




<hr>



### define AI\_STREAM\_START 

```C++
#define AI_STREAM_START `1`
```




<hr>



### define AI\_STREAM\_STOP 

```C++
#define AI_STREAM_STOP `0`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/ai.h`

