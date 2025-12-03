

# File CARDRaw.c



[**FileList**](files.md) **>** [**card**](dir_2dfa3b55db09c289c0394a464581d568.md) **>** [**CARDRaw.c**](_c_a_r_d_raw_8c.md)

[Go to the source code of this file](_c_a_r_d_raw_8c_source.md)



* `#include <dolphin/card.h>`
* `#include <dolphin.h>`
* `#include "CARDPrivate.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDRawRead**](#function-__cardrawread) ([**s32**](types_8h.md#typedef-s32) chan, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* buf, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) length, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) offset) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDRawReadAsync**](#function-__cardrawreadasync) ([**s32**](types_8h.md#typedef-s32) chan, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* buf, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) length, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) offset, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step), [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) callback) <br> |




























## Public Functions Documentation




### function \_\_CARDRawRead 

```C++
s32 __CARDRawRead (
    s32 chan,
    void * buf,
    long length,
    long offset
) 
```




<hr>



### function \_\_CARDRawReadAsync 

```C++
s32 __CARDRawReadAsync (
    s32 chan,
    void * buf,
    long length,
    long offset,
    void (*)( long , long ) callback
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/card/CARDRaw.c`

