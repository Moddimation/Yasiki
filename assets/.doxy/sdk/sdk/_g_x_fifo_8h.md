

# File GXFifo.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**gx**](dir_7aad653e595702d688ea3e342b8a405d.md) **>** [**GXFifo.h**](_g_x_fifo_8h.md)

[Go to the source code of this file](_g_x_fifo_8h_source.md)



* `#include <dolphin/gx/GXEnum.h>`
* `#include <dolphin/os/OSThread.h>`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**GXFifoObj**](struct_g_x_fifo_obj.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**GXBreakPtCallback**](#typedef-gxbreakptcallback)  <br> |




















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
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXRestoreWriteGatherPipe**](#function-gxrestorewritegatherpipe) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSaveCPUFifo**](#function-gxsavecpufifo) ([**GXFifoObj**](struct_g_x_fifo_obj.md) \* fifo) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSaveGPFifo**](#function-gxsavegpfifo) ([**GXFifoObj**](struct_g_x_fifo_obj.md) \* fifo) <br> |
|  [**GXBreakPtCallback**](_g_x_fifo_8h.md#typedef-gxbreakptcallback) | [**GXSetBreakPtCallback**](#function-gxsetbreakptcallback) ([**GXBreakPtCallback**](_g_x_fifo_8h.md#typedef-gxbreakptcallback) cb) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetCPUFifo**](#function-gxsetcpufifo) ([**GXFifoObj**](struct_g_x_fifo_obj.md) \* fifo) <br> |
|  [**OSThread**](struct_o_s_thread.md) \* | [**GXSetCurrentGXThread**](#function-gxsetcurrentgxthread) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetGPFifo**](#function-gxsetgpfifo) ([**GXFifoObj**](struct_g_x_fifo_obj.md) \* fifo) <br> |




























## Public Types Documentation




### typedef GXBreakPtCallback 

```C++
typedef void(* GXBreakPtCallback) (void);
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



### function GXRestoreWriteGatherPipe 

```C++
void GXRestoreWriteGatherPipe (
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

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/gx/GXFifo.h`

