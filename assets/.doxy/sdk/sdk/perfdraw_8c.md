

# File perfdraw.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**perf**](dir_87d972a54ee50900be33e0069b206896.md) **>** [**perfdraw.c**](perfdraw_8c.md)

[Go to the source code of this file](perfdraw_8c_source.md)



* `#include <dolphin/perf.h>`
* `#include "PERFPrivate.h"`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**GameDrawInit**](#variable-gamedrawinit)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**PERFNumEvents**](#variable-perfnumevents)  <br> |
|  [**Mtx**](mtx_8h.md#typedef-mtx) | [**mID**](#variable-mid)  <br> |
|  [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**pSave**](#variable-psave)  <br> |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**CPUPts**](#variable-cpupts)   = `/* multi line expression */`<br> |
|  [**GXColor**](_g_x_struct_8h.md#typedef-gxcolor) | [**DrawBWBarColor**](#variable-drawbwbarcolor)   = `{ 0x32, 0x32, 0x32, 0xC8 }`<br> |
|  [**GXColor**](_g_x_struct_8h.md#typedef-gxcolor) | [**DrawCPColor**](#variable-drawcpcolor)   = `{ 0xC8, 0x00, 0xC8, 0xC8 }`<br> |
|  [**GXColor**](_g_x_struct_8h.md#typedef-gxcolor) | [**DrawCPUCacheColor**](#variable-drawcpucachecolor)   = `{ 0x00, 0x96, 0x00, 0xC8 }`<br> |
|  [**GXColor**](_g_x_struct_8h.md#typedef-gxcolor) | [**DrawCPUColor**](#variable-drawcpucolor)   = `{ 0xFF, 0x19, 0x00, 0xC8 }`<br> |
|  [**GXColor**](_g_x_struct_8h.md#typedef-gxcolor) | [**DrawCPURDColor**](#variable-drawcpurdcolor)   = `{ 0xFF, 0xFF, 0x00, 0xC8 }`<br> |
|  [**GXColor**](_g_x_struct_8h.md#typedef-gxcolor) | [**DrawCPUWRColor**](#variable-drawcpuwrcolor)   = `{ 0x00, 0x64, 0x64, 0xC8 }`<br> |
|  [**GXColor**](_g_x_struct_8h.md#typedef-gxcolor) | [**DrawConnectColor**](#variable-drawconnectcolor)   = `{ 0x00, 0x00, 0x00, 0xC8 }`<br> |
|  [**GXColor**](_g_x_struct_8h.md#typedef-gxcolor) | [**DrawDSPColor**](#variable-drawdspcolor)   = `{ 0xC8, 0x00, 0x00, 0xC8 }`<br> |
|  [**GXColor**](_g_x_struct_8h.md#typedef-gxcolor) | [**DrawFIColor**](#variable-drawficolor)   = `{ 0xC8, 0x64, 0x64, 0xC8 }`<br> |
|  [**GXColor**](_g_x_struct_8h.md#typedef-gxcolor) | [**DrawFrameColor**](#variable-drawframecolor)   = `{ 0x19, 0x19, 0x19, 0xC8 }`<br> |
|  [**GXColor**](_g_x_struct_8h.md#typedef-gxcolor) | [**DrawFullColor**](#variable-drawfullcolor)   = `{ 0xFF, 0x00, 0xFF, 0xC8 }`<br> |
|  [**GXColor**](_g_x_struct_8h.md#typedef-gxcolor) | [**DrawGPColor**](#variable-drawgpcolor)   = `{ 0x00, 0x64, 0xFF, 0xC8 }`<br> |
|  [**GXColor**](_g_x_struct_8h.md#typedef-gxcolor) | [**DrawGPRASIDLEColor**](#variable-drawgprasidlecolor)   = `{ 0xC8, 0xC8, 0x00, 0xAA }`<br> |
|  [**GXColor**](_g_x_struct_8h.md#typedef-gxcolor) | [**DrawGPUBarColor**](#variable-drawgpubarcolor)   = `{ 0x5A, 0x00, 0x00, 0xAA }`<br> |
|  [**GXColor**](_g_x_struct_8h.md#typedef-gxcolor) | [**DrawGPXFIColor**](#variable-drawgpxficolor)   = `{ 0x00, 0xC8, 0x00, 0xAA }`<br> |
|  [**GXColor**](_g_x_struct_8h.md#typedef-gxcolor) | [**DrawGPXFOColor**](#variable-drawgpxfocolor)   = `{ 0x00, 0x00, 0xC8, 0xAA }`<br> |
|  [**GXColor**](_g_x_struct_8h.md#typedef-gxcolor) | [**DrawIOColor**](#variable-drawiocolor)   = `{ 0x96, 0x96, 0x32, 0xC8 }`<br> |
|  [**GXColor**](_g_x_struct_8h.md#typedef-gxcolor) | [**DrawIPCBarColor**](#variable-drawipcbarcolor)   = `{ 0x00, 0x00, 0x5A, 0xAA }`<br> |
|  [**GXColor**](_g_x_struct_8h.md#typedef-gxcolor) | [**DrawIPCColor**](#variable-drawipccolor)   = `{ 0xC8, 0x64, 0x00, 0xAA }`<br> |
|  [**GXColor**](_g_x_struct_8h.md#typedef-gxcolor) | [**DrawPEColor**](#variable-drawpecolor)   = `{ 0x00, 0x00, 0xC8, 0xC8 }`<br> |
|  [**GXColor**](_g_x_struct_8h.md#typedef-gxcolor) | [**DrawRFColor**](#variable-drawrfcolor)   = `{ 0x00, 0xFF, 0xFF, 0xC8 }`<br> |
|  [**GXColor**](_g_x_struct_8h.md#typedef-gxcolor) | [**DrawTCColor**](#variable-drawtccolor)   = `{ 0x00, 0xC8, 0x00, 0xC8 }`<br> |
|  [**GXColor**](_g_x_struct_8h.md#typedef-gxcolor) | [**DrawVIColor**](#variable-drawvicolor)   = `{ 0xFF, 0xFF, 0xFF, 0xC8 }`<br> |
|  [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**FramePts**](#variable-framepts)   = `/* multi line expression */`<br> |
|  [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GPPts**](#variable-gppts)   = `/* multi line expression */`<br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**bDrawBWBar**](#variable-bdrawbwbar)   = `1`<br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**bDrawBWBarKey**](#variable-bdrawbwbarkey)  <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**bDrawCPUBar**](#variable-bdrawcpubar)   = `1`<br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**bDrawRASBar**](#variable-bdrawrasbar)   = `1`<br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**bDrawXFBars**](#variable-bdrawxfbars)   = `1`<br> |
|  [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**lastx**](#variable-lastx)  <br> |
|  [**Mtx44**](mtx_8h.md#typedef-mtx44) | [**mProj**](#variable-mproj)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**COORD**](#function-coord) ([**u32**](types_8h.md#typedef-u32) a) <br> |
|  [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**HEIGHT**](#function-height) ([**u32**](types_8h.md#typedef-u32) a, [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) f) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFDumpScreen**](#function-perfdumpscreen) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFPostDraw**](#function-perfpostdraw) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFPreDraw**](#function-perfpredraw) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFSetDrawBWBar**](#function-perfsetdrawbwbar) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) tf) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFSetDrawBWBarKey**](#function-perfsetdrawbwbarkey) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) tf) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFSetDrawCPUBar**](#function-perfsetdrawcpubar) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) tf) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFSetDrawRASBar**](#function-perfsetdrawrasbar) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) tf) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFSetDrawXFBars**](#function-perfsetdrawxfbars) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) tf) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFToggleDrawBWBar**](#function-perftoggledrawbwbar) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFToggleDrawBWBarKey**](#function-perftoggledrawbwbarkey) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFToggleDrawCPUBar**](#function-perftoggledrawcpubar) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFToggleDrawRASBar**](#function-perftoggledrawrasbar) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**PERFToggleDrawXFBars**](#function-perftoggledrawxfbars) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_PERFDrawInit**](#function-__perfdrawinit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)() id) <br> |
|   | [**\_\_declspec**](#function-__declspec) ([**weak**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DrawBWBar**](#function-drawbwbar) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**PerfSample**](struct_perf_sample.md) \* s) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DrawKey**](#function-drawkey) () <br> |

























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**DRAW\_RECT**](perfdraw_8c.md#define-draw_rect) (x1, x2, y1, y2, color) `/* multi line expression */`<br> |

## Public Attributes Documentation




### variable GameDrawInit 

```C++
void(* GameDrawInit) ();
```




<hr>



### variable PERFNumEvents 

```C++
u32 PERFNumEvents;
```




<hr>



### variable mID 

```C++
Mtx mID;
```




<hr>



### variable pSave 

```C++
float pSave[7];
```




<hr>
## Public Static Attributes Documentation




### variable CPUPts 

```C++
float CPUPts[4];
```




<hr>



### variable DrawBWBarColor 

```C++
GXColor DrawBWBarColor;
```




<hr>



### variable DrawCPColor 

```C++
GXColor DrawCPColor;
```




<hr>



### variable DrawCPUCacheColor 

```C++
GXColor DrawCPUCacheColor;
```




<hr>



### variable DrawCPUColor 

```C++
GXColor DrawCPUColor;
```




<hr>



### variable DrawCPURDColor 

```C++
GXColor DrawCPURDColor;
```




<hr>



### variable DrawCPUWRColor 

```C++
GXColor DrawCPUWRColor;
```




<hr>



### variable DrawConnectColor 

```C++
GXColor DrawConnectColor;
```




<hr>



### variable DrawDSPColor 

```C++
GXColor DrawDSPColor;
```




<hr>



### variable DrawFIColor 

```C++
GXColor DrawFIColor;
```




<hr>



### variable DrawFrameColor 

```C++
GXColor DrawFrameColor;
```




<hr>



### variable DrawFullColor 

```C++
GXColor DrawFullColor;
```




<hr>



### variable DrawGPColor 

```C++
GXColor DrawGPColor;
```




<hr>



### variable DrawGPRASIDLEColor 

```C++
GXColor DrawGPRASIDLEColor;
```




<hr>



### variable DrawGPUBarColor 

```C++
GXColor DrawGPUBarColor;
```




<hr>



### variable DrawGPXFIColor 

```C++
GXColor DrawGPXFIColor;
```




<hr>



### variable DrawGPXFOColor 

```C++
GXColor DrawGPXFOColor;
```




<hr>



### variable DrawIOColor 

```C++
GXColor DrawIOColor;
```




<hr>



### variable DrawIPCBarColor 

```C++
GXColor DrawIPCBarColor;
```




<hr>



### variable DrawIPCColor 

```C++
GXColor DrawIPCColor;
```




<hr>



### variable DrawPEColor 

```C++
GXColor DrawPEColor;
```




<hr>



### variable DrawRFColor 

```C++
GXColor DrawRFColor;
```




<hr>



### variable DrawTCColor 

```C++
GXColor DrawTCColor;
```




<hr>



### variable DrawVIColor 

```C++
GXColor DrawVIColor;
```




<hr>



### variable FramePts 

```C++
float FramePts[28];
```




<hr>



### variable GPPts 

```C++
float GPPts[4];
```




<hr>



### variable bDrawBWBar 

```C++
int bDrawBWBar;
```




<hr>



### variable bDrawBWBarKey 

```C++
int bDrawBWBarKey;
```




<hr>



### variable bDrawCPUBar 

```C++
int bDrawCPUBar;
```




<hr>



### variable bDrawRASBar 

```C++
int bDrawRASBar;
```




<hr>



### variable bDrawXFBars 

```C++
int bDrawXFBars;
```




<hr>



### variable lastx 

```C++
float lastx;
```




<hr>



### variable mProj 

```C++
Mtx44 mProj;
```




<hr>
## Public Functions Documentation




### function COORD 

```C++
inline float COORD (
    u32 a
) 
```




<hr>



### function HEIGHT 

```C++
inline float HEIGHT (
    u32 a,
    float f
) 
```




<hr>



### function PERFDumpScreen 

```C++
void PERFDumpScreen () 
```




<hr>



### function PERFPostDraw 

```C++
void PERFPostDraw () 
```




<hr>



### function PERFPreDraw 

```C++
void PERFPreDraw () 
```




<hr>



### function PERFSetDrawBWBar 

```C++
void PERFSetDrawBWBar (
    int tf
) 
```




<hr>



### function PERFSetDrawBWBarKey 

```C++
void PERFSetDrawBWBarKey (
    int tf
) 
```




<hr>



### function PERFSetDrawCPUBar 

```C++
void PERFSetDrawCPUBar (
    int tf
) 
```




<hr>



### function PERFSetDrawRASBar 

```C++
void PERFSetDrawRASBar (
    int tf
) 
```




<hr>



### function PERFSetDrawXFBars 

```C++
void PERFSetDrawXFBars (
    int tf
) 
```




<hr>



### function PERFToggleDrawBWBar 

```C++
void PERFToggleDrawBWBar () 
```




<hr>



### function PERFToggleDrawBWBarKey 

```C++
void PERFToggleDrawBWBarKey () 
```




<hr>



### function PERFToggleDrawCPUBar 

```C++
void PERFToggleDrawCPUBar () 
```




<hr>



### function PERFToggleDrawRASBar 

```C++
void PERFToggleDrawRASBar () 
```




<hr>



### function PERFToggleDrawXFBars 

```C++
void PERFToggleDrawXFBars () 
```




<hr>



### function \_\_PERFDrawInit 

```C++
void __PERFDrawInit (
    void (*)() id
) 
```




<hr>



### function \_\_declspec 

```C++
__declspec (
    weak
) 
```




<hr>
## Public Static Functions Documentation




### function DrawBWBar 

```C++
static void DrawBWBar (
    struct  PerfSample * s
) 
```




<hr>



### function DrawKey 

```C++
static void DrawKey () 
```




<hr>
## Macro Definition Documentation





### define DRAW\_RECT 

```C++
#define DRAW_RECT (
    x1,
    x2,
    y1,
    y2,
    color
) `/* multi line expression */`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/perf/perfdraw.c`

