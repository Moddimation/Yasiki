

# Struct STRUCT\_DSP\_TASK



[**ClassList**](annotated.md) **>** [**STRUCT\_DSP\_TASK**](struct_s_t_r_u_c_t___d_s_p___t_a_s_k.md)





* `#include <dsp.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**DSPCallback**](dsp_8h.md#typedef-dspcallback) | [**done\_cb**](#variable-done_cb)  <br>_0x30_  |
|  [**u32**](types_8h.md#typedef-u32) | [**dram\_addr**](#variable-dram_addr)  <br>_0x20_  |
|  [**u32**](types_8h.md#typedef-u32) | [**dram\_length**](#variable-dram_length)  <br>_0x1C_  |
|  [**u16**](types_8h.md#typedef-u16) \* | [**dram\_mmem\_addr**](#variable-dram_mmem_addr)  <br>_0x18_  |
|  [**u16**](types_8h.md#typedef-u16) | [**dsp\_init\_vector**](#variable-dsp_init_vector)  <br>_0x24_  |
|  [**u16**](types_8h.md#typedef-u16) | [**dsp\_resume\_vector**](#variable-dsp_resume_vector)  <br>_0x26_  |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) | [**flags**](#variable-flags)  <br>_0x08_  |
|  [**DSPCallback**](dsp_8h.md#typedef-dspcallback) | [**init\_cb**](#variable-init_cb)  <br>_0x28_  |
|  [**u32**](types_8h.md#typedef-u32) | [**iram\_addr**](#variable-iram_addr)  <br>_0x14_  |
|  [**u32**](types_8h.md#typedef-u32) | [**iram\_length**](#variable-iram_length)  <br>_0x10_  |
|  [**u16**](types_8h.md#typedef-u16) \* | [**iram\_mmem\_addr**](#variable-iram_mmem_addr)  <br>_0x0C_  |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**STRUCT\_DSP\_TASK**](struct_s_t_r_u_c_t___d_s_p___t_a_s_k.md) \* | [**next**](#variable-next)  <br>_0x38_  |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**STRUCT\_DSP\_TASK**](struct_s_t_r_u_c_t___d_s_p___t_a_s_k.md) \* | [**prev**](#variable-prev)  <br>_0x3C_  |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) | [**priority**](#variable-priority)  <br>_0x04_  |
|  [**DSPCallback**](dsp_8h.md#typedef-dspcallback) | [**req\_cb**](#variable-req_cb)  <br>_0x34_  |
|  [**DSPCallback**](dsp_8h.md#typedef-dspcallback) | [**res\_cb**](#variable-res_cb)  <br>_0x2C_  |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) | [**state**](#variable-state)  <br>_0x00_  |
|  [**OSTime**](_o_s_time_8h.md#typedef-ostime) | [**t\_context**](#variable-t_context)  <br> |
|  [**OSTime**](_o_s_time_8h.md#typedef-ostime) | [**t\_task**](#variable-t_task)  <br> |












































## Public Attributes Documentation




### variable done\_cb 

_0x30_ 
```C++
DSPCallback STRUCT_DSP_TASK::done_cb;
```




<hr>



### variable dram\_addr 

_0x20_ 
```C++
u32 STRUCT_DSP_TASK::dram_addr;
```




<hr>



### variable dram\_length 

_0x1C_ 
```C++
u32 STRUCT_DSP_TASK::dram_length;
```




<hr>



### variable dram\_mmem\_addr 

_0x18_ 
```C++
u16* STRUCT_DSP_TASK::dram_mmem_addr;
```




<hr>



### variable dsp\_init\_vector 

_0x24_ 
```C++
u16 STRUCT_DSP_TASK::dsp_init_vector;
```




<hr>



### variable dsp\_resume\_vector 

_0x26_ 
```C++
u16 STRUCT_DSP_TASK::dsp_resume_vector;
```




<hr>



### variable flags 

_0x08_ 
```C++
volatile u32 STRUCT_DSP_TASK::flags;
```




<hr>



### variable init\_cb 

_0x28_ 
```C++
DSPCallback STRUCT_DSP_TASK::init_cb;
```




<hr>



### variable iram\_addr 

_0x14_ 
```C++
u32 STRUCT_DSP_TASK::iram_addr;
```




<hr>



### variable iram\_length 

_0x10_ 
```C++
u32 STRUCT_DSP_TASK::iram_length;
```




<hr>



### variable iram\_mmem\_addr 

_0x0C_ 
```C++
u16* STRUCT_DSP_TASK::iram_mmem_addr;
```




<hr>



### variable next 

_0x38_ 
```C++
struct STRUCT_DSP_TASK* STRUCT_DSP_TASK::next;
```




<hr>



### variable prev 

_0x3C_ 
```C++
struct STRUCT_DSP_TASK* STRUCT_DSP_TASK::prev;
```




<hr>



### variable priority 

_0x04_ 
```C++
volatile u32 STRUCT_DSP_TASK::priority;
```




<hr>



### variable req\_cb 

_0x34_ 
```C++
DSPCallback STRUCT_DSP_TASK::req_cb;
```




<hr>



### variable res\_cb 

_0x2C_ 
```C++
DSPCallback STRUCT_DSP_TASK::res_cb;
```




<hr>



### variable state 

_0x00_ 
```C++
volatile u32 STRUCT_DSP_TASK::state;
```




<hr>



### variable t\_context 

```C++
OSTime STRUCT_DSP_TASK::t_context;
```




<hr>



### variable t\_task 

```C++
OSTime STRUCT_DSP_TASK::t_task;
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/dsp.h`

