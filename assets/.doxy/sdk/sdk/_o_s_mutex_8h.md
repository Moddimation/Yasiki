

# File OSMutex.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**os**](dir_2e13e6cf1d2e2aa91cbc210fef9f68a3.md) **>** [**OSMutex.h**](_o_s_mutex_8h.md)

[Go to the source code of this file](_o_s_mutex_8h_source.md)



* `#include <dolphin/os/OSThread.h>`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**OSCond**](struct_o_s_cond.md) <br> |
| struct | [**OSMutex**](struct_o_s_mutex.md) <br> |






















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSInitCond**](#function-osinitcond) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSCond**](struct_o_s_cond.md) \* cond) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSInitMutex**](#function-osinitmutex) ([**OSMutex**](struct_o_s_mutex.md) \* mutex) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSLockMutex**](#function-oslockmutex) ([**OSMutex**](struct_o_s_mutex.md) \* mutex) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSSignalCond**](#function-ossignalcond) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSCond**](struct_o_s_cond.md) \* cond) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**OSTryLockMutex**](#function-ostrylockmutex) ([**OSMutex**](struct_o_s_mutex.md) \* mutex) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSUnlockMutex**](#function-osunlockmutex) ([**OSMutex**](struct_o_s_mutex.md) \* mutex) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSWaitCond**](#function-oswaitcond) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSCond**](struct_o_s_cond.md) \* cond, [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSMutex**](struct_o_s_mutex.md) \* mutex) <br> |




























## Public Functions Documentation




### function OSInitCond 

```C++
void OSInitCond (
    struct  OSCond * cond
) 
```




<hr>



### function OSInitMutex 

```C++
void OSInitMutex (
    OSMutex * mutex
) 
```




<hr>



### function OSLockMutex 

```C++
void OSLockMutex (
    OSMutex * mutex
) 
```




<hr>



### function OSSignalCond 

```C++
void OSSignalCond (
    struct  OSCond * cond
) 
```




<hr>



### function OSTryLockMutex 

```C++
BOOL OSTryLockMutex (
    OSMutex * mutex
) 
```




<hr>



### function OSUnlockMutex 

```C++
void OSUnlockMutex (
    OSMutex * mutex
) 
```




<hr>



### function OSWaitCond 

```C++
void OSWaitCond (
    struct  OSCond * cond,
    struct  OSMutex * mutex
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/os/OSMutex.h`

