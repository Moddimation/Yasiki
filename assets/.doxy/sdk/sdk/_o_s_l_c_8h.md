

# File OSLC.h



[**FileList**](files.md) **>** [**dolphin**](dir_f645f2e507aca82374da44bd9d3eb5ac.md) **>** [**os**](dir_c13ebdd3af764081039ea1aa77ad78f7.md) **>** [**OSLC.h**](_o_s_l_c_8h.md)

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
The documentation for this class was generated from the following file `DolphinSDK/include/dolphin/os/OSLC.h`

