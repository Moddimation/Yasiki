

# Struct AXFX\_CHORUS\_WORK



[**ClassList**](annotated.md) **>** [**AXFX\_CHORUS\_WORK**](struct_a_x_f_x___c_h_o_r_u_s___w_o_r_k.md)





* `#include <axfx.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**u8**](types_8h.md#typedef-u8) | [**currentLast**](#variable-currentlast)  <br>_0x24_  |
|  [**u32**](types_8h.md#typedef-u32) | [**currentPosHi**](#variable-currentposhi)  <br>_0x5C_  |
|  [**u32**](types_8h.md#typedef-u32) | [**currentPosLo**](#variable-currentposlo)  <br>_0x58_  |
|  [**s32**](types_8h.md#typedef-s32) \* | [**lastLeft**](#variable-lastleft)  <br>_0x00_  |
|  [**s32**](types_8h.md#typedef-s32) \* | [**lastRight**](#variable-lastright)  <br>_0x0C_  |
|  [**s32**](types_8h.md#typedef-s32) \* | [**lastSur**](#variable-lastsur)  <br>_0x18_  |
|  [**s32**](types_8h.md#typedef-s32) | [**oldLeft**](#variable-oldleft)  <br>_0x28_  |
|  [**s32**](types_8h.md#typedef-s32) | [**oldRight**](#variable-oldright)  <br>_0x38_  |
|  [**s32**](types_8h.md#typedef-s32) | [**oldSur**](#variable-oldsur)  <br>_0x48_  |
|  [**s32**](types_8h.md#typedef-s32) | [**pitchOffset**](#variable-pitchoffset)  <br>_0x60_  |
|  [**u32**](types_8h.md#typedef-u32) | [**pitchOffsetPeriod**](#variable-pitchoffsetperiod)  <br>_0x68_  |
|  [**u32**](types_8h.md#typedef-u32) | [**pitchOffsetPeriodCount**](#variable-pitchoffsetperiodcount)  <br>_0x64_  |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**AXFX\_CHORUS\_SRCINFO**](struct_a_x_f_x___c_h_o_r_u_s___s_r_c_i_n_f_o.md) | [**src**](#variable-src)  <br>_0x6C_  |












































## Public Attributes Documentation




### variable currentLast 

_0x24_ 
```C++
u8 AXFX_CHORUS_WORK::currentLast;
```




<hr>



### variable currentPosHi 

_0x5C_ 
```C++
u32 AXFX_CHORUS_WORK::currentPosHi;
```




<hr>



### variable currentPosLo 

_0x58_ 
```C++
u32 AXFX_CHORUS_WORK::currentPosLo;
```




<hr>



### variable lastLeft 

_0x00_ 
```C++
s32* AXFX_CHORUS_WORK::lastLeft[3];
```




<hr>



### variable lastRight 

_0x0C_ 
```C++
s32* AXFX_CHORUS_WORK::lastRight[3];
```




<hr>



### variable lastSur 

_0x18_ 
```C++
s32* AXFX_CHORUS_WORK::lastSur[3];
```




<hr>



### variable oldLeft 

_0x28_ 
```C++
s32 AXFX_CHORUS_WORK::oldLeft[4];
```




<hr>



### variable oldRight 

_0x38_ 
```C++
s32 AXFX_CHORUS_WORK::oldRight[4];
```




<hr>



### variable oldSur 

_0x48_ 
```C++
s32 AXFX_CHORUS_WORK::oldSur[4];
```




<hr>



### variable pitchOffset 

_0x60_ 
```C++
s32 AXFX_CHORUS_WORK::pitchOffset;
```




<hr>



### variable pitchOffsetPeriod 

_0x68_ 
```C++
u32 AXFX_CHORUS_WORK::pitchOffsetPeriod;
```




<hr>



### variable pitchOffsetPeriodCount 

_0x64_ 
```C++
u32 AXFX_CHORUS_WORK::pitchOffsetPeriodCount;
```




<hr>



### variable src 

_0x6C_ 
```C++
struct AXFX_CHORUS_SRCINFO AXFX_CHORUS_WORK::src;
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/axfx.h`

