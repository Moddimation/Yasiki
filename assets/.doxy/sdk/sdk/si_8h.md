

# File si.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**si.h**](si_8h.md)

[Go to the source code of this file](si_8h_source.md)



* `#include <types.h>`
* `#include <dolphin/os.h>`

















## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**SICallback**](#typedef-sicallback)  <br> |
| typedef [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**SITypeAndStatusCallback**](#typedef-sitypeandstatuscallback)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**BOOL**](types_8h.md#typedef-bool) | [**SIBusy**](#function-sibusy) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**SIDisablePolling**](#function-sidisablepolling) ([**u32**](types_8h.md#typedef-u32) poll) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**SIEnablePolling**](#function-sienablepolling) ([**u32**](types_8h.md#typedef-u32) poll) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**SIGetCommand**](#function-sigetcommand) ([**s32**](types_8h.md#typedef-s32) chan) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**SISetXY**](#function-sisetxy) ([**u32**](types_8h.md#typedef-u32) x, [**u32**](types_8h.md#typedef-u32) y) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**SITransfer**](#function-sitransfer) ([**s32**](types_8h.md#typedef-s32) chan, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* output, [**u32**](types_8h.md#typedef-u32) outputBytes, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* input, [**u32**](types_8h.md#typedef-u32) inputBytes, [**SICallback**](si_8h.md#typedef-sicallback) callback, [**OSTime**](_o_s_time_8h.md#typedef-ostime) delay) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SITransferCommands**](#function-sitransfercommands) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**PAD\_CHAN0\_BIT**](si_8h.md#define-pad_chan0_bit)  `0x80000000`<br> |
| define  | [**PAD\_CHAN1\_BIT**](si_8h.md#define-pad_chan1_bit)  `0x40000000`<br> |
| define  | [**PAD\_CHAN2\_BIT**](si_8h.md#define-pad_chan2_bit)  `0x20000000`<br> |
| define  | [**PAD\_CHAN3\_BIT**](si_8h.md#define-pad_chan3_bit)  `0x10000000`<br> |
| define  | [**SI\_ERROR\_BUSY**](si_8h.md#define-si_error_busy)  `0x0080`<br> |
| define  | [**SI\_ERROR\_COLLISION**](si_8h.md#define-si_error_collision)  `0x0004`<br> |
| define  | [**SI\_ERROR\_NO\_RESPONSE**](si_8h.md#define-si_error_no_response)  `0x0008`<br> |
| define  | [**SI\_ERROR\_OVER\_RUN**](si_8h.md#define-si_error_over_run)  `0x0002`<br> |
| define  | [**SI\_ERROR\_RDST**](si_8h.md#define-si_error_rdst)  `0x0020`<br> |
| define  | [**SI\_ERROR\_UNDER\_RUN**](si_8h.md#define-si_error_under_run)  `0x0001`<br> |
| define  | [**SI\_ERROR\_UNKNOWN**](si_8h.md#define-si_error_unknown)  `0x0040`<br> |
| define  | [**SI\_ERROR\_WRST**](si_8h.md#define-si_error_wrst)  `0x0010`<br> |
| define  | [**SI\_GBA**](si_8h.md#define-si_gba)  `([**SI\_TYPE\_N64**](si_8h.md#define-si_type_n64) \| 0x00040000)`<br> |
| define  | [**SI\_GC\_CONTROLLER**](si_8h.md#define-si_gc_controller)  `([**SI\_TYPE\_GC**](si_8h.md#define-si_type_gc) \| [**SI\_GC\_STANDARD**](si_8h.md#define-si_gc_standard))`<br> |
| define  | [**SI\_GC\_KEYBOARD**](si_8h.md#define-si_gc_keyboard)  `([**SI\_TYPE\_GC**](si_8h.md#define-si_type_gc) \| 0x00200000)`<br> |
| define  | [**SI\_GC\_NOMOTOR**](si_8h.md#define-si_gc_nomotor)  `0x20000000`<br> |
| define  | [**SI\_GC\_RECEIVER**](si_8h.md#define-si_gc_receiver)  `([**SI\_TYPE\_GC**](si_8h.md#define-si_type_gc) \| [**SI\_GC\_WIRELESS**](si_8h.md#define-si_gc_wireless))`<br> |
| define  | [**SI\_GC\_STANDARD**](si_8h.md#define-si_gc_standard)  `0x01000000`<br> |
| define  | [**SI\_GC\_STEERING**](si_8h.md#define-si_gc_steering)  `([**SI\_TYPE\_GC**](si_8h.md#define-si_type_gc) \| 0x00000000)`<br> |
| define  | [**SI\_GC\_WAVEBIRD**](si_8h.md#define-si_gc_wavebird)  `([**SI\_TYPE\_GC**](si_8h.md#define-si_type_gc) \| [**SI\_GC\_WIRELESS**](si_8h.md#define-si_gc_wireless) \| [**SI\_GC\_STANDARD**](si_8h.md#define-si_gc_standard) \| [**SI\_WIRELESS\_STATE**](si_8h.md#define-si_wireless_state) \| [**SI\_WIRELESS\_FIX\_ID**](si_8h.md#define-si_wireless_fix_id))`<br> |
| define  | [**SI\_GC\_WIRELESS**](si_8h.md#define-si_gc_wireless)  `0x80000000`<br> |
| define  | [**SI\_MAX\_CHAN**](si_8h.md#define-si_max_chan)  `4`<br> |
| define  | [**SI\_N64\_CONTROLLER**](si_8h.md#define-si_n64_controller)  `([**SI\_TYPE\_N64**](si_8h.md#define-si_type_n64) \| 0x05000000)`<br> |
| define  | [**SI\_N64\_KEYBOARD**](si_8h.md#define-si_n64_keyboard)  `([**SI\_TYPE\_N64**](si_8h.md#define-si_type_n64) \| 0x00020000)`<br> |
| define  | [**SI\_N64\_MIC**](si_8h.md#define-si_n64_mic)  `([**SI\_TYPE\_N64**](si_8h.md#define-si_type_n64) \| 0x00010000)`<br> |
| define  | [**SI\_N64\_MOUSE**](si_8h.md#define-si_n64_mouse)  `([**SI\_TYPE\_N64**](si_8h.md#define-si_type_n64) \| 0x02000000)`<br> |
| define  | [**SI\_TYPE\_DOLPHIN**](si_8h.md#define-si_type_dolphin)  `0x08000000u`<br> |
| define  | [**SI\_TYPE\_GC**](si_8h.md#define-si_type_gc)  `[**SI\_TYPE\_DOLPHIN**](si_8h.md#define-si_type_dolphin)`<br> |
| define  | [**SI\_TYPE\_MASK**](si_8h.md#define-si_type_mask)  `0x18000000u`<br> |
| define  | [**SI\_TYPE\_N64**](si_8h.md#define-si_type_n64)  `0x00000000u`<br> |
| define  | [**SI\_WIRELESS\_CONT**](si_8h.md#define-si_wireless_cont)  `0x00000000`<br> |
| define  | [**SI\_WIRELESS\_CONT\_MASK**](si_8h.md#define-si_wireless_cont_mask)  `0x00080000`<br> |
| define  | [**SI\_WIRELESS\_FIX\_ID**](si_8h.md#define-si_wireless_fix_id)  `0x00100000`<br> |
| define  | [**SI\_WIRELESS\_ID**](si_8h.md#define-si_wireless_id)  `0x00c0ff00`<br> |
| define  | [**SI\_WIRELESS\_IR**](si_8h.md#define-si_wireless_ir)  `0x04000000`<br> |
| define  | [**SI\_WIRELESS\_LITE**](si_8h.md#define-si_wireless_lite)  `0x00040000`<br> |
| define  | [**SI\_WIRELESS\_LITE\_MASK**](si_8h.md#define-si_wireless_lite_mask)  `0x000c0000`<br> |
| define  | [**SI\_WIRELESS\_ORIGIN**](si_8h.md#define-si_wireless_origin)  `0x00200000`<br> |
| define  | [**SI\_WIRELESS\_RECEIVED**](si_8h.md#define-si_wireless_received)  `0x40000000`<br> |
| define  | [**SI\_WIRELESS\_STATE**](si_8h.md#define-si_wireless_state)  `0x02000000`<br> |
| define  | [**SI\_WIRELESS\_TYPE**](si_8h.md#define-si_wireless_type)  `0x000f0000`<br> |
| define  | [**SI\_WIRELESS\_TYPE\_ID**](si_8h.md#define-si_wireless_type_id)  `([**SI\_WIRELESS\_TYPE**](si_8h.md#define-si_wireless_type) \| [**SI\_WIRELESS\_ID**](si_8h.md#define-si_wireless_id))`<br> |

## Public Types Documentation




### typedef SICallback 

```C++
typedef void(* SICallback) (s32 chan, u32 sr, OSContext *context);
```




<hr>



### typedef SITypeAndStatusCallback 

```C++
typedef void(* SITypeAndStatusCallback) (s32 chan, u32 type);
```




<hr>
## Public Functions Documentation




### function SIBusy 

```C++
BOOL SIBusy (
    void
) 
```




<hr>



### function SIDisablePolling 

```C++
u32 SIDisablePolling (
    u32 poll
) 
```




<hr>



### function SIEnablePolling 

```C++
u32 SIEnablePolling (
    u32 poll
) 
```




<hr>



### function SIGetCommand 

```C++
u32 SIGetCommand (
    s32 chan
) 
```




<hr>



### function SISetXY 

```C++
u32 SISetXY (
    u32 x,
    u32 y
) 
```




<hr>



### function SITransfer 

```C++
BOOL SITransfer (
    s32 chan,
    void * output,
    u32 outputBytes,
    void * input,
    u32 inputBytes,
    SICallback callback,
    OSTime delay
) 
```




<hr>



### function SITransferCommands 

```C++
void SITransferCommands (
    void
) 
```




<hr>
## Macro Definition Documentation





### define PAD\_CHAN0\_BIT 

```C++
#define PAD_CHAN0_BIT `0x80000000`
```




<hr>



### define PAD\_CHAN1\_BIT 

```C++
#define PAD_CHAN1_BIT `0x40000000`
```




<hr>



### define PAD\_CHAN2\_BIT 

```C++
#define PAD_CHAN2_BIT `0x20000000`
```




<hr>



### define PAD\_CHAN3\_BIT 

```C++
#define PAD_CHAN3_BIT `0x10000000`
```




<hr>



### define SI\_ERROR\_BUSY 

```C++
#define SI_ERROR_BUSY `0x0080`
```




<hr>



### define SI\_ERROR\_COLLISION 

```C++
#define SI_ERROR_COLLISION `0x0004`
```




<hr>



### define SI\_ERROR\_NO\_RESPONSE 

```C++
#define SI_ERROR_NO_RESPONSE `0x0008`
```




<hr>



### define SI\_ERROR\_OVER\_RUN 

```C++
#define SI_ERROR_OVER_RUN `0x0002`
```




<hr>



### define SI\_ERROR\_RDST 

```C++
#define SI_ERROR_RDST `0x0020`
```




<hr>



### define SI\_ERROR\_UNDER\_RUN 

```C++
#define SI_ERROR_UNDER_RUN `0x0001`
```




<hr>



### define SI\_ERROR\_UNKNOWN 

```C++
#define SI_ERROR_UNKNOWN `0x0040`
```




<hr>



### define SI\_ERROR\_WRST 

```C++
#define SI_ERROR_WRST `0x0010`
```




<hr>



### define SI\_GBA 

```C++
#define SI_GBA `( SI_TYPE_N64 | 0x00040000)`
```




<hr>



### define SI\_GC\_CONTROLLER 

```C++
#define SI_GC_CONTROLLER `( SI_TYPE_GC | SI_GC_STANDARD )`
```




<hr>



### define SI\_GC\_KEYBOARD 

```C++
#define SI_GC_KEYBOARD `( SI_TYPE_GC | 0x00200000)`
```




<hr>



### define SI\_GC\_NOMOTOR 

```C++
#define SI_GC_NOMOTOR `0x20000000`
```




<hr>



### define SI\_GC\_RECEIVER 

```C++
#define SI_GC_RECEIVER `( SI_TYPE_GC | SI_GC_WIRELESS )`
```




<hr>



### define SI\_GC\_STANDARD 

```C++
#define SI_GC_STANDARD `0x01000000`
```




<hr>



### define SI\_GC\_STEERING 

```C++
#define SI_GC_STEERING `( SI_TYPE_GC | 0x00000000)`
```




<hr>



### define SI\_GC\_WAVEBIRD 

```C++
#define SI_GC_WAVEBIRD `( SI_TYPE_GC | SI_GC_WIRELESS | SI_GC_STANDARD | SI_WIRELESS_STATE | SI_WIRELESS_FIX_ID )`
```




<hr>



### define SI\_GC\_WIRELESS 

```C++
#define SI_GC_WIRELESS `0x80000000`
```




<hr>



### define SI\_MAX\_CHAN 

```C++
#define SI_MAX_CHAN `4`
```




<hr>



### define SI\_N64\_CONTROLLER 

```C++
#define SI_N64_CONTROLLER `( SI_TYPE_N64 | 0x05000000)`
```




<hr>



### define SI\_N64\_KEYBOARD 

```C++
#define SI_N64_KEYBOARD `( SI_TYPE_N64 | 0x00020000)`
```




<hr>



### define SI\_N64\_MIC 

```C++
#define SI_N64_MIC `( SI_TYPE_N64 | 0x00010000)`
```




<hr>



### define SI\_N64\_MOUSE 

```C++
#define SI_N64_MOUSE `( SI_TYPE_N64 | 0x02000000)`
```




<hr>



### define SI\_TYPE\_DOLPHIN 

```C++
#define SI_TYPE_DOLPHIN `0x08000000u`
```




<hr>



### define SI\_TYPE\_GC 

```C++
#define SI_TYPE_GC `SI_TYPE_DOLPHIN`
```




<hr>



### define SI\_TYPE\_MASK 

```C++
#define SI_TYPE_MASK `0x18000000u`
```




<hr>



### define SI\_TYPE\_N64 

```C++
#define SI_TYPE_N64 `0x00000000u`
```




<hr>



### define SI\_WIRELESS\_CONT 

```C++
#define SI_WIRELESS_CONT `0x00000000`
```




<hr>



### define SI\_WIRELESS\_CONT\_MASK 

```C++
#define SI_WIRELESS_CONT_MASK `0x00080000`
```




<hr>



### define SI\_WIRELESS\_FIX\_ID 

```C++
#define SI_WIRELESS_FIX_ID `0x00100000`
```




<hr>



### define SI\_WIRELESS\_ID 

```C++
#define SI_WIRELESS_ID `0x00c0ff00`
```




<hr>



### define SI\_WIRELESS\_IR 

```C++
#define SI_WIRELESS_IR `0x04000000`
```




<hr>



### define SI\_WIRELESS\_LITE 

```C++
#define SI_WIRELESS_LITE `0x00040000`
```




<hr>



### define SI\_WIRELESS\_LITE\_MASK 

```C++
#define SI_WIRELESS_LITE_MASK `0x000c0000`
```




<hr>



### define SI\_WIRELESS\_ORIGIN 

```C++
#define SI_WIRELESS_ORIGIN `0x00200000`
```




<hr>



### define SI\_WIRELESS\_RECEIVED 

```C++
#define SI_WIRELESS_RECEIVED `0x40000000`
```




<hr>



### define SI\_WIRELESS\_STATE 

```C++
#define SI_WIRELESS_STATE `0x02000000`
```




<hr>



### define SI\_WIRELESS\_TYPE 

```C++
#define SI_WIRELESS_TYPE `0x000f0000`
```




<hr>



### define SI\_WIRELESS\_TYPE\_ID 

```C++
#define SI_WIRELESS_TYPE_ID `( SI_WIRELESS_TYPE | SI_WIRELESS_ID )`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/si.h`

