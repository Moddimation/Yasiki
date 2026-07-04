

# File OSInterrupt.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**os**](dir_2e13e6cf1d2e2aa91cbc210fef9f68a3.md) **>** [**OSInterrupt.h**](_o_s_interrupt_8h.md)

[Go to the source code of this file](_o_s_interrupt_8h_source.md)



* `#include <types.h>`
* `#include <dolphin/os/OSException.h>`

















## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**u32**](types_8h.md#typedef-u32) | [**OSInterruptMask**](#typedef-osinterruptmask)  <br> |
| typedef [**s16**](types_8h.md#typedef-s16) | [**\_\_OSInterrupt**](#typedef-__osinterrupt)  <br> |
| typedef [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**\_\_OSInterruptHandler**](#typedef-__osinterrupthandler)  <br> |




## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**\_\_OSInterrupt**](_o_s_interrupt_8h.md#typedef-__osinterrupt) | [**\_\_OSLastInterrupt**](#variable-__oslastinterrupt)  <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) | [**\_\_OSLastInterruptSrr0**](#variable-__oslastinterruptsrr0)  <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSTime**](_o_s_time_8h.md#typedef-ostime) | [**\_\_OSLastInterruptTime**](#variable-__oslastinterrupttime)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**OSInterruptMask**](_o_s_interrupt_8h.md#typedef-osinterruptmask) | [**OSGetInterruptMask**](#function-osgetinterruptmask) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**OSInterruptMask**](_o_s_interrupt_8h.md#typedef-osinterruptmask) | [**OSSetInterruptMask**](#function-ossetinterruptmask) ([**OSInterruptMask**](_o_s_interrupt_8h.md#typedef-osinterruptmask) mask) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSDispatchInterrupt**](#function-__osdispatchinterrupt) ([**\_\_OSException**](_o_s_exception_8h.md#typedef-__osexception) exception, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**\_\_OSInterruptHandler**](_o_s_interrupt_8h.md#typedef-__osinterrupthandler) | [**\_\_OSGetInterruptHandler**](#function-__osgetinterrupthandler) ([**\_\_OSInterrupt**](_o_s_interrupt_8h.md#typedef-__osinterrupt) interrupt) <br> |
|  [**OSInterruptMask**](_o_s_interrupt_8h.md#typedef-osinterruptmask) | [**\_\_OSMaskInterrupts**](#function-__osmaskinterrupts) ([**OSInterruptMask**](_o_s_interrupt_8h.md#typedef-osinterruptmask) mask) <br> |
|  [**\_\_OSInterruptHandler**](_o_s_interrupt_8h.md#typedef-__osinterrupthandler) | [**\_\_OSSetInterruptHandler**](#function-__ossetinterrupthandler) ([**\_\_OSInterrupt**](_o_s_interrupt_8h.md#typedef-__osinterrupt) interrupt, [**\_\_OSInterruptHandler**](_o_s_interrupt_8h.md#typedef-__osinterrupthandler) handler) <br> |
|  [**OSInterruptMask**](_o_s_interrupt_8h.md#typedef-osinterruptmask) | [**\_\_OSUnmaskInterrupts**](#function-__osunmaskinterrupts) ([**OSInterruptMask**](_o_s_interrupt_8h.md#typedef-osinterruptmask) mask) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**OS\_INTERRUPTMASK**](_o_s_interrupt_8h.md#define-os_interruptmask) (interrupt) `(0x80000000u &gt;&gt; ([**interrupt**](_c_a_r_d_private_8h.md#define-card_max_mount_step)))`<br> |
| define  | [**OS\_INTERRUPTMASK\_AI**](_o_s_interrupt_8h.md#define-os_interruptmask_ai)  `([**OS\_INTERRUPTMASK\_AI\_AI**](_o_s_interrupt_8h.md#define-os_interruptmask_ai_ai))`<br> |
| define  | [**OS\_INTERRUPTMASK\_AI\_AI**](_o_s_interrupt_8h.md#define-os_interruptmask_ai_ai)  `[**OS\_INTERRUPTMASK**](_o_s_interrupt_8h.md#define-os_interruptmask) ([**\_\_OS\_INTERRUPT\_AI\_AI**](_o_s_interrupt_8h.md#define-__os_interrupt_ai_ai))`<br> |
| define  | [**OS\_INTERRUPTMASK\_DSP**](_o_s_interrupt_8h.md#define-os_interruptmask_dsp)  `([**OS\_INTERRUPTMASK\_DSP\_AI**](_o_s_interrupt_8h.md#define-os_interruptmask_dsp_ai) \| [**OS\_INTERRUPTMASK\_DSP\_ARAM**](_o_s_interrupt_8h.md#define-os_interruptmask_dsp_aram) \| [**OS\_INTERRUPTMASK\_DSP\_DSP**](_o_s_interrupt_8h.md#define-os_interruptmask_dsp_dsp))`<br> |
| define  | [**OS\_INTERRUPTMASK\_DSP\_AI**](_o_s_interrupt_8h.md#define-os_interruptmask_dsp_ai)  `[**OS\_INTERRUPTMASK**](_o_s_interrupt_8h.md#define-os_interruptmask) ([**\_\_OS\_INTERRUPT\_DSP\_AI**](_o_s_interrupt_8h.md#define-__os_interrupt_dsp_ai))`<br> |
| define  | [**OS\_INTERRUPTMASK\_DSP\_ARAM**](_o_s_interrupt_8h.md#define-os_interruptmask_dsp_aram)  `[**OS\_INTERRUPTMASK**](_o_s_interrupt_8h.md#define-os_interruptmask) ([**\_\_OS\_INTERRUPT\_DSP\_ARAM**](_o_s_interrupt_8h.md#define-__os_interrupt_dsp_aram))`<br> |
| define  | [**OS\_INTERRUPTMASK\_DSP\_DSP**](_o_s_interrupt_8h.md#define-os_interruptmask_dsp_dsp)  `[**OS\_INTERRUPTMASK**](_o_s_interrupt_8h.md#define-os_interruptmask) ([**\_\_OS\_INTERRUPT\_DSP\_DSP**](_o_s_interrupt_8h.md#define-__os_interrupt_dsp_dsp))`<br> |
| define  | [**OS\_INTERRUPTMASK\_EXI**](_o_s_interrupt_8h.md#define-os_interruptmask_exi)  `/* multi line expression */`<br> |
| define  | [**OS\_INTERRUPTMASK\_EXI\_0**](_o_s_interrupt_8h.md#define-os_interruptmask_exi_0)  `([**OS\_INTERRUPTMASK\_EXI\_0\_EXI**](_o_s_interrupt_8h.md#define-os_interruptmask_exi_0_exi) \| [**OS\_INTERRUPTMASK\_EXI\_0\_TC**](_o_s_interrupt_8h.md#define-os_interruptmask_exi_0_tc) \| [**OS\_INTERRUPTMASK\_EXI\_0\_EXT**](_o_s_interrupt_8h.md#define-os_interruptmask_exi_0_ext))`<br> |
| define  | [**OS\_INTERRUPTMASK\_EXI\_0\_EXI**](_o_s_interrupt_8h.md#define-os_interruptmask_exi_0_exi)  `[**OS\_INTERRUPTMASK**](_o_s_interrupt_8h.md#define-os_interruptmask) ([**\_\_OS\_INTERRUPT\_EXI\_0\_EXI**](_o_s_interrupt_8h.md#define-__os_interrupt_exi_0_exi))`<br> |
| define  | [**OS\_INTERRUPTMASK\_EXI\_0\_EXT**](_o_s_interrupt_8h.md#define-os_interruptmask_exi_0_ext)  `[**OS\_INTERRUPTMASK**](_o_s_interrupt_8h.md#define-os_interruptmask) ([**\_\_OS\_INTERRUPT\_EXI\_0\_EXT**](_o_s_interrupt_8h.md#define-__os_interrupt_exi_0_ext))`<br> |
| define  | [**OS\_INTERRUPTMASK\_EXI\_0\_TC**](_o_s_interrupt_8h.md#define-os_interruptmask_exi_0_tc)  `[**OS\_INTERRUPTMASK**](_o_s_interrupt_8h.md#define-os_interruptmask) ([**\_\_OS\_INTERRUPT\_EXI\_0\_TC**](_o_s_interrupt_8h.md#define-__os_interrupt_exi_0_tc))`<br> |
| define  | [**OS\_INTERRUPTMASK\_EXI\_1**](_o_s_interrupt_8h.md#define-os_interruptmask_exi_1)  `([**OS\_INTERRUPTMASK\_EXI\_1\_EXI**](_o_s_interrupt_8h.md#define-os_interruptmask_exi_1_exi) \| [**OS\_INTERRUPTMASK\_EXI\_1\_TC**](_o_s_interrupt_8h.md#define-os_interruptmask_exi_1_tc) \| [**OS\_INTERRUPTMASK\_EXI\_1\_EXT**](_o_s_interrupt_8h.md#define-os_interruptmask_exi_1_ext))`<br> |
| define  | [**OS\_INTERRUPTMASK\_EXI\_1\_EXI**](_o_s_interrupt_8h.md#define-os_interruptmask_exi_1_exi)  `[**OS\_INTERRUPTMASK**](_o_s_interrupt_8h.md#define-os_interruptmask) ([**\_\_OS\_INTERRUPT\_EXI\_1\_EXI**](_o_s_interrupt_8h.md#define-__os_interrupt_exi_1_exi))`<br> |
| define  | [**OS\_INTERRUPTMASK\_EXI\_1\_EXT**](_o_s_interrupt_8h.md#define-os_interruptmask_exi_1_ext)  `[**OS\_INTERRUPTMASK**](_o_s_interrupt_8h.md#define-os_interruptmask) ([**\_\_OS\_INTERRUPT\_EXI\_1\_EXT**](_o_s_interrupt_8h.md#define-__os_interrupt_exi_1_ext))`<br> |
| define  | [**OS\_INTERRUPTMASK\_EXI\_1\_TC**](_o_s_interrupt_8h.md#define-os_interruptmask_exi_1_tc)  `[**OS\_INTERRUPTMASK**](_o_s_interrupt_8h.md#define-os_interruptmask) ([**\_\_OS\_INTERRUPT\_EXI\_1\_TC**](_o_s_interrupt_8h.md#define-__os_interrupt_exi_1_tc))`<br> |
| define  | [**OS\_INTERRUPTMASK\_EXI\_2**](_o_s_interrupt_8h.md#define-os_interruptmask_exi_2)  `([**OS\_INTERRUPTMASK\_EXI\_2\_EXI**](_o_s_interrupt_8h.md#define-os_interruptmask_exi_2_exi) \| [**OS\_INTERRUPTMASK\_EXI\_2\_TC**](_o_s_interrupt_8h.md#define-os_interruptmask_exi_2_tc))`<br> |
| define  | [**OS\_INTERRUPTMASK\_EXI\_2\_EXI**](_o_s_interrupt_8h.md#define-os_interruptmask_exi_2_exi)  `[**OS\_INTERRUPTMASK**](_o_s_interrupt_8h.md#define-os_interruptmask) ([**\_\_OS\_INTERRUPT\_EXI\_2\_EXI**](_o_s_interrupt_8h.md#define-__os_interrupt_exi_2_exi))`<br> |
| define  | [**OS\_INTERRUPTMASK\_EXI\_2\_TC**](_o_s_interrupt_8h.md#define-os_interruptmask_exi_2_tc)  `[**OS\_INTERRUPTMASK**](_o_s_interrupt_8h.md#define-os_interruptmask) ([**\_\_OS\_INTERRUPT\_EXI\_2\_TC**](_o_s_interrupt_8h.md#define-__os_interrupt_exi_2_tc))`<br> |
| define  | [**OS\_INTERRUPTMASK\_MEM**](_o_s_interrupt_8h.md#define-os_interruptmask_mem)  `/* multi line expression */`<br> |
| define  | [**OS\_INTERRUPTMASK\_MEM\_0**](_o_s_interrupt_8h.md#define-os_interruptmask_mem_0)  `[**OS\_INTERRUPTMASK**](_o_s_interrupt_8h.md#define-os_interruptmask) ([**\_\_OS\_INTERRUPT\_MEM\_0**](_o_s_interrupt_8h.md#define-__os_interrupt_mem_0))`<br> |
| define  | [**OS\_INTERRUPTMASK\_MEM\_1**](_o_s_interrupt_8h.md#define-os_interruptmask_mem_1)  `[**OS\_INTERRUPTMASK**](_o_s_interrupt_8h.md#define-os_interruptmask) ([**\_\_OS\_INTERRUPT\_MEM\_1**](_o_s_interrupt_8h.md#define-__os_interrupt_mem_1))`<br> |
| define  | [**OS\_INTERRUPTMASK\_MEM\_2**](_o_s_interrupt_8h.md#define-os_interruptmask_mem_2)  `[**OS\_INTERRUPTMASK**](_o_s_interrupt_8h.md#define-os_interruptmask) ([**\_\_OS\_INTERRUPT\_MEM\_2**](_o_s_interrupt_8h.md#define-__os_interrupt_mem_2))`<br> |
| define  | [**OS\_INTERRUPTMASK\_MEM\_3**](_o_s_interrupt_8h.md#define-os_interruptmask_mem_3)  `[**OS\_INTERRUPTMASK**](_o_s_interrupt_8h.md#define-os_interruptmask) ([**\_\_OS\_INTERRUPT\_MEM\_3**](_o_s_interrupt_8h.md#define-__os_interrupt_mem_3))`<br> |
| define  | [**OS\_INTERRUPTMASK\_MEM\_ADDRESS**](_o_s_interrupt_8h.md#define-os_interruptmask_mem_address)  `[**OS\_INTERRUPTMASK**](_o_s_interrupt_8h.md#define-os_interruptmask) ([**\_\_OS\_INTERRUPT\_MEM\_ADDRESS**](_o_s_interrupt_8h.md#define-__os_interrupt_mem_address))`<br> |
| define  | [**OS\_INTERRUPTMASK\_PI**](_o_s_interrupt_8h.md#define-os_interruptmask_pi)  `/* multi line expression */`<br> |
| define  | [**OS\_INTERRUPTMASK\_PI\_CP**](_o_s_interrupt_8h.md#define-os_interruptmask_pi_cp)  `[**OS\_INTERRUPTMASK**](_o_s_interrupt_8h.md#define-os_interruptmask) ([**\_\_OS\_INTERRUPT\_PI\_CP**](_o_s_interrupt_8h.md#define-__os_interrupt_pi_cp))`<br> |
| define  | [**OS\_INTERRUPTMASK\_PI\_DEBUG**](_o_s_interrupt_8h.md#define-os_interruptmask_pi_debug)  `[**OS\_INTERRUPTMASK**](_o_s_interrupt_8h.md#define-os_interruptmask) ([**\_\_OS\_INTERRUPT\_PI\_DEBUG**](_o_s_interrupt_8h.md#define-__os_interrupt_pi_debug))`<br> |
| define  | [**OS\_INTERRUPTMASK\_PI\_DI**](_o_s_interrupt_8h.md#define-os_interruptmask_pi_di)  `[**OS\_INTERRUPTMASK**](_o_s_interrupt_8h.md#define-os_interruptmask) ([**\_\_OS\_INTERRUPT\_PI\_DI**](_o_s_interrupt_8h.md#define-__os_interrupt_pi_di))`<br> |
| define  | [**OS\_INTERRUPTMASK\_PI\_ERROR**](_o_s_interrupt_8h.md#define-os_interruptmask_pi_error)  `[**OS\_INTERRUPTMASK**](_o_s_interrupt_8h.md#define-os_interruptmask) ([**\_\_OS\_INTERRUPT\_PI\_ERROR**](_o_s_interrupt_8h.md#define-__os_interrupt_pi_error))`<br> |
| define  | [**OS\_INTERRUPTMASK\_PI\_HSP**](_o_s_interrupt_8h.md#define-os_interruptmask_pi_hsp)  `[**OS\_INTERRUPTMASK**](_o_s_interrupt_8h.md#define-os_interruptmask) ([**\_\_OS\_INTERRUPT\_PI\_HSP**](_o_s_interrupt_8h.md#define-__os_interrupt_pi_hsp))`<br> |
| define  | [**OS\_INTERRUPTMASK\_PI\_PE**](_o_s_interrupt_8h.md#define-os_interruptmask_pi_pe)  `([**OS\_INTERRUPTMASK\_PI\_PE\_TOKEN**](_o_s_interrupt_8h.md#define-os_interruptmask_pi_pe_token) \| [**OS\_INTERRUPTMASK\_PI\_PE\_FINISH**](_o_s_interrupt_8h.md#define-os_interruptmask_pi_pe_finish))`<br> |
| define  | [**OS\_INTERRUPTMASK\_PI\_PE\_FINISH**](_o_s_interrupt_8h.md#define-os_interruptmask_pi_pe_finish)  `[**OS\_INTERRUPTMASK**](_o_s_interrupt_8h.md#define-os_interruptmask) ([**\_\_OS\_INTERRUPT\_PI\_PE\_FINISH**](_o_s_interrupt_8h.md#define-__os_interrupt_pi_pe_finish))`<br> |
| define  | [**OS\_INTERRUPTMASK\_PI\_PE\_TOKEN**](_o_s_interrupt_8h.md#define-os_interruptmask_pi_pe_token)  `[**OS\_INTERRUPTMASK**](_o_s_interrupt_8h.md#define-os_interruptmask) ([**\_\_OS\_INTERRUPT\_PI\_PE\_TOKEN**](_o_s_interrupt_8h.md#define-__os_interrupt_pi_pe_token))`<br> |
| define  | [**OS\_INTERRUPTMASK\_PI\_RSW**](_o_s_interrupt_8h.md#define-os_interruptmask_pi_rsw)  `[**OS\_INTERRUPTMASK**](_o_s_interrupt_8h.md#define-os_interruptmask) ([**\_\_OS\_INTERRUPT\_PI\_RSW**](_o_s_interrupt_8h.md#define-__os_interrupt_pi_rsw))`<br> |
| define  | [**OS\_INTERRUPTMASK\_PI\_SI**](_o_s_interrupt_8h.md#define-os_interruptmask_pi_si)  `[**OS\_INTERRUPTMASK**](_o_s_interrupt_8h.md#define-os_interruptmask) ([**\_\_OS\_INTERRUPT\_PI\_SI**](_o_s_interrupt_8h.md#define-__os_interrupt_pi_si))`<br> |
| define  | [**OS\_INTERRUPTMASK\_PI\_VI**](_o_s_interrupt_8h.md#define-os_interruptmask_pi_vi)  `[**OS\_INTERRUPTMASK**](_o_s_interrupt_8h.md#define-os_interruptmask) ([**\_\_OS\_INTERRUPT\_PI\_VI**](_o_s_interrupt_8h.md#define-__os_interrupt_pi_vi))`<br> |
| define  | [**\_\_OS\_INTERRUPT\_AI\_AI**](_o_s_interrupt_8h.md#define-__os_interrupt_ai_ai)  `8`<br> |
| define  | [**\_\_OS\_INTERRUPT\_DSP\_AI**](_o_s_interrupt_8h.md#define-__os_interrupt_dsp_ai)  `5`<br> |
| define  | [**\_\_OS\_INTERRUPT\_DSP\_ARAM**](_o_s_interrupt_8h.md#define-__os_interrupt_dsp_aram)  `6`<br> |
| define  | [**\_\_OS\_INTERRUPT\_DSP\_DSP**](_o_s_interrupt_8h.md#define-__os_interrupt_dsp_dsp)  `7`<br> |
| define  | [**\_\_OS\_INTERRUPT\_EXI\_0\_EXI**](_o_s_interrupt_8h.md#define-__os_interrupt_exi_0_exi)  `9`<br> |
| define  | [**\_\_OS\_INTERRUPT\_EXI\_0\_EXT**](_o_s_interrupt_8h.md#define-__os_interrupt_exi_0_ext)  `11`<br> |
| define  | [**\_\_OS\_INTERRUPT\_EXI\_0\_TC**](_o_s_interrupt_8h.md#define-__os_interrupt_exi_0_tc)  `10`<br> |
| define  | [**\_\_OS\_INTERRUPT\_EXI\_1\_EXI**](_o_s_interrupt_8h.md#define-__os_interrupt_exi_1_exi)  `12`<br> |
| define  | [**\_\_OS\_INTERRUPT\_EXI\_1\_EXT**](_o_s_interrupt_8h.md#define-__os_interrupt_exi_1_ext)  `14`<br> |
| define  | [**\_\_OS\_INTERRUPT\_EXI\_1\_TC**](_o_s_interrupt_8h.md#define-__os_interrupt_exi_1_tc)  `13`<br> |
| define  | [**\_\_OS\_INTERRUPT\_EXI\_2\_EXI**](_o_s_interrupt_8h.md#define-__os_interrupt_exi_2_exi)  `15`<br> |
| define  | [**\_\_OS\_INTERRUPT\_EXI\_2\_TC**](_o_s_interrupt_8h.md#define-__os_interrupt_exi_2_tc)  `16`<br> |
| define  | [**\_\_OS\_INTERRUPT\_MAX**](_o_s_interrupt_8h.md#define-__os_interrupt_max)  `32`<br> |
| define  | [**\_\_OS\_INTERRUPT\_MEM\_0**](_o_s_interrupt_8h.md#define-__os_interrupt_mem_0)  `0`<br> |
| define  | [**\_\_OS\_INTERRUPT\_MEM\_1**](_o_s_interrupt_8h.md#define-__os_interrupt_mem_1)  `1`<br> |
| define  | [**\_\_OS\_INTERRUPT\_MEM\_2**](_o_s_interrupt_8h.md#define-__os_interrupt_mem_2)  `2`<br> |
| define  | [**\_\_OS\_INTERRUPT\_MEM\_3**](_o_s_interrupt_8h.md#define-__os_interrupt_mem_3)  `3`<br> |
| define  | [**\_\_OS\_INTERRUPT\_MEM\_ADDRESS**](_o_s_interrupt_8h.md#define-__os_interrupt_mem_address)  `4`<br> |
| define  | [**\_\_OS\_INTERRUPT\_PI\_CP**](_o_s_interrupt_8h.md#define-__os_interrupt_pi_cp)  `17`<br> |
| define  | [**\_\_OS\_INTERRUPT\_PI\_DEBUG**](_o_s_interrupt_8h.md#define-__os_interrupt_pi_debug)  `25`<br> |
| define  | [**\_\_OS\_INTERRUPT\_PI\_DI**](_o_s_interrupt_8h.md#define-__os_interrupt_pi_di)  `21`<br> |
| define  | [**\_\_OS\_INTERRUPT\_PI\_ERROR**](_o_s_interrupt_8h.md#define-__os_interrupt_pi_error)  `23`<br> |
| define  | [**\_\_OS\_INTERRUPT\_PI\_HSP**](_o_s_interrupt_8h.md#define-__os_interrupt_pi_hsp)  `26`<br> |
| define  | [**\_\_OS\_INTERRUPT\_PI\_PE\_FINISH**](_o_s_interrupt_8h.md#define-__os_interrupt_pi_pe_finish)  `19`<br> |
| define  | [**\_\_OS\_INTERRUPT\_PI\_PE\_TOKEN**](_o_s_interrupt_8h.md#define-__os_interrupt_pi_pe_token)  `18`<br> |
| define  | [**\_\_OS\_INTERRUPT\_PI\_RSW**](_o_s_interrupt_8h.md#define-__os_interrupt_pi_rsw)  `22`<br> |
| define  | [**\_\_OS\_INTERRUPT\_PI\_SI**](_o_s_interrupt_8h.md#define-__os_interrupt_pi_si)  `20`<br> |
| define  | [**\_\_OS\_INTERRUPT\_PI\_VI**](_o_s_interrupt_8h.md#define-__os_interrupt_pi_vi)  `24`<br> |

## Public Types Documentation




### typedef OSInterruptMask 

```C++
typedef u32 OSInterruptMask;
```




<hr>



### typedef \_\_OSInterrupt 

```C++
typedef s16 __OSInterrupt;
```




<hr>



### typedef \_\_OSInterruptHandler 

```C++
typedef void(* __OSInterruptHandler) (__OSInterrupt interrupt, OSContext *context);
```




<hr>
## Public Attributes Documentation




### variable \_\_OSLastInterrupt 

```C++
volatile __OSInterrupt __OSLastInterrupt;
```




<hr>



### variable \_\_OSLastInterruptSrr0 

```C++
volatile u32 __OSLastInterruptSrr0;
```




<hr>



### variable \_\_OSLastInterruptTime 

```C++
volatile OSTime __OSLastInterruptTime;
```




<hr>
## Public Functions Documentation




### function OSGetInterruptMask 

```C++
OSInterruptMask OSGetInterruptMask (
    void
) 
```




<hr>



### function OSSetInterruptMask 

```C++
OSInterruptMask OSSetInterruptMask (
    OSInterruptMask mask
) 
```




<hr>



### function \_\_OSDispatchInterrupt 

```C++
void __OSDispatchInterrupt (
    __OSException exception,
    OSContext * context
) 
```




<hr>



### function \_\_OSGetInterruptHandler 

```C++
__OSInterruptHandler __OSGetInterruptHandler (
    __OSInterrupt interrupt
) 
```




<hr>



### function \_\_OSMaskInterrupts 

```C++
OSInterruptMask __OSMaskInterrupts (
    OSInterruptMask mask
) 
```




<hr>



### function \_\_OSSetInterruptHandler 

```C++
__OSInterruptHandler __OSSetInterruptHandler (
    __OSInterrupt interrupt,
    __OSInterruptHandler handler
) 
```




<hr>



### function \_\_OSUnmaskInterrupts 

```C++
OSInterruptMask __OSUnmaskInterrupts (
    OSInterruptMask mask
) 
```




<hr>
## Macro Definition Documentation





### define OS\_INTERRUPTMASK 

```C++
#define OS_INTERRUPTMASK (
    interrupt
) `(0x80000000u >> ( interrupt ))`
```




<hr>



### define OS\_INTERRUPTMASK\_AI 

```C++
#define OS_INTERRUPTMASK_AI `( OS_INTERRUPTMASK_AI_AI )`
```




<hr>



### define OS\_INTERRUPTMASK\_AI\_AI 

```C++
#define OS_INTERRUPTMASK_AI_AI `OS_INTERRUPTMASK ( __OS_INTERRUPT_AI_AI )`
```




<hr>



### define OS\_INTERRUPTMASK\_DSP 

```C++
#define OS_INTERRUPTMASK_DSP `( OS_INTERRUPTMASK_DSP_AI | OS_INTERRUPTMASK_DSP_ARAM | OS_INTERRUPTMASK_DSP_DSP )`
```




<hr>



### define OS\_INTERRUPTMASK\_DSP\_AI 

```C++
#define OS_INTERRUPTMASK_DSP_AI `OS_INTERRUPTMASK ( __OS_INTERRUPT_DSP_AI )`
```




<hr>



### define OS\_INTERRUPTMASK\_DSP\_ARAM 

```C++
#define OS_INTERRUPTMASK_DSP_ARAM `OS_INTERRUPTMASK ( __OS_INTERRUPT_DSP_ARAM )`
```




<hr>



### define OS\_INTERRUPTMASK\_DSP\_DSP 

```C++
#define OS_INTERRUPTMASK_DSP_DSP `OS_INTERRUPTMASK ( __OS_INTERRUPT_DSP_DSP )`
```




<hr>



### define OS\_INTERRUPTMASK\_EXI 

```C++
#define OS_INTERRUPTMASK_EXI `( OS_INTERRUPTMASK_EXI_0_EXI | OS_INTERRUPTMASK_EXI_0_TC | OS_INTERRUPTMASK_EXI_0_EXT |         \ OS_INTERRUPTMASK_EXI_1_EXI | OS_INTERRUPTMASK_EXI_1_TC | OS_INTERRUPTMASK_EXI_1_EXT |         \ OS_INTERRUPTMASK_EXI_2_EXI | OS_INTERRUPTMASK_EXI_2_TC )`
```




<hr>



### define OS\_INTERRUPTMASK\_EXI\_0 

```C++
#define OS_INTERRUPTMASK_EXI_0 `( OS_INTERRUPTMASK_EXI_0_EXI | OS_INTERRUPTMASK_EXI_0_TC | OS_INTERRUPTMASK_EXI_0_EXT )`
```




<hr>



### define OS\_INTERRUPTMASK\_EXI\_0\_EXI 

```C++
#define OS_INTERRUPTMASK_EXI_0_EXI `OS_INTERRUPTMASK ( __OS_INTERRUPT_EXI_0_EXI )`
```




<hr>



### define OS\_INTERRUPTMASK\_EXI\_0\_EXT 

```C++
#define OS_INTERRUPTMASK_EXI_0_EXT `OS_INTERRUPTMASK ( __OS_INTERRUPT_EXI_0_EXT )`
```




<hr>



### define OS\_INTERRUPTMASK\_EXI\_0\_TC 

```C++
#define OS_INTERRUPTMASK_EXI_0_TC `OS_INTERRUPTMASK ( __OS_INTERRUPT_EXI_0_TC )`
```




<hr>



### define OS\_INTERRUPTMASK\_EXI\_1 

```C++
#define OS_INTERRUPTMASK_EXI_1 `( OS_INTERRUPTMASK_EXI_1_EXI | OS_INTERRUPTMASK_EXI_1_TC | OS_INTERRUPTMASK_EXI_1_EXT )`
```




<hr>



### define OS\_INTERRUPTMASK\_EXI\_1\_EXI 

```C++
#define OS_INTERRUPTMASK_EXI_1_EXI `OS_INTERRUPTMASK ( __OS_INTERRUPT_EXI_1_EXI )`
```




<hr>



### define OS\_INTERRUPTMASK\_EXI\_1\_EXT 

```C++
#define OS_INTERRUPTMASK_EXI_1_EXT `OS_INTERRUPTMASK ( __OS_INTERRUPT_EXI_1_EXT )`
```




<hr>



### define OS\_INTERRUPTMASK\_EXI\_1\_TC 

```C++
#define OS_INTERRUPTMASK_EXI_1_TC `OS_INTERRUPTMASK ( __OS_INTERRUPT_EXI_1_TC )`
```




<hr>



### define OS\_INTERRUPTMASK\_EXI\_2 

```C++
#define OS_INTERRUPTMASK_EXI_2 `( OS_INTERRUPTMASK_EXI_2_EXI | OS_INTERRUPTMASK_EXI_2_TC )`
```




<hr>



### define OS\_INTERRUPTMASK\_EXI\_2\_EXI 

```C++
#define OS_INTERRUPTMASK_EXI_2_EXI `OS_INTERRUPTMASK ( __OS_INTERRUPT_EXI_2_EXI )`
```




<hr>



### define OS\_INTERRUPTMASK\_EXI\_2\_TC 

```C++
#define OS_INTERRUPTMASK_EXI_2_TC `OS_INTERRUPTMASK ( __OS_INTERRUPT_EXI_2_TC )`
```




<hr>



### define OS\_INTERRUPTMASK\_MEM 

```C++
#define OS_INTERRUPTMASK_MEM `( OS_INTERRUPTMASK_MEM_0 | OS_INTERRUPTMASK_MEM_1 | OS_INTERRUPTMASK_MEM_2 |                    \ OS_INTERRUPTMASK_MEM_3 | OS_INTERRUPTMASK_MEM_ADDRESS )`
```




<hr>



### define OS\_INTERRUPTMASK\_MEM\_0 

```C++
#define OS_INTERRUPTMASK_MEM_0 `OS_INTERRUPTMASK ( __OS_INTERRUPT_MEM_0 )`
```




<hr>



### define OS\_INTERRUPTMASK\_MEM\_1 

```C++
#define OS_INTERRUPTMASK_MEM_1 `OS_INTERRUPTMASK ( __OS_INTERRUPT_MEM_1 )`
```




<hr>



### define OS\_INTERRUPTMASK\_MEM\_2 

```C++
#define OS_INTERRUPTMASK_MEM_2 `OS_INTERRUPTMASK ( __OS_INTERRUPT_MEM_2 )`
```




<hr>



### define OS\_INTERRUPTMASK\_MEM\_3 

```C++
#define OS_INTERRUPTMASK_MEM_3 `OS_INTERRUPTMASK ( __OS_INTERRUPT_MEM_3 )`
```




<hr>



### define OS\_INTERRUPTMASK\_MEM\_ADDRESS 

```C++
#define OS_INTERRUPTMASK_MEM_ADDRESS `OS_INTERRUPTMASK ( __OS_INTERRUPT_MEM_ADDRESS )`
```




<hr>



### define OS\_INTERRUPTMASK\_PI 

```C++
#define OS_INTERRUPTMASK_PI `( OS_INTERRUPTMASK_PI_CP | OS_INTERRUPTMASK_PI_SI | OS_INTERRUPTMASK_PI_DI |                    \ OS_INTERRUPTMASK_PI_RSW | OS_INTERRUPTMASK_PI_ERROR | OS_INTERRUPTMASK_PI_VI |                \ OS_INTERRUPTMASK_PI_PE_TOKEN | OS_INTERRUPTMASK_PI_PE_FINISH | OS_INTERRUPTMASK_PI_DEBUG |    \ OS_INTERRUPTMASK_PI_HSP )`
```




<hr>



### define OS\_INTERRUPTMASK\_PI\_CP 

```C++
#define OS_INTERRUPTMASK_PI_CP `OS_INTERRUPTMASK ( __OS_INTERRUPT_PI_CP )`
```




<hr>



### define OS\_INTERRUPTMASK\_PI\_DEBUG 

```C++
#define OS_INTERRUPTMASK_PI_DEBUG `OS_INTERRUPTMASK ( __OS_INTERRUPT_PI_DEBUG )`
```




<hr>



### define OS\_INTERRUPTMASK\_PI\_DI 

```C++
#define OS_INTERRUPTMASK_PI_DI `OS_INTERRUPTMASK ( __OS_INTERRUPT_PI_DI )`
```




<hr>



### define OS\_INTERRUPTMASK\_PI\_ERROR 

```C++
#define OS_INTERRUPTMASK_PI_ERROR `OS_INTERRUPTMASK ( __OS_INTERRUPT_PI_ERROR )`
```




<hr>



### define OS\_INTERRUPTMASK\_PI\_HSP 

```C++
#define OS_INTERRUPTMASK_PI_HSP `OS_INTERRUPTMASK ( __OS_INTERRUPT_PI_HSP )`
```




<hr>



### define OS\_INTERRUPTMASK\_PI\_PE 

```C++
#define OS_INTERRUPTMASK_PI_PE `( OS_INTERRUPTMASK_PI_PE_TOKEN | OS_INTERRUPTMASK_PI_PE_FINISH )`
```




<hr>



### define OS\_INTERRUPTMASK\_PI\_PE\_FINISH 

```C++
#define OS_INTERRUPTMASK_PI_PE_FINISH `OS_INTERRUPTMASK ( __OS_INTERRUPT_PI_PE_FINISH )`
```




<hr>



### define OS\_INTERRUPTMASK\_PI\_PE\_TOKEN 

```C++
#define OS_INTERRUPTMASK_PI_PE_TOKEN `OS_INTERRUPTMASK ( __OS_INTERRUPT_PI_PE_TOKEN )`
```




<hr>



### define OS\_INTERRUPTMASK\_PI\_RSW 

```C++
#define OS_INTERRUPTMASK_PI_RSW `OS_INTERRUPTMASK ( __OS_INTERRUPT_PI_RSW )`
```




<hr>



### define OS\_INTERRUPTMASK\_PI\_SI 

```C++
#define OS_INTERRUPTMASK_PI_SI `OS_INTERRUPTMASK ( __OS_INTERRUPT_PI_SI )`
```




<hr>



### define OS\_INTERRUPTMASK\_PI\_VI 

```C++
#define OS_INTERRUPTMASK_PI_VI `OS_INTERRUPTMASK ( __OS_INTERRUPT_PI_VI )`
```




<hr>



### define \_\_OS\_INTERRUPT\_AI\_AI 

```C++
#define __OS_INTERRUPT_AI_AI `8`
```




<hr>



### define \_\_OS\_INTERRUPT\_DSP\_AI 

```C++
#define __OS_INTERRUPT_DSP_AI `5`
```




<hr>



### define \_\_OS\_INTERRUPT\_DSP\_ARAM 

```C++
#define __OS_INTERRUPT_DSP_ARAM `6`
```




<hr>



### define \_\_OS\_INTERRUPT\_DSP\_DSP 

```C++
#define __OS_INTERRUPT_DSP_DSP `7`
```




<hr>



### define \_\_OS\_INTERRUPT\_EXI\_0\_EXI 

```C++
#define __OS_INTERRUPT_EXI_0_EXI `9`
```




<hr>



### define \_\_OS\_INTERRUPT\_EXI\_0\_EXT 

```C++
#define __OS_INTERRUPT_EXI_0_EXT `11`
```




<hr>



### define \_\_OS\_INTERRUPT\_EXI\_0\_TC 

```C++
#define __OS_INTERRUPT_EXI_0_TC `10`
```




<hr>



### define \_\_OS\_INTERRUPT\_EXI\_1\_EXI 

```C++
#define __OS_INTERRUPT_EXI_1_EXI `12`
```




<hr>



### define \_\_OS\_INTERRUPT\_EXI\_1\_EXT 

```C++
#define __OS_INTERRUPT_EXI_1_EXT `14`
```




<hr>



### define \_\_OS\_INTERRUPT\_EXI\_1\_TC 

```C++
#define __OS_INTERRUPT_EXI_1_TC `13`
```




<hr>



### define \_\_OS\_INTERRUPT\_EXI\_2\_EXI 

```C++
#define __OS_INTERRUPT_EXI_2_EXI `15`
```




<hr>



### define \_\_OS\_INTERRUPT\_EXI\_2\_TC 

```C++
#define __OS_INTERRUPT_EXI_2_TC `16`
```




<hr>



### define \_\_OS\_INTERRUPT\_MAX 

```C++
#define __OS_INTERRUPT_MAX `32`
```




<hr>



### define \_\_OS\_INTERRUPT\_MEM\_0 

```C++
#define __OS_INTERRUPT_MEM_0 `0`
```




<hr>



### define \_\_OS\_INTERRUPT\_MEM\_1 

```C++
#define __OS_INTERRUPT_MEM_1 `1`
```




<hr>



### define \_\_OS\_INTERRUPT\_MEM\_2 

```C++
#define __OS_INTERRUPT_MEM_2 `2`
```




<hr>



### define \_\_OS\_INTERRUPT\_MEM\_3 

```C++
#define __OS_INTERRUPT_MEM_3 `3`
```




<hr>



### define \_\_OS\_INTERRUPT\_MEM\_ADDRESS 

```C++
#define __OS_INTERRUPT_MEM_ADDRESS `4`
```




<hr>



### define \_\_OS\_INTERRUPT\_PI\_CP 

```C++
#define __OS_INTERRUPT_PI_CP `17`
```




<hr>



### define \_\_OS\_INTERRUPT\_PI\_DEBUG 

```C++
#define __OS_INTERRUPT_PI_DEBUG `25`
```




<hr>



### define \_\_OS\_INTERRUPT\_PI\_DI 

```C++
#define __OS_INTERRUPT_PI_DI `21`
```




<hr>



### define \_\_OS\_INTERRUPT\_PI\_ERROR 

```C++
#define __OS_INTERRUPT_PI_ERROR `23`
```




<hr>



### define \_\_OS\_INTERRUPT\_PI\_HSP 

```C++
#define __OS_INTERRUPT_PI_HSP `26`
```




<hr>



### define \_\_OS\_INTERRUPT\_PI\_PE\_FINISH 

```C++
#define __OS_INTERRUPT_PI_PE_FINISH `19`
```




<hr>



### define \_\_OS\_INTERRUPT\_PI\_PE\_TOKEN 

```C++
#define __OS_INTERRUPT_PI_PE_TOKEN `18`
```




<hr>



### define \_\_OS\_INTERRUPT\_PI\_RSW 

```C++
#define __OS_INTERRUPT_PI_RSW `22`
```




<hr>



### define \_\_OS\_INTERRUPT\_PI\_SI 

```C++
#define __OS_INTERRUPT_PI_SI `20`
```




<hr>



### define \_\_OS\_INTERRUPT\_PI\_VI 

```C++
#define __OS_INTERRUPT_PI_VI `24`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/os/OSInterrupt.h`

