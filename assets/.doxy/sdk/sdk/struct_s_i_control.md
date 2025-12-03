

# Struct SIControl



[**ClassList**](annotated.md) **>** [**SIControl**](struct_s_i_control.md)


























## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**callback**](#variable-callback)  <br>_0x10_  |
|  [**s32**](types_8h.md#typedef-s32) | [**chan**](#variable-chan)  <br>_0x00_  |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**input**](#variable-input)  <br>_0x0C_  |
|  [**u32**](types_8h.md#typedef-u32) | [**inputBytes**](#variable-inputbytes)  <br>_0x08_  |
|  [**u32**](types_8h.md#typedef-u32) | [**poll**](#variable-poll)  <br>_0x04_  |












































## Public Attributes Documentation




### variable callback 

_0x10_ 
```C++
void(* SIControl::callback) (s32, u32, OSContext *);
```




<hr>



### variable chan 

_0x00_ 
```C++
s32 SIControl::chan;
```




<hr>



### variable input 

_0x0C_ 
```C++
void* SIControl::input;
```




<hr>



### variable inputBytes 

_0x08_ 
```C++
u32 SIControl::inputBytes;
```




<hr>



### variable poll 

_0x04_ 
```C++
u32 SIControl::poll;
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/os/OSSerial.c`

