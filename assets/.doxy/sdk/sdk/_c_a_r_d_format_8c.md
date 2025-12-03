

# File CARDFormat.c



[**FileList**](files.md) **>** [**card**](dir_2dfa3b55db09c289c0394a464581d568.md) **>** [**CARDFormat.c**](_c_a_r_d_format_8c.md)

[Go to the source code of this file](_c_a_r_d_format_8c_source.md)



* `#include <dolphin/card.h>`
* `#include <string.h>`
* `#include "../os/OSPrivate.h"`
* `#include "CARDPrivate.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDFormat**](#function-cardformat) ([**s32**](types_8h.md#typedef-s32) chan) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDFormatAsync**](#function-cardformatasync) ([**s32**](types_8h.md#typedef-s32) chan, [**CARDCallback**](card_8h.md#typedef-cardcallback) callback) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**FormatCallback**](#function-formatcallback) ([**s32**](types_8h.md#typedef-s32) chan, [**s32**](types_8h.md#typedef-s32) result) <br> |

























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**formatStep**](_c_a_r_d_format_8c.md#define-formatstep)  `mountStep`<br> |

## Public Functions Documentation




### function CARDFormat 

```C++
s32 CARDFormat (
    s32 chan
) 
```




<hr>



### function CARDFormatAsync 

```C++
s32 CARDFormatAsync (
    s32 chan,
    CARDCallback callback
) 
```




<hr>
## Public Static Functions Documentation




### function FormatCallback 

```C++
static void FormatCallback (
    s32 chan,
    s32 result
) 
```




<hr>
## Macro Definition Documentation





### define formatStep 

```C++
#define formatStep `mountStep`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/card/CARDFormat.c`

