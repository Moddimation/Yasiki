

# File DEMOInit.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**demo**](dir_331bf99e07843061bc97f5d482e7f04d.md) **>** [**DEMOInit.h**](_d_e_m_o_init_8h.md)

[Go to the source code of this file](_d_e_m_o_init_8h_source.md)



* `#include <dolphin/gx.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**DemoCurrentBuffer**](#variable-democurrentbuffer)  <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**DemoFrameBuffer1**](#variable-demoframebuffer1)  <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**DemoFrameBuffer2**](#variable-demoframebuffer2)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOBeforeRender**](#function-demobeforerender) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMODoneRender**](#function-demodonerender) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOEnableBypassWorkaround**](#function-demoenablebypassworkaround) ([**u32**](types_8h.md#typedef-u32) timeoutFrames) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**DEMOGetCurrentBuffer**](#function-demogetcurrentbuffer) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**\_GXRenderModeObj**](struct___g_x_render_mode_obj.md) \* | [**DEMOGetRenderModeObj**](#function-demogetrendermodeobj) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOInit**](#function-demoinit) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**\_GXRenderModeObj**](struct___g_x_render_mode_obj.md) \* mode) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOReInit**](#function-demoreinit) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**\_GXRenderModeObj**](struct___g_x_render_mode_obj.md) \* mode) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOSetTevColorIn**](#function-demosettevcolorin) ([**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**\_GXTevStageID**](_g_x_enum_8h.md#enum-_gxtevstageid) stage, [**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**\_GXTevColorArg**](_g_x_enum_8h.md#enum-_gxtevcolorarg) a, [**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**\_GXTevColorArg**](_g_x_enum_8h.md#enum-_gxtevcolorarg) b, [**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**\_GXTevColorArg**](_g_x_enum_8h.md#enum-_gxtevcolorarg) c, [**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**\_GXTevColorArg**](_g_x_enum_8h.md#enum-_gxtevcolorarg) d) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOSetTevOp**](#function-demosettevop) ([**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**\_GXTevStageID**](_g_x_enum_8h.md#enum-_gxtevstageid) id, [**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**\_GXTevMode**](_g_x_enum_8h.md#enum-_gxtevmode) mode) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOSwapBuffers**](#function-demoswapbuffers) () <br> |




























## Public Attributes Documentation




### variable DemoCurrentBuffer 

```C++
void* DemoCurrentBuffer;
```




<hr>



### variable DemoFrameBuffer1 

```C++
void* DemoFrameBuffer1;
```




<hr>



### variable DemoFrameBuffer2 

```C++
void* DemoFrameBuffer2;
```




<hr>
## Public Functions Documentation




### function DEMOBeforeRender 

```C++
void DEMOBeforeRender () 
```




<hr>



### function DEMODoneRender 

```C++
void DEMODoneRender () 
```




<hr>



### function DEMOEnableBypassWorkaround 

```C++
void DEMOEnableBypassWorkaround (
    u32 timeoutFrames
) 
```




<hr>



### function DEMOGetCurrentBuffer 

```C++
u32 DEMOGetCurrentBuffer (
    void
) 
```




<hr>



### function DEMOGetRenderModeObj 

```C++
struct  _GXRenderModeObj * DEMOGetRenderModeObj () 
```




<hr>



### function DEMOInit 

```C++
void DEMOInit (
    struct  _GXRenderModeObj * mode
) 
```




<hr>



### function DEMOReInit 

```C++
void DEMOReInit (
    struct  _GXRenderModeObj * mode
) 
```




<hr>



### function DEMOSetTevColorIn 

```C++
void DEMOSetTevColorIn (
    enum  _GXTevStageID stage,
    enum  _GXTevColorArg a,
    enum  _GXTevColorArg b,
    enum  _GXTevColorArg c,
    enum  _GXTevColorArg d
) 
```




<hr>



### function DEMOSetTevOp 

```C++
void DEMOSetTevOp (
    enum  _GXTevStageID id,
    enum  _GXTevMode mode
) 
```




<hr>



### function DEMOSwapBuffers 

```C++
void DEMOSwapBuffers () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/demo/DEMOInit.h`

