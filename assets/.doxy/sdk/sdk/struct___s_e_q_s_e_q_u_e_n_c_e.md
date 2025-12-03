

# Struct \_SEQSEQUENCE



[**ClassList**](annotated.md) **>** [**\_SEQSEQUENCE**](struct___s_e_q_s_e_q_u_e_n_c_e.md)





* `#include <seq.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**callback**](#variable-callback)  <br>_0x3148_  |
|  [**u32**](types_8h.md#typedef-u32) | [**end**](#variable-end)  <br>_0x0010_  |
|  [**u16**](types_8h.md#typedef-u16) | [**nTracks**](#variable-ntracks)  <br>_0x0008_  |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**next**](#variable-next)  <br>_0x0000_  |
|  [**u32**](types_8h.md#typedef-u32) | [**state**](#variable-state)  <br>_0x0004_  |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**SYNSYNTH**](struct_s_y_n_s_y_n_t_h.md) | [**synth**](#variable-synth)  <br>_0x0014_  |
|  [**s16**](types_8h.md#typedef-s16) | [**timeFormat**](#variable-timeformat)  <br>_0x000A_  |
|  [**SEQTRACK**](seq_8h.md#typedef-seqtrack) | [**track**](#variable-track)  <br>_0x3348_  |
|  [**u32**](types_8h.md#typedef-u32) | [**tracksRunning**](#variable-tracksrunning)  <br>_0x000C_  |












































## Public Attributes Documentation




### variable callback 

_0x3148_ 
```C++
void(* _SEQSEQUENCE::callback[128])(void *, u8);
```




<hr>



### variable end 

_0x0010_ 
```C++
u32 _SEQSEQUENCE::end;
```




<hr>



### variable nTracks 

_0x0008_ 
```C++
u16 _SEQSEQUENCE::nTracks;
```




<hr>



### variable next 

_0x0000_ 
```C++
void* _SEQSEQUENCE::next;
```




<hr>



### variable state 

_0x0004_ 
```C++
u32 _SEQSEQUENCE::state;
```




<hr>



### variable synth 

_0x0014_ 
```C++
struct SYNSYNTH _SEQSEQUENCE::synth;
```




<hr>



### variable timeFormat 

_0x000A_ 
```C++
s16 _SEQSEQUENCE::timeFormat;
```




<hr>



### variable track 

_0x3348_ 
```C++
SEQTRACK _SEQSEQUENCE::track[64];
```




<hr>



### variable tracksRunning 

_0x000C_ 
```C++
u32 _SEQSEQUENCE::tracksRunning;
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/seq.h`

