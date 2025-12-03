

# File OSInterrupt.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**os**](dir_c85f9e83f0f4b4374578811cecebda65.md) **>** [**OSInterrupt.c**](_o_s_interrupt_8c.md)

[Go to the source code of this file](_o_s_interrupt_8c_source.md)



* `#include <dolphin/os.h>`
* `#include <string.h>`
* `#include "OSPrivate.h"`























## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**\_\_OSInterruptHandler**](_o_s_interrupt_8h.md#typedef-__osinterrupthandler) \* | [**InterruptHandlerTable**](#variable-interrupthandlertable)  <br> |
|  [**OSInterruptMask**](_o_s_interrupt_8h.md#typedef-osinterruptmask) | [**InterruptPrioTable**](#variable-interruptpriotable)   = `/* multi line expression */`<br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**BOOL**](types_8h.md#typedef-bool) | [**OSDisableInterrupts**](#function-osdisableinterrupts) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**BOOL**](types_8h.md#typedef-bool) | [**OSEnableInterrupts**](#function-osenableinterrupts) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**OSInterruptMask**](_o_s_interrupt_8h.md#typedef-osinterruptmask) | [**OSGetInterruptMask**](#function-osgetinterruptmask) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**BOOL**](types_8h.md#typedef-bool) | [**OSRestoreInterrupts**](#function-osrestoreinterrupts) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**BOOL**](types_8h.md#typedef-bool) level) <br> |
|  [**OSInterruptMask**](_o_s_interrupt_8h.md#typedef-osinterruptmask) | [**OSSetInterruptMask**](#function-ossetinterruptmask) ([**OSInterruptMask**](_o_s_interrupt_8h.md#typedef-osinterruptmask) local) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSDispatchInterrupt**](#function-__osdispatchinterrupt) ([**\_\_OSException**](_o_s_exception_8h.md#typedef-__osexception) exception, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**\_\_OSInterruptHandler**](_o_s_interrupt_8h.md#typedef-__osinterrupthandler) | [**\_\_OSGetInterruptHandler**](#function-__osgetinterrupthandler) ([**\_\_OSInterrupt**](_o_s_interrupt_8h.md#typedef-__osinterrupt) interrupt) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSInterruptInit**](#function-__osinterruptinit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**OSInterruptMask**](_o_s_interrupt_8h.md#typedef-osinterruptmask) | [**\_\_OSMaskInterrupts**](#function-__osmaskinterrupts) ([**OSInterruptMask**](_o_s_interrupt_8h.md#typedef-osinterruptmask) global) <br> |
|  [**\_\_OSInterruptHandler**](_o_s_interrupt_8h.md#typedef-__osinterrupthandler) | [**\_\_OSSetInterruptHandler**](#function-__ossetinterrupthandler) ([**\_\_OSInterrupt**](_o_s_interrupt_8h.md#typedef-__osinterrupt) interrupt, [**\_\_OSInterruptHandler**](_o_s_interrupt_8h.md#typedef-__osinterrupthandler) handler) <br> |
|  [**OSInterruptMask**](_o_s_interrupt_8h.md#typedef-osinterruptmask) | [**\_\_OSUnmaskInterrupts**](#function-__osunmaskinterrupts) ([**OSInterruptMask**](_o_s_interrupt_8h.md#typedef-osinterruptmask) global) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_RAS\_OSDisableInterrupts\_begin**](#function-__ras_osdisableinterrupts_begin) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_RAS\_OSDisableInterrupts\_end**](#function-__ras_osdisableinterrupts_end) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ExternalInterruptHandler**](#function-externalinterrupthandler) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**\_\_OSException**](_o_s_exception_8h.md#typedef-__osexception) exception, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**SetInterruptMask**](#function-setinterruptmask) ([**OSInterruptMask**](_o_s_interrupt_8h.md#typedef-osinterruptmask) mask, [**OSInterruptMask**](_o_s_interrupt_8h.md#typedef-osinterruptmask) current) <br> |


























## Public Static Attributes Documentation




### variable InterruptHandlerTable 

```C++
__OSInterruptHandler* InterruptHandlerTable;
```




<hr>



### variable InterruptPrioTable 

```C++
OSInterruptMask InterruptPrioTable[];
```




<hr>
## Public Functions Documentation




### function OSDisableInterrupts 

```C++
asm  BOOL OSDisableInterrupts (
    void
) 
```




<hr>



### function OSEnableInterrupts 

```C++
asm  BOOL OSEnableInterrupts (
    void
) 
```




<hr>



### function OSGetInterruptMask 

```C++
OSInterruptMask OSGetInterruptMask (
    void
) 
```




<hr>



### function OSRestoreInterrupts 

```C++
asm  BOOL OSRestoreInterrupts (
    register  BOOL level
) 
```




<hr>



### function OSSetInterruptMask 

```C++
OSInterruptMask OSSetInterruptMask (
    OSInterruptMask local
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



### function \_\_OSInterruptInit 

```C++
void __OSInterruptInit (
    void
) 
```




<hr>



### function \_\_OSMaskInterrupts 

```C++
OSInterruptMask __OSMaskInterrupts (
    OSInterruptMask global
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
    OSInterruptMask global
) 
```




<hr>



### function \_\_RAS\_OSDisableInterrupts\_begin 

```C++
void __RAS_OSDisableInterrupts_begin (
    void
) 
```




<hr>



### function \_\_RAS\_OSDisableInterrupts\_end 

```C++
void __RAS_OSDisableInterrupts_end (
    void
) 
```




<hr>
## Public Static Functions Documentation




### function ExternalInterruptHandler 

```C++
static asm  void ExternalInterruptHandler (
    register  __OSException exception,
    register  OSContext * context
) 
```




<hr>



### function SetInterruptMask 

```C++
static u32 SetInterruptMask (
    OSInterruptMask mask,
    OSInterruptMask current
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/os/OSInterrupt.c`

