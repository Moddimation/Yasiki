

# Struct SYNSYNTH



[**ClassList**](annotated.md) **>** [**SYNSYNTH**](struct_s_y_n_s_y_n_t_h.md)





* `#include <syn.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**WTADPCM**](struct_w_t_a_d_p_c_m.md) \* | [**adpcm**](#variable-adpcm)  <br>_0x0018_  |
|  [**u32**](types_8h.md#typedef-u32) | [**aramBaseByte**](#variable-arambasebyte)  <br>_0x0020_  |
|  [**u32**](types_8h.md#typedef-u32) | [**aramBaseNibble**](#variable-arambasenibble)  <br>_0x0024_  |
|  [**u32**](types_8h.md#typedef-u32) | [**aramBaseWord**](#variable-arambaseword)  <br>_0x001C_  |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**WTART**](struct_w_t_a_r_t.md) \* | [**art**](#variable-art)  <br>_0x0010_  |
|  [**s32**](types_8h.md#typedef-s32) | [**auxAAttn**](#variable-auxaattn)  <br>_0x09A8_  |
|  [**s32**](types_8h.md#typedef-s32) | [**auxBAttn**](#variable-auxbattn)  <br>_0x09E8_  |
|  [**u8**](types_8h.md#typedef-u8) | [**controller**](#variable-controller)  <br>_0x0078_  |
|  [**s16**](types_8h.md#typedef-s16) | [**dataEntry**](#variable-dataentry)  <br>_0x0888_  |
|  [**s32**](types_8h.md#typedef-s32) | [**expAttn**](#variable-expattn)  <br>_0x0968_  |
|  [**u8**](types_8h.md#typedef-u8) | [**input**](#variable-input)  <br>_0x0A28_  |
|  [**u32**](types_8h.md#typedef-u32) | [**inputCounter**](#variable-inputcounter)  <br>_0x0D2C_  |
|  [**u8**](types_8h.md#typedef-u8) \* | [**inputPosition**](#variable-inputposition)  <br>_0x0D28_  |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**WTINST**](struct_w_t_i_n_s_t.md) \* | [**inst**](#variable-inst)  <br>_0x0034_  |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**keyGroup**](#variable-keygroup)  <br>_0x0D34_  |
|  [**s32**](types_8h.md#typedef-s32) | [**masterVolume**](#variable-mastervolume)  <br>_0x0074_  |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**WTINST**](struct_w_t_i_n_s_t.md) \* | [**melodicInst**](#variable-melodicinst)  <br>_0x0008_  |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**next**](#variable-next)  <br>_0x0000_  |
|  [**u32**](types_8h.md#typedef-u32) | [**notes**](#variable-notes)  <br>_0x0D30_  |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**WTINST**](struct_w_t_i_n_s_t.md) \* | [**percussiveInst**](#variable-percussiveinst)  <br>_0x0004_  |
|  [**u32**](types_8h.md#typedef-u32) | [**priorityNoteOn**](#variable-prioritynoteon)  <br>_0x002C_  |
|  [**u32**](types_8h.md#typedef-u32) | [**priorityNoteRelease**](#variable-prioritynoterelease)  <br>_0x0030_  |
|  [**u32**](types_8h.md#typedef-u32) | [**priorityVoiceAlloc**](#variable-priorityvoicealloc)  <br>_0x0028_  |
|  [**s32**](types_8h.md#typedef-s32) | [**pwCents**](#variable-pwcents)  <br>_0x08E8_  |
|  [**s32**](types_8h.md#typedef-s32) | [**pwMaxCents**](#variable-pwmaxcents)  <br>_0x08A8_  |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**WTREGION**](struct_w_t_r_e_g_i_o_n.md) \* | [**region**](#variable-region)  <br>_0x000C_  |
|  [**u8**](types_8h.md#typedef-u8) | [**rpn**](#variable-rpn)  <br>_0x0878_  |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**WTSAMPLE**](struct_w_t_s_a_m_p_l_e.md) \* | [**sample**](#variable-sample)  <br>_0x0014_  |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**voice**](#variable-voice)  <br>_0x1134_  |
|  [**s32**](types_8h.md#typedef-s32) | [**volAttn**](#variable-volattn)  <br>_0x0928_  |












































## Public Attributes Documentation




### variable adpcm 

_0x0018_ 
```C++
struct WTADPCM* SYNSYNTH::adpcm;
```




<hr>



### variable aramBaseByte 

_0x0020_ 
```C++
u32 SYNSYNTH::aramBaseByte;
```




<hr>



### variable aramBaseNibble 

_0x0024_ 
```C++
u32 SYNSYNTH::aramBaseNibble;
```




<hr>



### variable aramBaseWord 

_0x001C_ 
```C++
u32 SYNSYNTH::aramBaseWord;
```




<hr>



### variable art 

_0x0010_ 
```C++
struct WTART* SYNSYNTH::art;
```




<hr>



### variable auxAAttn 

_0x09A8_ 
```C++
s32 SYNSYNTH::auxAAttn[16];
```




<hr>



### variable auxBAttn 

_0x09E8_ 
```C++
s32 SYNSYNTH::auxBAttn[16];
```




<hr>



### variable controller 

_0x0078_ 
```C++
u8 SYNSYNTH::controller[16][128];
```




<hr>



### variable dataEntry 

_0x0888_ 
```C++
s16 SYNSYNTH::dataEntry[16];
```




<hr>



### variable expAttn 

_0x0968_ 
```C++
s32 SYNSYNTH::expAttn[16];
```




<hr>



### variable input 

_0x0A28_ 
```C++
u8 SYNSYNTH::input[SYN_INPUT_BUFFER_SIZE][3];
```




<hr>



### variable inputCounter 

_0x0D2C_ 
```C++
u32 SYNSYNTH::inputCounter;
```




<hr>



### variable inputPosition 

_0x0D28_ 
```C++
u8* SYNSYNTH::inputPosition;
```




<hr>



### variable inst 

_0x0034_ 
```C++
struct WTINST* SYNSYNTH::inst[16];
```




<hr>



### variable keyGroup 

_0x0D34_ 
```C++
void* SYNSYNTH::keyGroup[16][16];
```




<hr>



### variable masterVolume 

_0x0074_ 
```C++
s32 SYNSYNTH::masterVolume;
```




<hr>



### variable melodicInst 

_0x0008_ 
```C++
struct WTINST* SYNSYNTH::melodicInst;
```




<hr>



### variable next 

_0x0000_ 
```C++
void* SYNSYNTH::next;
```




<hr>



### variable notes 

_0x0D30_ 
```C++
u32 SYNSYNTH::notes;
```




<hr>



### variable percussiveInst 

_0x0004_ 
```C++
struct WTINST* SYNSYNTH::percussiveInst;
```




<hr>



### variable priorityNoteOn 

_0x002C_ 
```C++
u32 SYNSYNTH::priorityNoteOn;
```




<hr>



### variable priorityNoteRelease 

_0x0030_ 
```C++
u32 SYNSYNTH::priorityNoteRelease;
```




<hr>



### variable priorityVoiceAlloc 

_0x0028_ 
```C++
u32 SYNSYNTH::priorityVoiceAlloc;
```




<hr>



### variable pwCents 

_0x08E8_ 
```C++
s32 SYNSYNTH::pwCents[16];
```




<hr>



### variable pwMaxCents 

_0x08A8_ 
```C++
s32 SYNSYNTH::pwMaxCents[16];
```




<hr>



### variable region 

_0x000C_ 
```C++
struct WTREGION* SYNSYNTH::region;
```




<hr>



### variable rpn 

_0x0878_ 
```C++
u8 SYNSYNTH::rpn[16];
```




<hr>



### variable sample 

_0x0014_ 
```C++
struct WTSAMPLE* SYNSYNTH::sample;
```




<hr>



### variable voice 

_0x1134_ 
```C++
void* SYNSYNTH::voice[16][128];
```




<hr>



### variable volAttn 

_0x0928_ 
```C++
s32 SYNSYNTH::volAttn[16];
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/syn.h`

