

# File OSResetSW.h



[**FileList**](files.md) **>** [**dolphin**](dir_8d73ddf10613ffd25a966cd68a313b8d.md) **>** [**os**](dir_ec7c732b679442ba7b10ef1b15f4b60e.md) **>** [**OSResetSW.h**](_o_s_reset_s_w_8h.md)

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
The documentation for this class was generated from the following file `SDK/include/dolphin/os/OSResetSW.h`

