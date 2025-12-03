

# Struct SramControl



[**ClassList**](annotated.md) **>** [**SramControl**](struct_sram_control.md)


























## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**callback**](#variable-callback)  <br>_0x50_  |
|  [**BOOL**](types_8h.md#typedef-bool) | [**enabled**](#variable-enabled)  <br>_0x44_  |
|  [**BOOL**](types_8h.md#typedef-bool) | [**locked**](#variable-locked)  <br>_0x48_  |
|  [**u32**](types_8h.md#typedef-u32) | [**offset**](#variable-offset)  <br>_0x40_  |
|  [**u8**](types_8h.md#typedef-u8) | [**sram**](#variable-sram)  <br>_0x00_  |
|  [**BOOL**](types_8h.md#typedef-bool) | [**sync**](#variable-sync)  <br>_0x4C_  |












































## Public Attributes Documentation




### variable callback 

_0x50_ 
```C++
void(* SramControl::callback) ();
```




<hr>



### variable enabled 

_0x44_ 
```C++
BOOL SramControl::enabled;
```




<hr>



### variable locked 

_0x48_ 
```C++
BOOL SramControl::locked;
```




<hr>



### variable offset 

_0x40_ 
```C++
u32 SramControl::offset;
```




<hr>



### variable sram 

_0x00_ 
```C++
u8 SramControl::sram[RTC_SRAM_SIZE];
```




<hr>



### variable sync 

_0x4C_ 
```C++
BOOL SramControl::sync;
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/os/OSRtc.c`

