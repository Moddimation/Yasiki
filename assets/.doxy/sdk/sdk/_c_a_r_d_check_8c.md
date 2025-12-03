

# File CARDCheck.c



[**FileList**](files.md) **>** [**card**](dir_2dfa3b55db09c289c0394a464581d568.md) **>** [**CARDCheck.c**](_c_a_r_d_check_8c.md)

[Go to the source code of this file](_c_a_r_d_check_8c_source.md)



* `#include <dolphin/card.h>`
* `#include <string.h>`
* `#include "../os/OSPrivate.h"`
* `#include "CARDPrivate.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDCheck**](#function-cardcheck) ([**s32**](types_8h.md#typedef-s32) chan) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDCheckAsync**](#function-cardcheckasync) ([**s32**](types_8h.md#typedef-s32) chan, [**CARDCallback**](card_8h.md#typedef-cardcallback) callback) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDCheckEx**](#function-cardcheckex) ([**s32**](types_8h.md#typedef-s32) chan, [**s32**](types_8h.md#typedef-s32) \* xferBytes) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDCheckExAsync**](#function-cardcheckexasync) ([**s32**](types_8h.md#typedef-s32) chan, [**s32**](types_8h.md#typedef-s32) \* xferBytes, [**CARDCallback**](card_8h.md#typedef-cardcallback) callback) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_CARDCheckSum**](#function-__cardchecksum) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* ptr, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) length, [**u16**](types_8h.md#typedef-u16) \* checksum, [**u16**](types_8h.md#typedef-u16) \* checksumInv) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDVerify**](#function-__cardverify) ([**CARDControl**](struct_c_a_r_d_control.md) \* card) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**s32**](types_8h.md#typedef-s32) | [**VerifyDir**](#function-verifydir) ([**CARDControl**](struct_c_a_r_d_control.md) \* card, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* outCurrent) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**VerifyFAT**](#function-verifyfat) ([**CARDControl**](struct_c_a_r_d_control.md) \* card, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* outCurrent) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**VerifyID**](#function-verifyid) ([**CARDControl**](struct_c_a_r_d_control.md) \* card) <br> |


























## Public Functions Documentation




### function CARDCheck 

```C++
s32 CARDCheck (
    s32 chan
) 
```




<hr>



### function CARDCheckAsync 

```C++
s32 CARDCheckAsync (
    s32 chan,
    CARDCallback callback
) 
```




<hr>



### function CARDCheckEx 

```C++
s32 CARDCheckEx (
    s32 chan,
    s32 * xferBytes
) 
```




<hr>



### function CARDCheckExAsync 

```C++
s32 CARDCheckExAsync (
    s32 chan,
    s32 * xferBytes,
    CARDCallback callback
) 
```




<hr>



### function \_\_CARDCheckSum 

```C++
void __CARDCheckSum (
    void * ptr,
    int length,
    u16 * checksum,
    u16 * checksumInv
) 
```




<hr>



### function \_\_CARDVerify 

```C++
s32 __CARDVerify (
    CARDControl * card
) 
```




<hr>
## Public Static Functions Documentation




### function VerifyDir 

```C++
static s32 VerifyDir (
    CARDControl * card,
    int * outCurrent
) 
```




<hr>



### function VerifyFAT 

```C++
static s32 VerifyFAT (
    CARDControl * card,
    int * outCurrent
) 
```




<hr>



### function VerifyID 

```C++
static s32 VerifyID (
    CARDControl * card
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/card/CARDCheck.c`

