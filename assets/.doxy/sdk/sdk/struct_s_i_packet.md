

# Struct SIPacket



[**ClassList**](annotated.md) **>** [**SIPacket**](struct_s_i_packet.md)


























## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**callback**](#variable-callback)  <br>_0x14_  |
|  [**s32**](types_8h.md#typedef-s32) | [**chan**](#variable-chan)  <br>_0x00_  |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**input**](#variable-input)  <br>_0x0C_  |
|  [**u32**](types_8h.md#typedef-u32) | [**inputBytes**](#variable-inputbytes)  <br>_0x10_  |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**output**](#variable-output)  <br>_0x04_  |
|  [**u32**](types_8h.md#typedef-u32) | [**outputBytes**](#variable-outputbytes)  <br>_0x08_  |
|  [**s64**](types_8h.md#typedef-s64) | [**time**](#variable-time)  <br>_0x18_  |












































## Public Attributes Documentation




### variable callback 

_0x14_ 
```C++
void(* SIPacket::callback) (s32, u32, OSContext *);
```




<hr>



### variable chan 

_0x00_ 
```C++
s32 SIPacket::chan;
```




<hr>



### variable input 

_0x0C_ 
```C++
void* SIPacket::input;
```




<hr>



### variable inputBytes 

_0x10_ 
```C++
u32 SIPacket::inputBytes;
```




<hr>



### variable output 

_0x04_ 
```C++
void* SIPacket::output;
```




<hr>



### variable outputBytes 

_0x08_ 
```C++
u32 SIPacket::outputBytes;
```




<hr>



### variable time 

_0x18_ 
```C++
s64 SIPacket::time;
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/os/OSSerial.c`

