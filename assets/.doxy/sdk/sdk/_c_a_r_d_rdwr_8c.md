

# File CARDRdwr.c



[**FileList**](files.md) **>** [**card**](dir_2dfa3b55db09c289c0394a464581d568.md) **>** [**CARDRdwr.c**](_c_a_r_d_rdwr_8c.md)

[Go to the source code of this file](_c_a_r_d_rdwr_8c_source.md)



* `#include <dolphin.h>`
* `#include <dolphin/card.h>`
* `#include "CARDPrivate.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDGetXferredBytes**](#function-cardgetxferredbytes) ([**s32**](types_8h.md#typedef-s32) chan) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDRead**](#function-__cardread) ([**s32**](types_8h.md#typedef-s32) chan, [**u32**](types_8h.md#typedef-u32) addr, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) length, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* dst, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step), [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) callback) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDWrite**](#function-__cardwrite) ([**s32**](types_8h.md#typedef-s32) chan, [**u32**](types_8h.md#typedef-u32) addr, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) length, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* dst, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step), [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) callback) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**BlockReadCallback**](#function-blockreadcallback) ([**s32**](types_8h.md#typedef-s32) chan, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) result) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**BlockWriteCallback**](#function-blockwritecallback) ([**s32**](types_8h.md#typedef-s32) chan, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) result) <br> |


























## Public Functions Documentation




### function CARDGetXferredBytes 

```C++
s32 CARDGetXferredBytes (
    s32 chan
) 
```




<hr>



### function \_\_CARDRead 

```C++
s32 __CARDRead (
    s32 chan,
    u32 addr,
    long length,
    void * dst,
    void (*)( long , long ) callback
) 
```




<hr>



### function \_\_CARDWrite 

```C++
s32 __CARDWrite (
    s32 chan,
    u32 addr,
    long length,
    void * dst,
    void (*)( long , long ) callback
) 
```




<hr>
## Public Static Functions Documentation




### function BlockReadCallback 

```C++
static void BlockReadCallback (
    s32 chan,
    long result
) 
```




<hr>



### function BlockWriteCallback 

```C++
static void BlockWriteCallback (
    s32 chan,
    long result
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/card/CARDRdwr.c`

