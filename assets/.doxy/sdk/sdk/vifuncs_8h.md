

# File vifuncs.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**vi**](dir_c06ed8b441bec63d463886439e7a1449.md) **>** [**vifuncs.h**](vifuncs_8h.md)

[Go to the source code of this file](vifuncs_8h_source.md)



* `#include <types.h>`
* `#include <dolphin/gx/GXStruct.h>`
* `#include <dolphin/vi/vitypes.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**VIConfigure**](#function-viconfigure) ([**GXRenderModeObj**](_g_x_struct_8h.md#typedef-gxrendermodeobj) \* rm) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**VIConfigurePan**](#function-viconfigurepan) ([**u16**](types_8h.md#typedef-u16) xOrg, [**u16**](types_8h.md#typedef-u16) yOrg, [**u16**](types_8h.md#typedef-u16) width, [**u16**](types_8h.md#typedef-u16) height) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**VIFlush**](#function-viflush) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**VIGetCurrentLine**](#function-vigetcurrentline) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u16**](types_8h.md#typedef-u16) | [**VIGetDTVStatus**](#function-vigetdtvstatus) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**VIGetNextField**](#function-vigetnextfield) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**VIGetRetraceCount**](#function-vigetretracecount) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**VIGetTvFormat**](#function-vigettvformat) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**VIInit**](#function-viinit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**VISet3D**](#function-viset3d) ([**BOOL**](types_8h.md#typedef-bool) threeD) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**VISetBlack**](#function-visetblack) ([**BOOL**](types_8h.md#typedef-bool) black) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**VISetNextFrameBuffer**](#function-visetnextframebuffer) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* fb) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**VISetNextRightFrameBuffer**](#function-visetnextrightframebuffer) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* fb) <br> |
|  [**VIRetraceCallback**](vitypes_8h.md#typedef-viretracecallback) | [**VISetPostRetraceCallback**](#function-visetpostretracecallback) ([**VIRetraceCallback**](vitypes_8h.md#typedef-viretracecallback) cb) <br> |
|  [**VIRetraceCallback**](vitypes_8h.md#typedef-viretracecallback) | [**VISetPreRetraceCallback**](#function-visetpreretracecallback) ([**VIRetraceCallback**](vitypes_8h.md#typedef-viretracecallback) cb) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**VIWaitForRetrace**](#function-viwaitforretrace) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |




























## Public Functions Documentation




### function VIConfigure 

```C++
void VIConfigure (
    GXRenderModeObj * rm
) 
```




<hr>



### function VIConfigurePan 

```C++
void VIConfigurePan (
    u16 xOrg,
    u16 yOrg,
    u16 width,
    u16 height
) 
```




<hr>



### function VIFlush 

```C++
void VIFlush (
    void
) 
```




<hr>



### function VIGetCurrentLine 

```C++
u32 VIGetCurrentLine (
    void
) 
```




<hr>



### function VIGetDTVStatus 

```C++
u16 VIGetDTVStatus (
    void
) 
```




<hr>



### function VIGetNextField 

```C++
u32 VIGetNextField (
    void
) 
```




<hr>



### function VIGetRetraceCount 

```C++
u32 VIGetRetraceCount (
    void
) 
```




<hr>



### function VIGetTvFormat 

```C++
u32 VIGetTvFormat (
    void
) 
```




<hr>



### function VIInit 

```C++
void VIInit (
    void
) 
```




<hr>



### function VISet3D 

```C++
void VISet3D (
    BOOL threeD
) 
```




<hr>



### function VISetBlack 

```C++
void VISetBlack (
    BOOL black
) 
```




<hr>



### function VISetNextFrameBuffer 

```C++
void VISetNextFrameBuffer (
    void * fb
) 
```




<hr>



### function VISetNextRightFrameBuffer 

```C++
void VISetNextRightFrameBuffer (
    void * fb
) 
```




<hr>



### function VISetPostRetraceCallback 

```C++
VIRetraceCallback VISetPostRetraceCallback (
    VIRetraceCallback cb
) 
```




<hr>



### function VISetPreRetraceCallback 

```C++
VIRetraceCallback VISetPreRetraceCallback (
    VIRetraceCallback cb
) 
```




<hr>



### function VIWaitForRetrace 

```C++
void VIWaitForRetrace (
    void
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/vi/vifuncs.h`

