

# File CARDRead.c



[**FileList**](files.md) **>** [**card**](dir_2dfa3b55db09c289c0394a464581d568.md) **>** [**CARDRead.c**](_c_a_r_d_read_8c.md)

[Go to the source code of this file](_c_a_r_d_read_8c_source.md)



* `#include <dolphin/card.h>`
* `#include <dolphin/os.h>`
* `#include "CARDPrivate.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDCancel**](#function-cardcancel) ([**CARDFileInfo**](struct_c_a_r_d_file_info.md) \* fileInfo) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDRead**](#function-cardread) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**CARDFileInfo**](struct_c_a_r_d_file_info.md) \* fileInfo, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* buf, [**s32**](types_8h.md#typedef-s32) length, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) offset) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDReadAsync**](#function-cardreadasync) ([**CARDFileInfo**](struct_c_a_r_d_file_info.md) \* fileInfo, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* buf, [**s32**](types_8h.md#typedef-s32) length, [**s32**](types_8h.md#typedef-s32) offset, [**CARDCallback**](card_8h.md#typedef-cardcallback) callback) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDSeek**](#function-__cardseek) ([**CARDFileInfo**](struct_c_a_r_d_file_info.md) \* fileInfo, [**s32**](types_8h.md#typedef-s32) length, [**s32**](types_8h.md#typedef-s32) offset, [**CARDControl**](struct_c_a_r_d_control.md) \*\* pcard) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ReadCallback**](#function-readcallback) ([**s32**](types_8h.md#typedef-s32) chan, [**s32**](types_8h.md#typedef-s32) result) <br> |

























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**TRUNC**](_c_a_r_d_read_8c.md#define-trunc) (n, a) `((([**u32**](types_8h.md#typedef-u32))([**n**](_c_a_r_d_private_8h.md#define-card_max_mount_step))) & ~((a) - 1))`<br> |

## Public Functions Documentation




### function CARDCancel 

```C++
s32 CARDCancel (
    CARDFileInfo * fileInfo
) 
```




<hr>



### function CARDRead 

```C++
s32 CARDRead (
    struct  CARDFileInfo * fileInfo,
    void * buf,
    s32 length,
    long offset
) 
```




<hr>



### function CARDReadAsync 

```C++
s32 CARDReadAsync (
    CARDFileInfo * fileInfo,
    void * buf,
    s32 length,
    s32 offset,
    CARDCallback callback
) 
```




<hr>



### function \_\_CARDSeek 

```C++
s32 __CARDSeek (
    CARDFileInfo * fileInfo,
    s32 length,
    s32 offset,
    CARDControl ** pcard
) 
```




<hr>
## Public Static Functions Documentation




### function ReadCallback 

```C++
static void ReadCallback (
    s32 chan,
    s32 result
) 
```




<hr>
## Macro Definition Documentation





### define TRUNC 

```C++
#define TRUNC (
    n,
    a
) `((( u32 )( n )) & ~((a) - 1))`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/card/CARDRead.c`

