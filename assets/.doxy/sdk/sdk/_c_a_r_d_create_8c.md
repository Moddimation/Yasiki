

# File CARDCreate.c



[**FileList**](files.md) **>** [**card**](dir_2dfa3b55db09c289c0394a464581d568.md) **>** [**CARDCreate.c**](_c_a_r_d_create_8c.md)

[Go to the source code of this file](_c_a_r_d_create_8c_source.md)



* `#include <dolphin/card.h>`
* `#include <string.h>`
* `#include "CARDPrivate.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDCreate**](#function-cardcreate) ([**s32**](types_8h.md#typedef-s32) chan, [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* fileName, [**u32**](types_8h.md#typedef-u32) size, [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**CARDFileInfo**](struct_c_a_r_d_file_info.md) \* fileInfo) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDCreateAsync**](#function-cardcreateasync) ([**s32**](types_8h.md#typedef-s32) chan, [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* fileName, [**u32**](types_8h.md#typedef-u32) size, [**CARDFileInfo**](struct_c_a_r_d_file_info.md) \* fileInfo, [**CARDCallback**](card_8h.md#typedef-cardcallback) callback) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**CreateCallbackFat**](#function-createcallbackfat) ([**s32**](types_8h.md#typedef-s32) chan, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) result) <br> |


























## Public Functions Documentation




### function CARDCreate 

```C++
s32 CARDCreate (
    s32 chan,
    char * fileName,
    u32 size,
    struct  CARDFileInfo * fileInfo
) 
```




<hr>



### function CARDCreateAsync 

```C++
s32 CARDCreateAsync (
    s32 chan,
    char * fileName,
    u32 size,
    CARDFileInfo * fileInfo,
    CARDCallback callback
) 
```




<hr>
## Public Static Functions Documentation




### function CreateCallbackFat 

```C++
static void CreateCallbackFat (
    s32 chan,
    long result
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/card/CARDCreate.c`

