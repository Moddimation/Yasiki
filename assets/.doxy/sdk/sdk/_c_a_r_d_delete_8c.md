

# File CARDDelete.c



[**FileList**](files.md) **>** [**card**](dir_2dfa3b55db09c289c0394a464581d568.md) **>** [**CARDDelete.c**](_c_a_r_d_delete_8c.md)

[Go to the source code of this file](_c_a_r_d_delete_8c_source.md)



* `#include <dolphin/card.h>`
* `#include <dolphin.h>`
* `#include "CARDPrivate.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDDelete**](#function-carddelete) ([**s32**](types_8h.md#typedef-s32) chan, [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* fileName) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDDeleteAsync**](#function-carddeleteasync) ([**s32**](types_8h.md#typedef-s32) chan, [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* fileName, [**CARDCallback**](card_8h.md#typedef-cardcallback) callback) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDFastDelete**](#function-cardfastdelete) ([**s32**](types_8h.md#typedef-s32) chan, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) fileNo) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDFastDeleteAsync**](#function-cardfastdeleteasync) ([**s32**](types_8h.md#typedef-s32) chan, [**s32**](types_8h.md#typedef-s32) fileNo, [**CARDCallback**](card_8h.md#typedef-cardcallback) callback) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DeleteCallback**](#function-deletecallback) ([**s32**](types_8h.md#typedef-s32) chan, [**s32**](types_8h.md#typedef-s32) result) <br> |


























## Public Functions Documentation




### function CARDDelete 

```C++
s32 CARDDelete (
    s32 chan,
    char * fileName
) 
```




<hr>



### function CARDDeleteAsync 

```C++
s32 CARDDeleteAsync (
    s32 chan,
    char * fileName,
    CARDCallback callback
) 
```




<hr>



### function CARDFastDelete 

```C++
s32 CARDFastDelete (
    s32 chan,
    long fileNo
) 
```




<hr>



### function CARDFastDeleteAsync 

```C++
s32 CARDFastDeleteAsync (
    s32 chan,
    s32 fileNo,
    CARDCallback callback
) 
```




<hr>
## Public Static Functions Documentation




### function DeleteCallback 

```C++
static void DeleteCallback (
    s32 chan,
    s32 result
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/card/CARDDelete.c`

