

# File OSMessage.c



[**FileList**](files.md) **>** [**dolphin**](dir_8daa6a5f7f30f79e111d6992c13d512c.md) **>** [**os**](dir_8207759a5d5564400a58f6bb524771f0.md) **>** [**OSMessage.c**](_o_s_message_8c.md)

[Go to the source code of this file](_o_s_message_8c_source.md)



* `#include <dolphin/os.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSInitMessageQueue**](#function-osinitmessagequeue) ([**OSMessageQueue**](struct_o_s_message_queue.md) \* mq, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* msgArray, [**s32**](types_8h.md#typedef-s32) msgCount) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSJamMessage**](#function-osjammessage) ([**OSMessageQueue**](struct_o_s_message_queue.md) \* mq, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* msg, [**s32**](types_8h.md#typedef-s32) flags) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSReceiveMessage**](#function-osreceivemessage) ([**OSMessageQueue**](struct_o_s_message_queue.md) \* mq, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* msg, [**s32**](types_8h.md#typedef-s32) flags) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSSendMessage**](#function-ossendmessage) ([**OSMessageQueue**](struct_o_s_message_queue.md) \* mq, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* msg, [**s32**](types_8h.md#typedef-s32) flags) <br> |




























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
int OSJamMessage (
    OSMessageQueue * mq,
    void * msg,
    s32 flags
) 
```




<hr>



### function OSReceiveMessage 

```C++
int OSReceiveMessage (
    OSMessageQueue * mq,
    void * msg,
    s32 flags
) 
```




<hr>



### function OSSendMessage 

```C++
int OSSendMessage (
    OSMessageQueue * mq,
    void * msg,
    s32 flags
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `SDK/src/dolphin/os/OSMessage.c`

