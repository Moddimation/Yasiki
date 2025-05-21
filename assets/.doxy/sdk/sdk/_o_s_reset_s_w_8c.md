

# File OSResetSW.c



[**FileList**](files.md) **>** [**dolphin**](dir_5daac82a3cf194997369e9388ff34711.md) **>** [**os**](dir_2110adc24753dd29d2ec0361943e7a71.md) **>** [**OSResetSW.c**](_o_s_reset_s_w_8c.md)

[Go to the source code of this file](_o_s_reset_s_w_8c_source.md)



* `#include <dolphin/os.h>`
* `#include "OSPrivate.h"`























## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**BOOL**](types_8h.md#typedef-bool) | [**Down**](#variable-down)  <br> |
|  [**OSTime**](_o_s_time_8h.md#typedef-ostime) | [**HoldDown**](#variable-holddown)  <br> |
|  [**OSTime**](_o_s_time_8h.md#typedef-ostime) | [**HoldUp**](#variable-holdup)  <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**LastState**](#variable-laststate)  <br> |
|  [**OSResetCallback**](_o_s_reset_s_w_8h.md#typedef-osresetcallback) | [**ResetCallback**](#variable-resetcallback)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSGetResetSwitchState**](#function-osgetresetswitchstate) () <br> |
|  [**OSResetCallback**](_o_s_reset_s_w_8h.md#typedef-osresetcallback) | [**OSSetResetCallback**](#function-ossetresetcallback) ([**OSResetCallback**](_o_s_reset_s_w_8h.md#typedef-osresetcallback) callback) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSResetSWInterruptHandler**](#function-__osresetswinterrupthandler) ([**\_\_OSInterrupt**](_o_s_interrupt_8h.md#typedef-__osinterrupt) exception, [**OSContext**](struct_o_s_context.md) \* context) <br> |




























## Public Static Attributes Documentation




### variable Down 

```C++
BOOL Down;
```




<hr>



### variable HoldDown 

```C++
OSTime HoldDown;
```




<hr>



### variable HoldUp 

```C++
OSTime HoldUp;
```




<hr>



### variable LastState 

```C++
BOOL LastState;
```




<hr>



### variable ResetCallback 

```C++
OSResetCallback ResetCallback;
```




<hr>
## Public Functions Documentation




### function OSGetResetSwitchState 

```C++
int OSGetResetSwitchState () 
```




<hr>



### function OSSetResetCallback 

```C++
OSResetCallback OSSetResetCallback (
    OSResetCallback callback
) 
```




<hr>



### function \_\_OSResetSWInterruptHandler 

```C++
void __OSResetSWInterruptHandler (
    __OSInterrupt exception,
    OSContext * context
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `DolphinSDK/src/dolphin/os/OSResetSW.c`

