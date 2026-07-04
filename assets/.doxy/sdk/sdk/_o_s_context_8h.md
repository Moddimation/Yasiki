

# File OSContext.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**os**](dir_2e13e6cf1d2e2aa91cbc210fef9f68a3.md) **>** [**OSContext.h**](_o_s_context_8h.md)

[Go to the source code of this file](_o_s_context_8h_source.md)



* `#include <types.h>`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**OSContext**](struct_o_s_context.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSContext**](struct_o_s_context.md) | [**OSContext**](#typedef-oscontext)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSClearContext**](#function-osclearcontext) ([**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSDumpContext**](#function-osdumpcontext) ([**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSFillFPUContext**](#function-osfillfpucontext) ([**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**OSContext**](struct_o_s_context.md) \* | [**OSGetCurrentContext**](#function-osgetcurrentcontext) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**OSGetStackPointer**](#function-osgetstackpointer) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSInitContext**](#function-osinitcontext) ([**OSContext**](struct_o_s_context.md) \* context, [**u32**](types_8h.md#typedef-u32) pc, [**u32**](types_8h.md#typedef-u32) newsp) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSLoadContext**](#function-osloadcontext) ([**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSLoadFPUContext**](#function-osloadfpucontext) ([**OSContext**](struct_o_s_context.md) \* fpuContext) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**OSSaveContext**](#function-ossavecontext) ([**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSSaveFPUContext**](#function-ossavefpucontext) ([**OSContext**](struct_o_s_context.md) \* fpuContext) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSSetCurrentContext**](#function-ossetcurrentcontext) ([**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSSwitchFiber**](#function-osswitchfiber) ([**u32**](types_8h.md#typedef-u32) pc, [**u32**](types_8h.md#typedef-u32) newsp) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**OSSwitchStack**](#function-osswitchstack) ([**u32**](types_8h.md#typedef-u32) newsp) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**OS\_CONTEXT\_CR**](_o_s_context_8h.md#define-os_context_cr)  `128`<br> |
| define  | [**OS\_CONTEXT\_CTR**](_o_s_context_8h.md#define-os_context_ctr)  `136`<br> |
| define  | [**OS\_CONTEXT\_FPR0**](_o_s_context_8h.md#define-os_context_fpr0)  `144`<br> |
| define  | [**OS\_CONTEXT\_FPR1**](_o_s_context_8h.md#define-os_context_fpr1)  `152`<br> |
| define  | [**OS\_CONTEXT\_FPR10**](_o_s_context_8h.md#define-os_context_fpr10)  `224`<br> |
| define  | [**OS\_CONTEXT\_FPR11**](_o_s_context_8h.md#define-os_context_fpr11)  `232`<br> |
| define  | [**OS\_CONTEXT\_FPR12**](_o_s_context_8h.md#define-os_context_fpr12)  `240`<br> |
| define  | [**OS\_CONTEXT\_FPR13**](_o_s_context_8h.md#define-os_context_fpr13)  `248`<br> |
| define  | [**OS\_CONTEXT\_FPR14**](_o_s_context_8h.md#define-os_context_fpr14)  `256`<br> |
| define  | [**OS\_CONTEXT\_FPR15**](_o_s_context_8h.md#define-os_context_fpr15)  `264`<br> |
| define  | [**OS\_CONTEXT\_FPR16**](_o_s_context_8h.md#define-os_context_fpr16)  `272`<br> |
| define  | [**OS\_CONTEXT\_FPR17**](_o_s_context_8h.md#define-os_context_fpr17)  `280`<br> |
| define  | [**OS\_CONTEXT\_FPR18**](_o_s_context_8h.md#define-os_context_fpr18)  `288`<br> |
| define  | [**OS\_CONTEXT\_FPR19**](_o_s_context_8h.md#define-os_context_fpr19)  `296`<br> |
| define  | [**OS\_CONTEXT\_FPR2**](_o_s_context_8h.md#define-os_context_fpr2)  `160`<br> |
| define  | [**OS\_CONTEXT\_FPR20**](_o_s_context_8h.md#define-os_context_fpr20)  `304`<br> |
| define  | [**OS\_CONTEXT\_FPR21**](_o_s_context_8h.md#define-os_context_fpr21)  `312`<br> |
| define  | [**OS\_CONTEXT\_FPR22**](_o_s_context_8h.md#define-os_context_fpr22)  `320`<br> |
| define  | [**OS\_CONTEXT\_FPR23**](_o_s_context_8h.md#define-os_context_fpr23)  `328`<br> |
| define  | [**OS\_CONTEXT\_FPR24**](_o_s_context_8h.md#define-os_context_fpr24)  `336`<br> |
| define  | [**OS\_CONTEXT\_FPR25**](_o_s_context_8h.md#define-os_context_fpr25)  `344`<br> |
| define  | [**OS\_CONTEXT\_FPR26**](_o_s_context_8h.md#define-os_context_fpr26)  `352`<br> |
| define  | [**OS\_CONTEXT\_FPR27**](_o_s_context_8h.md#define-os_context_fpr27)  `360`<br> |
| define  | [**OS\_CONTEXT\_FPR28**](_o_s_context_8h.md#define-os_context_fpr28)  `368`<br> |
| define  | [**OS\_CONTEXT\_FPR29**](_o_s_context_8h.md#define-os_context_fpr29)  `376`<br> |
| define  | [**OS\_CONTEXT\_FPR3**](_o_s_context_8h.md#define-os_context_fpr3)  `168`<br> |
| define  | [**OS\_CONTEXT\_FPR30**](_o_s_context_8h.md#define-os_context_fpr30)  `384`<br> |
| define  | [**OS\_CONTEXT\_FPR31**](_o_s_context_8h.md#define-os_context_fpr31)  `392`<br> |
| define  | [**OS\_CONTEXT\_FPR4**](_o_s_context_8h.md#define-os_context_fpr4)  `176`<br> |
| define  | [**OS\_CONTEXT\_FPR5**](_o_s_context_8h.md#define-os_context_fpr5)  `184`<br> |
| define  | [**OS\_CONTEXT\_FPR6**](_o_s_context_8h.md#define-os_context_fpr6)  `192`<br> |
| define  | [**OS\_CONTEXT\_FPR7**](_o_s_context_8h.md#define-os_context_fpr7)  `200`<br> |
| define  | [**OS\_CONTEXT\_FPR8**](_o_s_context_8h.md#define-os_context_fpr8)  `208`<br> |
| define  | [**OS\_CONTEXT\_FPR9**](_o_s_context_8h.md#define-os_context_fpr9)  `216`<br> |
| define  | [**OS\_CONTEXT\_FPSCR**](_o_s_context_8h.md#define-os_context_fpscr)  `400`<br> |
| define  | [**OS\_CONTEXT\_GQR0**](_o_s_context_8h.md#define-os_context_gqr0)  `420`<br> |
| define  | [**OS\_CONTEXT\_GQR1**](_o_s_context_8h.md#define-os_context_gqr1)  `424`<br> |
| define  | [**OS\_CONTEXT\_GQR2**](_o_s_context_8h.md#define-os_context_gqr2)  `428`<br> |
| define  | [**OS\_CONTEXT\_GQR3**](_o_s_context_8h.md#define-os_context_gqr3)  `432`<br> |
| define  | [**OS\_CONTEXT\_GQR4**](_o_s_context_8h.md#define-os_context_gqr4)  `436`<br> |
| define  | [**OS\_CONTEXT\_GQR5**](_o_s_context_8h.md#define-os_context_gqr5)  `440`<br> |
| define  | [**OS\_CONTEXT\_GQR6**](_o_s_context_8h.md#define-os_context_gqr6)  `444`<br> |
| define  | [**OS\_CONTEXT\_GQR7**](_o_s_context_8h.md#define-os_context_gqr7)  `448`<br> |
| define  | [**OS\_CONTEXT\_LR**](_o_s_context_8h.md#define-os_context_lr)  `132`<br> |
| define  | [**OS\_CONTEXT\_MODE**](_o_s_context_8h.md#define-os_context_mode)  `416`<br> |
| define  | [**OS\_CONTEXT\_PSF0**](_o_s_context_8h.md#define-os_context_psf0)  `456`<br> |
| define  | [**OS\_CONTEXT\_PSF1**](_o_s_context_8h.md#define-os_context_psf1)  `464`<br> |
| define  | [**OS\_CONTEXT\_PSF10**](_o_s_context_8h.md#define-os_context_psf10)  `536`<br> |
| define  | [**OS\_CONTEXT\_PSF11**](_o_s_context_8h.md#define-os_context_psf11)  `544`<br> |
| define  | [**OS\_CONTEXT\_PSF12**](_o_s_context_8h.md#define-os_context_psf12)  `552`<br> |
| define  | [**OS\_CONTEXT\_PSF13**](_o_s_context_8h.md#define-os_context_psf13)  `560`<br> |
| define  | [**OS\_CONTEXT\_PSF14**](_o_s_context_8h.md#define-os_context_psf14)  `568`<br> |
| define  | [**OS\_CONTEXT\_PSF15**](_o_s_context_8h.md#define-os_context_psf15)  `576`<br> |
| define  | [**OS\_CONTEXT\_PSF16**](_o_s_context_8h.md#define-os_context_psf16)  `584`<br> |
| define  | [**OS\_CONTEXT\_PSF17**](_o_s_context_8h.md#define-os_context_psf17)  `592`<br> |
| define  | [**OS\_CONTEXT\_PSF18**](_o_s_context_8h.md#define-os_context_psf18)  `600`<br> |
| define  | [**OS\_CONTEXT\_PSF19**](_o_s_context_8h.md#define-os_context_psf19)  `608`<br> |
| define  | [**OS\_CONTEXT\_PSF2**](_o_s_context_8h.md#define-os_context_psf2)  `472`<br> |
| define  | [**OS\_CONTEXT\_PSF20**](_o_s_context_8h.md#define-os_context_psf20)  `616`<br> |
| define  | [**OS\_CONTEXT\_PSF21**](_o_s_context_8h.md#define-os_context_psf21)  `624`<br> |
| define  | [**OS\_CONTEXT\_PSF22**](_o_s_context_8h.md#define-os_context_psf22)  `632`<br> |
| define  | [**OS\_CONTEXT\_PSF23**](_o_s_context_8h.md#define-os_context_psf23)  `640`<br> |
| define  | [**OS\_CONTEXT\_PSF24**](_o_s_context_8h.md#define-os_context_psf24)  `648`<br> |
| define  | [**OS\_CONTEXT\_PSF25**](_o_s_context_8h.md#define-os_context_psf25)  `656`<br> |
| define  | [**OS\_CONTEXT\_PSF26**](_o_s_context_8h.md#define-os_context_psf26)  `664`<br> |
| define  | [**OS\_CONTEXT\_PSF27**](_o_s_context_8h.md#define-os_context_psf27)  `672`<br> |
| define  | [**OS\_CONTEXT\_PSF28**](_o_s_context_8h.md#define-os_context_psf28)  `680`<br> |
| define  | [**OS\_CONTEXT\_PSF29**](_o_s_context_8h.md#define-os_context_psf29)  `688`<br> |
| define  | [**OS\_CONTEXT\_PSF3**](_o_s_context_8h.md#define-os_context_psf3)  `480`<br> |
| define  | [**OS\_CONTEXT\_PSF30**](_o_s_context_8h.md#define-os_context_psf30)  `696`<br> |
| define  | [**OS\_CONTEXT\_PSF31**](_o_s_context_8h.md#define-os_context_psf31)  `704`<br> |
| define  | [**OS\_CONTEXT\_PSF4**](_o_s_context_8h.md#define-os_context_psf4)  `488`<br> |
| define  | [**OS\_CONTEXT\_PSF5**](_o_s_context_8h.md#define-os_context_psf5)  `496`<br> |
| define  | [**OS\_CONTEXT\_PSF6**](_o_s_context_8h.md#define-os_context_psf6)  `504`<br> |
| define  | [**OS\_CONTEXT\_PSF7**](_o_s_context_8h.md#define-os_context_psf7)  `512`<br> |
| define  | [**OS\_CONTEXT\_PSF8**](_o_s_context_8h.md#define-os_context_psf8)  `520`<br> |
| define  | [**OS\_CONTEXT\_PSF9**](_o_s_context_8h.md#define-os_context_psf9)  `528`<br> |
| define  | [**OS\_CONTEXT\_R0**](_o_s_context_8h.md#define-os_context_r0)  `0`<br> |
| define  | [**OS\_CONTEXT\_R1**](_o_s_context_8h.md#define-os_context_r1)  `4`<br> |
| define  | [**OS\_CONTEXT\_R10**](_o_s_context_8h.md#define-os_context_r10)  `40`<br> |
| define  | [**OS\_CONTEXT\_R11**](_o_s_context_8h.md#define-os_context_r11)  `44`<br> |
| define  | [**OS\_CONTEXT\_R12**](_o_s_context_8h.md#define-os_context_r12)  `48`<br> |
| define  | [**OS\_CONTEXT\_R13**](_o_s_context_8h.md#define-os_context_r13)  `52`<br> |
| define  | [**OS\_CONTEXT\_R14**](_o_s_context_8h.md#define-os_context_r14)  `56`<br> |
| define  | [**OS\_CONTEXT\_R15**](_o_s_context_8h.md#define-os_context_r15)  `60`<br> |
| define  | [**OS\_CONTEXT\_R16**](_o_s_context_8h.md#define-os_context_r16)  `64`<br> |
| define  | [**OS\_CONTEXT\_R17**](_o_s_context_8h.md#define-os_context_r17)  `68`<br> |
| define  | [**OS\_CONTEXT\_R18**](_o_s_context_8h.md#define-os_context_r18)  `72`<br> |
| define  | [**OS\_CONTEXT\_R19**](_o_s_context_8h.md#define-os_context_r19)  `76`<br> |
| define  | [**OS\_CONTEXT\_R2**](_o_s_context_8h.md#define-os_context_r2)  `8`<br> |
| define  | [**OS\_CONTEXT\_R20**](_o_s_context_8h.md#define-os_context_r20)  `80`<br> |
| define  | [**OS\_CONTEXT\_R21**](_o_s_context_8h.md#define-os_context_r21)  `84`<br> |
| define  | [**OS\_CONTEXT\_R22**](_o_s_context_8h.md#define-os_context_r22)  `88`<br> |
| define  | [**OS\_CONTEXT\_R23**](_o_s_context_8h.md#define-os_context_r23)  `92`<br> |
| define  | [**OS\_CONTEXT\_R24**](_o_s_context_8h.md#define-os_context_r24)  `96`<br> |
| define  | [**OS\_CONTEXT\_R25**](_o_s_context_8h.md#define-os_context_r25)  `100`<br> |
| define  | [**OS\_CONTEXT\_R26**](_o_s_context_8h.md#define-os_context_r26)  `104`<br> |
| define  | [**OS\_CONTEXT\_R27**](_o_s_context_8h.md#define-os_context_r27)  `108`<br> |
| define  | [**OS\_CONTEXT\_R28**](_o_s_context_8h.md#define-os_context_r28)  `112`<br> |
| define  | [**OS\_CONTEXT\_R29**](_o_s_context_8h.md#define-os_context_r29)  `116`<br> |
| define  | [**OS\_CONTEXT\_R3**](_o_s_context_8h.md#define-os_context_r3)  `12`<br> |
| define  | [**OS\_CONTEXT\_R30**](_o_s_context_8h.md#define-os_context_r30)  `120`<br> |
| define  | [**OS\_CONTEXT\_R31**](_o_s_context_8h.md#define-os_context_r31)  `124`<br> |
| define  | [**OS\_CONTEXT\_R4**](_o_s_context_8h.md#define-os_context_r4)  `16`<br> |
| define  | [**OS\_CONTEXT\_R5**](_o_s_context_8h.md#define-os_context_r5)  `20`<br> |
| define  | [**OS\_CONTEXT\_R6**](_o_s_context_8h.md#define-os_context_r6)  `24`<br> |
| define  | [**OS\_CONTEXT\_R7**](_o_s_context_8h.md#define-os_context_r7)  `28`<br> |
| define  | [**OS\_CONTEXT\_R8**](_o_s_context_8h.md#define-os_context_r8)  `32`<br> |
| define  | [**OS\_CONTEXT\_R9**](_o_s_context_8h.md#define-os_context_r9)  `36`<br> |
| define  | [**OS\_CONTEXT\_SRR0**](_o_s_context_8h.md#define-os_context_srr0)  `408`<br> |
| define  | [**OS\_CONTEXT\_SRR1**](_o_s_context_8h.md#define-os_context_srr1)  `412`<br> |
| define  | [**OS\_CONTEXT\_STATE**](_o_s_context_8h.md#define-os_context_state)  `418`<br> |
| define  | [**OS\_CONTEXT\_STATE\_EXC**](_o_s_context_8h.md#define-os_context_state_exc)  `0x02u`<br> |
| define  | [**OS\_CONTEXT\_STATE\_FPSAVED**](_o_s_context_8h.md#define-os_context_state_fpsaved)  `0x01u`<br> |
| define  | [**OS\_CONTEXT\_XER**](_o_s_context_8h.md#define-os_context_xer)  `140`<br> |
| define  | [**\_\_OSCONTEXT\_PADDING**](_o_s_context_8h.md#define-__oscontext_padding)  `452`<br> |
| define  | [**\_\_OS\_CONTEXT\_FRAME**](_o_s_context_8h.md#define-__os_context_frame)  `768`<br> |

## Public Types Documentation




### typedef OSContext 

```C++
typedef struct OSContext OSContext;
```




<hr>
## Public Functions Documentation




### function OSClearContext 

```C++
void OSClearContext (
    OSContext * context
) 
```




<hr>



### function OSDumpContext 

```C++
void OSDumpContext (
    OSContext * context
) 
```




<hr>



### function OSFillFPUContext 

```C++
void OSFillFPUContext (
    OSContext * context
) 
```




<hr>



### function OSGetCurrentContext 

```C++
OSContext * OSGetCurrentContext (
    void
) 
```




<hr>



### function OSGetStackPointer 

```C++
u32 OSGetStackPointer (
    void
) 
```




<hr>



### function OSInitContext 

```C++
void OSInitContext (
    OSContext * context,
    u32 pc,
    u32 newsp
) 
```




<hr>



### function OSLoadContext 

```C++
void OSLoadContext (
    OSContext * context
) 
```




<hr>



### function OSLoadFPUContext 

```C++
void OSLoadFPUContext (
    OSContext * fpuContext
) 
```




<hr>



### function OSSaveContext 

```C++
u32 OSSaveContext (
    OSContext * context
) 
```




<hr>



### function OSSaveFPUContext 

```C++
void OSSaveFPUContext (
    OSContext * fpuContext
) 
```




<hr>



### function OSSetCurrentContext 

```C++
void OSSetCurrentContext (
    OSContext * context
) 
```




<hr>



### function OSSwitchFiber 

```C++
int OSSwitchFiber (
    u32 pc,
    u32 newsp
) 
```




<hr>



### function OSSwitchStack 

```C++
u32 OSSwitchStack (
    u32 newsp
) 
```




<hr>
## Macro Definition Documentation





### define OS\_CONTEXT\_CR 

```C++
#define OS_CONTEXT_CR `128`
```




<hr>



### define OS\_CONTEXT\_CTR 

```C++
#define OS_CONTEXT_CTR `136`
```




<hr>



### define OS\_CONTEXT\_FPR0 

```C++
#define OS_CONTEXT_FPR0 `144`
```




<hr>



### define OS\_CONTEXT\_FPR1 

```C++
#define OS_CONTEXT_FPR1 `152`
```




<hr>



### define OS\_CONTEXT\_FPR10 

```C++
#define OS_CONTEXT_FPR10 `224`
```




<hr>



### define OS\_CONTEXT\_FPR11 

```C++
#define OS_CONTEXT_FPR11 `232`
```




<hr>



### define OS\_CONTEXT\_FPR12 

```C++
#define OS_CONTEXT_FPR12 `240`
```




<hr>



### define OS\_CONTEXT\_FPR13 

```C++
#define OS_CONTEXT_FPR13 `248`
```




<hr>



### define OS\_CONTEXT\_FPR14 

```C++
#define OS_CONTEXT_FPR14 `256`
```




<hr>



### define OS\_CONTEXT\_FPR15 

```C++
#define OS_CONTEXT_FPR15 `264`
```




<hr>



### define OS\_CONTEXT\_FPR16 

```C++
#define OS_CONTEXT_FPR16 `272`
```




<hr>



### define OS\_CONTEXT\_FPR17 

```C++
#define OS_CONTEXT_FPR17 `280`
```




<hr>



### define OS\_CONTEXT\_FPR18 

```C++
#define OS_CONTEXT_FPR18 `288`
```




<hr>



### define OS\_CONTEXT\_FPR19 

```C++
#define OS_CONTEXT_FPR19 `296`
```




<hr>



### define OS\_CONTEXT\_FPR2 

```C++
#define OS_CONTEXT_FPR2 `160`
```




<hr>



### define OS\_CONTEXT\_FPR20 

```C++
#define OS_CONTEXT_FPR20 `304`
```




<hr>



### define OS\_CONTEXT\_FPR21 

```C++
#define OS_CONTEXT_FPR21 `312`
```




<hr>



### define OS\_CONTEXT\_FPR22 

```C++
#define OS_CONTEXT_FPR22 `320`
```




<hr>



### define OS\_CONTEXT\_FPR23 

```C++
#define OS_CONTEXT_FPR23 `328`
```




<hr>



### define OS\_CONTEXT\_FPR24 

```C++
#define OS_CONTEXT_FPR24 `336`
```




<hr>



### define OS\_CONTEXT\_FPR25 

```C++
#define OS_CONTEXT_FPR25 `344`
```




<hr>



### define OS\_CONTEXT\_FPR26 

```C++
#define OS_CONTEXT_FPR26 `352`
```




<hr>



### define OS\_CONTEXT\_FPR27 

```C++
#define OS_CONTEXT_FPR27 `360`
```




<hr>



### define OS\_CONTEXT\_FPR28 

```C++
#define OS_CONTEXT_FPR28 `368`
```




<hr>



### define OS\_CONTEXT\_FPR29 

```C++
#define OS_CONTEXT_FPR29 `376`
```




<hr>



### define OS\_CONTEXT\_FPR3 

```C++
#define OS_CONTEXT_FPR3 `168`
```




<hr>



### define OS\_CONTEXT\_FPR30 

```C++
#define OS_CONTEXT_FPR30 `384`
```




<hr>



### define OS\_CONTEXT\_FPR31 

```C++
#define OS_CONTEXT_FPR31 `392`
```




<hr>



### define OS\_CONTEXT\_FPR4 

```C++
#define OS_CONTEXT_FPR4 `176`
```




<hr>



### define OS\_CONTEXT\_FPR5 

```C++
#define OS_CONTEXT_FPR5 `184`
```




<hr>



### define OS\_CONTEXT\_FPR6 

```C++
#define OS_CONTEXT_FPR6 `192`
```




<hr>



### define OS\_CONTEXT\_FPR7 

```C++
#define OS_CONTEXT_FPR7 `200`
```




<hr>



### define OS\_CONTEXT\_FPR8 

```C++
#define OS_CONTEXT_FPR8 `208`
```




<hr>



### define OS\_CONTEXT\_FPR9 

```C++
#define OS_CONTEXT_FPR9 `216`
```




<hr>



### define OS\_CONTEXT\_FPSCR 

```C++
#define OS_CONTEXT_FPSCR `400`
```




<hr>



### define OS\_CONTEXT\_GQR0 

```C++
#define OS_CONTEXT_GQR0 `420`
```




<hr>



### define OS\_CONTEXT\_GQR1 

```C++
#define OS_CONTEXT_GQR1 `424`
```




<hr>



### define OS\_CONTEXT\_GQR2 

```C++
#define OS_CONTEXT_GQR2 `428`
```




<hr>



### define OS\_CONTEXT\_GQR3 

```C++
#define OS_CONTEXT_GQR3 `432`
```




<hr>



### define OS\_CONTEXT\_GQR4 

```C++
#define OS_CONTEXT_GQR4 `436`
```




<hr>



### define OS\_CONTEXT\_GQR5 

```C++
#define OS_CONTEXT_GQR5 `440`
```




<hr>



### define OS\_CONTEXT\_GQR6 

```C++
#define OS_CONTEXT_GQR6 `444`
```




<hr>



### define OS\_CONTEXT\_GQR7 

```C++
#define OS_CONTEXT_GQR7 `448`
```




<hr>



### define OS\_CONTEXT\_LR 

```C++
#define OS_CONTEXT_LR `132`
```




<hr>



### define OS\_CONTEXT\_MODE 

```C++
#define OS_CONTEXT_MODE `416`
```




<hr>



### define OS\_CONTEXT\_PSF0 

```C++
#define OS_CONTEXT_PSF0 `456`
```




<hr>



### define OS\_CONTEXT\_PSF1 

```C++
#define OS_CONTEXT_PSF1 `464`
```




<hr>



### define OS\_CONTEXT\_PSF10 

```C++
#define OS_CONTEXT_PSF10 `536`
```




<hr>



### define OS\_CONTEXT\_PSF11 

```C++
#define OS_CONTEXT_PSF11 `544`
```




<hr>



### define OS\_CONTEXT\_PSF12 

```C++
#define OS_CONTEXT_PSF12 `552`
```




<hr>



### define OS\_CONTEXT\_PSF13 

```C++
#define OS_CONTEXT_PSF13 `560`
```




<hr>



### define OS\_CONTEXT\_PSF14 

```C++
#define OS_CONTEXT_PSF14 `568`
```




<hr>



### define OS\_CONTEXT\_PSF15 

```C++
#define OS_CONTEXT_PSF15 `576`
```




<hr>



### define OS\_CONTEXT\_PSF16 

```C++
#define OS_CONTEXT_PSF16 `584`
```




<hr>



### define OS\_CONTEXT\_PSF17 

```C++
#define OS_CONTEXT_PSF17 `592`
```




<hr>



### define OS\_CONTEXT\_PSF18 

```C++
#define OS_CONTEXT_PSF18 `600`
```




<hr>



### define OS\_CONTEXT\_PSF19 

```C++
#define OS_CONTEXT_PSF19 `608`
```




<hr>



### define OS\_CONTEXT\_PSF2 

```C++
#define OS_CONTEXT_PSF2 `472`
```




<hr>



### define OS\_CONTEXT\_PSF20 

```C++
#define OS_CONTEXT_PSF20 `616`
```




<hr>



### define OS\_CONTEXT\_PSF21 

```C++
#define OS_CONTEXT_PSF21 `624`
```




<hr>



### define OS\_CONTEXT\_PSF22 

```C++
#define OS_CONTEXT_PSF22 `632`
```




<hr>



### define OS\_CONTEXT\_PSF23 

```C++
#define OS_CONTEXT_PSF23 `640`
```




<hr>



### define OS\_CONTEXT\_PSF24 

```C++
#define OS_CONTEXT_PSF24 `648`
```




<hr>



### define OS\_CONTEXT\_PSF25 

```C++
#define OS_CONTEXT_PSF25 `656`
```




<hr>



### define OS\_CONTEXT\_PSF26 

```C++
#define OS_CONTEXT_PSF26 `664`
```




<hr>



### define OS\_CONTEXT\_PSF27 

```C++
#define OS_CONTEXT_PSF27 `672`
```




<hr>



### define OS\_CONTEXT\_PSF28 

```C++
#define OS_CONTEXT_PSF28 `680`
```




<hr>



### define OS\_CONTEXT\_PSF29 

```C++
#define OS_CONTEXT_PSF29 `688`
```




<hr>



### define OS\_CONTEXT\_PSF3 

```C++
#define OS_CONTEXT_PSF3 `480`
```




<hr>



### define OS\_CONTEXT\_PSF30 

```C++
#define OS_CONTEXT_PSF30 `696`
```




<hr>



### define OS\_CONTEXT\_PSF31 

```C++
#define OS_CONTEXT_PSF31 `704`
```




<hr>



### define OS\_CONTEXT\_PSF4 

```C++
#define OS_CONTEXT_PSF4 `488`
```




<hr>



### define OS\_CONTEXT\_PSF5 

```C++
#define OS_CONTEXT_PSF5 `496`
```




<hr>



### define OS\_CONTEXT\_PSF6 

```C++
#define OS_CONTEXT_PSF6 `504`
```




<hr>



### define OS\_CONTEXT\_PSF7 

```C++
#define OS_CONTEXT_PSF7 `512`
```




<hr>



### define OS\_CONTEXT\_PSF8 

```C++
#define OS_CONTEXT_PSF8 `520`
```




<hr>



### define OS\_CONTEXT\_PSF9 

```C++
#define OS_CONTEXT_PSF9 `528`
```




<hr>



### define OS\_CONTEXT\_R0 

```C++
#define OS_CONTEXT_R0 `0`
```




<hr>



### define OS\_CONTEXT\_R1 

```C++
#define OS_CONTEXT_R1 `4`
```




<hr>



### define OS\_CONTEXT\_R10 

```C++
#define OS_CONTEXT_R10 `40`
```




<hr>



### define OS\_CONTEXT\_R11 

```C++
#define OS_CONTEXT_R11 `44`
```




<hr>



### define OS\_CONTEXT\_R12 

```C++
#define OS_CONTEXT_R12 `48`
```




<hr>



### define OS\_CONTEXT\_R13 

```C++
#define OS_CONTEXT_R13 `52`
```




<hr>



### define OS\_CONTEXT\_R14 

```C++
#define OS_CONTEXT_R14 `56`
```




<hr>



### define OS\_CONTEXT\_R15 

```C++
#define OS_CONTEXT_R15 `60`
```




<hr>



### define OS\_CONTEXT\_R16 

```C++
#define OS_CONTEXT_R16 `64`
```




<hr>



### define OS\_CONTEXT\_R17 

```C++
#define OS_CONTEXT_R17 `68`
```




<hr>



### define OS\_CONTEXT\_R18 

```C++
#define OS_CONTEXT_R18 `72`
```




<hr>



### define OS\_CONTEXT\_R19 

```C++
#define OS_CONTEXT_R19 `76`
```




<hr>



### define OS\_CONTEXT\_R2 

```C++
#define OS_CONTEXT_R2 `8`
```




<hr>



### define OS\_CONTEXT\_R20 

```C++
#define OS_CONTEXT_R20 `80`
```




<hr>



### define OS\_CONTEXT\_R21 

```C++
#define OS_CONTEXT_R21 `84`
```




<hr>



### define OS\_CONTEXT\_R22 

```C++
#define OS_CONTEXT_R22 `88`
```




<hr>



### define OS\_CONTEXT\_R23 

```C++
#define OS_CONTEXT_R23 `92`
```




<hr>



### define OS\_CONTEXT\_R24 

```C++
#define OS_CONTEXT_R24 `96`
```




<hr>



### define OS\_CONTEXT\_R25 

```C++
#define OS_CONTEXT_R25 `100`
```




<hr>



### define OS\_CONTEXT\_R26 

```C++
#define OS_CONTEXT_R26 `104`
```




<hr>



### define OS\_CONTEXT\_R27 

```C++
#define OS_CONTEXT_R27 `108`
```




<hr>



### define OS\_CONTEXT\_R28 

```C++
#define OS_CONTEXT_R28 `112`
```




<hr>



### define OS\_CONTEXT\_R29 

```C++
#define OS_CONTEXT_R29 `116`
```




<hr>



### define OS\_CONTEXT\_R3 

```C++
#define OS_CONTEXT_R3 `12`
```




<hr>



### define OS\_CONTEXT\_R30 

```C++
#define OS_CONTEXT_R30 `120`
```




<hr>



### define OS\_CONTEXT\_R31 

```C++
#define OS_CONTEXT_R31 `124`
```




<hr>



### define OS\_CONTEXT\_R4 

```C++
#define OS_CONTEXT_R4 `16`
```




<hr>



### define OS\_CONTEXT\_R5 

```C++
#define OS_CONTEXT_R5 `20`
```




<hr>



### define OS\_CONTEXT\_R6 

```C++
#define OS_CONTEXT_R6 `24`
```




<hr>



### define OS\_CONTEXT\_R7 

```C++
#define OS_CONTEXT_R7 `28`
```




<hr>



### define OS\_CONTEXT\_R8 

```C++
#define OS_CONTEXT_R8 `32`
```




<hr>



### define OS\_CONTEXT\_R9 

```C++
#define OS_CONTEXT_R9 `36`
```




<hr>



### define OS\_CONTEXT\_SRR0 

```C++
#define OS_CONTEXT_SRR0 `408`
```




<hr>



### define OS\_CONTEXT\_SRR1 

```C++
#define OS_CONTEXT_SRR1 `412`
```




<hr>



### define OS\_CONTEXT\_STATE 

```C++
#define OS_CONTEXT_STATE `418`
```




<hr>



### define OS\_CONTEXT\_STATE\_EXC 

```C++
#define OS_CONTEXT_STATE_EXC `0x02u`
```




<hr>



### define OS\_CONTEXT\_STATE\_FPSAVED 

```C++
#define OS_CONTEXT_STATE_FPSAVED `0x01u`
```




<hr>



### define OS\_CONTEXT\_XER 

```C++
#define OS_CONTEXT_XER `140`
```




<hr>



### define \_\_OSCONTEXT\_PADDING 

```C++
#define __OSCONTEXT_PADDING `452`
```




<hr>



### define \_\_OS\_CONTEXT\_FRAME 

```C++
#define __OS_CONTEXT_FRAME `768`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/os/OSContext.h`

