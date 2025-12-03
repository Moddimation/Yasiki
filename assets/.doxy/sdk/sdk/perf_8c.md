

# File perf.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**perf**](dir_87d972a54ee50900be33e0069b206896.md) **>** [**perf.c**](perf_8c.md)

[Go to the source code of this file](perf_8c_source.md)



* `#include <dolphin/gx.h>`
* `#include <dolphin/perf.h>`
* `#include "../gx/GXPrivate.h"`
* `#include "PERFPrivate.h"`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**u32**](types_8h.md#typedef-u32) | [**PERFCurrFrame**](#variable-perfcurrframe)  <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**s32**](types_8h.md#typedef-s32) | [**PERFCurrSample**](#variable-perfcurrsample)  <br> |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**PerfEvent**](struct_perf_event.md) \* | [**PERFEvents**](#variable-perfevents)  <br> |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Frame**](struct_frame.md) \* | [**PERFFrames**](#variable-perfframes)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**PERFNumEvents**](#variable-perfnumevents)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**PERFNumFrames**](#variable-perfnumframes)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**PERFNumSamples**](#variable-perfnumsamples)  <br> |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**s32**](types_8h.md#typedef-s32) | [**CurrAutoSample**](#variable-currautosample)   = `0xFFFFFFFF`<br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) | [**CurrToken**](#variable-currtoken)   = `0x0000FFFF`<br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**DSCB**](#variable-dscb)  <br> |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSAlarm**](struct_o_s_alarm.md) | [**PERFAlarm**](#variable-perfalarm)  <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \*(\* | [**PerfAlloc**](#variable-perfalloc)  <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**PerfFree**](#variable-perffree)  <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u16**](types_8h.md#typedef-u16) | [**magic**](#variable-magic)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFEndFrame**](#function-perfendframe) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFEventEnd**](#function-perfeventend) ([**u16**](types_8h.md#typedef-u16) id) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFEventStart**](#function-perfeventstart) ([**u16**](types_8h.md#typedef-u16) id) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**PERFInit**](#function-perfinit) ([**u32**](types_8h.md#typedef-u32) numSamples, [**u32**](types_8h.md#typedef-u32) numFramesHistory, [**unsigned**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) numTypes, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \*(\*)([**u32**](types_8h.md#typedef-u32)) allocator, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \*) deallocator, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)() initDraw) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFSetDrawSyncCallback**](#function-perfsetdrawsynccallback) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**u16**](types_8h.md#typedef-u16)) cb) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFSetEvent**](#function-perfsetevent) ([**u16**](types_8h.md#typedef-u16) id, [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* name, [**PerfType**](perf_8h.md#enum-perftype) type) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFSetEventColor**](#function-perfseteventcolor) ([**u16**](types_8h.md#typedef-u16) id, [**GXColor**](_g_x_struct_8h.md#typedef-gxcolor) color) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFStartAutoSampling**](#function-perfstartautosampling) ([**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) msInterval) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFStartFrame**](#function-perfstartframe) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFStopAutoSampling**](#function-perfstopautosampling) () <br> |
|   | [**\_\_declspec**](#function-__declspec) ([**weak**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFEndAutoSample**](#function-perfendautosample) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFGetAllMemMetrics**](#function-perfgetallmemmetrics) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**PerfSample**](struct_perf_sample.md) \* s, [**u32**](types_8h.md#typedef-u32) i) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFResetAllMemMetrics**](#function-perfresetallmemmetrics) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFStartAutoSample**](#function-perfstartautosample) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFTimerCallback**](#function-perftimercallback) ([**OSAlarm**](struct_o_s_alarm.md) \* alarm, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFTokenCallback**](#function-perftokencallback) ([**u16**](types_8h.md#typedef-u16) token) <br> |

























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**TOKEN\_MAX**](perf_8c.md#define-token_max)  `0xFFFF`<br> |

## Public Attributes Documentation




### variable PERFCurrFrame 

```C++
u32 PERFCurrFrame;
```




<hr>



### variable PERFCurrSample 

```C++
volatile s32 PERFCurrSample;
```




<hr>



### variable PERFEvents 

```C++
struct PerfEvent* PERFEvents;
```




<hr>



### variable PERFFrames 

```C++
struct Frame* PERFFrames;
```




<hr>



### variable PERFNumEvents 

```C++
u32 PERFNumEvents;
```




<hr>



### variable PERFNumFrames 

```C++
u32 PERFNumFrames;
```




<hr>



### variable PERFNumSamples 

```C++
u32 PERFNumSamples;
```




<hr>
## Public Static Attributes Documentation




### variable CurrAutoSample 

```C++
volatile s32 CurrAutoSample;
```




<hr>



### variable CurrToken 

```C++
volatile u32 CurrToken;
```




<hr>



### variable DSCB 

```C++
void(* DSCB) (u16);
```




<hr>



### variable PERFAlarm 

```C++
struct OSAlarm PERFAlarm;
```




<hr>



### variable PerfAlloc 

```C++
void *(* PerfAlloc) (u32);
```




<hr>



### variable PerfFree 

```C++
void(* PerfFree) (void *);
```




<hr>



### variable magic 

```C++
volatile u16 magic;
```




<hr>
## Public Functions Documentation




### function PERFEndFrame 

```C++
void PERFEndFrame () 
```




<hr>



### function PERFEventEnd 

```C++
void PERFEventEnd (
    u16 id
) 
```




<hr>



### function PERFEventStart 

```C++
void PERFEventStart (
    u16 id
) 
```




<hr>



### function PERFInit 

```C++
u32 PERFInit (
    u32 numSamples,
    u32 numFramesHistory,
    unsigned  long numTypes,
    void *(*)( u32 ) allocator,
    void (*)( void *) deallocator,
    void (*)() initDraw
) 
```




<hr>



### function PERFSetDrawSyncCallback 

```C++
void PERFSetDrawSyncCallback (
    void (*)( u16 ) cb
) 
```




<hr>



### function PERFSetEvent 

```C++
void PERFSetEvent (
    u16 id,
    char * name,
    PerfType type
) 
```




<hr>



### function PERFSetEventColor 

```C++
void PERFSetEventColor (
    u16 id,
    GXColor color
) 
```




<hr>



### function PERFStartAutoSampling 

```C++
void PERFStartAutoSampling (
    float msInterval
) 
```




<hr>



### function PERFStartFrame 

```C++
void PERFStartFrame () 
```




<hr>



### function PERFStopAutoSampling 

```C++
void PERFStopAutoSampling () 
```




<hr>



### function \_\_declspec 

```C++
__declspec (
    weak
) 
```




<hr>
## Public Static Functions Documentation




### function PERFEndAutoSample 

```C++
static void PERFEndAutoSample () 
```




<hr>



### function PERFGetAllMemMetrics 

```C++
static void PERFGetAllMemMetrics (
    struct  PerfSample * s,
    u32 i
) 
```




<hr>



### function PERFResetAllMemMetrics 

```C++
static void PERFResetAllMemMetrics () 
```




<hr>



### function PERFStartAutoSample 

```C++
static void PERFStartAutoSample () 
```




<hr>



### function PERFTimerCallback 

```C++
static void PERFTimerCallback (
    OSAlarm * alarm,
    OSContext * context
) 
```




<hr>



### function PERFTokenCallback 

```C++
static void PERFTokenCallback (
    u16 token
) 
```




<hr>
## Macro Definition Documentation





### define TOKEN\_MAX 

```C++
#define TOKEN_MAX `0xFFFF`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/perf/perf.c`

