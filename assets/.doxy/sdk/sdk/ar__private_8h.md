

# File ar\_private.h



[**FileList**](files.md) **>** [**ar**](dir_1f6a6668d55aa42931fc4b14e0914ad0.md) **>** [**ar\_private.h**](ar__private_8h.md)

[Go to the source code of this file](ar__private_8h_source.md)



* `#include <dolphin/ar.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_ARQCallbackHack**](#function-__arqcallbackhack) ([**u32**](types_8h.md#typedef-u32) pointerToARQRequest) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_ARQInitTempQueue**](#function-__arqinittempqueue) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_ARQInterruptServiceRoutine**](#function-__arqinterruptserviceroutine) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_ARQPopTaskQueueHi**](#function-__arqpoptaskqueuehi) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_ARQPushTempQueue**](#function-__arqpushtempqueue) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**ARQRequest**](struct_a_r_q_request.md) \* task) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_ARQServiceQueueLo**](#function-__arqservicequeuelo) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |




























## Public Functions Documentation




### function \_\_ARQCallbackHack 

```C++
void __ARQCallbackHack (
    u32 pointerToARQRequest
) 
```




<hr>



### function \_\_ARQInitTempQueue 

```C++
void __ARQInitTempQueue (
    void
) 
```




<hr>



### function \_\_ARQInterruptServiceRoutine 

```C++
void __ARQInterruptServiceRoutine (
    void
) 
```




<hr>



### function \_\_ARQPopTaskQueueHi 

```C++
void __ARQPopTaskQueueHi (
    void
) 
```




<hr>



### function \_\_ARQPushTempQueue 

```C++
void __ARQPushTempQueue (
    struct  ARQRequest * task
) 
```




<hr>



### function \_\_ARQServiceQueueLo 

```C++
void __ARQServiceQueueLo (
    void
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/ar/ar_private.h`

