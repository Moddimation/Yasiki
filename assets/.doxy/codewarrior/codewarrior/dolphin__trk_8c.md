

# File dolphin\_trk.c



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**MetroTRK**](dir_c3a70b8fd2ab33ad27dbbbe9970ceb3e.md) **>** [**Src**](dir_106e46045b07ca5148f57373b702a9f2.md) **>** [**Os**](dir_4173fb6fc9fe4035b4517343d839782c.md) **>** [**dolphin**](dir_c716ae41d14fd6656eaafd1819507468.md) **>** [**dolphin\_trk.c**](dolphin__trk_8c.md)

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
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/MetroTRK/Src/Os/dolphin/dolphin_trk.c`

