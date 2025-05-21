

# File GXInit.c



[**FileList**](files.md) **>** [**dolphin**](dir_5daac82a3cf194997369e9388ff34711.md) **>** [**gx**](dir_58a4740725722629c39c924a9f4030b8.md) **>** [**GXInit.c**](_g_x_init_8c.md)

[Go to the source code of this file](_g_x_init_8c_source.md)



* `#include <dolphin/base/PPCArch.h>`
* `#include <dolphin/gx.h>`
* `#include <dolphin/os.h>`
* `#include <dolphin/vi.h>`
* `#include <string.h>`
* `#include "GXPrivate.h"`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**GXFifoObj**](struct_g_x_fifo_obj.md) | [**FifoObj**](#variable-fifoobj)  <br> |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**\_\_GXData\_struct**](struct_____g_x_data__struct.md) \* | [**\_\_GXData**](#variable-__gxdata)   = `&[**gxData**](_g_x_init_8c.md#variable-gxdata)`<br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**\_\_cpReg**](#variable-__cpreg)  <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**\_\_memReg**](#variable-__memreg)  <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**\_\_peReg**](#variable-__pereg)  <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**\_\_piReg**](#variable-__pireg)  <br> |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**\_\_GXData\_struct**](struct_____g_x_data__struct.md) | [**gxData**](#variable-gxdata)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**GXFifoObj**](struct_g_x_fifo_obj.md) \* | [**GXInit**](#function-gxinit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* base, [**u32**](types_8h.md#typedef-u32) size) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**BOOL**](types_8h.md#typedef-bool) | [**IsWriteGatherBufferEmpty**](#function-iswritegatherbufferempty) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DisableWriteGatherPipe**](#function-disablewritegatherpipe) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**EnableWriteGatherPipe**](#function-enablewritegatherpipe) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**GXTexRegion**](_g_x_struct_8h.md#typedef-gxtexregion) \* | [**\_\_GXDefaultTexRegionCallback**](#function-__gxdefaulttexregioncallback) ([**GXTexObj**](_g_x_struct_8h.md#typedef-gxtexobj) \* t\_obj, [**GXTexMapID**](_g_x_enum_8h.md#typedef-gxtexmapid) unused) <br> |
|  [**GXTlutRegion**](_g_x_struct_8h.md#typedef-gxtlutregion) \* | [**\_\_GXDefaultTlutRegionCallback**](#function-__gxdefaulttlutregioncallback) ([**u32**](types_8h.md#typedef-u32) idx) <br> |


























## Public Attributes Documentation




### variable FifoObj 

```C++
GXFifoObj FifoObj;
```




<hr>



### variable \_\_GXData 

```C++
struct __GXData_struct* __GXData;
```




<hr>



### variable \_\_cpReg 

```C++
void* __cpReg;
```




<hr>



### variable \_\_memReg 

```C++
void* __memReg;
```




<hr>



### variable \_\_peReg 

```C++
void* __peReg;
```




<hr>



### variable \_\_piReg 

```C++
void* __piReg;
```




<hr>
## Public Static Attributes Documentation




### variable gxData 

```C++
struct __GXData_struct gxData;
```




<hr>
## Public Functions Documentation




### function GXInit 

```C++
GXFifoObj * GXInit (
    void * base,
    u32 size
) 
```




<hr>



### function IsWriteGatherBufferEmpty 

```C++
asm  BOOL IsWriteGatherBufferEmpty (
    void
) 
```




<hr>
## Public Static Functions Documentation




### function DisableWriteGatherPipe 

```C++
static void DisableWriteGatherPipe (
    void
) 
```




<hr>



### function EnableWriteGatherPipe 

```C++
static void EnableWriteGatherPipe (
    void
) 
```




<hr>



### function \_\_GXDefaultTexRegionCallback 

```C++
static GXTexRegion * __GXDefaultTexRegionCallback (
    GXTexObj * t_obj,
    GXTexMapID unused
) 
```




<hr>



### function \_\_GXDefaultTlutRegionCallback 

```C++
static GXTlutRegion * __GXDefaultTlutRegionCallback (
    u32 idx
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `DolphinSDK/src/dolphin/gx/GXInit.c`

