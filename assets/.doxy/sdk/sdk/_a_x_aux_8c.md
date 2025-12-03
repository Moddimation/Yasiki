

# File AXAux.c



[**FileList**](files.md) **>** [**ax**](dir_284807f63fc993a939ff676a07eb86c2.md) **>** [**AXAux.c**](_a_x_aux_8c.md)

[Go to the source code of this file](_a_x_aux_8c_source.md)



* `#include <dolphin/ax.h>`
* `#include <dolphin.h>`
* `#include "AXPrivate.h"`























## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**s32**](types_8h.md#typedef-s32) \* | [**\_\_AXAuxADspRead**](#variable-__axauxadspread)  <br> |
|  [**s32**](types_8h.md#typedef-s32) \* | [**\_\_AXAuxADspWrite**](#variable-__axauxadspwrite)  <br> |
|  [**s32**](types_8h.md#typedef-s32) \* | [**\_\_AXAuxBDspRead**](#variable-__axauxbdspread)  <br> |
|  [**s32**](types_8h.md#typedef-s32) \* | [**\_\_AXAuxBDspWrite**](#variable-__axauxbdspwrite)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**\_\_AXAuxCpuReadWritePosition**](#variable-__axauxcpureadwriteposition)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**\_\_AXAuxDspReadPosition**](#variable-__axauxdspreadposition)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**\_\_AXAuxDspWritePosition**](#variable-__axauxdspwriteposition)  <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**\_\_AXCallbackAuxA**](#variable-__axcallbackauxa)  <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**\_\_AXCallbackAuxB**](#variable-__axcallbackauxb)  <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**\_\_AXContextAuxA**](#variable-__axcontextauxa)  <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**\_\_AXContextAuxB**](#variable-__axcontextauxb)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXRegisterAuxACallback**](#function-axregisterauxacallback) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \*, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \*) callback, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXRegisterAuxBCallback**](#function-axregisterauxbcallback) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \*, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \*) callback, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_AXAuxInit**](#function-__axauxinit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_AXAuxQuit**](#function-__axauxquit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_AXGetAuxAInput**](#function-__axgetauxainput) ([**u32**](types_8h.md#typedef-u32) \* p) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_AXGetAuxAOutput**](#function-__axgetauxaoutput) ([**u32**](types_8h.md#typedef-u32) \* p) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_AXGetAuxBInput**](#function-__axgetauxbinput) ([**u32**](types_8h.md#typedef-u32) \* p) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_AXGetAuxBOutput**](#function-__axgetauxboutput) ([**u32**](types_8h.md#typedef-u32) \* p) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_AXProcessAux**](#function-__axprocessaux) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**s32**](types_8h.md#typedef-s32) [**\_\_AXBufferAuxA**](_c_a_r_d_private_8h.md#define-card_max_mount_step)[3][480] | [**ALIGN**](#function-align) (32) <br> |


























## Public Static Attributes Documentation




### variable \_\_AXAuxADspRead 

```C++
s32* __AXAuxADspRead;
```




<hr>



### variable \_\_AXAuxADspWrite 

```C++
s32* __AXAuxADspWrite;
```




<hr>



### variable \_\_AXAuxBDspRead 

```C++
s32* __AXAuxBDspRead;
```




<hr>



### variable \_\_AXAuxBDspWrite 

```C++
s32* __AXAuxBDspWrite;
```




<hr>



### variable \_\_AXAuxCpuReadWritePosition 

```C++
u32 __AXAuxCpuReadWritePosition;
```




<hr>



### variable \_\_AXAuxDspReadPosition 

```C++
u32 __AXAuxDspReadPosition;
```




<hr>



### variable \_\_AXAuxDspWritePosition 

```C++
u32 __AXAuxDspWritePosition;
```




<hr>



### variable \_\_AXCallbackAuxA 

```C++
void(* __AXCallbackAuxA) (void *, void *);
```




<hr>



### variable \_\_AXCallbackAuxB 

```C++
void(* __AXCallbackAuxB) (void *, void *);
```




<hr>



### variable \_\_AXContextAuxA 

```C++
void* __AXContextAuxA;
```




<hr>



### variable \_\_AXContextAuxB 

```C++
void* __AXContextAuxB;
```




<hr>
## Public Functions Documentation




### function AXRegisterAuxACallback 

```C++
void AXRegisterAuxACallback (
    void (*)( void *, void *) callback,
    void * context
) 
```




<hr>



### function AXRegisterAuxBCallback 

```C++
void AXRegisterAuxBCallback (
    void (*)( void *, void *) callback,
    void * context
) 
```




<hr>



### function \_\_AXAuxInit 

```C++
void __AXAuxInit (
    void
) 
```




<hr>



### function \_\_AXAuxQuit 

```C++
void __AXAuxQuit (
    void
) 
```




<hr>



### function \_\_AXGetAuxAInput 

```C++
void __AXGetAuxAInput (
    u32 * p
) 
```




<hr>



### function \_\_AXGetAuxAOutput 

```C++
void __AXGetAuxAOutput (
    u32 * p
) 
```




<hr>



### function \_\_AXGetAuxBInput 

```C++
void __AXGetAuxBInput (
    u32 * p
) 
```




<hr>



### function \_\_AXGetAuxBOutput 

```C++
void __AXGetAuxBOutput (
    u32 * p
) 
```




<hr>



### function \_\_AXProcessAux 

```C++
void __AXProcessAux (
    void
) 
```




<hr>
## Public Static Functions Documentation




### function ALIGN 

```C++
static s32  __AXBufferAuxA [3][480] ALIGN (
    32
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/ax/AXAux.c`

