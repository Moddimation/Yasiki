

# File OSSerial.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**os**](dir_2e13e6cf1d2e2aa91cbc210fef9f68a3.md) **>** [**OSSerial.h**](_o_s_serial_8h.md)

[Go to the source code of this file](_o_s_serial_8h_source.md)



* `#include <dolphin/hw_regs.h>`
* `#include <dolphin/os/OSContext.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**BOOL**](types_8h.md#typedef-bool) | [**SIBusy**](#function-sibusy) () <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**SIDisablePolling**](#function-sidisablepolling) ([**u32**](types_8h.md#typedef-u32) poll) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**SIEnablePolling**](#function-sienablepolling) ([**u32**](types_8h.md#typedef-u32) poll) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**SIGetCommand**](#function-sigetcommand) ([**s32**](types_8h.md#typedef-s32) chan) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SIGetResponse**](#function-sigetresponse) ([**s32**](types_8h.md#typedef-s32) chan, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* data) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**SIGetStatus**](#function-sigetstatus) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SIInit**](#function-siinit) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SISetCommand**](#function-sisetcommand) ([**s32**](types_8h.md#typedef-s32) chan, [**u32**](types_8h.md#typedef-u32) command) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**SISetXY**](#function-sisetxy) ([**u32**](types_8h.md#typedef-u32) x, [**u32**](types_8h.md#typedef-u32) y) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**SISync**](#function-sisync) () <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**SITransfer**](#function-sitransfer) ([**s32**](types_8h.md#typedef-s32) chan, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* output, [**u32**](types_8h.md#typedef-u32) outputBytes, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* input, [**u32**](types_8h.md#typedef-u32) inputBytes, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**s32**](types_8h.md#typedef-s32), [**u32**](types_8h.md#typedef-u32), [**OSContext**](struct_o_s_context.md) \*) callback, [**s64**](types_8h.md#typedef-s64) time) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SITransferCommands**](#function-sitransfercommands) () <br> |




























## Public Functions Documentation




### function SIBusy 

```C++
BOOL SIBusy () 
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



### function SIGetResponse 

```C++
void SIGetResponse (
    s32 chan,
    void * data
) 
```




<hr>



### function SIGetStatus 

```C++
u32 SIGetStatus () 
```




<hr>



### function SIInit 

```C++
void SIInit () 
```




<hr>



### function SISetCommand 

```C++
void SISetCommand (
    s32 chan,
    u32 command
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



### function SISync 

```C++
u32 SISync () 
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
    void (*)( s32 , u32 , OSContext *) callback,
    s64 time
) 
```




<hr>



### function SITransferCommands 

```C++
void SITransferCommands () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/os/OSSerial.h`

