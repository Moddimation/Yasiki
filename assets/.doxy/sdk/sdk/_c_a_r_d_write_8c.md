

# File CARDWrite.c



[**FileList**](files.md) **>** [**card**](dir_490d43cfb0384f3832c2161c32949c06.md) **>** [**CARDWrite.c**](_c_a_r_d_write_8c.md)

[Go to the source code of this file](_c_a_r_d_write_8c_source.md)



* `#include <dolphin/card.h>`
* `#include <dolphin.h>`
* `#include "CARDPrivate.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDWrite**](#function-cardwrite) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**CARDFileInfo**](struct_c_a_r_d_file_info.md) \* fileInfo, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* buf, [**s32**](types_8h.md#typedef-s32) length, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) offset) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDWriteAsync**](#function-cardwriteasync) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**CARDFileInfo**](struct_c_a_r_d_file_info.md) \* fileInfo, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* buf, [**s32**](types_8h.md#typedef-s32) length, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) offset, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step), [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) callback) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**EraseCallback**](#function-erasecallback) ([**s32**](types_8h.md#typedef-s32) chan, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) result) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**WriteCallback**](#function-writecallback) ([**s32**](types_8h.md#typedef-s32) chan, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) result) <br> |

























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**OFFSET**](_c_a_r_d_write_8c.md#define-offset) (addr, align) `((([**u32**](types_8h.md#typedef-u32))(addr) & (([**align**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) - 1)))`<br> |

## Public Functions Documentation




### function CARDWrite 

```C++
s32 CARDWrite (
    struct  CARDFileInfo * fileInfo,
    void * buf,
    s32 length,
    long offset
) 
```




<hr>



### function CARDWriteAsync 

```C++
s32 CARDWriteAsync (
    struct  CARDFileInfo * fileInfo,
    void * buf,
    s32 length,
    long offset,
    void (*)( long , long ) callback
) 
```




<hr>
## Public Static Functions Documentation




### function EraseCallback 

```C++
static void EraseCallback (
    s32 chan,
    long result
) 
```




<hr>



### function WriteCallback 

```C++
static void WriteCallback (
    s32 chan,
    long result
) 
```




<hr>
## Macro Definition Documentation





### define OFFSET 

```C++
#define OFFSET (
    addr,
    align
) `((( u32 )(addr) & (( align ) - 1)))`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `SDK/src/dolphin/card/CARDWrite.c`

