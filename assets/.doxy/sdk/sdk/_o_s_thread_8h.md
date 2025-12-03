

# File OSThread.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**os**](dir_2e13e6cf1d2e2aa91cbc210fef9f68a3.md) **>** [**OSThread.h**](_o_s_thread_8h.md)

[Go to the source code of this file](_o_s_thread_8h_source.md)



* `#include <dolphin/os/OSContext.h>`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**OSMutexLink**](struct_o_s_mutex_link.md) <br> |
| struct | [**OSMutexQueue**](struct_o_s_mutex_queue.md) <br> |
| struct | [**OSThread**](struct_o_s_thread.md) <br> |
| struct | [**OSThreadLink**](struct_o_s_thread_link.md) <br> |
| struct | [**OSThreadQueue**](struct_o_s_thread_queue.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSCond**](struct_o_s_cond.md) | [**OSCond**](#typedef-oscond)  <br> |
| typedef [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**OSIdleFunction**](#typedef-osidlefunction)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSMutex**](struct_o_s_mutex.md) | [**OSMutex**](#typedef-osmutex)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSMutexLink**](struct_o_s_mutex_link.md) | [**OSMutexLink**](#typedef-osmutexlink)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSMutexQueue**](struct_o_s_mutex_queue.md) | [**OSMutexQueue**](#typedef-osmutexqueue)  <br> |
| typedef [**s32**](types_8h.md#typedef-s32) | [**OSPriority**](#typedef-ospriority)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSThread**](struct_o_s_thread.md) | [**OSThread**](#typedef-osthread)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSThreadLink**](struct_o_s_thread_link.md) | [**OSThreadLink**](#typedef-osthreadlink)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSThreadQueue**](struct_o_s_thread_queue.md) | [**OSThreadQueue**](#typedef-osthreadqueue)  <br> |
| enum  | [**OS\_THREAD\_STATE**](#enum-os_thread_state)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSCancelThread**](#function-oscancelthread) ([**OSThread**](struct_o_s_thread.md) \* thread) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**OSCheckActiveThreads**](#function-oscheckactivethreads) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**OSCreateThread**](#function-oscreatethread) ([**OSThread**](struct_o_s_thread.md) \* thread, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \*(\*)([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \*) func, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* param, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* stack, [**u32**](types_8h.md#typedef-u32) stackSize, [**OSPriority**](_o_s_thread_8h.md#typedef-ospriority) priority, [**u16**](types_8h.md#typedef-u16) attr) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSDetachThread**](#function-osdetachthread) ([**OSThread**](struct_o_s_thread.md) \* thread) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**OSDisableScheduler**](#function-osdisablescheduler) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**OSEnableScheduler**](#function-osenablescheduler) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSExitThread**](#function-osexitthread) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* val) <br> |
|  [**OSThread**](struct_o_s_thread.md) \* | [**OSGetCurrentThread**](#function-osgetcurrentthread) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**OSThread**](struct_o_s_thread.md) \* | [**OSGetIdleFunction**](#function-osgetidlefunction) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**OSPriority**](_o_s_thread_8h.md#typedef-ospriority) | [**OSGetThreadPriority**](#function-osgetthreadpriority) ([**OSThread**](struct_o_s_thread.md) \* thread) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSInitThreadQueue**](#function-osinitthreadqueue) ([**OSThreadQueue**](struct_o_s_thread_queue.md) \* queue) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**OSIsThreadSuspended**](#function-osisthreadsuspended) ([**OSThread**](struct_o_s_thread.md) \* thread) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**OSIsThreadTerminated**](#function-osisthreadterminated) ([**OSThread**](struct_o_s_thread.md) \* thread) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**OSJoinThread**](#function-osjointhread) ([**OSThread**](struct_o_s_thread.md) \* thread, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \*\* val) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**OSResumeThread**](#function-osresumethread) ([**OSThread**](struct_o_s_thread.md) \* thread) <br> |
|  [**OSThread**](struct_o_s_thread.md) \* | [**OSSetIdleFunction**](#function-ossetidlefunction) ([**OSIdleFunction**](_o_s_thread_8h.md#typedef-osidlefunction) idleFunction, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* param, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* stack, [**u32**](types_8h.md#typedef-u32) stackSize) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**OSSetThreadPriority**](#function-ossetthreadpriority) ([**OSThread**](struct_o_s_thread.md) \* thread, [**OSPriority**](_o_s_thread_8h.md#typedef-ospriority) priority) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSSleepThread**](#function-ossleepthread) ([**OSThreadQueue**](struct_o_s_thread_queue.md) \* queue) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**OSSuspendThread**](#function-ossuspendthread) ([**OSThread**](struct_o_s_thread.md) \* thread) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSWakeupThread**](#function-oswakeupthread) ([**OSThreadQueue**](struct_o_s_thread_queue.md) \* queue) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSYieldThread**](#function-osyieldthread) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**OS\_PRIORITY\_IDLE**](_o_s_thread_8h.md#define-os_priority_idle)  `[**OS\_PRIORITY\_MAX**](_o_s_thread_8h.md#define-os_priority_max)`<br> |
| define  | [**OS\_PRIORITY\_MAX**](_o_s_thread_8h.md#define-os_priority_max)  `31`<br> |
| define  | [**OS\_PRIORITY\_MIN**](_o_s_thread_8h.md#define-os_priority_min)  `0`<br> |
| define  | [**OS\_THREAD\_ATTR\_DETACH**](_o_s_thread_8h.md#define-os_thread_attr_detach)  `0x0001u`<br> |
| define  | [**OS\_THREAD\_STACK\_MAGIC**](_o_s_thread_8h.md#define-os_thread_stack_magic)  `0xDEADBABE`<br> |

## Public Types Documentation




### typedef OSCond 

```C++
typedef struct OSCond OSCond;
```




<hr>



### typedef OSIdleFunction 

```C++
typedef void(* OSIdleFunction) (void *param);
```




<hr>



### typedef OSMutex 

```C++
typedef struct OSMutex OSMutex;
```




<hr>



### typedef OSMutexLink 

```C++
typedef struct OSMutexLink OSMutexLink;
```




<hr>



### typedef OSMutexQueue 

```C++
typedef struct OSMutexQueue OSMutexQueue;
```




<hr>



### typedef OSPriority 

```C++
typedef s32 OSPriority;
```




<hr>



### typedef OSThread 

```C++
typedef struct OSThread OSThread;
```




<hr>



### typedef OSThreadLink 

```C++
typedef struct OSThreadLink OSThreadLink;
```




<hr>



### typedef OSThreadQueue 

```C++
typedef struct OSThreadQueue OSThreadQueue;
```




<hr>



### enum OS\_THREAD\_STATE 

```C++
enum OS_THREAD_STATE {
    OS_THREAD_STATE_READY = 1,
    OS_THREAD_STATE_RUNNING = 2,
    OS_THREAD_STATE_WAITING = 4,
    OS_THREAD_STATE_MORIBUND = 8
};
```




<hr>
## Public Functions Documentation




### function OSCancelThread 

```C++
void OSCancelThread (
    OSThread * thread
) 
```




<hr>



### function OSCheckActiveThreads 

```C++
s32 OSCheckActiveThreads (
    void
) 
```




<hr>



### function OSCreateThread 

```C++
BOOL OSCreateThread (
    OSThread * thread,
    void *(*)( void *) func,
    void * param,
    void * stack,
    u32 stackSize,
    OSPriority priority,
    u16 attr
) 
```




<hr>



### function OSDetachThread 

```C++
void OSDetachThread (
    OSThread * thread
) 
```




<hr>



### function OSDisableScheduler 

```C++
s32 OSDisableScheduler (
    void
) 
```




<hr>



### function OSEnableScheduler 

```C++
s32 OSEnableScheduler (
    void
) 
```




<hr>



### function OSExitThread 

```C++
void OSExitThread (
    void * val
) 
```




<hr>



### function OSGetCurrentThread 

```C++
OSThread * OSGetCurrentThread (
    void
) 
```




<hr>



### function OSGetIdleFunction 

```C++
OSThread * OSGetIdleFunction (
    void
) 
```




<hr>



### function OSGetThreadPriority 

```C++
OSPriority OSGetThreadPriority (
    OSThread * thread
) 
```




<hr>



### function OSInitThreadQueue 

```C++
void OSInitThreadQueue (
    OSThreadQueue * queue
) 
```




<hr>



### function OSIsThreadSuspended 

```C++
BOOL OSIsThreadSuspended (
    OSThread * thread
) 
```




<hr>



### function OSIsThreadTerminated 

```C++
BOOL OSIsThreadTerminated (
    OSThread * thread
) 
```




<hr>



### function OSJoinThread 

```C++
BOOL OSJoinThread (
    OSThread * thread,
    void ** val
) 
```




<hr>



### function OSResumeThread 

```C++
s32 OSResumeThread (
    OSThread * thread
) 
```




<hr>



### function OSSetIdleFunction 

```C++
OSThread * OSSetIdleFunction (
    OSIdleFunction idleFunction,
    void * param,
    void * stack,
    u32 stackSize
) 
```




<hr>



### function OSSetThreadPriority 

```C++
BOOL OSSetThreadPriority (
    OSThread * thread,
    OSPriority priority
) 
```




<hr>



### function OSSleepThread 

```C++
void OSSleepThread (
    OSThreadQueue * queue
) 
```




<hr>



### function OSSuspendThread 

```C++
s32 OSSuspendThread (
    OSThread * thread
) 
```




<hr>



### function OSWakeupThread 

```C++
void OSWakeupThread (
    OSThreadQueue * queue
) 
```




<hr>



### function OSYieldThread 

```C++
void OSYieldThread (
    void
) 
```




<hr>
## Macro Definition Documentation





### define OS\_PRIORITY\_IDLE 

```C++
#define OS_PRIORITY_IDLE `OS_PRIORITY_MAX`
```




<hr>



### define OS\_PRIORITY\_MAX 

```C++
#define OS_PRIORITY_MAX `31`
```




<hr>



### define OS\_PRIORITY\_MIN 

```C++
#define OS_PRIORITY_MIN `0`
```




<hr>



### define OS\_THREAD\_ATTR\_DETACH 

```C++
#define OS_THREAD_ATTR_DETACH `0x0001u`
```




<hr>



### define OS\_THREAD\_STACK\_MAGIC 

```C++
#define OS_THREAD_STACK_MAGIC `0xDEADBABE`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/os/OSThread.h`

