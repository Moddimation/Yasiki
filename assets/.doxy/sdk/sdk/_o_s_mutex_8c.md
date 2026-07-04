

# File OSMutex.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**os**](dir_c85f9e83f0f4b4374578811cecebda65.md) **>** [**OSMutex.c**](_o_s_mutex_8c.md)

[Go to the source code of this file](_o_s_mutex_8c_source.md)



* `#include <dolphin/os.h>`
* `#include "OSPrivate.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSInitCond**](#function-osinitcond) ([**OSCond**](struct_o_s_cond.md) \* cond) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSInitMutex**](#function-osinitmutex) ([**OSMutex**](struct_o_s_mutex.md) \* mutex) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSLockMutex**](#function-oslockmutex) ([**OSMutex**](struct_o_s_mutex.md) \* mutex) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSSignalCond**](#function-ossignalcond) ([**OSCond**](struct_o_s_cond.md) \* cond) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**OSTryLockMutex**](#function-ostrylockmutex) ([**OSMutex**](struct_o_s_mutex.md) \* mutex) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSUnlockMutex**](#function-osunlockmutex) ([**OSMutex**](struct_o_s_mutex.md) \* mutex) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSWaitCond**](#function-oswaitcond) ([**OSCond**](struct_o_s_cond.md) \* cond, [**OSMutex**](struct_o_s_mutex.md) \* mutex) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSCheckDeadLock**](#function-__oscheckdeadlock) ([**OSThread**](struct_o_s_thread.md) \* thread) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSCheckMutex**](#function-__oscheckmutex) ([**OSMutex**](struct_o_s_mutex.md) \* mutex) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSCheckMutexes**](#function-__oscheckmutexes) ([**OSThread**](struct_o_s_thread.md) \* thread) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSUnlockAllMutex**](#function-__osunlockallmutex) ([**OSThread**](struct_o_s_thread.md) \* thread) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**BOOL**](types_8h.md#typedef-bool) | [**IsMember**](#function-ismember) ([**OSMutexQueue**](struct_o_s_mutex_queue.md) \* queue, [**OSMutex**](struct_o_s_mutex.md) \* mutex) <br> |

























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**DEQUEUE\_HEAD**](_o_s_mutex_8c.md#define-dequeue_head) (mutex, queue, link) `/* multi line expression */`<br> |
| define  | [**DEQUEUE\_MUTEX**](_o_s_mutex_8c.md#define-dequeue_mutex) (mutex, queue, link) `/* multi line expression */`<br> |
| define  | [**ENQUEUE\_MUTEX**](_o_s_mutex_8c.md#define-enqueue_mutex) (mutex, queue, link) `/* multi line expression */`<br> |

## Public Functions Documentation




### function OSInitCond 

```C++
void OSInitCond (
    OSCond * cond
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
    OSCond * cond
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
    OSCond * cond,
    OSMutex * mutex
) 
```




<hr>



### function \_\_OSCheckDeadLock 

```C++
int __OSCheckDeadLock (
    OSThread * thread
) 
```




<hr>



### function \_\_OSCheckMutex 

```C++
int __OSCheckMutex (
    OSMutex * mutex
) 
```




<hr>



### function \_\_OSCheckMutexes 

```C++
int __OSCheckMutexes (
    OSThread * thread
) 
```




<hr>



### function \_\_OSUnlockAllMutex 

```C++
void __OSUnlockAllMutex (
    OSThread * thread
) 
```




<hr>
## Public Static Functions Documentation




### function IsMember 

```C++
static BOOL IsMember (
    OSMutexQueue * queue,
    OSMutex * mutex
) 
```




<hr>
## Macro Definition Documentation





### define DEQUEUE\_HEAD 

```C++
#define DEQUEUE_HEAD (
    mutex,
    queue,
    link
) `/* multi line expression */`
```




<hr>



### define DEQUEUE\_MUTEX 

```C++
#define DEQUEUE_MUTEX (
    mutex,
    queue,
    link
) `/* multi line expression */`
```




<hr>



### define ENQUEUE\_MUTEX 

```C++
#define ENQUEUE_MUTEX (
    mutex,
    queue,
    link
) `/* multi line expression */`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/os/OSMutex.c`

