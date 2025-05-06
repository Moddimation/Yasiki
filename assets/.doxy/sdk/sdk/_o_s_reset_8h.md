

# File OSReset.h



[**FileList**](files.md) **>** [**dolphin**](dir_8d73ddf10613ffd25a966cd68a313b8d.md) **>** [**os**](dir_ec7c732b679442ba7b10ef1b15f4b60e.md) **>** [**OSReset.h**](_o_s_reset_8h.md)

[Go to the source code of this file](_o_s_reset_8h_source.md)



* `#include <types.h>`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**OSResetFunctionInfo**](struct_o_s_reset_function_info.md) <br> |
| struct | [**OSResetFunctionQueue**](struct_o_s_reset_function_queue.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**BOOL**](types_8h.md#typedef-bool)(\* | [**OSResetFunction**](#typedef-osresetfunction)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSResetFunctionInfo**](struct_o_s_reset_function_info.md) | [**OSResetFunctionInfo**](#typedef-osresetfunctioninfo)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**u32**](types_8h.md#typedef-u32) | [**OSGetResetCode**](#function-osgetresetcode) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSRegisterResetFunction**](#function-osregisterresetfunction) ([**OSResetFunctionInfo**](struct_o_s_reset_function_info.md) \* info) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSResetSystem**](#function-osresetsystem) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) reset, [**u32**](types_8h.md#typedef-u32) resetCode, [**BOOL**](types_8h.md#typedef-bool) forceMenu) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSUnregisterResetFunction**](#function-osunregisterresetfunction) ([**OSResetFunctionInfo**](struct_o_s_reset_function_info.md) \* info) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**OS\_RESET\_HOTRESET**](_o_s_reset_8h.md#define-os_reset_hotreset)  `1`<br> |
| define  | [**OS\_RESET\_RESTART**](_o_s_reset_8h.md#define-os_reset_restart)  `0`<br> |
| define  | [**OS\_RESET\_SHUTDOWN**](_o_s_reset_8h.md#define-os_reset_shutdown)  `2`<br> |

## Public Types Documentation




### typedef OSResetFunction 

```C++
typedef BOOL(* OSResetFunction) (BOOL);
```




<hr>



### typedef OSResetFunctionInfo 

```C++
typedef struct OSResetFunctionInfo OSResetFunctionInfo;
```




<hr>
## Public Functions Documentation




### function OSGetResetCode 

```C++
u32 OSGetResetCode () 
```




<hr>



### function OSRegisterResetFunction 

```C++
void OSRegisterResetFunction (
    OSResetFunctionInfo * info
) 
```




<hr>



### function OSResetSystem 

```C++
void OSResetSystem (
    int reset,
    u32 resetCode,
    BOOL forceMenu
) 
```




<hr>



### function OSUnregisterResetFunction 

```C++
void OSUnregisterResetFunction (
    OSResetFunctionInfo * info
) 
```




<hr>
## Macro Definition Documentation





### define OS\_RESET\_HOTRESET 

```C++
#define OS_RESET_HOTRESET `1`
```




<hr>



### define OS\_RESET\_RESTART 

```C++
#define OS_RESET_RESTART `0`
```




<hr>



### define OS\_RESET\_SHUTDOWN 

```C++
#define OS_RESET_SHUTDOWN `2`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `SDK/include/dolphin/os/OSReset.h`

