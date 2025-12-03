

# Struct OSSramEx



[**ClassList**](annotated.md) **>** [**OSSramEx**](struct_o_s_sram_ex.md)





* `#include <OSRtc.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**u8**](types_8h.md#typedef-u8) | [**\_padding0**](#variable-_padding0)  <br>_0x25_  |
|  [**u8**](types_8h.md#typedef-u8) | [**\_padding1**](#variable-_padding1)  <br>_0x28_  |
|  [**u8**](types_8h.md#typedef-u8) | [**dvdErrorCode**](#variable-dvderrorcode)  <br>_0x24_  |
|  [**u8**](types_8h.md#typedef-u8) | [**flashID**](#variable-flashid)  <br>_0x00_  |
|  [**u8**](types_8h.md#typedef-u8) | [**flashIDCheckSum**](#variable-flashidchecksum)  <br>_0x26_  |
|  [**u32**](types_8h.md#typedef-u32) | [**wirelessKeyboardID**](#variable-wirelesskeyboardid)  <br>_0x18_  |
|  [**u16**](types_8h.md#typedef-u16) | [**wirelessPadID**](#variable-wirelesspadid)  <br>_0x1C_  |












































## Public Attributes Documentation




### variable \_padding0 

_0x25_ 
```C++
u8 OSSramEx::_padding0;
```




<hr>



### variable \_padding1 

_0x28_ 
```C++
u8 OSSramEx::_padding1[4];
```




<hr>



### variable dvdErrorCode 

_0x24_ 
```C++
u8 OSSramEx::dvdErrorCode;
```




<hr>



### variable flashID 

_0x00_ 
```C++
u8 OSSramEx::flashID[2][12];
```




<hr>



### variable flashIDCheckSum 

_0x26_ 
```C++
u8 OSSramEx::flashIDCheckSum[2];
```




<hr>



### variable wirelessKeyboardID 

_0x18_ 
```C++
u32 OSSramEx::wirelessKeyboardID;
```




<hr>



### variable wirelessPadID 

_0x1C_ 
```C++
u16 OSSramEx::wirelessPadID[4];
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/os/OSRtc.h`

