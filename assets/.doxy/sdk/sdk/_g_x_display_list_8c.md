

# File GXDisplayList.c



[**FileList**](files.md) **>** [**dolphin**](dir_5daac82a3cf194997369e9388ff34711.md) **>** [**gx**](dir_58a4740725722629c39c924a9f4030b8.md) **>** [**GXDisplayList.c**](_g_x_display_list_8c.md)

[Go to the source code of this file](_g_x_display_list_8c_source.md)



* `#include <dolphin/gx.h>`
* `#include <dolphin/os.h>`
* `#include <string.h>`
* `#include "GXPrivate.h"`























## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**\_\_GXFifoObj**](struct_____g_x_fifo_obj.md) | [**DisplayListFifo**](#variable-displaylistfifo)  <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**\_\_GXFifoObj**](struct_____g_x_fifo_obj.md) \* | [**OldCPUFifo**](#variable-oldcpufifo)  <br> |
|  [**GXData**](_g_x_private_8h.md#typedef-gxdata) | [**\_\_savedGXdata**](#variable-__savedgxdata)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXBeginDisplayList**](#function-gxbegindisplaylist) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* list, [**u32**](types_8h.md#typedef-u32) size) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXCallDisplayList**](#function-gxcalldisplaylist) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* list, [**u32**](types_8h.md#typedef-u32) nbytes) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**GXEndDisplayList**](#function-gxenddisplaylist) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |




























## Public Static Attributes Documentation




### variable DisplayListFifo 

```C++
__GXFifoObj DisplayListFifo;
```




<hr>



### variable OldCPUFifo 

```C++
volatile __GXFifoObj* OldCPUFifo;
```




<hr>



### variable \_\_savedGXdata 

```C++
GXData __savedGXdata;
```




<hr>
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
The documentation for this class was generated from the following file `DolphinSDK/src/dolphin/gx/GXDisplayList.c`

