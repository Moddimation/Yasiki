

# File perf.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**perf.h**](perf_8h.md)

[Go to the source code of this file](perf_8h_source.md)



* `#include <dolphin/gx/GXStruct.h>`
* `#include <types.h>`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**Frame**](struct_frame.md) <br> |
| struct | [**PerfEvent**](struct_perf_event.md) <br> |
| struct | [**PerfSample**](struct_perf_sample.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \*(\* | [**PERFAllocator**](#typedef-perfallocator)  <br> |
| typedef [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**PERFDeallocator**](#typedef-perfdeallocator)  <br> |
| typedef [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**PERFDrawCallback**](#typedef-perfdrawcallback)  <br> |
| typedef [**u8**](types_8h.md#typedef-u8) | [**PERFId**](#typedef-perfid)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**PerfSample**](struct_perf_sample.md) | [**PerfSample**](#typedef-perfsample)  <br> |
| enum  | [**PerfType**](#enum-perftype)  <br> |




## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**GameDrawInit**](#variable-gamedrawinit)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**PERFCurrFrame**](#variable-perfcurrframe)  <br> |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**PerfEvent**](struct_perf_event.md) \* | [**PERFEvents**](#variable-perfevents)  <br> |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**Frame**](struct_frame.md) \* | [**PERFFrames**](#variable-perfframes)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFDumpScreen**](#function-perfdumpscreen) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFEndFrame**](#function-perfendframe) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFEventEnd**](#function-perfeventend) ([**PERFId**](perf_8h.md#typedef-perfid) id) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFEventStart**](#function-perfeventstart) ([**PERFId**](perf_8h.md#typedef-perfid) id) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**PERFInit**](#function-perfinit) ([**u32**](types_8h.md#typedef-u32) numSamples, [**u32**](types_8h.md#typedef-u32) numFramesHistory, [**u32**](types_8h.md#typedef-u32) numTypes, [**PERFAllocator**](perf_8h.md#typedef-perfallocator) allocator, [**PERFDeallocator**](perf_8h.md#typedef-perfdeallocator) deallocator, [**PERFDrawCallback**](perf_8h.md#typedef-perfdrawcallback) initDraw) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFPostDraw**](#function-perfpostdraw) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFPreDraw**](#function-perfpredraw) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFSetDrawBWBar**](#function-perfsetdrawbwbar) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) tf) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFSetDrawBWBarKey**](#function-perfsetdrawbwbarkey) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) tf) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFSetDrawCPUBar**](#function-perfsetdrawcpubar) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) tf) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFSetDrawRASBar**](#function-perfsetdrawrasbar) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) tf) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFSetDrawXFBars**](#function-perfsetdrawxfbars) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) tf) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFSetEvent**](#function-perfsetevent) ([**PERFId**](perf_8h.md#typedef-perfid) id, [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* name, [**PerfType**](perf_8h.md#enum-perftype) type) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFStartAutoSampling**](#function-perfstartautosampling) ([**f32**](types_8h.md#typedef-f32) msInterval) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFStartFrame**](#function-perfstartframe) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFStopAutoSampling**](#function-perfstopautosampling) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFToggleDrawBWBar**](#function-perftoggledrawbwbar) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFToggleDrawBWBarKey**](#function-perftoggledrawbwbarkey) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFToggleDrawCPUBar**](#function-perftoggledrawcpubar) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFToggleDrawRASBar**](#function-perftoggledrawrasbar) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFToggleDrawXFBars**](#function-perftoggledrawxfbars) () <br> |




























## Public Types Documentation




### typedef PERFAllocator 

```C++
typedef void *(* PERFAllocator) (u32 size);
```




<hr>



### typedef PERFDeallocator 

```C++
typedef void(* PERFDeallocator) (void *block);
```




<hr>



### typedef PERFDrawCallback 

```C++
typedef void(* PERFDrawCallback) (void);
```




<hr>



### typedef PERFId 

```C++
typedef u8 PERFId;
```




<hr>



### typedef PerfSample 

```C++
typedef struct PerfSample PerfSample;
```




<hr>



### enum PerfType 

```C++
enum PerfType {
    PERF_CPU_EVENT,
    PERF_CPU_GP_EVENT,
    PERF_GP_EVENT
};
```




<hr>
## Public Attributes Documentation




### variable GameDrawInit 

```C++
void(* GameDrawInit) ();
```




<hr>



### variable PERFCurrFrame 

```C++
u32 PERFCurrFrame;
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
## Public Functions Documentation




### function PERFDumpScreen 

```C++
void PERFDumpScreen () 
```




<hr>



### function PERFEndFrame 

```C++
void PERFEndFrame (
    void
) 
```




<hr>



### function PERFEventEnd 

```C++
void PERFEventEnd (
    PERFId id
) 
```




<hr>



### function PERFEventStart 

```C++
void PERFEventStart (
    PERFId id
) 
```




<hr>



### function PERFInit 

```C++
u32 PERFInit (
    u32 numSamples,
    u32 numFramesHistory,
    u32 numTypes,
    PERFAllocator allocator,
    PERFDeallocator deallocator,
    PERFDrawCallback initDraw
) 
```




<hr>



### function PERFPostDraw 

```C++
void PERFPostDraw () 
```




<hr>



### function PERFPreDraw 

```C++
void PERFPreDraw () 
```




<hr>



### function PERFSetDrawBWBar 

```C++
void PERFSetDrawBWBar (
    int tf
) 
```




<hr>



### function PERFSetDrawBWBarKey 

```C++
void PERFSetDrawBWBarKey (
    int tf
) 
```




<hr>



### function PERFSetDrawCPUBar 

```C++
void PERFSetDrawCPUBar (
    int tf
) 
```




<hr>



### function PERFSetDrawRASBar 

```C++
void PERFSetDrawRASBar (
    int tf
) 
```




<hr>



### function PERFSetDrawXFBars 

```C++
void PERFSetDrawXFBars (
    int tf
) 
```




<hr>



### function PERFSetEvent 

```C++
void PERFSetEvent (
    PERFId id,
    char * name,
    PerfType type
) 
```




<hr>



### function PERFStartAutoSampling 

```C++
void PERFStartAutoSampling (
    f32 msInterval
) 
```




<hr>



### function PERFStartFrame 

```C++
void PERFStartFrame (
    void
) 
```




<hr>



### function PERFStopAutoSampling 

```C++
void PERFStopAutoSampling (
    void
) 
```




<hr>



### function PERFToggleDrawBWBar 

```C++
void PERFToggleDrawBWBar () 
```




<hr>



### function PERFToggleDrawBWBarKey 

```C++
void PERFToggleDrawBWBarKey () 
```




<hr>



### function PERFToggleDrawCPUBar 

```C++
void PERFToggleDrawCPUBar () 
```




<hr>



### function PERFToggleDrawRASBar 

```C++
void PERFToggleDrawRASBar () 
```




<hr>



### function PERFToggleDrawXFBars 

```C++
void PERFToggleDrawXFBars () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/perf.h`

