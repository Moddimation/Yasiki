

# File OSRtc.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**os**](dir_c85f9e83f0f4b4374578811cecebda65.md) **>** [**OSRtc.c**](_o_s_rtc_8c.md)

[Go to the source code of this file](_o_s_rtc_8c_source.md)



* `#include <dolphin/exi.h>`
* `#include <dolphin/os.h>`
* `#include "OSPrivate.h"`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**SramControl**](struct_sram_control.md) <br> |






















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**u16**](types_8h.md#typedef-u16) | [**OSGetLanguage**](#function-osgetlanguage) () <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**OSGetProgressiveMode**](#function-osgetprogressivemode) () <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**OSGetSoundMode**](#function-osgetsoundmode) () <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**OSGetVideoMode**](#function-osgetvideomode) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSSetLanguage**](#function-ossetlanguage) ([**u16**](types_8h.md#typedef-u16) language) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSSetProgressiveMode**](#function-ossetprogressivemode) ([**u32**](types_8h.md#typedef-u32) mode) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSSetSoundMode**](#function-ossetsoundmode) ([**u32**](types_8h.md#typedef-u32) mode) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSSetVideoMode**](#function-ossetvideomode) ([**u32**](types_8h.md#typedef-u32) mode) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**\_\_OSCheckSram**](#function-__oschecksram) () <br> |
|  [**u16**](types_8h.md#typedef-u16) | [**\_\_OSGetBootMode**](#function-__osgetbootmode) () <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**\_\_OSGetRTC**](#function-__osgetrtc) ([**u32**](types_8h.md#typedef-u32) \* rtc) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSInitSram**](#function-__osinitsram) () <br> |
|  [**OSSram**](struct_o_s_sram.md) \* | [**\_\_OSLockSram**](#function-__oslocksram) () <br> |
|  [**OSSramEx**](struct_o_s_sram_ex.md) \* | [**\_\_OSLockSramEx**](#function-__oslocksramex) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**\_\_OSReadROM**](#function-__osreadrom) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* buffer, [**s32**](types_8h.md#typedef-s32) length, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) offset) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**\_\_OSReadROMAsync**](#function-__osreadromasync) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* buffer, [**s32**](types_8h.md#typedef-s32) length, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) offset, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)() callback) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSSetBootMode**](#function-__ossetbootmode) ([**u16**](types_8h.md#typedef-u16) ntd) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**\_\_OSSetRTC**](#function-__ossetrtc) ([**u32**](types_8h.md#typedef-u32) rtc) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**\_\_OSSyncSram**](#function-__ossyncsram) () <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**\_\_OSUnlockSram**](#function-__osunlocksram) ([**BOOL**](types_8h.md#typedef-bool) commit) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**\_\_OSUnlockSramEx**](#function-__osunlocksramex) ([**BOOL**](types_8h.md#typedef-bool) commit) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SramControl**](struct_sram_control.md) [**Scb**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ALIGN**](#function-align) (32) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**GetRTC**](#function-getrtc) ([**u32**](types_8h.md#typedef-u32) \* rtc) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**LockSram**](#function-locksram) ([**u32**](types_8h.md#typedef-u32) offset) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**ReadSram**](#function-readsram) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* buffer) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**UnlockSram**](#function-unlocksram) ([**BOOL**](types_8h.md#typedef-bool) commit, [**u32**](types_8h.md#typedef-u32) offset) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**WriteSram**](#function-writesram) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* buffer, [**u32**](types_8h.md#typedef-u32) offset, [**u32**](types_8h.md#typedef-u32) size) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**WriteSramCallback**](#function-writesramcallback) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSReadROMCallback**](#function-__osreadromcallback) ([**s32**](types_8h.md#typedef-s32) chan) <br> |

























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**RTC\_SRAM\_SIZE**](_o_s_rtc_8c.md#define-rtc_sram_size)  `64`<br> |

## Public Functions Documentation




### function OSGetLanguage 

```C++
u16 OSGetLanguage () 
```




<hr>



### function OSGetProgressiveMode 

```C++
u32 OSGetProgressiveMode () 
```




<hr>



### function OSGetSoundMode 

```C++
u32 OSGetSoundMode () 
```




<hr>



### function OSGetVideoMode 

```C++
u32 OSGetVideoMode () 
```




<hr>



### function OSSetLanguage 

```C++
void OSSetLanguage (
    u16 language
) 
```




<hr>



### function OSSetProgressiveMode 

```C++
void OSSetProgressiveMode (
    u32 mode
) 
```




<hr>



### function OSSetSoundMode 

```C++
void OSSetSoundMode (
    u32 mode
) 
```




<hr>



### function OSSetVideoMode 

```C++
void OSSetVideoMode (
    u32 mode
) 
```




<hr>



### function \_\_OSCheckSram 

```C++
BOOL __OSCheckSram () 
```




<hr>



### function \_\_OSGetBootMode 

```C++
u16 __OSGetBootMode () 
```




<hr>



### function \_\_OSGetRTC 

```C++
BOOL __OSGetRTC (
    u32 * rtc
) 
```




<hr>



### function \_\_OSInitSram 

```C++
void __OSInitSram () 
```




<hr>



### function \_\_OSLockSram 

```C++
OSSram * __OSLockSram () 
```




<hr>



### function \_\_OSLockSramEx 

```C++
OSSramEx * __OSLockSramEx (
    void
) 
```




<hr>



### function \_\_OSReadROM 

```C++
BOOL __OSReadROM (
    void * buffer,
    s32 length,
    long offset
) 
```




<hr>



### function \_\_OSReadROMAsync 

```C++
BOOL __OSReadROMAsync (
    void * buffer,
    s32 length,
    long offset,
    void (*)() callback
) 
```




<hr>



### function \_\_OSSetBootMode 

```C++
void __OSSetBootMode (
    u16 ntd
) 
```




<hr>



### function \_\_OSSetRTC 

```C++
BOOL __OSSetRTC (
    u32 rtc
) 
```




<hr>



### function \_\_OSSyncSram 

```C++
BOOL __OSSyncSram () 
```




<hr>



### function \_\_OSUnlockSram 

```C++
BOOL __OSUnlockSram (
    BOOL commit
) 
```




<hr>



### function \_\_OSUnlockSramEx 

```C++
BOOL __OSUnlockSramEx (
    BOOL commit
) 
```




<hr>
## Public Static Functions Documentation




### function ALIGN 

```C++
static struct  SramControl  Scb ALIGN (
    32
) 
```




<hr>



### function GetRTC 

```C++
static BOOL GetRTC (
    u32 * rtc
) 
```




<hr>



### function LockSram 

```C++
static void * LockSram (
    u32 offset
) 
```




<hr>



### function ReadSram 

```C++
static BOOL ReadSram (
    void * buffer
) 
```




<hr>



### function UnlockSram 

```C++
static BOOL UnlockSram (
    BOOL commit,
    u32 offset
) 
```




<hr>



### function WriteSram 

```C++
static BOOL WriteSram (
    void * buffer,
    u32 offset,
    u32 size
) 
```




<hr>



### function WriteSramCallback 

```C++
static void WriteSramCallback () 
```




<hr>



### function \_\_OSReadROMCallback 

```C++
static void __OSReadROMCallback (
    s32 chan
) 
```




<hr>
## Macro Definition Documentation





### define RTC\_SRAM\_SIZE 

```C++
#define RTC_SRAM_SIZE `64`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/os/OSRtc.c`

