

# File dvd\_private.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**dvd**](dir_6809de60dbef2d995cf7d874d1fa5b65.md) **>** [**dvd\_private.h**](dvd__private_8h.md)

[Go to the source code of this file](dvd__private_8h_source.md)



* `#include <dolphin/dvd.h>`
* `#include <dolphin/os.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**u32**](types_8h.md#typedef-u32) | [**\_\_DVDLongFileNameFlag**](#variable-__dvdlongfilenameflag)  <br> |
|  [**OSThreadQueue**](struct_o_s_thread_queue.md) | [**\_\_DVDThreadQueue**](#variable-__dvdthreadqueue)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DVDAudioBufferConfig**](#function-__dvdaudiobufferconfig) ([**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block, [**u32**](types_8h.md#typedef-u32) enable, [**u32**](types_8h.md#typedef-u32) size, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**s32**](types_8h.md#typedef-s32), [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \*) callback) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**\_\_DVDCheckWaitingQueue**](#function-__dvdcheckwaitingqueue) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DVDClearWaitingQueue**](#function-__dvdclearwaitingqueue) () <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**\_\_DVDDequeueWaitingQueue**](#function-__dvddequeuewaitingqueue) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DVDFSInit**](#function-__dvdfsinit) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DVDInitWA**](#function-__dvdinitwa) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DVDInterruptHandler**](#function-__dvdinterrupthandler) ([**s16**](types_8h.md#typedef-s16) unused, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**\_\_DVDIsBlockInWaitingQueue**](#function-__dvdisblockinwaitingqueue) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DVDLowSetWAType**](#function-__dvdlowsetwatype) ([**u32**](types_8h.md#typedef-u32) type, [**s32**](types_8h.md#typedef-s32) seekLoc) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**\_\_DVDLowTestAlarm**](#function-__dvdlowtestalarm) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSAlarm**](struct_o_s_alarm.md) \* alarm) <br> |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* | [**\_\_DVDPopWaitingQueue**](#function-__dvdpopwaitingqueue) () <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**\_\_DVDPushWaitingQueue**](#function-__dvdpushwaitingqueue) ([**s32**](types_8h.md#typedef-s32) prio, [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DVDStoreErrorCode**](#function-__dvdstoreerrorcode) ([**u32**](types_8h.md#typedef-u32) code) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_fstLoad**](#function-__fstload) () <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**DVD\_DE\_INT\_ERROR\_CODE**](dvd__private_8h.md#define-dvd_de_int_error_code)  `0x01234567`<br> |
| define  | [**DVD\_TIMEOUT\_ERROR\_CODE**](dvd__private_8h.md#define-dvd_timeout_error_code)  `0x01234568`<br> |

## Public Attributes Documentation




### variable \_\_DVDLongFileNameFlag 

```C++
u32 __DVDLongFileNameFlag;
```




<hr>



### variable \_\_DVDThreadQueue 

```C++
OSThreadQueue __DVDThreadQueue;
```




<hr>
## Public Functions Documentation




### function \_\_DVDAudioBufferConfig 

```C++
void __DVDAudioBufferConfig (
    DVDCommandBlock * block,
    u32 enable,
    u32 size,
    void (*)( s32 , struct  DVDCommandBlock *) callback
) 
```




<hr>



### function \_\_DVDCheckWaitingQueue 

```C++
BOOL __DVDCheckWaitingQueue () 
```




<hr>



### function \_\_DVDClearWaitingQueue 

```C++
void __DVDClearWaitingQueue () 
```




<hr>



### function \_\_DVDDequeueWaitingQueue 

```C++
BOOL __DVDDequeueWaitingQueue (
    struct  DVDCommandBlock * block
) 
```




<hr>



### function \_\_DVDFSInit 

```C++
void __DVDFSInit () 
```




<hr>



### function \_\_DVDInitWA 

```C++
void __DVDInitWA () 
```




<hr>



### function \_\_DVDInterruptHandler 

```C++
void __DVDInterruptHandler (
    s16 unused,
    OSContext * context
) 
```




<hr>



### function \_\_DVDIsBlockInWaitingQueue 

```C++
BOOL __DVDIsBlockInWaitingQueue (
    struct  DVDCommandBlock * block
) 
```




<hr>



### function \_\_DVDLowSetWAType 

```C++
void __DVDLowSetWAType (
    u32 type,
    s32 seekLoc
) 
```




<hr>



### function \_\_DVDLowTestAlarm 

```C++
BOOL __DVDLowTestAlarm (
    const  OSAlarm * alarm
) 
```




<hr>



### function \_\_DVDPopWaitingQueue 

```C++
struct  DVDCommandBlock * __DVDPopWaitingQueue () 
```




<hr>



### function \_\_DVDPushWaitingQueue 

```C++
BOOL __DVDPushWaitingQueue (
    s32 prio,
    struct  DVDCommandBlock * block
) 
```




<hr>



### function \_\_DVDStoreErrorCode 

```C++
void __DVDStoreErrorCode (
    u32 code
) 
```




<hr>



### function \_\_fstLoad 

```C++
void __fstLoad () 
```




<hr>
## Macro Definition Documentation





### define DVD\_DE\_INT\_ERROR\_CODE 

```C++
#define DVD_DE_INT_ERROR_CODE `0x01234567`
```




<hr>



### define DVD\_TIMEOUT\_ERROR\_CODE 

```C++
#define DVD_TIMEOUT_ERROR_CODE `0x01234568`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/dvd/dvd_private.h`

