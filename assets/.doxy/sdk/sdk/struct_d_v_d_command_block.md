

# Struct DVDCommandBlock



[**ClassList**](annotated.md) **>** [**DVDCommandBlock**](struct_d_v_d_command_block.md)





* `#include <dvd.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**addr**](#variable-addr)  <br>_0x18_  |
|  [**DVDCBCallback**](dvd_8h.md#typedef-dvdcbcallback) | [**callback**](#variable-callback)  <br>_0x28_  |
|  [**u32**](types_8h.md#typedef-u32) | [**command**](#variable-command)  <br>_0x08_  |
|  [**u32**](types_8h.md#typedef-u32) | [**currTransferSize**](#variable-currtransfersize)  <br>_0x1C_  |
|  [**DVDDiskID**](struct_d_v_d_disk_i_d.md) \* | [**id**](#variable-id)  <br>_0x24_  |
|  [**u32**](types_8h.md#typedef-u32) | [**length**](#variable-length)  <br>_0x14_  |
|  [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* | [**next**](#variable-next)  <br>_0x00_  |
|  [**u32**](types_8h.md#typedef-u32) | [**offset**](#variable-offset)  <br>_0x10_  |
|  [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* | [**prev**](#variable-prev)  <br>_0x04_  |
|  [**s32**](types_8h.md#typedef-s32) | [**state**](#variable-state)  <br>_0x0C_  |
|  [**u32**](types_8h.md#typedef-u32) | [**transferredSize**](#variable-transferredsize)  <br>_0x20_  |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**userData**](#variable-userdata)  <br>_0x2C_  |












































## Public Attributes Documentation




### variable addr 

_0x18_ 
```C++
void* DVDCommandBlock::addr;
```




<hr>



### variable callback 

_0x28_ 
```C++
DVDCBCallback DVDCommandBlock::callback;
```




<hr>



### variable command 

_0x08_ 
```C++
u32 DVDCommandBlock::command;
```




<hr>



### variable currTransferSize 

_0x1C_ 
```C++
u32 DVDCommandBlock::currTransferSize;
```




<hr>



### variable id 

_0x24_ 
```C++
DVDDiskID* DVDCommandBlock::id;
```




<hr>



### variable length 

_0x14_ 
```C++
u32 DVDCommandBlock::length;
```




<hr>



### variable next 

_0x00_ 
```C++
DVDCommandBlock* DVDCommandBlock::next;
```




<hr>



### variable offset 

_0x10_ 
```C++
u32 DVDCommandBlock::offset;
```




<hr>



### variable prev 

_0x04_ 
```C++
DVDCommandBlock* DVDCommandBlock::prev;
```




<hr>



### variable state 

_0x0C_ 
```C++
s32 DVDCommandBlock::state;
```




<hr>



### variable transferredSize 

_0x20_ 
```C++
u32 DVDCommandBlock::transferredSize;
```




<hr>



### variable userData 

_0x2C_ 
```C++
void* DVDCommandBlock::userData;
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/dvd.h`

