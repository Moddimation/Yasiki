

# File dsp.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**dsp**](dir_37785f48a74f821d91c9dd23d9dd1487.md) **>** [**dsp.c**](dsp_8c.md)

[Go to the source code of this file](dsp_8c_source.md)



* `#include <dolphin/os.h>`
* `#include <stddef.h>`
* `#include "dsp_private.h"`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**DSPTaskInfo**](dsp_8h.md#typedef-dsptaskinfo) \* | [**\_\_DSP\_curr\_task**](#variable-__dsp_curr_task)  <br> |
|  [**DSPTaskInfo**](dsp_8h.md#typedef-dsptaskinfo) \* | [**\_\_DSP\_first\_task**](#variable-__dsp_first_task)  <br> |
|  [**DSPTaskInfo**](dsp_8h.md#typedef-dsptaskinfo) \* | [**\_\_DSP\_last\_task**](#variable-__dsp_last_task)  <br> |
|  [**DSPTaskInfo**](dsp_8h.md#typedef-dsptaskinfo) \* | [**\_\_DSP\_rude\_task**](#variable-__dsp_rude_task)  <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DSP\_rude\_task\_pending**](#variable-__dsp_rude_task_pending)  <br> |
|  [**DSPTaskInfo**](dsp_8h.md#typedef-dsptaskinfo) \* | [**\_\_DSP\_tmp\_task**](#variable-__dsp_tmp_task)  <br> |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**BOOL**](types_8h.md#typedef-bool) | [**\_\_DSP\_init\_flag**](#variable-__dsp_init_flag)  <br> |














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




























## Public Attributes Documentation




### variable \_\_DSP\_curr\_task 

```C++
DSPTaskInfo* __DSP_curr_task;
```




<hr>



### variable \_\_DSP\_first\_task 

```C++
DSPTaskInfo* __DSP_first_task;
```




<hr>



### variable \_\_DSP\_last\_task 

```C++
DSPTaskInfo* __DSP_last_task;
```




<hr>



### variable \_\_DSP\_rude\_task 

```C++
DSPTaskInfo* __DSP_rude_task;
```




<hr>



### variable \_\_DSP\_rude\_task\_pending 

```C++
int __DSP_rude_task_pending;
```




<hr>



### variable \_\_DSP\_tmp\_task 

```C++
DSPTaskInfo* __DSP_tmp_task;
```




<hr>
## Public Static Attributes Documentation




### variable \_\_DSP\_init\_flag 

```C++
BOOL __DSP_init_flag;
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

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/dsp/dsp.c`

