

# Struct OSMessageQueue



[**ClassList**](annotated.md) **>** [**OSMessageQueue**](struct_o_s_message_queue.md)





* `#include <OSMessage.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**s32**](types_8h.md#typedef-s32) | [**firstIndex**](#variable-firstindex)  <br>_0x18_  |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**msgArray**](#variable-msgarray)  <br>_0x10_  |
|  [**s32**](types_8h.md#typedef-s32) | [**msgCount**](#variable-msgcount)  <br>_0x14_  |
|  [**OSThreadQueue**](struct_o_s_thread_queue.md) | [**queueReceive**](#variable-queuereceive)  <br>_0x08_  |
|  [**OSThreadQueue**](struct_o_s_thread_queue.md) | [**queueSend**](#variable-queuesend)  <br>_0x00_  |
|  [**s32**](types_8h.md#typedef-s32) | [**usedCount**](#variable-usedcount)  <br>_0x1C_  |












































## Public Attributes Documentation




### variable firstIndex 

_0x18_ 
```C++
s32 OSMessageQueue::firstIndex;
```




<hr>



### variable msgArray 

_0x10_ 
```C++
void* OSMessageQueue::msgArray;
```




<hr>



### variable msgCount 

_0x14_ 
```C++
s32 OSMessageQueue::msgCount;
```




<hr>



### variable queueReceive 

_0x08_ 
```C++
OSThreadQueue OSMessageQueue::queueReceive;
```




<hr>



### variable queueSend 

_0x00_ 
```C++
OSThreadQueue OSMessageQueue::queueSend;
```




<hr>



### variable usedCount 

_0x1C_ 
```C++
s32 OSMessageQueue::usedCount;
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/os/OSMessage.h`

