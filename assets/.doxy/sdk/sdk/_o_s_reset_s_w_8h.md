

# File OSResetSW.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**os**](dir_2e13e6cf1d2e2aa91cbc210fef9f68a3.md) **>** [**OSResetSW.h**](_o_s_reset_s_w_8h.md)

[Go to the source code of this file](_o_s_reset_s_w_8h_source.md)



* `#include <types.h>`

















## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**OSResetCallback**](#typedef-osresetcallback)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**BOOL**](types_8h.md#typedef-bool) | [**OSGetResetButtonState**](#function-osgetresetbuttonstate) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**OSGetResetSwitchState**](#function-osgetresetswitchstate) () <br> |
|  [**OSResetCallback**](_o_s_reset_s_w_8h.md#typedef-osresetcallback) | [**OSSetResetCallback**](#function-ossetresetcallback) ([**OSResetCallback**](_o_s_reset_s_w_8h.md#typedef-osresetcallback) callback) <br> |




























## Public Types Documentation




### typedef OSResetCallback 

```C++
typedef void(* OSResetCallback) (void);
```




<hr>
## Public Functions Documentation




### function OSGetResetButtonState 

```C++
BOOL OSGetResetButtonState (
    void
) 
```




<hr>



### function OSGetResetSwitchState 

```C++
BOOL OSGetResetSwitchState () 
```




<hr>



### function OSSetResetCallback 

```C++
OSResetCallback OSSetResetCallback (
    OSResetCallback callback
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/os/OSResetSW.h`

