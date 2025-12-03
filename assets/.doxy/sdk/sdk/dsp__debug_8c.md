

# File dsp\_debug.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**dsp**](dir_37785f48a74f821d91c9dd23d9dd1487.md) **>** [**dsp\_debug.c**](dsp__debug_8c.md)

[Go to the source code of this file](dsp__debug_8c_source.md)



* `#include <dolphin/dsp.h>`
* `#include "dsp_private.h"`





















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
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/dsp/dsp_debug.c`

