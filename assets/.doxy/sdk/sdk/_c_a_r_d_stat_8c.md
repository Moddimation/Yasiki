

# File CARDStat.c



[**FileList**](files.md) **>** [**card**](dir_2dfa3b55db09c289c0394a464581d568.md) **>** [**CARDStat.c**](_c_a_r_d_stat_8c.md)

[Go to the source code of this file](_c_a_r_d_stat_8c_source.md)



* `#include <dolphin/card.h>`
* `#include <dolphin/os.h>`
* `#include <string.h>`
* `#include "CARDPrivate.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDGetStatus**](#function-cardgetstatus) ([**s32**](types_8h.md#typedef-s32) chan, [**s32**](types_8h.md#typedef-s32) fileNo, [**CARDStat**](struct_c_a_r_d_stat.md) \* stat) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDSetStatus**](#function-cardsetstatus) ([**s32**](types_8h.md#typedef-s32) chan, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) fileNo, [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**CARDStat**](struct_c_a_r_d_stat.md) \* stat) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDSetStatusAsync**](#function-cardsetstatusasync) ([**s32**](types_8h.md#typedef-s32) chan, [**s32**](types_8h.md#typedef-s32) fileNo, [**CARDStat**](struct_c_a_r_d_stat.md) \* stat, [**CARDCallback**](card_8h.md#typedef-cardcallback) callback) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**UpdateIconOffsets**](#function-updateiconoffsets) ([**CARDDir**](struct_c_a_r_d_dir.md) \* ent, [**CARDStat**](struct_c_a_r_d_stat.md) \* stat) <br> |


























## Public Functions Documentation




### function CARDGetStatus 

```C++
s32 CARDGetStatus (
    s32 chan,
    s32 fileNo,
    CARDStat * stat
) 
```




<hr>



### function CARDSetStatus 

```C++
s32 CARDSetStatus (
    s32 chan,
    long fileNo,
    struct  CARDStat * stat
) 
```




<hr>



### function CARDSetStatusAsync 

```C++
s32 CARDSetStatusAsync (
    s32 chan,
    s32 fileNo,
    CARDStat * stat,
    CARDCallback callback
) 
```




<hr>
## Public Static Functions Documentation




### function UpdateIconOffsets 

```C++
static void UpdateIconOffsets (
    CARDDir * ent,
    CARDStat * stat
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/card/CARDStat.c`

