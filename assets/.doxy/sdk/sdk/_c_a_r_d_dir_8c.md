

# File CARDDir.c



[**FileList**](files.md) **>** [**card**](dir_2dfa3b55db09c289c0394a464581d568.md) **>** [**CARDDir.c**](_c_a_r_d_dir_8c.md)

[Go to the source code of this file](_c_a_r_d_dir_8c_source.md)



* `#include <dolphin/card.h>`
* `#include <string.h>`
* `#include "CARDPrivate.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**CARDDir**](struct_c_a_r_d_dir.md) \* | [**\_\_CARDGetDirBlock**](#function-__cardgetdirblock) ([**CARDControl**](struct_c_a_r_d_control.md) \* card) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDUpdateDir**](#function-__cardupdatedir) ([**s32**](types_8h.md#typedef-s32) chan, [**CARDCallback**](card_8h.md#typedef-cardcallback) callback) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**EraseCallback**](#function-erasecallback) ([**s32**](types_8h.md#typedef-s32) chan, [**s32**](types_8h.md#typedef-s32) result) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**WriteCallback**](#function-writecallback) ([**s32**](types_8h.md#typedef-s32) chan, [**s32**](types_8h.md#typedef-s32) result) <br> |


























## Public Functions Documentation




### function \_\_CARDGetDirBlock 

```C++
CARDDir * __CARDGetDirBlock (
    CARDControl * card
) 
```




<hr>



### function \_\_CARDUpdateDir 

```C++
s32 __CARDUpdateDir (
    s32 chan,
    CARDCallback callback
) 
```




<hr>
## Public Static Functions Documentation




### function EraseCallback 

```C++
static void EraseCallback (
    s32 chan,
    s32 result
) 
```




<hr>



### function WriteCallback 

```C++
static void WriteCallback (
    s32 chan,
    s32 result
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/card/CARDDir.c`

