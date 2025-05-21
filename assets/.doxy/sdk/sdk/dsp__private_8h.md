

# File dsp\_private.h



[**FileList**](files.md) **>** [**dolphin**](dir_5daac82a3cf194997369e9388ff34711.md) **>** [**dsp**](dir_0a4192dfc5ccfb7b9712b3f4e28b673b.md) **>** [**dsp\_private.h**](dsp__private_8h.md)

[Go to the source code of this file](dsp__private_8h_source.md)



* `#include <dolphin/dsp.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**DSPTaskInfo**](dsp_8h.md#typedef-dsptaskinfo) \* | [**\_\_DSP\_curr\_task**](#variable-__dsp_curr_task)  <br> |
|  [**DSPTaskInfo**](dsp_8h.md#typedef-dsptaskinfo) \* | [**\_\_DSP\_first\_task**](#variable-__dsp_first_task)  <br> |
|  [**DSPTaskInfo**](dsp_8h.md#typedef-dsptaskinfo) \* | [**\_\_DSP\_last\_task**](#variable-__dsp_last_task)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DSPHandler**](#function-__dsphandler) ([**\_\_OSInterrupt**](_o_s_interrupt_8h.md#typedef-__osinterrupt) intr, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DSP\_add\_task**](#function-__dsp_add_task) ([**DSPTaskInfo**](dsp_8h.md#typedef-dsptaskinfo) \* task) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DSP\_boot\_task**](#function-__dsp_boot_task) ([**DSPTaskInfo**](dsp_8h.md#typedef-dsptaskinfo) \* task) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DSP\_debug\_printf**](#function-__dsp_debug_printf) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* fmt, ...) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DSP\_exec\_task**](#function-__dsp_exec_task) ([**DSPTaskInfo**](dsp_8h.md#typedef-dsptaskinfo) \* curr, [**DSPTaskInfo**](dsp_8h.md#typedef-dsptaskinfo) \* next) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DSP\_insert\_task**](#function-__dsp_insert_task) ([**DSPTaskInfo**](dsp_8h.md#typedef-dsptaskinfo) \* task) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DSP\_remove\_task**](#function-__dsp_remove_task) ([**DSPTaskInfo**](dsp_8h.md#typedef-dsptaskinfo) \* task) <br> |




























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
## Public Functions Documentation




### function \_\_DSPHandler 

```C++
void __DSPHandler (
    __OSInterrupt intr,
    OSContext * context
) 
```




<hr>



### function \_\_DSP\_add\_task 

```C++
void __DSP_add_task (
    DSPTaskInfo * task
) 
```




<hr>



### function \_\_DSP\_boot\_task 

```C++
void __DSP_boot_task (
    DSPTaskInfo * task
) 
```




<hr>



### function \_\_DSP\_debug\_printf 

```C++
void __DSP_debug_printf (
    const  char * fmt,
    ...
) 
```




<hr>



### function \_\_DSP\_exec\_task 

```C++
void __DSP_exec_task (
    DSPTaskInfo * curr,
    DSPTaskInfo * next
) 
```




<hr>



### function \_\_DSP\_insert\_task 

```C++
void __DSP_insert_task (
    DSPTaskInfo * task
) 
```




<hr>



### function \_\_DSP\_remove\_task 

```C++
void __DSP_remove_task (
    DSPTaskInfo * task
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `DolphinSDK/src/dolphin/dsp/dsp_private.h`

