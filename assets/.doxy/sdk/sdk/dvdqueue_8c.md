

# File dvdqueue.c



[**FileList**](files.md) **>** [**dolphin**](dir_8daa6a5f7f30f79e111d6992c13d512c.md) **>** [**dvd**](dir_89a52050841a8ad6d679d86dc07787eb.md) **>** [**dvdqueue.c**](dvdqueue_8c.md)

[Go to the source code of this file](dvdqueue_8c_source.md)



* `#include "dolphin/os.h"`
* `#include <dolphin/dvd.h>`
* `#include <dolphin.h>`
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
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DVDPushWaitingQueue**](#function-__dvdpushwaitingqueue) ([**s32**](types_8h.md#typedef-s32) prio, [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |


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
int __DVDPushWaitingQueue (
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
The documentation for this class was generated from the following file `SDK/src/dolphin/dvd/dvdqueue.c`

