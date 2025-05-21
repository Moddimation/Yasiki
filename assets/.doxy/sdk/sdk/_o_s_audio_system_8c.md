

# File OSAudioSystem.c



[**FileList**](files.md) **>** [**dolphin**](dir_5daac82a3cf194997369e9388ff34711.md) **>** [**os**](dir_2110adc24753dd29d2ec0361943e7a71.md) **>** [**OSAudioSystem.c**](_o_s_audio_system_8c.md)

[Go to the source code of this file](_o_s_audio_system_8c_source.md)



* `#include <dolphin/os.h>`
* `#include <string.h>`
* `#include "OSPrivate.h"`























## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**u8**](types_8h.md#typedef-u8) | [**DSPInitCode**](#variable-dspinitcode)   = `/* multi line expression */`<br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSInitAudioSystem**](#function-__osinitaudiosystem) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSStopAudioSystem**](#function-__osstopaudiosystem) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**\_\_DSPWorkBuffer**](_o_s_audio_system_8c.md#define-__dspworkbuffer)  `([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)\*)0x81000000`<br> |
| define  | [**waitUntil**](_o_s_audio_system_8c.md#define-waituntil) (load, mask) `/* multi line expression */`<br> |

## Public Static Attributes Documentation




### variable DSPInitCode 

```C++
u8 DSPInitCode[128];
```




<hr>
## Public Functions Documentation




### function \_\_OSInitAudioSystem 

```C++
void __OSInitAudioSystem (
    void
) 
```




<hr>



### function \_\_OSStopAudioSystem 

```C++
void __OSStopAudioSystem (
    void
) 
```




<hr>
## Macro Definition Documentation





### define \_\_DSPWorkBuffer 

```C++
#define __DSPWorkBuffer `( void *)0x81000000`
```




<hr>



### define waitUntil 

```C++
#define waitUntil (
    load,
    mask
) `reg16 = ( load );                                                                            \ while ( reg16 & ( mask )) { reg16 = ( load ); }`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `DolphinSDK/src/dolphin/os/OSAudioSystem.c`

