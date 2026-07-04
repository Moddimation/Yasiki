

# File AXAlloc.c



[**FileList**](files.md) **>** [**ax**](dir_284807f63fc993a939ff676a07eb86c2.md) **>** [**AXAlloc.c**](_a_x_alloc_8c.md)

[Go to the source code of this file](_a_x_alloc_8c_source.md)



* `#include <dolphin/ax.h>`
* `#include <dolphin.h>`
* `#include "AXPrivate.h"`























## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**AXVPB**](ax_8h.md#typedef-axvpb) \* | [**\_\_AXCallbackStack**](#variable-__axcallbackstack)  <br> |
|  [**AXVPB**](ax_8h.md#typedef-axvpb) \* | [**\_\_AXStackHead**](#variable-__axstackhead)  <br> |
|  [**AXVPB**](ax_8h.md#typedef-axvpb) \* | [**\_\_AXStackTail**](#variable-__axstacktail)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**AXVPB**](ax_8h.md#typedef-axvpb) \* | [**AXAcquireVoice**](#function-axacquirevoice) ([**u32**](types_8h.md#typedef-u32) priority, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \*) callback, [**u32**](types_8h.md#typedef-u32) userContext) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXFreeVoice**](#function-axfreevoice) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AXSetVoicePriority**](#function-axsetvoicepriority) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p, [**u32**](types_8h.md#typedef-u32) priority) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_AXAllocInit**](#function-__axallocinit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_AXAllocQuit**](#function-__axallocquit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**AXVPB**](ax_8h.md#typedef-axvpb) \* | [**\_\_AXGetStackHead**](#function-__axgetstackhead) ([**u32**](types_8h.md#typedef-u32) priority) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_AXInitVoiceStacks**](#function-__axinitvoicestacks) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**AXVPB**](ax_8h.md#typedef-axvpb) \* | [**\_\_AXPopCallbackStack**](#function-__axpopcallbackstack) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**AXVPB**](ax_8h.md#typedef-axvpb) \* | [**\_\_AXPopFreeStack**](#function-__axpopfreestack) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**AXVPB**](ax_8h.md#typedef-axvpb) \* | [**\_\_AXPopStackFromBottom**](#function-__axpopstackfrombottom) ([**u32**](types_8h.md#typedef-u32) priority) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_AXPushCallbackStack**](#function-__axpushcallbackstack) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_AXPushFreeStack**](#function-__axpushfreestack) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_AXPushStackHead**](#function-__axpushstackhead) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p, [**u32**](types_8h.md#typedef-u32) priority) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_AXRemoveFromStack**](#function-__axremovefromstack) ([**AXVPB**](ax_8h.md#typedef-axvpb) \* p) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_AXServiceCallbackStack**](#function-__axservicecallbackstack) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |




























## Public Static Attributes Documentation




### variable \_\_AXCallbackStack 

```C++
AXVPB* __AXCallbackStack;
```




<hr>



### variable \_\_AXStackHead 

```C++
AXVPB* __AXStackHead[AX_PRIORITY_STACKS];
```




<hr>



### variable \_\_AXStackTail 

```C++
AXVPB* __AXStackTail[AX_PRIORITY_STACKS];
```




<hr>
## Public Functions Documentation




### function AXAcquireVoice 

```C++
AXVPB * AXAcquireVoice (
    u32 priority,
    void (*)( void *) callback,
    u32 userContext
) 
```




<hr>



### function AXFreeVoice 

```C++
void AXFreeVoice (
    AXVPB * p
) 
```




<hr>



### function AXSetVoicePriority 

```C++
void AXSetVoicePriority (
    AXVPB * p,
    u32 priority
) 
```




<hr>



### function \_\_AXAllocInit 

```C++
void __AXAllocInit (
    void
) 
```




<hr>



### function \_\_AXAllocQuit 

```C++
void __AXAllocQuit (
    void
) 
```




<hr>



### function \_\_AXGetStackHead 

```C++
AXVPB * __AXGetStackHead (
    u32 priority
) 
```




<hr>



### function \_\_AXInitVoiceStacks 

```C++
void __AXInitVoiceStacks (
    void
) 
```




<hr>



### function \_\_AXPopCallbackStack 

```C++
AXVPB * __AXPopCallbackStack (
    void
) 
```




<hr>



### function \_\_AXPopFreeStack 

```C++
AXVPB * __AXPopFreeStack (
    void
) 
```




<hr>



### function \_\_AXPopStackFromBottom 

```C++
AXVPB * __AXPopStackFromBottom (
    u32 priority
) 
```




<hr>



### function \_\_AXPushCallbackStack 

```C++
void __AXPushCallbackStack (
    AXVPB * p
) 
```




<hr>



### function \_\_AXPushFreeStack 

```C++
void __AXPushFreeStack (
    AXVPB * p
) 
```




<hr>



### function \_\_AXPushStackHead 

```C++
void __AXPushStackHead (
    AXVPB * p,
    u32 priority
) 
```




<hr>



### function \_\_AXRemoveFromStack 

```C++
void __AXRemoveFromStack (
    AXVPB * p
) 
```




<hr>



### function \_\_AXServiceCallbackStack 

```C++
void __AXServiceCallbackStack (
    void
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/ax/AXAlloc.c`

