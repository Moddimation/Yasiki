

# File GXFifo.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**gx**](dir_b80c028b3e970eff7f2a07684ffcf104.md) **>** [**GXFifo.c**](_g_x_fifo_8c.md)

[Go to the source code of this file](_g_x_fifo_8c_source.md)



* `#include <dolphin/base/PPCArch.h>`
* `#include <dolphin/gx.h>`
* `#include <dolphin/os.h>`
* `#include <stddef.h>`
* `#include "GXPrivate.h"`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**\_\_GXFifoObj**](struct_____g_x_fifo_obj.md) \* | [**CPUFifo**](#variable-cpufifo)  <br> |
|  [**\_\_GXFifoObj**](struct_____g_x_fifo_obj.md) \* | [**GPFifo**](#variable-gpfifo)  <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**\_\_GXCurrentBP**](#variable-__gxcurrentbp)  <br> |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**GXBreakPtCallback**](_g_x_fifo_8h.md#typedef-gxbreakptcallback) | [**BreakPointCB**](#variable-breakpointcb)  <br> |
|  [**GXBool**](_g_x_enum_8h.md#typedef-gxbool) | [**CPGPLinked**](#variable-cpgplinked)  <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**GXOverflowSuspendInProgress**](#variable-gxoverflowsuspendinprogress)  <br> |
|  [**OSThread**](struct_o_s_thread.md) \* | [**\_\_GXCurrentThread**](#variable-__gxcurrentthread)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**\_\_GXOverflowCount**](#variable-__gxoverflowcount)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXDisableBreakPt**](#function-gxdisablebreakpt) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXEnableBreakPt**](#function-gxenablebreakpt) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* break\_pt) <br> |
|  [**GXFifoObj**](struct_g_x_fifo_obj.md) \* | [**GXGetCPUFifo**](#function-gxgetcpufifo) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**OSThread**](struct_o_s_thread.md) \* | [**GXGetCurrentGXThread**](#function-gxgetcurrentgxthread) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**GXGetFifoBase**](#function-gxgetfifobase) ([**GXFifoObj**](struct_g_x_fifo_obj.md) \* fifo) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXGetFifoLimits**](#function-gxgetfifolimits) ([**GXFifoObj**](struct_g_x_fifo_obj.md) \* fifo, [**u32**](types_8h.md#typedef-u32) \* hi, [**u32**](types_8h.md#typedef-u32) \* lo) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXGetFifoPtrs**](#function-gxgetfifoptrs) ([**GXFifoObj**](struct_g_x_fifo_obj.md) \* fifo, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \*\* readPtr, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \*\* writePtr) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**GXGetFifoSize**](#function-gxgetfifosize) ([**GXFifoObj**](struct_g_x_fifo_obj.md) \* fifo) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXGetFifoStatus**](#function-gxgetfifostatus) ([**GXFifoObj**](struct_g_x_fifo_obj.md) \* fifo, [**GXBool**](_g_x_enum_8h.md#typedef-gxbool) \* overhi, [**GXBool**](_g_x_enum_8h.md#typedef-gxbool) \* underflow, [**u32**](types_8h.md#typedef-u32) \* fifoCount, [**GXBool**](_g_x_enum_8h.md#typedef-gxbool) \* cpuWrite, [**GXBool**](_g_x_enum_8h.md#typedef-gxbool) \* gpRead, [**GXBool**](_g_x_enum_8h.md#typedef-gxbool) \* fifowrap) <br> |
|  [**GXFifoObj**](struct_g_x_fifo_obj.md) \* | [**GXGetGPFifo**](#function-gxgetgpfifo) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXGetGPStatus**](#function-gxgetgpstatus) ([**GXBool**](_g_x_enum_8h.md#typedef-gxbool) \* overhi, [**GXBool**](_g_x_enum_8h.md#typedef-gxbool) \* underlow, [**GXBool**](_g_x_enum_8h.md#typedef-gxbool) \* readIdle, [**GXBool**](_g_x_enum_8h.md#typedef-gxbool) \* cmdIdle, [**GXBool**](_g_x_enum_8h.md#typedef-gxbool) \* brkpt) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**GXGetOverflowCount**](#function-gxgetoverflowcount) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXInitFifoBase**](#function-gxinitfifobase) ([**GXFifoObj**](struct_g_x_fifo_obj.md) \* fifo, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* base, [**u32**](types_8h.md#typedef-u32) size) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXInitFifoLimits**](#function-gxinitfifolimits) ([**GXFifoObj**](struct_g_x_fifo_obj.md) \* fifo, [**u32**](types_8h.md#typedef-u32) hiWatermark, [**u32**](types_8h.md#typedef-u32) loWatermark) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXInitFifoPtrs**](#function-gxinitfifoptrs) ([**GXFifoObj**](struct_g_x_fifo_obj.md) \* fifo, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* readPtr, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* writePtr) <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**GXRedirectWriteGatherPipe**](#function-gxredirectwritegatherpipe) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* ptr) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**GXResetOverflowCount**](#function-gxresetoverflowcount) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSaveCPUFifo**](#function-gxsavecpufifo) ([**GXFifoObj**](struct_g_x_fifo_obj.md) \* fifo) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSaveGPFifo**](#function-gxsavegpfifo) ([**GXFifoObj**](struct_g_x_fifo_obj.md) \* fifo) <br> |
|  [**GXBreakPtCallback**](_g_x_fifo_8h.md#typedef-gxbreakptcallback) | [**GXSetBreakPtCallback**](#function-gxsetbreakptcallback) ([**GXBreakPtCallback**](_g_x_fifo_8h.md#typedef-gxbreakptcallback) cb) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetCPUFifo**](#function-gxsetcpufifo) ([**GXFifoObj**](struct_g_x_fifo_obj.md) \* fifo) <br> |
|  [**OSThread**](struct_o_s_thread.md) \* | [**GXSetCurrentGXThread**](#function-gxsetcurrentgxthread) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetGPFifo**](#function-gxsetgpfifo) ([**GXFifoObj**](struct_g_x_fifo_obj.md) \* fifo) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXCleanGPFifo**](#function-__gxcleangpfifo) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXFifoInit**](#function-__gxfifoinit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXInsaneWatermark**](#function-__gxinsanewatermark) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXSaveCPUFifoAux**](#function-__gxsavecpufifoaux) ([**\_\_GXFifoObj**](struct_____g_x_fifo_obj.md) \* realFifo) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXBreakPointHandler**](#function-gxbreakpointhandler) ([**s16**](types_8h.md#typedef-s16) interrupt, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXCPInterruptHandler**](#function-gxcpinterrupthandler) ([**s16**](types_8h.md#typedef-s16) interrupt, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXOverflowHandler**](#function-gxoverflowhandler) ([**s16**](types_8h.md#typedef-s16) interrupt, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXUnderflowHandler**](#function-gxunderflowhandler) ([**s16**](types_8h.md#typedef-s16) interrupt, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXFifoLink**](#function-__gxfifolink) ([**u8**](types_8h.md#typedef-u8) arg0) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXFifoReadDisable**](#function-__gxfiforeaddisable) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXFifoReadEnable**](#function-__gxfiforeadenable) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXWriteFifoIntEnable**](#function-__gxwritefifointenable) ([**u8**](types_8h.md#typedef-u8) arg0, [**u8**](types_8h.md#typedef-u8) arg1) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXWriteFifoIntReset**](#function-__gxwritefifointreset) ([**u8**](types_8h.md#typedef-u8) arg0, [**u8**](types_8h.md#typedef-u8) arg1) <br> |

























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**SET\_REG\_FIELD2**](_g_x_fifo_8c.md#define-set_reg_field2) (line, reg, mask, val) `/* multi line expression */`<br> |
| define  | [**SOME\_MACRO1**](_g_x_fifo_8c.md#define-some_macro1) (fifo) `/* multi line expression */`<br> |
| define  | [**SOME\_MACRO2**](_g_x_fifo_8c.md#define-some_macro2) (fifo) `/* multi line expression */`<br> |

## Public Attributes Documentation




### variable CPUFifo 

```C++
__GXFifoObj* CPUFifo;
```




<hr>



### variable GPFifo 

```C++
__GXFifoObj* GPFifo;
```




<hr>



### variable \_\_GXCurrentBP 

```C++
void * __GXCurrentBP;
```




<hr>
## Public Static Attributes Documentation




### variable BreakPointCB 

```C++
GXBreakPtCallback BreakPointCB;
```




<hr>



### variable CPGPLinked 

```C++
GXBool CPGPLinked;
```




<hr>



### variable GXOverflowSuspendInProgress 

```C++
BOOL GXOverflowSuspendInProgress;
```




<hr>



### variable \_\_GXCurrentThread 

```C++
OSThread* __GXCurrentThread;
```




<hr>



### variable \_\_GXOverflowCount 

```C++
u32 __GXOverflowCount;
```




<hr>
## Public Functions Documentation




### function GXDisableBreakPt 

```C++
void GXDisableBreakPt (
    void
) 
```




<hr>



### function GXEnableBreakPt 

```C++
void GXEnableBreakPt (
    void * break_pt
) 
```




<hr>



### function GXGetCPUFifo 

```C++
GXFifoObj * GXGetCPUFifo (
    void
) 
```




<hr>



### function GXGetCurrentGXThread 

```C++
OSThread * GXGetCurrentGXThread (
    void
) 
```




<hr>



### function GXGetFifoBase 

```C++
void * GXGetFifoBase (
    GXFifoObj * fifo
) 
```




<hr>



### function GXGetFifoLimits 

```C++
void GXGetFifoLimits (
    GXFifoObj * fifo,
    u32 * hi,
    u32 * lo
) 
```




<hr>



### function GXGetFifoPtrs 

```C++
void GXGetFifoPtrs (
    GXFifoObj * fifo,
    void ** readPtr,
    void ** writePtr
) 
```




<hr>



### function GXGetFifoSize 

```C++
u32 GXGetFifoSize (
    GXFifoObj * fifo
) 
```




<hr>



### function GXGetFifoStatus 

```C++
void GXGetFifoStatus (
    GXFifoObj * fifo,
    GXBool * overhi,
    GXBool * underflow,
    u32 * fifoCount,
    GXBool * cpuWrite,
    GXBool * gpRead,
    GXBool * fifowrap
) 
```




<hr>



### function GXGetGPFifo 

```C++
GXFifoObj * GXGetGPFifo (
    void
) 
```




<hr>



### function GXGetGPStatus 

```C++
void GXGetGPStatus (
    GXBool * overhi,
    GXBool * underlow,
    GXBool * readIdle,
    GXBool * cmdIdle,
    GXBool * brkpt
) 
```




<hr>



### function GXGetOverflowCount 

```C++
u32 GXGetOverflowCount (
    void
) 
```




<hr>



### function GXInitFifoBase 

```C++
void GXInitFifoBase (
    GXFifoObj * fifo,
    void * base,
    u32 size
) 
```




<hr>



### function GXInitFifoLimits 

```C++
void GXInitFifoLimits (
    GXFifoObj * fifo,
    u32 hiWatermark,
    u32 loWatermark
) 
```




<hr>



### function GXInitFifoPtrs 

```C++
void GXInitFifoPtrs (
    GXFifoObj * fifo,
    void * readPtr,
    void * writePtr
) 
```




<hr>



### function GXRedirectWriteGatherPipe 

```C++
volatile  void * GXRedirectWriteGatherPipe (
    void * ptr
) 
```




<hr>



### function GXResetOverflowCount 

```C++
u32 GXResetOverflowCount (
    void
) 
```




<hr>



### function GXSaveCPUFifo 

```C++
void GXSaveCPUFifo (
    GXFifoObj * fifo
) 
```




<hr>



### function GXSaveGPFifo 

```C++
void GXSaveGPFifo (
    GXFifoObj * fifo
) 
```




<hr>



### function GXSetBreakPtCallback 

```C++
GXBreakPtCallback GXSetBreakPtCallback (
    GXBreakPtCallback cb
) 
```




<hr>



### function GXSetCPUFifo 

```C++
void GXSetCPUFifo (
    GXFifoObj * fifo
) 
```




<hr>



### function GXSetCurrentGXThread 

```C++
OSThread * GXSetCurrentGXThread (
    void
) 
```




<hr>



### function GXSetGPFifo 

```C++
void GXSetGPFifo (
    GXFifoObj * fifo
) 
```




<hr>



### function \_\_GXCleanGPFifo 

```C++
void __GXCleanGPFifo (
    void
) 
```




<hr>



### function \_\_GXFifoInit 

```C++
void __GXFifoInit (
    void
) 
```




<hr>



### function \_\_GXInsaneWatermark 

```C++
void __GXInsaneWatermark (
    void
) 
```




<hr>



### function \_\_GXSaveCPUFifoAux 

```C++
void __GXSaveCPUFifoAux (
    __GXFifoObj * realFifo
) 
```




<hr>
## Public Static Functions Documentation




### function GXBreakPointHandler 

```C++
static void GXBreakPointHandler (
    s16 interrupt,
    OSContext * context
) 
```




<hr>



### function GXCPInterruptHandler 

```C++
static void GXCPInterruptHandler (
    s16 interrupt,
    OSContext * context
) 
```




<hr>



### function GXOverflowHandler 

```C++
static void GXOverflowHandler (
    s16 interrupt,
    OSContext * context
) 
```




<hr>



### function GXUnderflowHandler 

```C++
static void GXUnderflowHandler (
    s16 interrupt,
    OSContext * context
) 
```




<hr>



### function \_\_GXFifoLink 

```C++
static void __GXFifoLink (
    u8 arg0
) 
```




<hr>



### function \_\_GXFifoReadDisable 

```C++
static void __GXFifoReadDisable (
    void
) 
```




<hr>



### function \_\_GXFifoReadEnable 

```C++
static void __GXFifoReadEnable (
    void
) 
```




<hr>



### function \_\_GXWriteFifoIntEnable 

```C++
static void __GXWriteFifoIntEnable (
    u8 arg0,
    u8 arg1
) 
```




<hr>



### function \_\_GXWriteFifoIntReset 

```C++
static void __GXWriteFifoIntReset (
    u8 arg0,
    u8 arg1
) 
```




<hr>
## Macro Definition Documentation





### define SET\_REG\_FIELD2 

```C++
#define SET_REG_FIELD2 (
    line,
    reg,
    mask,
    val
) `/* multi line expression */`
```




<hr>



### define SOME\_MACRO1 

```C++
#define SOME_MACRO1 (
    fifo
) `/* multi line expression */`
```




<hr>



### define SOME\_MACRO2 

```C++
#define SOME_MACRO2 (
    fifo
) `/* multi line expression */`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/gx/GXFifo.c`

