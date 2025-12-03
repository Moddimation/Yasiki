

# File OSMessage.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**os**](dir_2e13e6cf1d2e2aa91cbc210fef9f68a3.md) **>** [**OSMessage.h**](_o_s_message_8h.md)

[Go to the source code of this file](_o_s_message_8h_source.md)



* `#include <dolphin/os/OSThread.h>`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**OSMessageQueue**](struct_o_s_message_queue.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSMessageQueue**](struct_o_s_message_queue.md) | [**OSMessageQueue**](#typedef-osmessagequeue)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSInitMessageQueue**](#function-osinitmessagequeue) ([**OSMessageQueue**](struct_o_s_message_queue.md) \* mq, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* msgArray, [**s32**](types_8h.md#typedef-s32) msgCount) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSJamMessage**](#function-osjammessage) ([**OSMessageQueue**](struct_o_s_message_queue.md) \* mq, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* msg, [**s32**](types_8h.md#typedef-s32) flags) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSReceiveMessage**](#function-osreceivemessage) ([**OSMessageQueue**](struct_o_s_message_queue.md) \* mq, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* msg, [**s32**](types_8h.md#typedef-s32) flags) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSSendMessage**](#function-ossendmessage) ([**OSMessageQueue**](struct_o_s_message_queue.md) \* mq, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* msg, [**s32**](types_8h.md#typedef-s32) flags) <br> |




























## Public Types Documentation




### typedef OSMessageQueue 

```C++
typedef struct OSMessageQueue OSMessageQueue;
```




<hr>
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
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/os/OSMessage.h`

