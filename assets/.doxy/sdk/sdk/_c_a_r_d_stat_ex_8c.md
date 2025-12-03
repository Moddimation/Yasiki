

# File CARDStatEx.c



[**FileList**](files.md) **>** [**card**](dir_2dfa3b55db09c289c0394a464581d568.md) **>** [**CARDStatEx.c**](_c_a_r_d_stat_ex_8c.md)

[Go to the source code of this file](_c_a_r_d_stat_ex_8c_source.md)



* `#include <dolphin/card.h>`
* `#include <string.h>`
* `#include "CARDPrivate.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDGetStatusEx**](#function-__cardgetstatusex) ([**s32**](types_8h.md#typedef-s32) chan, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) fileNo, [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**CARDDir**](struct_c_a_r_d_dir.md) \* dirent) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDSetStatusEx**](#function-__cardsetstatusex) ([**s32**](types_8h.md#typedef-s32) chan, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) fileNo, [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**CARDDir**](struct_c_a_r_d_dir.md) \* dirent) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDSetStatusExAsync**](#function-__cardsetstatusexasync) ([**s32**](types_8h.md#typedef-s32) chan, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) fileNo, [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**CARDDir**](struct_c_a_r_d_dir.md) \* dirent, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step), [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) callback) <br> |




























## Public Functions Documentation




### function \_\_CARDGetStatusEx 

```C++
s32 __CARDGetStatusEx (
    s32 chan,
    long fileNo,
    struct  CARDDir * dirent
) 
```




<hr>



### function \_\_CARDSetStatusEx 

```C++
s32 __CARDSetStatusEx (
    s32 chan,
    long fileNo,
    struct  CARDDir * dirent
) 
```




<hr>



### function \_\_CARDSetStatusExAsync 

```C++
s32 __CARDSetStatusExAsync (
    s32 chan,
    long fileNo,
    struct  CARDDir * dirent,
    void (*)( long , long ) callback
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/card/CARDStatEx.c`

