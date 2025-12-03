

# File OSMessage.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**os**](dir_c85f9e83f0f4b4374578811cecebda65.md) **>** [**OSMessage.c**](_o_s_message_8c.md)

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
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/os/OSMessage.c`

