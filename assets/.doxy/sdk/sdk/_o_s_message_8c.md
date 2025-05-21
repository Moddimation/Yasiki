

# File OSMessage.c



[**FileList**](files.md) **>** [**dolphin**](dir_5daac82a3cf194997369e9388ff34711.md) **>** [**os**](dir_2110adc24753dd29d2ec0361943e7a71.md) **>** [**OSMessage.c**](_o_s_message_8c.md)

[Go to the source code of this file](_o_s_message_8c_source.md)



* `#include <dolphin/os.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSInitMessageQueue**](#function-osinitmessagequeue) ([**OSMessageQueue**](struct_o_s_message_queue.md) \* mq, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* msgArray, [**s32**](types_8h.md#typedef-s32) msgCount) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**OSJamMessage**](#function-osjammessage) ([**OSMessageQueue**](struct_o_s_message_queue.md) \* mq, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* msg, [**s32**](types_8h.md#typedef-s32) flags) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**OSReceiveMessage**](#function-osreceivemessage) ([**OSMessageQueue**](struct_o_s_message_queue.md) \* mq, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* msg, [**s32**](types_8h.md#typedef-s32) flags) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**OSSendMessage**](#function-ossendmessage) ([**OSMessageQueue**](struct_o_s_message_queue.md) \* mq, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* msg, [**s32**](types_8h.md#typedef-s32) flags) <br> |




























## Public Functions Documentation




### function OSInitMessageQueue 

```C++
void OSInitMessageQueue (
    OSMessageQueue * mq,
    void * msgArray,
    s32 msgCount
) 
```




<hr>



### function OSJamMessage 

```C++
BOOL OSJamMessage (
    OSMessageQueue * mq,
    void * msg,
    s32 flags
) 
```




<hr>



### function OSReceiveMessage 

```C++
BOOL OSReceiveMessage (
    OSMessageQueue * mq,
    void * msg,
    s32 flags
) 
```




<hr>



### function OSSendMessage 

```C++
BOOL OSSendMessage (
    OSMessageQueue * mq,
    void * msg,
    s32 flags
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `DolphinSDK/src/dolphin/os/OSMessage.c`

