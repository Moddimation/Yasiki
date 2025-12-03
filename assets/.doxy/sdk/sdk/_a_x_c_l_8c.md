

# File AXCL.c



[**FileList**](files.md) **>** [**ax**](dir_284807f63fc993a939ff676a07eb86c2.md) **>** [**AXCL.c**](_a_x_c_l_8c.md)

[Go to the source code of this file](_a_x_c_l_8c_source.md)



* `#include <dolphin/ax.h>`
* `#include <dolphin.h>`
* `#include "AXPrivate.h"`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**u32**](types_8h.md#typedef-u32) | [**\_\_AXClMode**](#variable-__axclmode)  <br> |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**u16**](types_8h.md#typedef-u16) \* | [**\_\_AXClWrite**](#variable-__axclwrite)  <br> |
|  [**u16**](types_8h.md#typedef-u16) | [**\_\_AXCommandList**](#variable-__axcommandlist)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**\_\_AXCommandListCycles**](#variable-__axcommandlistcycles)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**\_\_AXCommandListPosition**](#variable-__axcommandlistposition)  <br> |
|  [**u16**](types_8h.md#typedef-u16) | [**\_\_AXHRTFHistory**](#variable-__axhrtfhistory)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**u32**](types_8h.md#typedef-u32) | [**AXGetMode**](#function-axgetmode) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXSetMode**](#function-axsetmode) ([**u32**](types_8h.md#typedef-u32) mode) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_AXClInit**](#function-__axclinit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_AXClQuit**](#function-__axclquit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**\_\_AXGetCommandListAddress**](#function-__axgetcommandlistaddress) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**\_\_AXGetCommandListCycles**](#function-__axgetcommandlistcycles) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_AXNextFrame**](#function-__axnextframe) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* sbuffer, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* buffer) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_AXWriteToCommandList**](#function-__axwritetocommandlist) ([**u16**](types_8h.md#typedef-u16) data) <br> |




























## Public Attributes Documentation




### variable \_\_AXClMode 

```C++
u32 __AXClMode;
```




<hr>
## Public Static Attributes Documentation




### variable \_\_AXClWrite 

```C++
u16* __AXClWrite;
```




<hr>



### variable \_\_AXCommandList 

```C++
u16 __AXCommandList[2][384];
```




<hr>



### variable \_\_AXCommandListCycles 

```C++
u32 __AXCommandListCycles;
```




<hr>



### variable \_\_AXCommandListPosition 

```C++
u32 __AXCommandListPosition;
```




<hr>



### variable \_\_AXHRTFHistory 

```C++
u16 __AXHRTFHistory[128];
```




<hr>
## Public Functions Documentation




### function AXGetMode 

```C++
u32 AXGetMode (
    void
) 
```




<hr>



### function AXSetMode 

```C++
void AXSetMode (
    u32 mode
) 
```




<hr>



### function \_\_AXClInit 

```C++
void __AXClInit (
    void
) 
```




<hr>



### function \_\_AXClQuit 

```C++
void __AXClQuit (
    void
) 
```




<hr>



### function \_\_AXGetCommandListAddress 

```C++
u32 __AXGetCommandListAddress (
    void
) 
```




<hr>



### function \_\_AXGetCommandListCycles 

```C++
u32 __AXGetCommandListCycles (
    void
) 
```




<hr>



### function \_\_AXNextFrame 

```C++
void __AXNextFrame (
    void * sbuffer,
    void * buffer
) 
```




<hr>



### function \_\_AXWriteToCommandList 

```C++
void __AXWriteToCommandList (
    u16 data
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/ax/AXCL.c`

