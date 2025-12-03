

# File vi.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**vi**](dir_6e608df437d91df3e0aaf7178791d22d.md) **>** [**vi.c**](vi_8c.md)

[Go to the source code of this file](vi_8c_source.md)



* `#include <dolphin/gx.h>`
* `#include <dolphin/os.h>`
* `#include <dolphin/vi.h>`
* `#include "../gx/GXPrivate.h"`
* `#include "../os/OSPrivate.h"`
* `#include "vi_private.h"`





































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
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_VIGetAdjustingValues**](#function-__vigetadjustingvalues) ([**s16**](types_8h.md#typedef-s16) \* x, [**s16**](types_8h.md#typedef-s16) \* y) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_VIInit**](#function-__viinit) ([**VITVMode**](vitypes_8h.md#enum-vitvmode) mode) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_VISetAdjustingValues**](#function-__visetadjustingvalues) ([**s16**](types_8h.md#typedef-s16) x, [**s16**](types_8h.md#typedef-s16) y) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AdjustPosition**](#function-adjustposition) ([**u16**](types_8h.md#typedef-u16) acv) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ImportAdjustingValues**](#function-importadjustingvalues) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**VISetRegs**](#function-visetregs) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_VIRetraceHandler**](#function-__viretracehandler) ([**\_\_OSInterrupt**](_o_s_interrupt_8h.md#typedef-__osinterrupt) interrupt, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**calcFbbs**](#function-calcfbbs) ([**u32**](types_8h.md#typedef-u32) bufAddr, [**u16**](types_8h.md#typedef-u16) panPosX, [**u16**](types_8h.md#typedef-u16) panPosY, [**u8**](types_8h.md#typedef-u8) wordPerLine, [**VIXFBMode**](vitypes_8h.md#enum-vixfbmode) xfbMode, [**u16**](types_8h.md#typedef-u16) dispPosY, [**u32**](types_8h.md#typedef-u32) \* tfbb, [**u32**](types_8h.md#typedef-u32) \* bfbb) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**cntlzd**](#function-cntlzd) ([**u64**](types_8h.md#typedef-u64) bit) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**getCurrentFieldEvenOdd**](#function-getcurrentfieldevenodd) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**getCurrentHalfLine**](#function-getcurrenthalfline) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**getEncoderType**](#function-getencodertype) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**VITiming**](struct_v_i_timing.md) \* | [**getTiming**](#function-gettiming) ([**VITVMode**](vitypes_8h.md#enum-vitvmode) mode) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**setBBIntervalRegs**](#function-setbbintervalregs) ([**VITiming**](struct_v_i_timing.md) \* tm) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**setFbbRegs**](#function-setfbbregs) ([**SomeVIStruct**](struct_some_v_i_struct.md) \* HorVer, [**u32**](types_8h.md#typedef-u32) \* tfbb, [**u32**](types_8h.md#typedef-u32) \* bfbb, [**u32**](types_8h.md#typedef-u32) \* rtfbb, [**u32**](types_8h.md#typedef-u32) \* rbfbb) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**setHorizontalRegs**](#function-sethorizontalregs) ([**VITiming**](struct_v_i_timing.md) \* tm, [**u16**](types_8h.md#typedef-u16) dispPosX, [**u16**](types_8h.md#typedef-u16) dispSizeX) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**setInterruptRegs**](#function-setinterruptregs) ([**VITiming**](struct_v_i_timing.md) \* tm) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**setPicConfig**](#function-setpicconfig) ([**u16**](types_8h.md#typedef-u16) fbSizeX, [**VIXFBMode**](vitypes_8h.md#enum-vixfbmode) xfbMode, [**u16**](types_8h.md#typedef-u16) panPosX, [**u16**](types_8h.md#typedef-u16) panSizeX, [**u8**](types_8h.md#typedef-u8) \* wordPerLine, [**u8**](types_8h.md#typedef-u8) \* std, [**u8**](types_8h.md#typedef-u8) \* wpl, [**u8**](types_8h.md#typedef-u8) \* xof) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**setScalingRegs**](#function-setscalingregs) ([**u16**](types_8h.md#typedef-u16) panSizeX, [**u16**](types_8h.md#typedef-u16) dispSizeX, [**BOOL**](types_8h.md#typedef-bool) threeD) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**setVerticalRegs**](#function-setverticalregs) ([**u16**](types_8h.md#typedef-u16) dispPosY, [**u16**](types_8h.md#typedef-u16) dispSizeY, [**u8**](types_8h.md#typedef-u8) equ, [**u16**](types_8h.md#typedef-u16) acv, [**u16**](types_8h.md#typedef-u16) prbOdd, [**u16**](types_8h.md#typedef-u16) prbEven, [**u16**](types_8h.md#typedef-u16) psbOdd, [**u16**](types_8h.md#typedef-u16) psbEven, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) black) <br> |

























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**CLAMP**](vi_8c.md#define-clamp) (val, min, max) `((val) &gt; (max) ? (max) : (val) &lt; (min) ? (min) : (val))`<br> |
| define  | [**MAX**](vi_8c.md#define-max) (a, b) `(((a) &gt; (b)) ? (a) : (b))`<br> |
| define  | [**MIN**](vi_8c.md#define-min) (a, b) `(((a) &lt; (b)) ? (a) : (b))`<br> |

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



### function \_\_VIGetAdjustingValues 

```C++
void __VIGetAdjustingValues (
    s16 * x,
    s16 * y
) 
```




<hr>



### function \_\_VIInit 

```C++
void __VIInit (
    VITVMode mode
) 
```




<hr>



### function \_\_VISetAdjustingValues 

```C++
void __VISetAdjustingValues (
    s16 x,
    s16 y
) 
```




<hr>
## Public Static Functions Documentation




### function AdjustPosition 

```C++
static void AdjustPosition (
    u16 acv
) 
```




<hr>



### function ImportAdjustingValues 

```C++
static void ImportAdjustingValues (
    void
) 
```




<hr>



### function VISetRegs 

```C++
static BOOL VISetRegs (
    void
) 
```




<hr>



### function \_\_VIRetraceHandler 

```C++
static void __VIRetraceHandler (
    __OSInterrupt interrupt,
    OSContext * context
) 
```




<hr>



### function calcFbbs 

```C++
static void calcFbbs (
    u32 bufAddr,
    u16 panPosX,
    u16 panPosY,
    u8 wordPerLine,
    VIXFBMode xfbMode,
    u16 dispPosY,
    u32 * tfbb,
    u32 * bfbb
) 
```




<hr>



### function cntlzd 

```C++
static s32 cntlzd (
    u64 bit
) 
```




<hr>



### function getCurrentFieldEvenOdd 

```C++
static u32 getCurrentFieldEvenOdd (
    void
) 
```




<hr>



### function getCurrentHalfLine 

```C++
static u32 getCurrentHalfLine (
    void
) 
```




<hr>



### function getEncoderType 

```C++
static u32 getEncoderType (
    void
) 
```




<hr>



### function getTiming 

```C++
static VITiming * getTiming (
    VITVMode mode
) 
```




<hr>



### function setBBIntervalRegs 

```C++
static void setBBIntervalRegs (
    VITiming * tm
) 
```




<hr>



### function setFbbRegs 

```C++
static void setFbbRegs (
    SomeVIStruct * HorVer,
    u32 * tfbb,
    u32 * bfbb,
    u32 * rtfbb,
    u32 * rbfbb
) 
```




<hr>



### function setHorizontalRegs 

```C++
static void setHorizontalRegs (
    VITiming * tm,
    u16 dispPosX,
    u16 dispSizeX
) 
```




<hr>



### function setInterruptRegs 

```C++
static void setInterruptRegs (
    VITiming * tm
) 
```




<hr>



### function setPicConfig 

```C++
static void setPicConfig (
    u16 fbSizeX,
    VIXFBMode xfbMode,
    u16 panPosX,
    u16 panSizeX,
    u8 * wordPerLine,
    u8 * std,
    u8 * wpl,
    u8 * xof
) 
```




<hr>



### function setScalingRegs 

```C++
static void setScalingRegs (
    u16 panSizeX,
    u16 dispSizeX,
    BOOL threeD
) 
```




<hr>



### function setVerticalRegs 

```C++
static void setVerticalRegs (
    u16 dispPosY,
    u16 dispSizeY,
    u8 equ,
    u16 acv,
    u16 prbOdd,
    u16 prbEven,
    u16 psbOdd,
    u16 psbEven,
    int black
) 
```




<hr>
## Macro Definition Documentation





### define CLAMP 

```C++
#define CLAMP (
    val,
    min,
    max
) `((val) > (max) ? (max) : (val) < (min) ? (min) : (val))`
```




<hr>



### define MAX 

```C++
#define MAX (
    a,
    b
) `(((a) > (b)) ? (a) : (b))`
```




<hr>



### define MIN 

```C++
#define MIN (
    a,
    b
) `(((a) < (b)) ? (a) : (b))`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/vi/vi.c`

