

# File dvdlow.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**dvd**](dir_6809de60dbef2d995cf7d874d1fa5b65.md) **>** [**dvdlow.c**](dvdlow_8c.md)

[Go to the source code of this file](dvdlow_8c_source.md)



* `#include <dolphin/dvd.h>`
* `#include <dolphin/os.h>`
* `#include "../os/OSPrivate.h"`
* `#include "dvd_private.h"`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**DVDBuffer**](struct_d_v_d_buffer.md) <br> |
| struct | [**DVDCommand**](struct_d_v_d_command.md) <br> |








## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**OSAlarm**](struct_o_s_alarm.md) | [**AlarmForBreak**](#variable-alarmforbreak)  <br> |
|  [**OSAlarm**](struct_o_s_alarm.md) | [**AlarmForTimeout**](#variable-alarmfortimeout)  <br> |
|  [**OSAlarm**](struct_o_s_alarm.md) | [**AlarmForWA**](#variable-alarmforwa)  <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**BOOL**](types_8h.md#typedef-bool) | [**Breaking**](#variable-breaking)   = `[**FALSE**](types_8h.md#define-false)`<br> |
|  [**DVDLowCallback**](dvd_8h.md#typedef-dvdlowcallback) | [**Callback**](#variable-callback)   = `[**NULL**](types_8h.md#define-null)`<br> |
|  [**DVDCommand**](struct_d_v_d_command.md) | [**CommandList**](#variable-commandlist)  <br> |
|  [**DVDBuffer**](struct_d_v_d_buffer.md) | [**Curr**](#variable-curr)  <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**FirstRead**](#variable-firstread)   = `[**TRUE**](types_8h.md#define-true)`<br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**BOOL**](types_8h.md#typedef-bool) | [**LastCommandWasRead**](#variable-lastcommandwasread)   = `[**FALSE**](types_8h.md#define-false)`<br> |
|  [**u32**](types_8h.md#typedef-u32) | [**LastLength**](#variable-lastlength)   = `0`<br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSTime**](_o_s_time_8h.md#typedef-ostime) | [**LastReadFinished**](#variable-lastreadfinished)   = `0`<br> |
|  [**OSTime**](_o_s_time_8h.md#typedef-ostime) | [**LastReadIssued**](#variable-lastreadissued)   = `0`<br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSTime**](_o_s_time_8h.md#typedef-ostime) | [**LastResetEnd**](#variable-lastresetend)   = `0`<br> |
|  [**vu32**](types_8h.md#typedef-vu32) | [**NextCommandNumber**](#variable-nextcommandnumber)   = `0`<br> |
|  [**DVDBuffer**](struct_d_v_d_buffer.md) | [**Prev**](#variable-prev)  <br> |
|  [**DVDLowCallback**](dvd_8h.md#typedef-dvdlowcallback) | [**ResetCoverCallback**](#variable-resetcovercallback)   = `[**NULL**](types_8h.md#define-null)`<br> |
|  [**vu32**](types_8h.md#typedef-vu32) | [**ResetOccurred**](#variable-resetoccurred)   = `[**FALSE**](types_8h.md#define-false)`<br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**BOOL**](types_8h.md#typedef-bool) | [**WaitingCoverClose**](#variable-waitingcoverclose)   = `[**FALSE**](types_8h.md#define-false)`<br> |
|  [**u32**](types_8h.md#typedef-u32) | [**WorkAroundSeekLocation**](#variable-workaroundseeklocation)   = `0`<br> |
|  [**vu32**](types_8h.md#typedef-vu32) | [**WorkAroundType**](#variable-workaroundtype)   = `0`<br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDLowAudioBufferConfig**](#function-dvdlowaudiobufferconfig) ([**BOOL**](types_8h.md#typedef-bool) enable, [**u32**](types_8h.md#typedef-u32) size, [**DVDLowCallback**](dvd_8h.md#typedef-dvdlowcallback) callback) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDLowAudioStream**](#function-dvdlowaudiostream) ([**u32**](types_8h.md#typedef-u32) subcmd, [**u32**](types_8h.md#typedef-u32) length, [**u32**](types_8h.md#typedef-u32) offset, [**DVDLowCallback**](dvd_8h.md#typedef-dvdlowcallback) callback) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDLowBreak**](#function-dvdlowbreak) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**DVDLowCallback**](dvd_8h.md#typedef-dvdlowcallback) | [**DVDLowClearCallback**](#function-dvdlowclearcallback) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**DVDLowGetCoverStatus**](#function-dvdlowgetcoverstatus) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDLowInquiry**](#function-dvdlowinquiry) ([**DVDDriveInfo**](struct_d_v_d_drive_info.md) \* info, [**DVDLowCallback**](dvd_8h.md#typedef-dvdlowcallback) callback) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDLowRead**](#function-dvdlowread) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* addr, [**u32**](types_8h.md#typedef-u32) length, [**u32**](types_8h.md#typedef-u32) offset, [**DVDLowCallback**](dvd_8h.md#typedef-dvdlowcallback) callback) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDLowReadDiskID**](#function-dvdlowreaddiskid) ([**DVDDiskID**](struct_d_v_d_disk_i_d.md) \* diskID, [**DVDLowCallback**](dvd_8h.md#typedef-dvdlowcallback) callback) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDLowRequestAudioStatus**](#function-dvdlowrequestaudiostatus) ([**u32**](types_8h.md#typedef-u32) subcmd, [**DVDLowCallback**](dvd_8h.md#typedef-dvdlowcallback) callback) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDLowRequestError**](#function-dvdlowrequesterror) ([**DVDLowCallback**](dvd_8h.md#typedef-dvdlowcallback) callback) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDLowReset**](#function-dvdlowreset) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDLowSeek**](#function-dvdlowseek) ([**u32**](types_8h.md#typedef-u32) offset, [**DVDLowCallback**](dvd_8h.md#typedef-dvdlowcallback) callback) <br> |
|  [**DVDLowCallback**](dvd_8h.md#typedef-dvdlowcallback) | [**DVDLowSetResetCoverCallback**](#function-dvdlowsetresetcovercallback) ([**DVDLowCallback**](dvd_8h.md#typedef-dvdlowcallback) callback) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDLowStopMotor**](#function-dvdlowstopmotor) ([**DVDLowCallback**](dvd_8h.md#typedef-dvdlowcallback) callback) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDLowWaitCoverClose**](#function-dvdlowwaitcoverclose) ([**DVDLowCallback**](dvd_8h.md#typedef-dvdlowcallback) callback) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DVDInitWA**](#function-__dvdinitwa) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DVDInterruptHandler**](#function-__dvdinterrupthandler) ([**\_\_OSInterrupt**](_o_s_interrupt_8h.md#typedef-__osinterrupt) interrupt, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DVDLowSetWAType**](#function-__dvdlowsetwatype) ([**u32**](types_8h.md#typedef-u32) type, [**s32**](types_8h.md#typedef-s32) seekLoc) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**\_\_DVDLowTestAlarm**](#function-__dvdlowtestalarm) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSAlarm**](struct_o_s_alarm.md) \* alarm) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AlarmHandler**](#function-alarmhandler) ([**OSAlarm**](struct_o_s_alarm.md) \* alarm, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AlarmHandlerForBreak**](#function-alarmhandlerforbreak) ([**OSAlarm**](struct_o_s_alarm.md) \* alarm, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AlarmHandlerForTimeout**](#function-alarmhandlerfortimeout) ([**OSAlarm**](struct_o_s_alarm.md) \* alarm, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**AudioBufferOn**](#function-audiobufferon) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DoBreak**](#function-dobreak) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DoJustRead**](#function-dojustread) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* addr, [**u32**](types_8h.md#typedef-u32) length, [**u32**](types_8h.md#typedef-u32) offset, [**DVDLowCallback**](dvd_8h.md#typedef-dvdlowcallback) callback) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**HitCache**](#function-hitcache) ([**DVDBuffer**](struct_d_v_d_buffer.md) \* curr, [**DVDBuffer**](struct_d_v_d_buffer.md) \* prev) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**ProcessNextCommand**](#function-processnextcommand) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**Read**](#function-read) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* address, [**u32**](types_8h.md#typedef-u32) length, [**u32**](types_8h.md#typedef-u32) offset, [**DVDLowCallback**](dvd_8h.md#typedef-dvdlowcallback) callback) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SeekTwiceBeforeRead**](#function-seektwicebeforeread) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* addr, [**u32**](types_8h.md#typedef-u32) length, [**u32**](types_8h.md#typedef-u32) offset, [**DVDLowCallback**](dvd_8h.md#typedef-dvdlowcallback) callback) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SetBreakAlarm**](#function-setbreakalarm) ([**OSTime**](_o_s_time_8h.md#typedef-ostime) timeout) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SetTimeoutAlarm**](#function-settimeoutalarm) ([**OSTime**](_o_s_time_8h.md#typedef-ostime) timeout) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**WaitBeforeRead**](#function-waitbeforeread) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* addr, [**u32**](types_8h.md#typedef-u32) length, [**u32**](types_8h.md#typedef-u32) offset, [**DVDLowCallback**](dvd_8h.md#typedef-dvdlowcallback) callback, [**OSTime**](_o_s_time_8h.md#typedef-ostime) wait) <br> |


























## Public Static Attributes Documentation




### variable AlarmForBreak 

```C++
OSAlarm AlarmForBreak;
```




<hr>



### variable AlarmForTimeout 

```C++
OSAlarm AlarmForTimeout;
```




<hr>



### variable AlarmForWA 

```C++
OSAlarm AlarmForWA;
```




<hr>



### variable Breaking 

```C++
volatile BOOL Breaking;
```




<hr>



### variable Callback 

```C++
DVDLowCallback Callback;
```




<hr>



### variable CommandList 

```C++
DVDCommand CommandList[3];
```




<hr>



### variable Curr 

```C++
DVDBuffer Curr;
```




<hr>



### variable FirstRead 

```C++
BOOL FirstRead;
```




<hr>



### variable LastCommandWasRead 

```C++
volatile BOOL LastCommandWasRead;
```




<hr>



### variable LastLength 

```C++
u32 LastLength;
```




<hr>



### variable LastReadFinished 

```C++
volatile OSTime LastReadFinished;
```




<hr>



### variable LastReadIssued 

```C++
OSTime LastReadIssued;
```




<hr>



### variable LastResetEnd 

```C++
volatile OSTime LastResetEnd;
```




<hr>



### variable NextCommandNumber 

```C++
vu32 NextCommandNumber;
```




<hr>



### variable Prev 

```C++
DVDBuffer Prev;
```




<hr>



### variable ResetCoverCallback 

```C++
DVDLowCallback ResetCoverCallback;
```




<hr>



### variable ResetOccurred 

```C++
vu32 ResetOccurred;
```




<hr>



### variable WaitingCoverClose 

```C++
volatile BOOL WaitingCoverClose;
```




<hr>



### variable WorkAroundSeekLocation 

```C++
u32 WorkAroundSeekLocation;
```




<hr>



### variable WorkAroundType 

```C++
vu32 WorkAroundType;
```




<hr>
## Public Functions Documentation




### function DVDLowAudioBufferConfig 

```C++
BOOL DVDLowAudioBufferConfig (
    BOOL enable,
    u32 size,
    DVDLowCallback callback
) 
```




<hr>



### function DVDLowAudioStream 

```C++
BOOL DVDLowAudioStream (
    u32 subcmd,
    u32 length,
    u32 offset,
    DVDLowCallback callback
) 
```




<hr>



### function DVDLowBreak 

```C++
BOOL DVDLowBreak (
    void
) 
```




<hr>



### function DVDLowClearCallback 

```C++
DVDLowCallback DVDLowClearCallback (
    void
) 
```




<hr>



### function DVDLowGetCoverStatus 

```C++
u32 DVDLowGetCoverStatus (
    void
) 
```




<hr>



### function DVDLowInquiry 

```C++
BOOL DVDLowInquiry (
    DVDDriveInfo * info,
    DVDLowCallback callback
) 
```




<hr>



### function DVDLowRead 

```C++
BOOL DVDLowRead (
    void * addr,
    u32 length,
    u32 offset,
    DVDLowCallback callback
) 
```




<hr>



### function DVDLowReadDiskID 

```C++
BOOL DVDLowReadDiskID (
    DVDDiskID * diskID,
    DVDLowCallback callback
) 
```




<hr>



### function DVDLowRequestAudioStatus 

```C++
BOOL DVDLowRequestAudioStatus (
    u32 subcmd,
    DVDLowCallback callback
) 
```




<hr>



### function DVDLowRequestError 

```C++
BOOL DVDLowRequestError (
    DVDLowCallback callback
) 
```




<hr>



### function DVDLowReset 

```C++
void DVDLowReset (
    void
) 
```




<hr>



### function DVDLowSeek 

```C++
BOOL DVDLowSeek (
    u32 offset,
    DVDLowCallback callback
) 
```




<hr>



### function DVDLowSetResetCoverCallback 

```C++
DVDLowCallback DVDLowSetResetCoverCallback (
    DVDLowCallback callback
) 
```




<hr>



### function DVDLowStopMotor 

```C++
BOOL DVDLowStopMotor (
    DVDLowCallback callback
) 
```




<hr>



### function DVDLowWaitCoverClose 

```C++
BOOL DVDLowWaitCoverClose (
    DVDLowCallback callback
) 
```




<hr>



### function \_\_DVDInitWA 

```C++
void __DVDInitWA (
    void
) 
```




<hr>



### function \_\_DVDInterruptHandler 

```C++
void __DVDInterruptHandler (
    __OSInterrupt interrupt,
    OSContext * context
) 
```




<hr>



### function \_\_DVDLowSetWAType 

```C++
void __DVDLowSetWAType (
    u32 type,
    s32 seekLoc
) 
```




<hr>



### function \_\_DVDLowTestAlarm 

```C++
BOOL __DVDLowTestAlarm (
    const  OSAlarm * alarm
) 
```




<hr>
## Public Static Functions Documentation




### function AlarmHandler 

```C++
static void AlarmHandler (
    OSAlarm * alarm,
    OSContext * context
) 
```




<hr>



### function AlarmHandlerForBreak 

```C++
static void AlarmHandlerForBreak (
    OSAlarm * alarm,
    OSContext * context
) 
```




<hr>



### function AlarmHandlerForTimeout 

```C++
static void AlarmHandlerForTimeout (
    OSAlarm * alarm,
    OSContext * context
) 
```




<hr>



### function AudioBufferOn 

```C++
static BOOL AudioBufferOn (
    void
) 
```




<hr>



### function DoBreak 

```C++
static void DoBreak (
    void
) 
```




<hr>



### function DoJustRead 

```C++
static void DoJustRead (
    void * addr,
    u32 length,
    u32 offset,
    DVDLowCallback callback
) 
```




<hr>



### function HitCache 

```C++
static BOOL HitCache (
    DVDBuffer * curr,
    DVDBuffer * prev
) 
```




<hr>



### function ProcessNextCommand 

```C++
static BOOL ProcessNextCommand (
    void
) 
```




<hr>



### function Read 

```C++
static void Read (
    void * address,
    u32 length,
    u32 offset,
    DVDLowCallback callback
) 
```




<hr>



### function SeekTwiceBeforeRead 

```C++
static void SeekTwiceBeforeRead (
    void * addr,
    u32 length,
    u32 offset,
    DVDLowCallback callback
) 
```




<hr>



### function SetBreakAlarm 

```C++
static void SetBreakAlarm (
    OSTime timeout
) 
```




<hr>



### function SetTimeoutAlarm 

```C++
static void SetTimeoutAlarm (
    OSTime timeout
) 
```




<hr>



### function WaitBeforeRead 

```C++
static void WaitBeforeRead (
    void * addr,
    u32 length,
    u32 offset,
    DVDLowCallback callback,
    OSTime wait
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/dvd/dvdlow.c`

