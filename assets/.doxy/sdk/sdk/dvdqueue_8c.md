

# File dvdqueue.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**dvd**](dir_6809de60dbef2d995cf7d874d1fa5b65.md) **>** [**dvdqueue.c**](dvdqueue_8c.md)

[Go to the source code of this file](dvdqueue_8c_source.md)



* `#include <dolphin/dvd.h>`
* `#include <dolphin/os.h>`
* `#include "dvd_private.h"`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* | [**next**](#variable-next)  <br>_0x00_  |
|  [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* | [**prev**](#variable-prev)  <br>_0x04_  |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**CommandNames**](#variable-commandnames)   = `/* multi line expression */`<br> |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step)  | [**WaitingQueue**](#variable-waitingqueue)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDDumpWaitingQueue**](#function-dvddumpwaitingqueue) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DVDCheckWaitingQueue**](#function-__dvdcheckwaitingqueue) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DVDClearWaitingQueue**](#function-__dvdclearwaitingqueue) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DVDDequeueWaitingQueue**](#function-__dvddequeuewaitingqueue) ([**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DVDIsBlockInWaitingQueue**](#function-__dvdisblockinwaitingqueue) ([**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* | [**\_\_DVDPopWaitingQueue**](#function-__dvdpopwaitingqueue) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**\_\_DVDPushWaitingQueue**](#function-__dvdpushwaitingqueue) ([**s32**](types_8h.md#typedef-s32) prio, [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* | [**PopWaitingQueuePrio**](#function-popwaitingqueueprio) ([**s32**](types_8h.md#typedef-s32) prio) <br> |


























## Public Attributes Documentation




### variable next 

_0x00_ 
```C++
DVDCommandBlock* next;
```




<hr>



### variable prev 

_0x04_ 
```C++
DVDCommandBlock* prev;
```




<hr>
## Public Static Attributes Documentation




### variable CommandNames 

```C++
char* CommandNames[16];
```




<hr>



### variable WaitingQueue 

```C++
struct  WaitingQueue[4];
```




<hr>
## Public Functions Documentation




### function DVDDumpWaitingQueue 

```C++
void DVDDumpWaitingQueue (
    void
) 
```




<hr>



### function \_\_DVDCheckWaitingQueue 

```C++
int __DVDCheckWaitingQueue (
    void
) 
```




<hr>



### function \_\_DVDClearWaitingQueue 

```C++
void __DVDClearWaitingQueue (
    void
) 
```




<hr>



### function \_\_DVDDequeueWaitingQueue 

```C++
int __DVDDequeueWaitingQueue (
    DVDCommandBlock * block
) 
```




<hr>



### function \_\_DVDIsBlockInWaitingQueue 

```C++
int __DVDIsBlockInWaitingQueue (
    DVDCommandBlock * block
) 
```




<hr>



### function \_\_DVDPopWaitingQueue 

```C++
DVDCommandBlock * __DVDPopWaitingQueue (
    void
) 
```




<hr>



### function \_\_DVDPushWaitingQueue 

```C++
BOOL __DVDPushWaitingQueue (
    s32 prio,
    DVDCommandBlock * block
) 
```




<hr>
## Public Static Functions Documentation




### function PopWaitingQueuePrio 

```C++
static DVDCommandBlock * PopWaitingQueuePrio (
    s32 prio
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/dvd/dvdqueue.c`

