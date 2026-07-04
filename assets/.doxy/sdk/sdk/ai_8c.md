

# File ai.c



[**FileList**](files.md) **>** [**ai**](dir_9c7bf49d352ec2e9a638c47299113ea5.md) **>** [**ai.c**](ai_8c.md)

[Go to the source code of this file](ai_8c_source.md)



* `#include <dolphin/ai.h>`
* `#include <dolphin/gx.h>`
* `#include <dolphin/os.h>`
* `#include "../gx/GXPrivate.h"`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**STRUCT\_TIMELOG**](struct_s_t_r_u_c_t___t_i_m_e_l_o_g.md) <br> |






## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**OSTime**](_o_s_time_8h.md#typedef-ostime) | [**\_\_ai\_src\_time\_end**](#variable-__ai_src_time_end)  <br> |
|  [**OSTime**](_o_s_time_8h.md#typedef-ostime) | [**\_\_ai\_src\_time\_start**](#variable-__ai_src_time_start)  <br> |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**STRUCT\_TIMELOG**](struct_s_t_r_u_c_t___t_i_m_e_l_o_g.md) | [**profile**](#variable-profile)  <br> |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**AIDCallback**](ai_8h.md#typedef-aidcallback) | [**\_\_AID\_Callback**](#variable-__aid_callback)  <br> |
|  [**AISCallback**](ai_8h.md#typedef-aiscallback) | [**\_\_AIS\_Callback**](#variable-__ais_callback)  <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**\_\_AI\_init\_flag**](#variable-__ai_init_flag)  <br> |
|  [**u8**](types_8h.md#typedef-u8) \* | [**\_\_CallbackStack**](#variable-__callbackstack)  <br> |
|  [**u8**](types_8h.md#typedef-u8) \* | [**\_\_OldStack**](#variable-__oldstack)  <br> |
|  [**OSTime**](_o_s_time_8h.md#typedef-ostime) | [**bound\_32KHz**](#variable-bound_32khz)  <br> |
|  [**OSTime**](_o_s_time_8h.md#typedef-ostime) | [**bound\_48KHz**](#variable-bound_48khz)  <br> |
|  [**OSTime**](_o_s_time_8h.md#typedef-ostime) | [**buffer**](#variable-buffer)  <br> |
|  [**OSTime**](_o_s_time_8h.md#typedef-ostime) | [**max\_wait**](#variable-max_wait)  <br> |
|  [**OSTime**](_o_s_time_8h.md#typedef-ostime) | [**min\_wait**](#variable-min_wait)  <br> |














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
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_AI\_DEBUG\_set\_stream\_sample\_rate**](#function-__ai_debug_set_stream_sample_rate) ([**u32**](types_8h.md#typedef-u32) rate) <br> |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**STRUCT\_TIMELOG**](struct_s_t_r_u_c_t___t_i_m_e_l_o_g.md) \* | [**\_\_ai\_src\_get\_time**](#function-__ai_src_get_time) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_AICallbackStackSwitch**](#function-__aicallbackstackswitch) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* cb) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_AICallbackStackSwitch**](#function-__aicallbackstackswitch) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* cb) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_AIDHandler**](#function-__aidhandler) ([**\_\_OSInterrupt**](_o_s_interrupt_8h.md#typedef-__osinterrupt) interrupt, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_AISHandler**](#function-__aishandler) ([**\_\_OSInterrupt**](_o_s_interrupt_8h.md#typedef-__osinterrupt) interrupt, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_AI\_SRC\_INIT**](#function-__ai_src_init) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_AI\_set\_stream\_sample\_rate**](#function-__ai_set_stream_sample_rate) ([**u32**](types_8h.md#typedef-u32) rate) <br> |


























## Public Attributes Documentation




### variable \_\_ai\_src\_time\_end 

```C++
OSTime __ai_src_time_end;
```




<hr>



### variable \_\_ai\_src\_time\_start 

```C++
OSTime __ai_src_time_start;
```




<hr>



### variable profile 

```C++
struct STRUCT_TIMELOG profile;
```




<hr>
## Public Static Attributes Documentation




### variable \_\_AID\_Callback 

```C++
AIDCallback __AID_Callback;
```




<hr>



### variable \_\_AIS\_Callback 

```C++
AISCallback __AIS_Callback;
```




<hr>



### variable \_\_AI\_init\_flag 

```C++
BOOL __AI_init_flag;
```




<hr>



### variable \_\_CallbackStack 

```C++
u8* __CallbackStack;
```




<hr>



### variable \_\_OldStack 

```C++
u8* __OldStack;
```




<hr>



### variable bound\_32KHz 

```C++
OSTime bound_32KHz;
```




<hr>



### variable bound\_48KHz 

```C++
OSTime bound_48KHz;
```




<hr>



### variable buffer 

```C++
OSTime buffer;
```




<hr>



### variable max\_wait 

```C++
OSTime max_wait;
```




<hr>



### variable min\_wait 

```C++
OSTime min_wait;
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



### function \_\_AI\_DEBUG\_set\_stream\_sample\_rate 

```C++
void __AI_DEBUG_set_stream_sample_rate (
    u32 rate
) 
```




<hr>



### function \_\_ai\_src\_get\_time 

```C++
struct  STRUCT_TIMELOG * __ai_src_get_time (
    void
) 
```




<hr>
## Public Static Functions Documentation




### function \_\_AICallbackStackSwitch 

```C++
static void __AICallbackStackSwitch (
    void * cb
) 
```




<hr>



### function \_\_AICallbackStackSwitch 

```C++
static asm  void __AICallbackStackSwitch (
    register  void * cb
) 
```




<hr>



### function \_\_AIDHandler 

```C++
static void __AIDHandler (
    __OSInterrupt interrupt,
    OSContext * context
) 
```




<hr>



### function \_\_AISHandler 

```C++
static void __AISHandler (
    __OSInterrupt interrupt,
    OSContext * context
) 
```




<hr>



### function \_\_AI\_SRC\_INIT 

```C++
static void __AI_SRC_INIT (
    void
) 
```




<hr>



### function \_\_AI\_set\_stream\_sample\_rate 

```C++
static void __AI_set_stream_sample_rate (
    u32 rate
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/ai/ai.c`

