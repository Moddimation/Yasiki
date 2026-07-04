

# File OSResetSW.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**os**](dir_c85f9e83f0f4b4374578811cecebda65.md) **>** [**OSResetSW.c**](_o_s_reset_s_w_8c.md)

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
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/os/OSResetSW.c`

