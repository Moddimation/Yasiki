

# File OSMutex.h



[**FileList**](files.md) **>** [**dolphin**](dir_8d73ddf10613ffd25a966cd68a313b8d.md) **>** [**os**](dir_ec7c732b679442ba7b10ef1b15f4b60e.md) **>** [**OSMutex.h**](_o_s_mutex_8h.md)

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
The documentation for this class was generated from the following file `SDK/include/dolphin/os/OSMutex.h`

