

# Struct OSThread



[**ClassList**](annotated.md) **>** [**OSThread**](struct_o_s_thread.md)





* `#include <OSThread.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**u16**](types_8h.md#typedef-u16) | [**attr**](#variable-attr)  <br>_0x2CA OS\_THREAD\_ATTR\_\*_  |
|  [**OSPriority**](_o_s_thread_8h.md#typedef-ospriority) | [**base**](#variable-base)  <br>_0x2D4 base scheduling priority_  |
|  [**OSContext**](struct_o_s_context.md) | [**context**](#variable-context)  <br>_0x00 register context_  |
|  [**OSThreadLink**](struct_o_s_thread_link.md) | [**link**](#variable-link)  <br>_0x2E0 queue link_  |
|  [**OSThreadLink**](struct_o_s_thread_link.md) | [**linkActive**](#variable-linkactive)  <br>_0x2FC link of all threads for debugging_  |
|  [**OSMutex**](_o_s_thread_8h.md#typedef-osmutex) \* | [**mutex**](#variable-mutex)  <br>_0x2F0 mutex trying to lock_  |
|  [**OSPriority**](_o_s_thread_8h.md#typedef-ospriority) | [**priority**](#variable-priority)  <br>_0x2D0 effective scheduling priority_  |
|  [**OSThreadQueue**](struct_o_s_thread_queue.md) \* | [**queue**](#variable-queue)  <br>_0x2DC queue thread is on_  |
|  [**OSThreadQueue**](struct_o_s_thread_queue.md) | [**queueJoin**](#variable-queuejoin)  <br>_0x2E8 list of threads waiting for termination (join)_  |
|  [**OSMutexQueue**](struct_o_s_mutex_queue.md) | [**queueMutex**](#variable-queuemutex)  <br>_0x2F4 list of mutexes owned_  |
|  [**u8**](types_8h.md#typedef-u8) \* | [**stackBase**](#variable-stackbase)  <br>_0x304 the thread's designated stack (high address)_  |
|  [**u32**](types_8h.md#typedef-u32) \* | [**stackEnd**](#variable-stackend)  <br>_0x308 last word of stack (low address)_  |
|  [**u16**](types_8h.md#typedef-u16) | [**state**](#variable-state)  <br>_0x2C8 OS\_THREAD\_STATE\_\*_  |
|  [**s32**](types_8h.md#typedef-s32) | [**suspend**](#variable-suspend)  <br>_0x2CC suspended if the count is greater than zero_  |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**val**](#variable-val)  <br>_0x2D8 exit value_  |












































## Public Attributes Documentation




### variable attr 

_0x2CA OS\_THREAD\_ATTR\_\*_ 
```C++
u16 OSThread::attr;
```




<hr>



### variable base 

_0x2D4 base scheduling priority_ 
```C++
OSPriority OSThread::base;
```




<hr>



### variable context 

_0x00 register context_ 
```C++
OSContext OSThread::context;
```




<hr>



### variable link 

_0x2E0 queue link_ 
```C++
OSThreadLink OSThread::link;
```




<hr>



### variable linkActive 

_0x2FC link of all threads for debugging_ 
```C++
OSThreadLink OSThread::linkActive;
```




<hr>



### variable mutex 

_0x2F0 mutex trying to lock_ 
```C++
OSMutex* OSThread::mutex;
```




<hr>



### variable priority 

_0x2D0 effective scheduling priority_ 
```C++
OSPriority OSThread::priority;
```




<hr>



### variable queue 

_0x2DC queue thread is on_ 
```C++
OSThreadQueue* OSThread::queue;
```




<hr>



### variable queueJoin 

_0x2E8 list of threads waiting for termination (join)_ 
```C++
OSThreadQueue OSThread::queueJoin;
```




<hr>



### variable queueMutex 

_0x2F4 list of mutexes owned_ 
```C++
OSMutexQueue OSThread::queueMutex;
```




<hr>



### variable stackBase 

_0x304 the thread's designated stack (high address)_ 
```C++
u8* OSThread::stackBase;
```




<hr>



### variable stackEnd 

_0x308 last word of stack (low address)_ 
```C++
u32* OSThread::stackEnd;
```




<hr>



### variable state 

_0x2C8 OS\_THREAD\_STATE\_\*_ 
```C++
u16 OSThread::state;
```




<hr>



### variable suspend 

_0x2CC suspended if the count is greater than zero_ 
```C++
s32 OSThread::suspend;
```




<hr>



### variable val 

_0x2D8 exit value_ 
```C++
void* OSThread::val;
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/os/OSThread.h`

