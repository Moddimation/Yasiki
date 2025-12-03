

# File dsp\_task.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**dsp**](dir_37785f48a74f821d91c9dd23d9dd1487.md) **>** [**dsp\_task.c**](dsp__task_8c.md)

[Go to the source code of this file](dsp__task_8c_source.md)



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
|  [**u32**](types_8h.md#typedef-u32) | [**t0**](#variable-t0)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**t1**](#variable-t1)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**t2**](#variable-t2)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DSPHandler**](#function-__dsphandler) ([**\_\_OSInterrupt**](_o_s_interrupt_8h.md#typedef-__osinterrupt) intr, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DSP\_add\_task**](#function-__dsp_add_task) ([**DSPTaskInfo**](dsp_8h.md#typedef-dsptaskinfo) \* task) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DSP\_boot\_task**](#function-__dsp_boot_task) ([**DSPTaskInfo**](dsp_8h.md#typedef-dsptaskinfo) \* task) <br> |
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




### variable t0 

```C++
u32 t0;
```




<hr>



### variable t1 

```C++
u32 t1;
```




<hr>



### variable t2 

```C++
u32 t2;
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
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/dsp/dsp_task.c`

