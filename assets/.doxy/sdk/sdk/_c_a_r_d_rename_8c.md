

# File CARDRename.c



[**FileList**](files.md) **>** [**card**](dir_2dfa3b55db09c289c0394a464581d568.md) **>** [**CARDRename.c**](_c_a_r_d_rename_8c.md)

[Go to the source code of this file](_c_a_r_d_rename_8c_source.md)



* `#include <dolphin/card.h>`
* `#include <dolphin/os.h>`
* `#include <string.h>`
* `#include "CARDPrivate.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDRename**](#function-cardrename) ([**s32**](types_8h.md#typedef-s32) chan, [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* oldName, [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* newName) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDRenameAsync**](#function-cardrenameasync) ([**s32**](types_8h.md#typedef-s32) chan, [**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* old, [**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* new, [**CARDCallback**](card_8h.md#typedef-cardcallback) callback) <br> |




























## Public Functions Documentation




### function CARDRename 

```C++
s32 CARDRename (
    s32 chan,
    char * oldName,
    char * newName
) 
```




<hr>



### function CARDRenameAsync 

```C++
s32 CARDRenameAsync (
    s32 chan,
    const  char * old,
    const  char * new,
    CARDCallback callback
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/card/CARDRename.c`

