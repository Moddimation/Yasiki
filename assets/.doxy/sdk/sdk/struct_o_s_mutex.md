

# Struct OSMutex



[**ClassList**](annotated.md) **>** [**OSMutex**](struct_o_s_mutex.md)





* `#include <OSMutex.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**s32**](types_8h.md#typedef-s32) | [**count**](#variable-count)  <br>_0x0C_  |
|  [**OSMutexLink**](struct_o_s_mutex_link.md) | [**link**](#variable-link)  <br>_0x10_  |
|  [**OSThreadQueue**](struct_o_s_thread_queue.md) | [**queue**](#variable-queue)  <br>_0x00_  |
|  [**OSThread**](struct_o_s_thread.md) \* | [**thread**](#variable-thread)  <br>_0x08_  |












































## Public Attributes Documentation




### variable count 

_0x0C_ 
```C++
s32 OSMutex::count;
```




<hr>



### variable link 

_0x10_ 
```C++
OSMutexLink OSMutex::link;
```




<hr>



### variable queue 

_0x00_ 
```C++
OSThreadQueue OSMutex::queue;
```




<hr>



### variable thread 

_0x08_ 
```C++
OSThread* OSMutex::thread;
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/os/OSMutex.h`

