

# File dsp\_debug.c



[**FileList**](files.md) **>** [**dolphin**](dir_8daa6a5f7f30f79e111d6992c13d512c.md) **>** [**dsp**](dir_2b383f91e1d643b9208f9f190fe59d53.md) **>** [**dsp\_debug.c**](dsp__debug_8c.md)

[Go to the source code of this file](dsp__debug_8c_source.md)



* `#include <dolphin/dsp.h>`
* `#include "DSPPrivate.h"`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**DSPTaskInfo**](dsp_8h.md#typedef-dsptaskinfo) \* | [**\_\_DSP\_curr\_task**](#variable-__dsp_curr_task)  <br> |
|  [**DSPTaskInfo**](dsp_8h.md#typedef-dsptaskinfo) \* | [**\_\_DSP\_first\_task**](#variable-__dsp_first_task)  <br> |
|  [**DSPTaskInfo**](dsp_8h.md#typedef-dsptaskinfo) \* | [**\_\_DSP\_last\_task**](#variable-__dsp_last_task)  <br> |
|  [**DSPTaskInfo**](dsp_8h.md#typedef-dsptaskinfo) \* | [**\_\_DSP\_tmp\_task**](#variable-__dsp_tmp_task)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**DSPTaskInfo**](dsp_8h.md#typedef-dsptaskinfo) \* | [**\_\_DSPGetCurrentTask**](#function-__dspgetcurrenttask) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DSP\_debug\_printf**](#function-__dsp_debug_printf) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* fmt, ...) <br> |




























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



### variable \_\_DSP\_tmp\_task 

```C++
DSPTaskInfo* __DSP_tmp_task;
```




<hr>
## Public Functions Documentation




### function \_\_DSPGetCurrentTask 

```C++
DSPTaskInfo * __DSPGetCurrentTask (
    void
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

------------------------------
The documentation for this class was generated from the following file `SDK/src/dolphin/dsp/dsp_debug.c`

