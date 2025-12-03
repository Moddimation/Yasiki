

# File OSLC.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**os**](dir_2e13e6cf1d2e2aa91cbc210fef9f68a3.md) **>** [**OSLC.h**](_o_s_l_c_8h.md)

[Go to the source code of this file](_o_s_l_c_8h_source.md)



* `#include <types.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**LCAlloc**](#function-lcalloc) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* addr, [**u32**](types_8h.md#typedef-u32) nBytes) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**LCAllocNoInvalidate**](#function-lcallocnoinvalidate) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* addr, [**u32**](types_8h.md#typedef-u32) nBytes) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**LCAllocOneTag**](#function-lcalloconetag) ([**BOOL**](types_8h.md#typedef-bool) invalidate, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* tag) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**LCAllocTags**](#function-lcalloctags) ([**BOOL**](types_8h.md#typedef-bool) invalidate, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* startTag, [**u32**](types_8h.md#typedef-u32) numBlocks) <br> |




























## Public Functions Documentation




### function LCAlloc 

```C++
void LCAlloc (
    void * addr,
    u32 nBytes
) 
```




<hr>



### function LCAllocNoInvalidate 

```C++
void LCAllocNoInvalidate (
    void * addr,
    u32 nBytes
) 
```




<hr>



### function LCAllocOneTag 

```C++
void LCAllocOneTag (
    BOOL invalidate,
    void * tag
) 
```




<hr>



### function LCAllocTags 

```C++
void LCAllocTags (
    BOOL invalidate,
    void * startTag,
    u32 numBlocks
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/os/OSLC.h`

