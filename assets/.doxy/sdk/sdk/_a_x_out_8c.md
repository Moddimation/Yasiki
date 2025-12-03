

# File AXOut.c



[**FileList**](files.md) **>** [**ax**](dir_284807f63fc993a939ff676a07eb86c2.md) **>** [**AXOut.c**](_a_x_out_8c.md)

[Go to the source code of this file](_a_x_out_8c_source.md)



* `#include <dolphin/ax.h>`
* `#include <dolphin/dsp.h>`
* `#include <dolphin.h>`
* `#include "AXPrivate.h"`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**AXPROFILE**](ax_8h.md#typedef-axprofile) | [**\_\_AXLocalProfile**](#variable-__axlocalprofile)  <br> |
|  [**u16**](types_8h.md#typedef-u16) | [**ax\_dram\_image**](#variable-ax_dram_image)  <br> |
|  [**DSPTaskInfo**](dsp_8h.md#typedef-dsptaskinfo) | [**task**](#variable-task)  <br> |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_AXDSPDoneFlag**](#variable-__axdspdoneflag)  <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_AXDSPInitFlag**](#variable-__axdspinitflag)  <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**s64**](types_8h.md#typedef-s64) | [**\_\_AXOsTime**](#variable-__axostime)  <br> |
|  [**s16**](types_8h.md#typedef-s16) | [**\_\_AXOutBuffer**](#variable-__axoutbuffer)  <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) | [**\_\_AXOutDspReady**](#variable-__axoutdspready)  <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) | [**\_\_AXOutFrame**](#variable-__axoutframe)  <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_AXOutSBuffer**](#variable-__axoutsbuffer)  <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**\_\_AXUserFrameCallback**](#variable-__axuserframecallback)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXRegisterCallback**](#function-axregistercallback) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)() callback) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_AXOutAiCallback**](#function-__axoutaicallback) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_AXOutInit**](#function-__axoutinit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_AXOutInitDSP**](#function-__axoutinitdsp) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_AXOutNewFrame**](#function-__axoutnewframe) ([**u32**](types_8h.md#typedef-u32) lessDspCycles) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_AXOutQuit**](#function-__axoutquit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_AXDSPDoneCallback**](#function-__axdspdonecallback) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* task) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_AXDSPInitCallback**](#function-__axdspinitcallback) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* task) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_AXDSPResumeCallback**](#function-__axdspresumecallback) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* task) <br> |


























## Public Attributes Documentation




### variable \_\_AXLocalProfile 

```C++
AXPROFILE __AXLocalProfile;
```




<hr>



### variable ax\_dram\_image 

```C++
u16 ax_dram_image[8192];
```




<hr>



### variable task 

```C++
DSPTaskInfo task;
```




<hr>
## Public Static Attributes Documentation




### variable \_\_AXDSPDoneFlag 

```C++
int __AXDSPDoneFlag;
```




<hr>



### variable \_\_AXDSPInitFlag 

```C++
volatile int __AXDSPInitFlag;
```




<hr>



### variable \_\_AXOsTime 

```C++
volatile s64 __AXOsTime;
```




<hr>



### variable \_\_AXOutBuffer 

```C++
s16 __AXOutBuffer[2][320];
```




<hr>



### variable \_\_AXOutDspReady 

```C++
volatile u32 __AXOutDspReady;
```




<hr>



### variable \_\_AXOutFrame 

```C++
volatile u32 __AXOutFrame;
```




<hr>



### variable \_\_AXOutSBuffer 

```C++
s32 __AXOutSBuffer[160];
```




<hr>



### variable \_\_AXUserFrameCallback 

```C++
void(* __AXUserFrameCallback) ();
```




<hr>
## Public Functions Documentation




### function AXRegisterCallback 

```C++
void AXRegisterCallback (
    void (*)() callback
) 
```




<hr>



### function \_\_AXOutAiCallback 

```C++
void __AXOutAiCallback (
    void
) 
```




<hr>



### function \_\_AXOutInit 

```C++
void __AXOutInit (
    void
) 
```




<hr>



### function \_\_AXOutInitDSP 

```C++
void __AXOutInitDSP (
    void
) 
```




<hr>



### function \_\_AXOutNewFrame 

```C++
void __AXOutNewFrame (
    u32 lessDspCycles
) 
```




<hr>



### function \_\_AXOutQuit 

```C++
void __AXOutQuit (
    void
) 
```




<hr>
## Public Static Functions Documentation




### function \_\_AXDSPDoneCallback 

```C++
static void __AXDSPDoneCallback (
    void * task
) 
```




<hr>



### function \_\_AXDSPInitCallback 

```C++
static void __AXDSPInitCallback (
    void * task
) 
```




<hr>



### function \_\_AXDSPResumeCallback 

```C++
static void __AXDSPResumeCallback (
    void * task
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/ax/AXOut.c`

