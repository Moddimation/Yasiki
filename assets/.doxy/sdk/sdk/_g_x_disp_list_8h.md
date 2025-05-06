

# File GXDispList.h



[**FileList**](files.md) **>** [**dolphin**](dir_8d73ddf10613ffd25a966cd68a313b8d.md) **>** [**gx**](dir_049675cf3b51aca8087b2c87edff05c3.md) **>** [**GXDispList.h**](_g_x_disp_list_8h.md)

[Go to the source code of this file](_g_x_disp_list_8h_source.md)



* `#include <types.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXBeginDisplayList**](#function-gxbegindisplaylist) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* list, [**u32**](types_8h.md#typedef-u32) size) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXCallDisplayList**](#function-gxcalldisplaylist) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* list, [**u32**](types_8h.md#typedef-u32) nbytes) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**GXEndDisplayList**](#function-gxenddisplaylist) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |




























## Public Functions Documentation




### function GXBeginDisplayList 

```C++
void GXBeginDisplayList (
    void * list,
    u32 size
) 
```




<hr>



### function GXCallDisplayList 

```C++
void GXCallDisplayList (
    void * list,
    u32 nbytes
) 
```




<hr>



### function GXEndDisplayList 

```C++
u32 GXEndDisplayList (
    void
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `SDK/include/dolphin/gx/GXDispList.h`

