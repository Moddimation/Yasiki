

# File dolphin\_trk.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**MetroTRK**](dir_25028620cc1a8a9857c414f885e69890.md) **>** [**Src**](dir_6f2d6a2144e1eea12d16d0bd9685bdc9.md) **>** [**Os**](dir_c356d50d36c69ac9e068ee6cfcebacd1.md) **>** [**dolphin**](dir_620a2d14b5c78596f4b6e2cb4db579d5.md) **>** [**dolphin\_trk.c**](dolphin__trk_8c.md)

[Go to the source code of this file](dolphin__trk_8c_source.md)



* `#include "Os/dolphin/dolphin_trk.h"`
* `#include "Portable/main_TRK.h"`
* `#include "Portable/mem_TRK.h"`
* `#include "Os/dolphin/dolphin_trk_glue.h"`
* `#include "Processor/ppc/Generic/targimpl.h"`
* `#include "Processor/ppc/Generic/flush_cache.h"`
* `#include "dolphin/ar.h"`
* `#include "stddef.h"`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  u8 | [**gTRKInterruptVectorTable**](#variable-gtrkinterruptvectortable)  <br> |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  u32 | [**TRK\_ISR\_OFFSETS**](#variable-trk_isr_offsets)   = `/* multi line expression */`<br> |
|  u32 | [**lc\_base**](#variable-lc_base)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**EnableMetroTRKInterrupts**](#function-enablemetrotrkinterrupts) (void) <br> |
|  asm void | [**InitMetroTRK**](#function-initmetrotrk) () <br> |
|  [**DSError**](trk_8h.md#typedef-dserror) | [**TRKInitializeTarget**](#function-trkinitializetarget) () <br> |
|  u32 | [**TRKTargetTranslate**](#function-trktargettranslate) (u32 param\_0) <br> |
|  void | [**TRK\_copy\_vector**](#function-trk_copy_vector) (u32 offset) <br> |
|  void | [**\_\_TRK\_copy\_vectors**](#function-__trk_copy_vectors) (void) <br> |
|   | [**\_\_declspec**](#function-__declspec) (section ".init") <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**EXCEPTIONMASK\_ADDR**](dolphin__trk_8c.md#define-exceptionmask_addr)  `0x80000044`<br> |

## Public Attributes Documentation




### variable gTRKInterruptVectorTable 

```C++
u8 gTRKInterruptVectorTable[];
```




<hr>
## Public Static Attributes Documentation




### variable TRK\_ISR\_OFFSETS 

```C++
u32 TRK_ISR_OFFSETS[15];
```




<hr>



### variable lc\_base 

```C++
u32 lc_base;
```




<hr>
## Public Functions Documentation




### function EnableMetroTRKInterrupts 

```C++
void EnableMetroTRKInterrupts (
    void
) 
```




<hr>



### function InitMetroTRK 

```C++
asm void InitMetroTRK () 
```




<hr>



### function TRKInitializeTarget 

```C++
DSError TRKInitializeTarget () 
```




<hr>



### function TRKTargetTranslate 

```C++
u32 TRKTargetTranslate (
    u32 param_0
) 
```




<hr>



### function TRK\_copy\_vector 

```C++
void TRK_copy_vector (
    u32 offset
) 
```




<hr>



### function \_\_TRK\_copy\_vectors 

```C++
void __TRK_copy_vectors (
    void
) 
```




<hr>



### function \_\_declspec 

```C++
__declspec (
    section ".init"
) 
```




<hr>
## Macro Definition Documentation





### define EXCEPTIONMASK\_ADDR 

```C++
#define EXCEPTIONMASK_ADDR `0x80000044`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/MetroTRK/Src/Os/dolphin/dolphin_trk.c`

