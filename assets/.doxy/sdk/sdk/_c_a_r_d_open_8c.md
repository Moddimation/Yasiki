

# File CARDOpen.c



[**FileList**](files.md) **>** [**card**](dir_2dfa3b55db09c289c0394a464581d568.md) **>** [**CARDOpen.c**](_c_a_r_d_open_8c.md)

[Go to the source code of this file](_c_a_r_d_open_8c_source.md)



* `#include <dolphin/card.h>`
* `#include <string.h>`
* `#include "CARDPrivate.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDClose**](#function-cardclose) ([**CARDFileInfo**](struct_c_a_r_d_file_info.md) \* fileInfo) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDFastOpen**](#function-cardfastopen) ([**s32**](types_8h.md#typedef-s32) chan, [**s32**](types_8h.md#typedef-s32) fileNo, [**CARDFileInfo**](struct_c_a_r_d_file_info.md) \* fileInfo) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDOpen**](#function-cardopen) ([**s32**](types_8h.md#typedef-s32) chan, [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* fileName, [**CARDFileInfo**](struct_c_a_r_d_file_info.md) \* fileInfo) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDAccess**](#function-__cardaccess) ([**CARDDir**](struct_c_a_r_d_dir.md) \* ent) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**\_\_CARDCompareFileName**](#function-__cardcomparefilename) ([**CARDDir**](struct_c_a_r_d_dir.md) \* ent, [**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* fileName) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDGetFileNo**](#function-__cardgetfileno) ([**CARDControl**](struct_c_a_r_d_control.md) \* card, [**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* fileName, [**s32**](types_8h.md#typedef-s32) \* pfileNo) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**\_\_CARDIsOpened**](#function-__cardisopened) ([**CARDControl**](struct_c_a_r_d_control.md) \* card, [**s32**](types_8h.md#typedef-s32) fileNo) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDIsPublic**](#function-__cardispublic) ([**CARDDir**](struct_c_a_r_d_dir.md) \* ent) <br> |




























## Public Functions Documentation




### function CARDClose 

```C++
s32 CARDClose (
    CARDFileInfo * fileInfo
) 
```




<hr>



### function CARDFastOpen 

```C++
s32 CARDFastOpen (
    s32 chan,
    s32 fileNo,
    CARDFileInfo * fileInfo
) 
```




<hr>



### function CARDOpen 

```C++
s32 CARDOpen (
    s32 chan,
    char * fileName,
    CARDFileInfo * fileInfo
) 
```




<hr>



### function \_\_CARDAccess 

```C++
s32 __CARDAccess (
    CARDDir * ent
) 
```




<hr>



### function \_\_CARDCompareFileName 

```C++
BOOL __CARDCompareFileName (
    CARDDir * ent,
    const  char * fileName
) 
```




<hr>



### function \_\_CARDGetFileNo 

```C++
s32 __CARDGetFileNo (
    CARDControl * card,
    const  char * fileName,
    s32 * pfileNo
) 
```




<hr>



### function \_\_CARDIsOpened 

```C++
BOOL __CARDIsOpened (
    CARDControl * card,
    s32 fileNo
) 
```




<hr>



### function \_\_CARDIsPublic 

```C++
s32 __CARDIsPublic (
    CARDDir * ent
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/card/CARDOpen.c`

