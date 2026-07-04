

# Struct ARQRequest



[**ClassList**](annotated.md) **>** [**ARQRequest**](struct_a_r_q_request.md)





* `#include <ar.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**ARQCallback**](ar_8h.md#typedef-arqcallback) | [**callback**](#variable-callback)  <br>_0x1C_  |
|  [**u32**](types_8h.md#typedef-u32) | [**dest**](#variable-dest)  <br>_0x14_  |
|  [**u32**](types_8h.md#typedef-u32) | [**length**](#variable-length)  <br>_0x18_  |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**ARQRequest**](struct_a_r_q_request.md) \* | [**next**](#variable-next)  <br>_0x00_  |
|  [**u32**](types_8h.md#typedef-u32) | [**owner**](#variable-owner)  <br>_0x04_  |
|  [**u32**](types_8h.md#typedef-u32) | [**priority**](#variable-priority)  <br>_0x0C_  |
|  [**u32**](types_8h.md#typedef-u32) | [**source**](#variable-source)  <br>_0x10_  |
|  [**u32**](types_8h.md#typedef-u32) | [**type**](#variable-type)  <br>_0x08_  |












































## Public Attributes Documentation




### variable callback 

_0x1C_ 
```C++
ARQCallback ARQRequest::callback;
```




<hr>



### variable dest 

_0x14_ 
```C++
u32 ARQRequest::dest;
```




<hr>



### variable length 

_0x18_ 
```C++
u32 ARQRequest::length;
```




<hr>



### variable next 

_0x00_ 
```C++
struct ARQRequest* ARQRequest::next;
```




<hr>



### variable owner 

_0x04_ 
```C++
u32 ARQRequest::owner;
```




<hr>



### variable priority 

_0x0C_ 
```C++
u32 ARQRequest::priority;
```




<hr>



### variable source 

_0x10_ 
```C++
u32 ARQRequest::source;
```




<hr>



### variable type 

_0x08_ 
```C++
u32 ARQRequest::type;
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/ar.h`

