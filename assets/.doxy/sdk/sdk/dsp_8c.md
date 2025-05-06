

# File dsp.c



[**FileList**](files.md) **>** [**dolphin**](dir_8daa6a5f7f30f79e111d6992c13d512c.md) **>** [**dsp**](dir_2b383f91e1d643b9208f9f190fe59d53.md) **>** [**dsp.c**](dsp_8c.md)

[Go to the source code of this file](dsp_8c_source.md)



* `#include <dolphin/hw_regs.h>`
* `#include <dolphin.h>`
* `#include <stddef.h>`
* `#include "dsp_private.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**u32**](types_8h.md#typedef-u32) | [**DSPCheckMailFromDSP**](#function-dspcheckmailfromdsp) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**DSPCheckMailToDSP**](#function-dspcheckmailtodsp) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**DSPReadCPUToDSPMbox**](#function-dspreadcputodspmbox) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**DSPReadMailFromDSP**](#function-dspreadmailfromdsp) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DSPSendMailToDSP**](#function-dspsendmailtodsp) ([**u32**](types_8h.md#typedef-u32) mail) <br> |




























## Public Functions Documentation




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



### function DSPSendMailToDSP 

```C++
void DSPSendMailToDSP (
    u32 mail
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `SDK/src/dolphin/dsp/dsp.c`

