

# File OSReboot.c



[**FileList**](files.md) **>** [**dolphin**](dir_8daa6a5f7f30f79e111d6992c13d512c.md) **>** [**os**](dir_8207759a5d5564400a58f6bb524771f0.md) **>** [**OSReboot.c**](_o_s_reboot_8c.md)

[Go to the source code of this file](_o_s_reboot_8c_source.md)



* `#include <dolphin/ai.h>`
* `#include <dolphin/os.h>`
* `#include "OSPrivate.h"`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**\_ApploaderHeader**](struct___apploader_header.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**\_ApploaderHeader**](struct___apploader_header.md) | [**ApploaderHeader**](#typedef-apploaderheader)  <br> |




## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**\_\_OSSavedRegionEnd**](#variable-__ossavedregionend)  <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**\_\_OSSavedRegionStart**](#variable-__ossavedregionstart)  <br> |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**BOOL**](types_8h.md#typedef-bool) | [**Prepared**](#variable-prepared)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \*[**BOOT\_REGION\_START**](_o_s_private_8h.md#variable-boot_region_start) | [**AT\_ADDRESS**](#function-at_address) (0x812FDFF0) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \*[**BOOT\_REGION\_END**](_o_s_private_8h.md#variable-boot_region_end) | [**AT\_ADDRESS**](#function-at_address) (0x812FDFEC) <br> |
|  [**u32**](types_8h.md#typedef-u32) [**OS\_RESET\_CODE**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AT\_ADDRESS**](#function-at_address) (0x800030F0) <br> |
|  [**u8**](types_8h.md#typedef-u8) [**OS\_REBOOT\_BOOL**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AT\_ADDRESS**](#function-at_address) (0x800030E2) <br> |
|  [**u32**](types_8h.md#typedef-u32) [**OS\_UNK\_CODE**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AT\_ADDRESS**](#function-at_address) (0x817FFFF8) <br> |
|  [**u32**](types_8h.md#typedef-u32) [**OS\_HOT\_RESET\_CODE**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AT\_ADDRESS**](#function-at_address) (0x817FFFFC) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSReboot**](#function-__osreboot) ([**u32**](types_8h.md#typedef-u32) resetCode, [**BOOL**](types_8h.md#typedef-bool) forceMenu) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**ApploaderHeader**](_o_s_reboot_8c.md#typedef-apploaderheader) [**Header**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ATTRIBUTE\_ALIGN**](#function-attribute_align) (32) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**Callback**](#function-callback) ([**s32**](types_8h.md#typedef-s32) result, [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ReadApploader**](#function-readapploader) ([**DVDCommandBlock**](struct_d_v_d_command_block.md) \* dvdCmd, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* addr, [**u32**](types_8h.md#typedef-u32) offset, [**u32**](types_8h.md#typedef-u32) numBytes) <br> |
|  [**ASM**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**Run**](#function-run) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) addr) <br> |


























## Public Types Documentation




### typedef ApploaderHeader 

```C++
typedef struct _ApploaderHeader ApploaderHeader;
```




<hr>
## Public Attributes Documentation




### variable \_\_OSSavedRegionEnd 

```C++
void* __OSSavedRegionEnd;
```




<hr>



### variable \_\_OSSavedRegionStart 

```C++
void* __OSSavedRegionStart;
```




<hr>
## Public Static Attributes Documentation




### variable Prepared 

```C++
volatile BOOL Prepared;
```




<hr>
## Public Functions Documentation




### function AT\_ADDRESS 

```C++
void * BOOT_REGION_START AT_ADDRESS (
    0x812FDFF0
) 
```




<hr>



### function AT\_ADDRESS 

```C++
void * BOOT_REGION_END AT_ADDRESS (
    0x812FDFEC
) 
```




<hr>



### function AT\_ADDRESS 

```C++
u32  OS_RESET_CODE AT_ADDRESS (
    0x800030F0
) 
```




<hr>



### function AT\_ADDRESS 

```C++
u8  OS_REBOOT_BOOL AT_ADDRESS (
    0x800030E2
) 
```




<hr>



### function AT\_ADDRESS 

```C++
u32  OS_UNK_CODE AT_ADDRESS (
    0x817FFFF8
) 
```




<hr>



### function AT\_ADDRESS 

```C++
u32  OS_HOT_RESET_CODE AT_ADDRESS (
    0x817FFFFC
) 
```




<hr>



### function \_\_OSReboot 

```C++
void __OSReboot (
    u32 resetCode,
    BOOL forceMenu
) 
```




<hr>
## Public Static Functions Documentation




### function ATTRIBUTE\_ALIGN 

```C++
static ApploaderHeader  Header ATTRIBUTE_ALIGN (
    32
) 
```




<hr>



### function Callback 

```C++
static void Callback (
    s32 result,
    DVDCommandBlock * block
) 
```




<hr>



### function ReadApploader 

```C++
static void ReadApploader (
    DVDCommandBlock * dvdCmd,
    void * addr,
    u32 offset,
    u32 numBytes
) 
```




<hr>



### function Run 

```C++
static ASM  void Run (
    register  u32 addr
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `SDK/src/dolphin/os/OSReboot.c`

