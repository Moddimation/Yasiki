

# File dsp.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**dsp.h**](dsp_8h.md)

[Go to the source code of this file](dsp_8h_source.md)



* `#include <dolphin/os.h>`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**STRUCT\_DSP\_TASK**](struct_s_t_r_u_c_t___d_s_p___t_a_s_k.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**DSPCallback**](#typedef-dspcallback)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**STRUCT\_DSP\_TASK**](struct_s_t_r_u_c_t___d_s_p___t_a_s_k.md) | [**DSPTaskInfo**](#typedef-dsptaskinfo)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**DSPTaskInfo**](dsp_8h.md#typedef-dsptaskinfo) \* | [**DSPAddTask**](#function-dspaddtask) ([**DSPTaskInfo**](dsp_8h.md#typedef-dsptaskinfo) \* task) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DSPAssertInt**](#function-dspassertint) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**DSPTaskInfo**](dsp_8h.md#typedef-dsptaskinfo) \* | [**DSPAssertTask**](#function-dspasserttask) ([**DSPTaskInfo**](dsp_8h.md#typedef-dsptaskinfo) \* task) <br> |
|  [**DSPTaskInfo**](dsp_8h.md#typedef-dsptaskinfo) \* | [**DSPCancelTask**](#function-dspcanceltask) ([**DSPTaskInfo**](dsp_8h.md#typedef-dsptaskinfo) \* task) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DSPCheckInit**](#function-dspcheckinit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**DSPCheckMailFromDSP**](#function-dspcheckmailfromdsp) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**DSPCheckMailToDSP**](#function-dspcheckmailtodsp) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**DSPGetDMAStatus**](#function-dspgetdmastatus) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DSPHalt**](#function-dsphalt) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DSPInit**](#function-dspinit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**DSPReadCPUToDSPMbox**](#function-dspreadcputodspmbox) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**DSPReadMailFromDSP**](#function-dspreadmailfromdsp) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DSPReset**](#function-dspreset) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DSPSendMailToDSP**](#function-dspsendmailtodsp) ([**u32**](types_8h.md#typedef-u32) mail) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DSPUnhalt**](#function-dspunhalt) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**DSPTaskInfo**](dsp_8h.md#typedef-dsptaskinfo) \* | [**\_\_DSPGetCurrentTask**](#function-__dspgetcurrenttask) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |




























## Public Types Documentation




### typedef DSPCallback 

```C++
typedef void(* DSPCallback) (void *task);
```




<hr>



### typedef DSPTaskInfo 

```C++
typedef struct STRUCT_DSP_TASK DSPTaskInfo;
```




<hr>
## Public Functions Documentation




### function DSPAddTask 

```C++
DSPTaskInfo * DSPAddTask (
    DSPTaskInfo * task
) 
```




<hr>



### function DSPAssertInt 

```C++
void DSPAssertInt (
    void
) 
```




<hr>



### function DSPAssertTask 

```C++
DSPTaskInfo * DSPAssertTask (
    DSPTaskInfo * task
) 
```




<hr>



### function DSPCancelTask 

```C++
DSPTaskInfo * DSPCancelTask (
    DSPTaskInfo * task
) 
```




<hr>



### function DSPCheckInit 

```C++
BOOL DSPCheckInit (
    void
) 
```




<hr>



### function DSPCheckMailFromDSP 

```C++
u32 DSPCheckMailFromDSP (
    void
) 
```




<hr>



### function DSPCheckMailToDSP 

```C++
u32 DSPCheckMailToDSP (
    void
) 
```




<hr>



### function DSPGetDMAStatus 

```C++
u32 DSPGetDMAStatus (
    void
) 
```




<hr>



### function DSPHalt 

```C++
void DSPHalt (
    void
) 
```




<hr>



### function DSPInit 

```C++
void DSPInit (
    void
) 
```




<hr>



### function DSPReadCPUToDSPMbox 

```C++
u32 DSPReadCPUToDSPMbox (
    void
) 
```




<hr>



### function DSPReadMailFromDSP 

```C++
u32 DSPReadMailFromDSP (
    void
) 
```




<hr>



### function DSPReset 

```C++
void DSPReset (
    void
) 
```




<hr>



### function DSPSendMailToDSP 

```C++
void DSPSendMailToDSP (
    u32 mail
) 
```




<hr>



### function DSPUnhalt 

```C++
void DSPUnhalt (
    void
) 
```




<hr>



### function \_\_DSPGetCurrentTask 

```C++
DSPTaskInfo * __DSPGetCurrentTask (
    void
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/dsp.h`

