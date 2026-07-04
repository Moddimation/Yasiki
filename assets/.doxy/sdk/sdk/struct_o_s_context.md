

# Struct OSContext



[**ClassList**](annotated.md) **>** [**OSContext**](struct_o_s_context.md)





* `#include <OSContext.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**u32**](types_8h.md#typedef-u32) | [**cr**](#variable-cr)  <br>_0x080_  |
|  [**u32**](types_8h.md#typedef-u32) | [**ctr**](#variable-ctr)  <br>_0x088_  |
|  [**f64**](types_8h.md#typedef-f64) | [**fpr**](#variable-fpr)  <br>_0x090_  |
|  [**u32**](types_8h.md#typedef-u32) | [**fpscr**](#variable-fpscr)  <br>_0x194_  |
|  [**u32**](types_8h.md#typedef-u32) | [**fpscr\_pad**](#variable-fpscr_pad)  <br>_0x190_  |
|  [**u32**](types_8h.md#typedef-u32) | [**gpr**](#variable-gpr)  <br>_0x000_  |
|  [**u32**](types_8h.md#typedef-u32) | [**gqr**](#variable-gqr)  <br>_0x1A4_  |
|  [**u32**](types_8h.md#typedef-u32) | [**lr**](#variable-lr)  <br>_0x084_  |
|  [**u16**](types_8h.md#typedef-u16) | [**mode**](#variable-mode)  <br>_0x1A0_  |
|  [**f64**](types_8h.md#typedef-f64) | [**psf**](#variable-psf)  <br>_0x1C4_  |
|  [**u32**](types_8h.md#typedef-u32) | [**srr0**](#variable-srr0)  <br>_0x198_  |
|  [**u32**](types_8h.md#typedef-u32) | [**srr1**](#variable-srr1)  <br>_0x19C_  |
|  [**u16**](types_8h.md#typedef-u16) | [**state**](#variable-state)  <br>_0x1A2_  |
|  [**u32**](types_8h.md#typedef-u32) | [**xer**](#variable-xer)  <br>_0x08C_  |












































## Public Attributes Documentation




### variable cr 

_0x080_ 
```C++
u32 OSContext::cr;
```




<hr>



### variable ctr 

_0x088_ 
```C++
u32 OSContext::ctr;
```




<hr>



### variable fpr 

_0x090_ 
```C++
f64 OSContext::fpr[32];
```




<hr>



### variable fpscr 

_0x194_ 
```C++
u32 OSContext::fpscr;
```




<hr>



### variable fpscr\_pad 

_0x190_ 
```C++
u32 OSContext::fpscr_pad;
```




<hr>



### variable gpr 

_0x000_ 
```C++
u32 OSContext::gpr[32];
```




<hr>



### variable gqr 

_0x1A4_ 
```C++
u32 OSContext::gqr[8];
```




<hr>



### variable lr 

_0x084_ 
```C++
u32 OSContext::lr;
```




<hr>



### variable mode 

_0x1A0_ 
```C++
u16 OSContext::mode;
```




<hr>



### variable psf 

_0x1C4_ 
```C++
f64 OSContext::psf[32];
```




<hr>



### variable srr0 

_0x198_ 
```C++
u32 OSContext::srr0;
```




<hr>



### variable srr1 

_0x19C_ 
```C++
u32 OSContext::srr1;
```




<hr>



### variable state 

_0x1A2_ 
```C++
u16 OSContext::state;
```




<hr>



### variable xer 

_0x08C_ 
```C++
u32 OSContext::xer;
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/os/OSContext.h`

