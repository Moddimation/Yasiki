

# Struct FIO\_Stat



[**ClassList**](annotated.md) **>** [**FIO\_Stat**](struct_f_i_o___stat.md)





* `#include <mcc.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**FIO\_Timestamp**](struct_f_i_o___timestamp.md) | [**creationTime**](#variable-creationtime)  <br>_0x04_  |
|  [**u32**](types_8h.md#typedef-u32) | [**fileAttributes**](#variable-fileattributes)  <br>_0x00_  |
|  [**u32**](types_8h.md#typedef-u32) | [**fileSizeHigh**](#variable-filesizehigh)  <br>_0x1C_  |
|  [**u32**](types_8h.md#typedef-u32) | [**fileSizeLow**](#variable-filesizelow)  <br>_0x20_  |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**FIO\_Timestamp**](struct_f_i_o___timestamp.md) | [**lastAccessTime**](#variable-lastaccesstime)  <br>_0x0C_  |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**FIO\_Timestamp**](struct_f_i_o___timestamp.md) | [**lastWriteTime**](#variable-lastwritetime)  <br>_0x14_  |












































## Public Attributes Documentation




### variable creationTime 

_0x04_ 
```C++
struct FIO_Timestamp FIO_Stat::creationTime;
```




<hr>



### variable fileAttributes 

_0x00_ 
```C++
u32 FIO_Stat::fileAttributes;
```




<hr>



### variable fileSizeHigh 

_0x1C_ 
```C++
u32 FIO_Stat::fileSizeHigh;
```




<hr>



### variable fileSizeLow 

_0x20_ 
```C++
u32 FIO_Stat::fileSizeLow;
```




<hr>



### variable lastAccessTime 

_0x0C_ 
```C++
struct FIO_Timestamp FIO_Stat::lastAccessTime;
```




<hr>



### variable lastWriteTime 

_0x14_ 
```C++
struct FIO_Timestamp FIO_Stat::lastWriteTime;
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/mcc.h`

