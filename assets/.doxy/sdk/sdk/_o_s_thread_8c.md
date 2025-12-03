

# File OSThread.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**os**](dir_c85f9e83f0f4b4374578811cecebda65.md) **>** [**OSThread.c**](_o_s_thread_8c.md)

[Go to the source code of this file](_o_s_thread_8c_source.md)



* `#include <dolphin/os.h>`
* `#include "OSPrivate.h"`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**OSThreadQueue**](struct_o_s_thread_queue.md) | [**\_\_OSActiveThreadQueue**](#variable-__osactivethreadqueue)  <br> |
|  [**OSThread**](struct_o_s_thread.md) \* | [**\_\_OSCurrentThread**](#variable-__oscurrentthread)  <br> |
|  [**OSThread**](struct_o_s_thread.md) \* | [**\_\_OSFPUContext**](#variable-__osfpucontext)  <br> |
|  [**u16**](types_8h.md#typedef-u16) | [**\_stack\_addr**](#variable-_stack_addr)  <br> |
|  [**u16**](types_8h.md#typedef-u16) | [**\_stack\_end**](#variable-_stack_end)  <br> |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**OSThread**](struct_o_s_thread.md) | [**DefaultThread**](#variable-defaultthread)  <br> |
|  [**OSContext**](struct_o_s_context.md) | [**IdleContext**](#variable-idlecontext)  <br> |
|  [**OSThread**](struct_o_s_thread.md) | [**IdleThread**](#variable-idlethread)  <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**Reschedule**](#variable-reschedule)  <br> |
|  [**OSThreadQueue**](struct_o_s_thread_queue.md) | [**RunQueue**](#variable-runqueue)  <br> |
|  [**vu32**](types_8h.md#typedef-vu32) | [**RunQueueBits**](#variable-runqueuebits)  <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**RunQueueHint**](#variable-runqueuehint)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSCancelThread**](#function-oscancelthread) ([**OSThread**](struct_o_s_thread.md) \* thread) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**OSCheckActiveThreads**](#function-oscheckactivethreads) () <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSCreateThread**](#function-oscreatethread) ([**OSThread**](struct_o_s_thread.md) \* thread, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \*(\*)([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \*) func, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* param, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* stack, [**u32**](types_8h.md#typedef-u32) stackSize, [**s32**](types_8h.md#typedef-s32) priority, [**u16**](types_8h.md#typedef-u16) attr) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSDetachThread**](#function-osdetachthread) ([**OSThread**](struct_o_s_thread.md) \* thread) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**OSDisableScheduler**](#function-osdisablescheduler) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**OSEnableScheduler**](#function-osenablescheduler) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSExitThread**](#function-osexitthread) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* val) <br> |
|  [**OSThread**](struct_o_s_thread.md) \* | [**OSGetCurrentThread**](#function-osgetcurrentthread) () <br> |
|  [**OSThread**](struct_o_s_thread.md) \* | [**OSGetIdleFunction**](#function-osgetidlefunction) () <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**OSGetThreadPriority**](#function-osgetthreadpriority) ([**OSThread**](struct_o_s_thread.md) \* thread) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSInitThreadQueue**](#function-osinitthreadqueue) ([**OSThreadQueue**](struct_o_s_thread_queue.md) \* queue) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**OSIsThreadSuspended**](#function-osisthreadsuspended) ([**OSThread**](struct_o_s_thread.md) \* thread) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSIsThreadTerminated**](#function-osisthreadterminated) ([**OSThread**](struct_o_s_thread.md) \* thread) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSJoinThread**](#function-osjointhread) ([**OSThread**](struct_o_s_thread.md) \* thread, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \*\* val) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**OSResumeThread**](#function-osresumethread) ([**OSThread**](struct_o_s_thread.md) \* thread) <br> |
|  [**OSThread**](struct_o_s_thread.md) \* | [**OSSetIdleFunction**](#function-ossetidlefunction) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \*) idleFunction, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* param, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* stack, [**u32**](types_8h.md#typedef-u32) stackSize) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**OSSetThreadPriority**](#function-ossetthreadpriority) ([**OSThread**](struct_o_s_thread.md) \* thread, [**s32**](types_8h.md#typedef-s32) priority) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSSleepThread**](#function-ossleepthread) ([**OSThreadQueue**](struct_o_s_thread_queue.md) \* queue) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**OSSuspendThread**](#function-ossuspendthread) ([**OSThread**](struct_o_s_thread.md) \* thread) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSWakeupThread**](#function-oswakeupthread) ([**OSThreadQueue**](struct_o_s_thread_queue.md) \* queue) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSYieldThread**](#function-osyieldthread) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_OSGetEffectivePriority**](#function-__osgeteffectivepriority) ([**OSThread**](struct_o_s_thread.md) \* thread) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSPromoteThread**](#function-__ospromotethread) ([**OSThread**](struct_o_s_thread.md) \* thread, [**s32**](types_8h.md#typedef-s32) priority) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSReschedule**](#function-__osreschedule) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSThreadInit**](#function-__osthreadinit) () <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**CheckThreadQueue**](#function-checkthreadqueue) ([**OSThreadQueue**](struct_o_s_thread_queue.md) \* queue) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**IsMember**](#function-ismember) ([**OSThreadQueue**](struct_o_s_thread_queue.md) \* queue, [**OSThread**](struct_o_s_thread.md) \* thread) <br> |
|  [**OSThread**](struct_o_s_thread.md) \* | [**SelectThread**](#function-selectthread) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) yield) <br> |
|  [**OSThread**](struct_o_s_thread.md) \* | [**SetEffectivePriority**](#function-seteffectivepriority) ([**OSThread**](struct_o_s_thread.md) \* thread, [**s32**](types_8h.md#typedef-s32) priority) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SetRun**](#function-setrun) ([**OSThread**](struct_o_s_thread.md) \* thread) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**UnsetRun**](#function-unsetrun) ([**OSThread**](struct_o_s_thread.md) \* thread) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**UpdatePriority**](#function-updatepriority) ([**OSThread**](struct_o_s_thread.md) \* thread) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSIsThreadActive**](#function-__osisthreadactive) ([**OSThread**](struct_o_s_thread.md) \* thread) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSSwitchThread**](#function-__osswitchthread) ([**OSThread**](struct_o_s_thread.md) \* nextThread) <br> |

























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**ALIGN4**](_o_s_thread_8c.md#define-align4) (val) `(((val) + 0x3) & ~0x3)`<br> |
| define  | [**ALIGN8**](_o_s_thread_8c.md#define-align8) (val) `(((val) + 0x7) & ~0x7)`<br> |
| define  | [**ASSERTREPORT**](_o_s_thread_8c.md#define-assertreport) (line, cond) `/* multi line expression */`<br> |
| define  | [**DEQUEUE\_HEAD**](_o_s_thread_8c.md#define-dequeue_head) (thread, queue, link) `/* multi line expression */`<br> |
| define  | [**DEQUEUE\_THREAD**](_o_s_thread_8c.md#define-dequeue_thread) (thread, queue, link) `/* multi line expression */`<br> |
| define  | [**ENQUEUE\_THREAD**](_o_s_thread_8c.md#define-enqueue_thread) (thread, queue, link) `/* multi line expression */`<br> |
| define  | [**ENQUEUE\_THREAD\_PRIO**](_o_s_thread_8c.md#define-enqueue_thread_prio) (thread, queue, link) `/* multi line expression */`<br> |
| define  | [**IsSuspended**](_o_s_thread_8c.md#define-issuspended) (x) `0`<br> |

## Public Attributes Documentation




### variable \_\_OSActiveThreadQueue 

```C++
OSThreadQueue __OSActiveThreadQueue;
```




<hr>



### variable \_\_OSCurrentThread 

```C++
OSThread* __OSCurrentThread;
```




<hr>



### variable \_\_OSFPUContext 

```C++
OSThread* __OSFPUContext;
```




<hr>



### variable \_stack\_addr 

```C++
u16 _stack_addr[];
```




<hr>



### variable \_stack\_end 

```C++
u16 _stack_end[];
```




<hr>
## Public Static Attributes Documentation




### variable DefaultThread 

```C++
OSThread DefaultThread;
```




<hr>



### variable IdleContext 

```C++
OSContext IdleContext;
```




<hr>



### variable IdleThread 

```C++
OSThread IdleThread;
```




<hr>



### variable Reschedule 

```C++
s32 Reschedule;
```




<hr>



### variable RunQueue 

```C++
OSThreadQueue RunQueue[32];
```




<hr>



### variable RunQueueBits 

```C++
vu32 RunQueueBits;
```




<hr>



### variable RunQueueHint 

```C++
volatile int RunQueueHint;
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
s32 OSCheckActiveThreads () 
```




<hr>



### function OSCreateThread 

```C++
int OSCreateThread (
    OSThread * thread,
    void *(*)( void *) func,
    void * param,
    void * stack,
    u32 stackSize,
    s32 priority,
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
OSThread * OSGetCurrentThread () 
```




<hr>



### function OSGetIdleFunction 

```C++
OSThread * OSGetIdleFunction () 
```




<hr>



### function OSGetThreadPriority 

```C++
s32 OSGetThreadPriority (
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
int OSIsThreadTerminated (
    OSThread * thread
) 
```




<hr>



### function OSJoinThread 

```C++
int OSJoinThread (
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
    void (*)( void *) idleFunction,
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
    s32 priority
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



### function \_\_OSGetEffectivePriority 

```C++
s32 __OSGetEffectivePriority (
    OSThread * thread
) 
```




<hr>



### function \_\_OSPromoteThread 

```C++
void __OSPromoteThread (
    OSThread * thread,
    s32 priority
) 
```




<hr>



### function \_\_OSReschedule 

```C++
void __OSReschedule (
    void
) 
```




<hr>



### function \_\_OSThreadInit 

```C++
void __OSThreadInit () 
```




<hr>
## Public Static Functions Documentation




### function CheckThreadQueue 

```C++
static int CheckThreadQueue (
    OSThreadQueue * queue
) 
```




<hr>



### function IsMember 

```C++
static BOOL IsMember (
    OSThreadQueue * queue,
    OSThread * thread
) 
```




<hr>



### function SelectThread 

```C++
static OSThread * SelectThread (
    int yield
) 
```




<hr>



### function SetEffectivePriority 

```C++
static OSThread * SetEffectivePriority (
    OSThread * thread,
    s32 priority
) 
```




<hr>



### function SetRun 

```C++
static void SetRun (
    OSThread * thread
) 
```




<hr>



### function UnsetRun 

```C++
static void UnsetRun (
    OSThread * thread
) 
```




<hr>



### function UpdatePriority 

```C++
static void UpdatePriority (
    OSThread * thread
) 
```




<hr>



### function \_\_OSIsThreadActive 

```C++
static int __OSIsThreadActive (
    OSThread * thread
) 
```




<hr>



### function \_\_OSSwitchThread 

```C++
static void __OSSwitchThread (
    OSThread * nextThread
) 
```




<hr>
## Macro Definition Documentation





### define ALIGN4 

```C++
#define ALIGN4 (
    val
) `(((val) + 0x3) & ~0x3)`
```




<hr>



### define ALIGN8 

```C++
#define ALIGN8 (
    val
) `(((val) + 0x7) & ~0x7)`
```




<hr>



### define ASSERTREPORT 

```C++
#define ASSERTREPORT (
    line,
    cond
) `/* multi line expression */`
```




<hr>



### define DEQUEUE\_HEAD 

```C++
#define DEQUEUE_HEAD (
    thread,
    queue,
    link
) `/* multi line expression */`
```




<hr>



### define DEQUEUE\_THREAD 

```C++
#define DEQUEUE_THREAD (
    thread,
    queue,
    link
) `/* multi line expression */`
```




<hr>



### define ENQUEUE\_THREAD 

```C++
#define ENQUEUE_THREAD (
    thread,
    queue,
    link
) `/* multi line expression */`
```




<hr>



### define ENQUEUE\_THREAD\_PRIO 

```C++
#define ENQUEUE_THREAD_PRIO (
    thread,
    queue,
    link
) `/* multi line expression */`
```




<hr>



### define IsSuspended 

```C++
#define IsSuspended (
    x
) `0`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/os/OSThread.c`

