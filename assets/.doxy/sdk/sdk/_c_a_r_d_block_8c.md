

# File CARDBlock.c



[**FileList**](files.md) **>** [**card**](dir_2dfa3b55db09c289c0394a464581d568.md) **>** [**CARDBlock.c**](_c_a_r_d_block_8c.md)

[Go to the source code of this file](_c_a_r_d_block_8c_source.md)



* `#include <dolphin/card.h>`
* `#include <string.h>`
* `#include "CARDPrivate.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDAllocBlock**](#function-__cardallocblock) ([**s32**](types_8h.md#typedef-s32) chan, [**u32**](types_8h.md#typedef-u32) cBlock, [**CARDCallback**](card_8h.md#typedef-cardcallback) callback) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDFreeBlock**](#function-__cardfreeblock) ([**s32**](types_8h.md#typedef-s32) chan, [**u16**](types_8h.md#typedef-u16) nBlock, [**CARDCallback**](card_8h.md#typedef-cardcallback) callback) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**\_\_CARDGetFatBlock**](#function-__cardgetfatblock) ([**CARDControl**](struct_c_a_r_d_control.md) \* card) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDUpdateFatBlock**](#function-__cardupdatefatblock) ([**s32**](types_8h.md#typedef-s32) chan, [**u16**](types_8h.md#typedef-u16) \* fat, [**CARDCallback**](card_8h.md#typedef-cardcallback) callback) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**EraseCallback**](#function-erasecallback) ([**s32**](types_8h.md#typedef-s32) chan, [**s32**](types_8h.md#typedef-s32) result) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**WriteCallback**](#function-writecallback) ([**s32**](types_8h.md#typedef-s32) chan, [**s32**](types_8h.md#typedef-s32) result) <br> |


























## Public Functions Documentation




### function \_\_CARDAllocBlock 

```C++
s32 __CARDAllocBlock (
    s32 chan,
    u32 cBlock,
    CARDCallback callback
) 
```




<hr>



### function \_\_CARDFreeBlock 

```C++
s32 __CARDFreeBlock (
    s32 chan,
    u16 nBlock,
    CARDCallback callback
) 
```




<hr>



### function \_\_CARDGetFatBlock 

```C++
void * __CARDGetFatBlock (
    CARDControl * card
) 
```




<hr>



### function \_\_CARDUpdateFatBlock 

```C++
s32 __CARDUpdateFatBlock (
    s32 chan,
    u16 * fat,
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
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/card/CARDBlock.c`

