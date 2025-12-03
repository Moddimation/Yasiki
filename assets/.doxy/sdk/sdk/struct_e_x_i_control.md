

# Struct EXIControl



[**ClassList**](annotated.md) **>** [**EXIControl**](struct_e_x_i_control.md)


























## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**EXICallback**](_o_s_exi_8c.md#typedef-exicallback) | [**callback**](#variable-callback)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**dev**](#variable-dev)  <br>_0x18_  |
|  [**EXICallback**](_o_s_exi_8c.md#typedef-exicallback) | [**exiCallback**](#variable-exicallback)  <br>_0x00_  |
|  [**EXICallback**](_o_s_exi_8c.md#typedef-exicallback) | [**extCallback**](#variable-extcallback)  <br>_0x08_  |
|  [**u8**](types_8h.md#typedef-u8) \* | [**immBuf**](#variable-immbuf)  <br>_0x14_  |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**immLen**](#variable-immlen)  <br>_0x10_  |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**items**](#variable-items)  <br>_0x1C_  |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**EXIControl**](struct_e_x_i_control.md) | [**queue**](#variable-queue)  <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) | [**state**](#variable-state)  <br>_0x0C_  |
|  [**EXICallback**](_o_s_exi_8c.md#typedef-exicallback) | [**tcCallback**](#variable-tccallback)  <br>_0x04_  |












































## Public Attributes Documentation




### variable callback 

```C++
EXICallback EXIControl::callback;
```




<hr>



### variable dev 

_0x18_ 
```C++
u32 EXIControl::dev;
```




<hr>



### variable exiCallback 

_0x00_ 
```C++
EXICallback EXIControl::exiCallback;
```




<hr>



### variable extCallback 

_0x08_ 
```C++
EXICallback EXIControl::extCallback;
```




<hr>



### variable immBuf 

_0x14_ 
```C++
u8* EXIControl::immBuf;
```




<hr>



### variable immLen 

_0x10_ 
```C++
int EXIControl::immLen;
```




<hr>



### variable items 

_0x1C_ 
```C++
int EXIControl::items;
```




<hr>



### variable queue 

```C++
struct EXIControl EXIControl::queue[3];
```




<hr>



### variable state 

_0x0C_ 
```C++
volatile u32 EXIControl::state;
```




<hr>



### variable tcCallback 

_0x04_ 
```C++
EXICallback EXIControl::tcCallback;
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/os/OSExi.c`

