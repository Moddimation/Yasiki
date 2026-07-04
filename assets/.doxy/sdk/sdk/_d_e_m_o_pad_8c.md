

# File DEMOPad.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**demo**](dir_12b9b9f3614a19f67fa121459aa56b48.md) **>** [**DEMOPad.c**](_d_e_m_o_pad_8c.md)

[Go to the source code of this file](_d_e_m_o_pad_8c_source.md)



* `#include <dolphin/demo.h>`
* `#include <dolphin/pad.h>`
* `#include <dolphin.h>`
* `#include "DEMOPrivate.h"`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**u32**](types_8h.md#typedef-u32) | [**DemoNumValidPads**](#variable-demonumvalidpads)  <br> |
|  [**DEMODMPad**](struct_d_e_m_o_d_m_pad.md) | [**DemoPad**](#variable-demopad)  <br> |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**PADStatus**](struct_p_a_d_status.md) | [**Pad**](#variable-pad)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**PadChanMask**](#variable-padchanmask)   = `/* multi line expression */`<br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOPadInit**](#function-demopadinit) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOPadRead**](#function-demopadread) () <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOPadCopy**](#function-demopadcopy) ([**PADStatus**](struct_p_a_d_status.md) \* pad, [**DEMODMPad**](struct_d_e_m_o_d_m_pad.md) \* dmpad) <br> |


























## Public Attributes Documentation




### variable DemoNumValidPads 

```C++
u32 DemoNumValidPads;
```




<hr>



### variable DemoPad 

```C++
DEMODMPad DemoPad[4];
```




<hr>
## Public Static Attributes Documentation




### variable Pad 

```C++
PADStatus Pad[4];
```




<hr>



### variable PadChanMask 

```C++
u32 PadChanMask[4];
```




<hr>
## Public Functions Documentation




### function DEMOPadInit 

```C++
void DEMOPadInit () 
```




<hr>



### function DEMOPadRead 

```C++
void DEMOPadRead () 
```




<hr>
## Public Static Functions Documentation




### function DEMOPadCopy 

```C++
static void DEMOPadCopy (
    PADStatus * pad,
    DEMODMPad * dmpad
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/demo/DEMOPad.c`

