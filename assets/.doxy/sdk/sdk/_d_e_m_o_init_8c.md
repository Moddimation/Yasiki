

# File DEMOInit.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**demo**](dir_12b9b9f3614a19f67fa121459aa56b48.md) **>** [**DEMOInit.c**](_d_e_m_o_init_8c.md)

[Go to the source code of this file](_d_e_m_o_init_8c_source.md)



* `#include <dolphin/demo.h>`
* `#include <dolphin/gx.h>`
* `#include <dolphin/pad.h>`
* `#include <dolphin/vi.h>`
* `#include <dolphin.h>`
* `#include "DEMOPrivate.h"`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**DemoCurrentBuffer**](#variable-democurrentbuffer)  <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**DemoFrameBuffer1**](#variable-demoframebuffer1)  <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**DemoFrameBuffer2**](#variable-demoframebuffer2)  <br> |
|  [**u16**](types_8h.md#typedef-u16) | [**DemoStatEnable**](#variable-demostatenable)  <br> |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**BypassWorkaround**](#variable-bypassworkaround)  <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**DefaultFifo**](#variable-defaultfifo)   = `[**NULL**](types_8h.md#define-null)`<br> |
|  [**GXFifoObj**](struct_g_x_fifo_obj.md) \* | [**DefaultFifoObj**](#variable-defaultfifoobj)   = `[**NULL**](types_8h.md#define-null)`<br> |
|  [**u16**](types_8h.md#typedef-u16) | [**DemoFirstFrame**](#variable-demofirstframe)   = `1`<br> |
|  [**u32**](types_8h.md#typedef-u32) | [**FrameCount**](#variable-framecount)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**FrameMissThreshold**](#variable-framemissthreshold)  <br> |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**\_GXRenderModeObj**](struct___g_x_render_mode_obj.md) \* | [**rmode**](#variable-rmode)  <br> |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**\_GXRenderModeObj**](struct___g_x_render_mode_obj.md) | [**rmodeobj**](#variable-rmodeobj)  <br> |














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


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**LoadMemInfo**](#function-loadmeminfo) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_BypassDoneRender**](#function-__bypassdonerender) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_BypassRetraceCallback**](#function-__bypassretracecallback) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DEMOInitForEmu**](#function-__demoinitforemu) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DEMOInitGX**](#function-__demoinitgx) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DEMOInitMem**](#function-__demoinitmem) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DEMOInitRenderMode**](#function-__demoinitrendermode) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**\_GXRenderModeObj**](struct___g_x_render_mode_obj.md) \* mode) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DEMOInitVI**](#function-__demoinitvi) () <br> |


























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



### variable DemoStatEnable 

```C++
u16 DemoStatEnable;
```




<hr>
## Public Static Attributes Documentation




### variable BypassWorkaround 

```C++
int BypassWorkaround;
```




<hr>



### variable DefaultFifo 

```C++
void* DefaultFifo;
```




<hr>



### variable DefaultFifoObj 

```C++
GXFifoObj* DefaultFifoObj;
```




<hr>



### variable DemoFirstFrame 

```C++
u16 DemoFirstFrame;
```




<hr>



### variable FrameCount 

```C++
u32 FrameCount;
```




<hr>



### variable FrameMissThreshold 

```C++
u32 FrameMissThreshold;
```




<hr>



### variable rmode 

```C++
struct _GXRenderModeObj* rmode;
```




<hr>



### variable rmodeobj 

```C++
struct _GXRenderModeObj rmodeobj;
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
## Public Static Functions Documentation




### function LoadMemInfo 

```C++
static void LoadMemInfo () 
```




<hr>



### function \_\_BypassDoneRender 

```C++
static void __BypassDoneRender () 
```




<hr>



### function \_\_BypassRetraceCallback 

```C++
static void __BypassRetraceCallback () 
```




<hr>



### function \_\_DEMOInitForEmu 

```C++
static void __DEMOInitForEmu () 
```




<hr>



### function \_\_DEMOInitGX 

```C++
static void __DEMOInitGX () 
```




<hr>



### function \_\_DEMOInitMem 

```C++
static void __DEMOInitMem () 
```




<hr>



### function \_\_DEMOInitRenderMode 

```C++
static void __DEMOInitRenderMode (
    struct  _GXRenderModeObj * mode
) 
```




<hr>



### function \_\_DEMOInitVI 

```C++
static void __DEMOInitVI () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/demo/DEMOInit.c`

