

# File OSExi.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**os**](dir_c85f9e83f0f4b4374578811cecebda65.md) **>** [**OSExi.c**](_o_s_exi_8c.md)

[Go to the source code of this file](_o_s_exi_8c_source.md)



* `#include <dolphin/os.h>`
* `#include <string.h>`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**EXIControl**](struct_e_x_i_control.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**EXICallback**](#typedef-exicallback)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**EXIControl**](struct_e_x_i_control.md) | [**EXIControl**](#typedef-exicontrol)  <br> |




## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**unsigned**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_gUnknown800030C0**](#variable-__gunknown800030c0)  <br> |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**EXIControl**](struct_e_x_i_control.md) | [**Ecb**](#variable-ecb)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**EXIAttach**](#function-exiattach) ([**s32**](types_8h.md#typedef-s32) chan, [**EXICallback**](_amc_types_8h.md#typedef-exicallback) extCallback) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**EXIClearInterrupts**](#function-exiclearinterrupts) ([**s32**](types_8h.md#typedef-s32) chan, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) exi, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) tc, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) ext) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**EXIDeselect**](#function-exideselect) ([**s32**](types_8h.md#typedef-s32) chan) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**EXIDetach**](#function-exidetach) ([**s32**](types_8h.md#typedef-s32) chan) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**EXIDma**](#function-exidma) ([**s32**](types_8h.md#typedef-s32) chan, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* buf, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) len, [**u32**](types_8h.md#typedef-u32) type, [**EXICallback**](_amc_types_8h.md#typedef-exicallback) callback) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**EXIGetID**](#function-exigetid) ([**s32**](types_8h.md#typedef-s32) chan, [**u32**](types_8h.md#typedef-u32) dev, [**u32**](types_8h.md#typedef-u32) \* id) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**EXIGetState**](#function-exigetstate) ([**s32**](types_8h.md#typedef-s32) chan) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**EXIImm**](#function-exiimm) ([**s32**](types_8h.md#typedef-s32) chan, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* buf, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) len, [**u32**](types_8h.md#typedef-u32) type, [**EXICallback**](_amc_types_8h.md#typedef-exicallback) callback) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**EXIImmEx**](#function-exiimmex) ([**s32**](types_8h.md#typedef-s32) chan, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* buf, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) len, [**u32**](types_8h.md#typedef-u32) mode) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**EXIInit**](#function-exiinit) () <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**EXILock**](#function-exilock) ([**s32**](types_8h.md#typedef-s32) chan, [**u32**](types_8h.md#typedef-u32) dev, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step), [**OSContext**](struct_o_s_context.md) \*) unlockedCallback) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**EXIProbe**](#function-exiprobe) ([**s32**](types_8h.md#typedef-s32) chan) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**EXIProbeEx**](#function-exiprobeex) ([**s32**](types_8h.md#typedef-s32) chan) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**EXIProbeReset**](#function-exiprobereset) () <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**EXISelect**](#function-exiselect) ([**s32**](types_8h.md#typedef-s32) chan, [**u32**](types_8h.md#typedef-u32) dev, [**u32**](types_8h.md#typedef-u32) freq) <br> |
|  [**EXICallback**](_amc_types_8h.md#typedef-exicallback) | [**EXISetExiCallback**](#function-exisetexicallback) ([**s32**](types_8h.md#typedef-s32) chan, [**EXICallback**](_amc_types_8h.md#typedef-exicallback) exiCallback) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**EXISync**](#function-exisync) ([**s32**](types_8h.md#typedef-s32) chan) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**EXIUnlock**](#function-exiunlock) ([**s32**](types_8h.md#typedef-s32) chan) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**\_\_OSGetDIConfig**](#function-__osgetdiconfig) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**CompleteTransfer**](#function-completetransfer) ([**s32**](types_8h.md#typedef-s32) chan) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**EXIIntrruptHandler**](#function-exiintrrupthandler) ([**s16**](types_8h.md#typedef-s16) interrupt, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**EXTIntrruptHandler**](#function-extintrrupthandler) ([**s16**](types_8h.md#typedef-s16) interrupt, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SetExiInterruptMask**](#function-setexiinterruptmask) ([**s32**](types_8h.md#typedef-s32) chan, [**EXIControl**](struct_e_x_i_control.md) \* exi) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**TCIntrruptHandler**](#function-tcintrrupthandler) ([**s16**](types_8h.md#typedef-s16) interrupt, [**OSContext**](struct_o_s_context.md) \* context) <br> |

























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**EXI\_0LENGTH\_EXILENGTH\_MASK**](_o_s_exi_8c.md#define-exi_0length_exilength_mask)  `0x03FFFFE0`<br> |
| define  | [**EXI\_RDWR**](_o_s_exi_8c.md#define-exi_rdwr)  `2`<br> |
| define  | [**EXI\_READ**](_o_s_exi_8c.md#define-exi_read)  `0`<br> |
| define  | [**EXI\_WRITE**](_o_s_exi_8c.md#define-exi_write)  `1`<br> |
| define  | [**MAX\_CHAN**](_o_s_exi_8c.md#define-max_chan)  `0x03`<br> |
| define  | [**MAX\_DEV**](_o_s_exi_8c.md#define-max_dev)  `0x03`<br> |
| define  | [**MAX\_FREQ**](_o_s_exi_8c.md#define-max_freq)  `0x06`<br> |
| define  | [**MAX\_IMM**](_o_s_exi_8c.md#define-max_imm)  `0x04`<br> |
| define  | [**MAX\_TYPE**](_o_s_exi_8c.md#define-max_type)  `0x03`<br> |
| define  | [**STATE\_ATTACHED**](_o_s_exi_8c.md#define-state_attached)  `0x08`<br> |
| define  | [**STATE\_BUSY**](_o_s_exi_8c.md#define-state_busy)  `0x03`<br> |
| define  | [**STATE\_DMA**](_o_s_exi_8c.md#define-state_dma)  `0x01`<br> |
| define  | [**STATE\_IDLE**](_o_s_exi_8c.md#define-state_idle)  `0x00`<br> |
| define  | [**STATE\_IMM**](_o_s_exi_8c.md#define-state_imm)  `0x02`<br> |
| define  | [**STATE\_LOCKED**](_o_s_exi_8c.md#define-state_locked)  `0x10`<br> |
| define  | [**STATE\_SELECTED**](_o_s_exi_8c.md#define-state_selected)  `0x04`<br> |

## Public Types Documentation




### typedef EXICallback 

```C++
typedef void(* EXICallback) (s32, OSContext *);
```




<hr>



### typedef EXIControl 

```C++
typedef struct EXIControl EXIControl;
```




<hr>
## Public Attributes Documentation




### variable \_\_gUnknown800030C0 

```C++
unsigned int __gUnknown800030C0[2];
```




<hr>
## Public Static Attributes Documentation




### variable Ecb 

```C++
EXIControl Ecb[3];
```




<hr>
## Public Functions Documentation




### function EXIAttach 

```C++
int EXIAttach (
    s32 chan,
    EXICallback extCallback
) 
```




<hr>



### function EXIClearInterrupts 

```C++
u32 EXIClearInterrupts (
    s32 chan,
    int exi,
    int tc,
    int ext
) 
```




<hr>



### function EXIDeselect 

```C++
int EXIDeselect (
    s32 chan
) 
```




<hr>



### function EXIDetach 

```C++
int EXIDetach (
    s32 chan
) 
```




<hr>



### function EXIDma 

```C++
int EXIDma (
    s32 chan,
    void * buf,
    long len,
    u32 type,
    EXICallback callback
) 
```




<hr>



### function EXIGetID 

```C++
int EXIGetID (
    s32 chan,
    u32 dev,
    u32 * id
) 
```




<hr>



### function EXIGetState 

```C++
u32 EXIGetState (
    s32 chan
) 
```




<hr>



### function EXIImm 

```C++
int EXIImm (
    s32 chan,
    void * buf,
    long len,
    u32 type,
    EXICallback callback
) 
```




<hr>



### function EXIImmEx 

```C++
int EXIImmEx (
    s32 chan,
    void * buf,
    long len,
    u32 mode
) 
```




<hr>



### function EXIInit 

```C++
void EXIInit () 
```




<hr>



### function EXILock 

```C++
int EXILock (
    s32 chan,
    u32 dev,
    void (*)( long , OSContext *) unlockedCallback
) 
```




<hr>



### function EXIProbe 

```C++
int EXIProbe (
    s32 chan
) 
```




<hr>



### function EXIProbeEx 

```C++
int EXIProbeEx (
    s32 chan
) 
```




<hr>



### function EXIProbeReset 

```C++
void EXIProbeReset () 
```




<hr>



### function EXISelect 

```C++
int EXISelect (
    s32 chan,
    u32 dev,
    u32 freq
) 
```




<hr>



### function EXISetExiCallback 

```C++
EXICallback EXISetExiCallback (
    s32 chan,
    EXICallback exiCallback
) 
```




<hr>



### function EXISync 

```C++
int EXISync (
    s32 chan
) 
```




<hr>



### function EXIUnlock 

```C++
int EXIUnlock (
    s32 chan
) 
```




<hr>



### function \_\_OSGetDIConfig 

```C++
u32 __OSGetDIConfig (
    void
) 
```




<hr>
## Public Static Functions Documentation




### function CompleteTransfer 

```C++
static void CompleteTransfer (
    s32 chan
) 
```




<hr>



### function EXIIntrruptHandler 

```C++
static void EXIIntrruptHandler (
    s16 interrupt,
    OSContext * context
) 
```




<hr>



### function EXTIntrruptHandler 

```C++
static void EXTIntrruptHandler (
    s16 interrupt,
    OSContext * context
) 
```




<hr>



### function SetExiInterruptMask 

```C++
static void SetExiInterruptMask (
    s32 chan,
    EXIControl * exi
) 
```




<hr>



### function TCIntrruptHandler 

```C++
static void TCIntrruptHandler (
    s16 interrupt,
    OSContext * context
) 
```




<hr>
## Macro Definition Documentation





### define EXI\_0LENGTH\_EXILENGTH\_MASK 

```C++
#define EXI_0LENGTH_EXILENGTH_MASK `0x03FFFFE0`
```




<hr>



### define EXI\_RDWR 

```C++
#define EXI_RDWR `2`
```




<hr>



### define EXI\_READ 

```C++
#define EXI_READ `0`
```




<hr>



### define EXI\_WRITE 

```C++
#define EXI_WRITE `1`
```




<hr>



### define MAX\_CHAN 

```C++
#define MAX_CHAN `0x03`
```




<hr>



### define MAX\_DEV 

```C++
#define MAX_DEV `0x03`
```




<hr>



### define MAX\_FREQ 

```C++
#define MAX_FREQ `0x06`
```




<hr>



### define MAX\_IMM 

```C++
#define MAX_IMM `0x04`
```




<hr>



### define MAX\_TYPE 

```C++
#define MAX_TYPE `0x03`
```




<hr>



### define STATE\_ATTACHED 

```C++
#define STATE_ATTACHED `0x08`
```




<hr>



### define STATE\_BUSY 

```C++
#define STATE_BUSY `0x03`
```




<hr>



### define STATE\_DMA 

```C++
#define STATE_DMA `0x01`
```




<hr>



### define STATE\_IDLE 

```C++
#define STATE_IDLE `0x00`
```




<hr>



### define STATE\_IMM 

```C++
#define STATE_IMM `0x02`
```




<hr>



### define STATE\_LOCKED 

```C++
#define STATE_LOCKED `0x10`
```




<hr>



### define STATE\_SELECTED 

```C++
#define STATE_SELECTED `0x04`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/os/OSExi.c`

