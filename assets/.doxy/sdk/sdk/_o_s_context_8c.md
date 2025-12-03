

# File OSContext.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**os**](dir_c85f9e83f0f4b4374578811cecebda65.md) **>** [**OSContext.c**](_o_s_context_8c.md)

[Go to the source code of this file](_o_s_context_8c_source.md)



* `#include <dolphin/os.h>`
* `#include "OSPrivate.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSContext**](struct_o_s_context.md) \*[**\_\_OSCurrentContext**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AT\_ADDRESS**](#function-at_address) ([**OS\_BASE\_CACHED**](os_8h.md#define-os_base_cached)\| 0x00D4) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DBPrintf**](#function-dbprintf) ([**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* str, ...) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSClearContext**](#function-osclearcontext) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSDumpContext**](#function-osdumpcontext) ([**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSFillFPUContext**](#function-osfillfpucontext) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**OSContext**](struct_o_s_context.md) \* | [**OSGetCurrentContext**](#function-osgetcurrentcontext) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) | [**OSGetStackPointer**](#function-osgetstackpointer) () <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSInitContext**](#function-osinitcontext) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSContext**](struct_o_s_context.md) \* context, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) pc, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) newsp) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSLoadContext**](#function-osloadcontext) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSLoadFPUContext**](#function-osloadfpucontext) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSContext**](struct_o_s_context.md) \* fpuContext) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) | [**OSSaveContext**](#function-ossavecontext) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSSaveFPUContext**](#function-ossavefpucontext) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSContext**](struct_o_s_context.md) \* fpuContext) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSSetCurrentContext**](#function-ossetcurrentcontext) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSSwitchFiber**](#function-osswitchfiber) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) pc, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) newsp) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) | [**OSSwitchStack**](#function-osswitchstack) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) newsp) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSContextInit**](#function-__oscontextinit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_RAS\_OSDisableInterrupts\_begin**](#function-__ras_osdisableinterrupts_begin) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_RAS\_OSDisableInterrupts\_end**](#function-__ras_osdisableinterrupts_end) () <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSSwitchFPUContext**](#function-osswitchfpucontext) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**\_\_OSException**](_o_s_exception_8h.md#typedef-__osexception) exception, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSLoadFPUContext**](#function-__osloadfpucontext) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) p0, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSContext**](struct_o_s_context.md) \* fpuContext) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSSaveFPUContext**](#function-__ossavefpucontext) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) p0, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) p1, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSContext**](struct_o_s_context.md) \* fpuContext) <br> |

























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**HID2**](_o_s_context_8c.md#define-hid2)  `920`<br> |

## Public Functions Documentation




### function AT\_ADDRESS 

```C++
volatile  OSContext * __OSCurrentContext AT_ADDRESS (
    OS_BASE_CACHED | 0x00D4
) 
```




<hr>



### function DBPrintf 

```C++
void DBPrintf (
    char * str,
    ...
) 
```




<hr>



### function OSClearContext 

```C++
void OSClearContext (
    register  OSContext * context
) 
```




<hr>



### function OSDumpContext 

```C++
void OSDumpContext (
    OSContext * context
) 
```




<hr>



### function OSFillFPUContext 

```C++
asm  void OSFillFPUContext (
    register  OSContext * context
) 
```




<hr>



### function OSGetCurrentContext 

```C++
OSContext * OSGetCurrentContext (
    void
) 
```




<hr>



### function OSGetStackPointer 

```C++
asm  u32 OSGetStackPointer () 
```




<hr>



### function OSInitContext 

```C++
asm  void OSInitContext (
    register  OSContext * context,
    register  u32 pc,
    register  u32 newsp
) 
```




<hr>



### function OSLoadContext 

```C++
asm  void OSLoadContext (
    register  OSContext * context
) 
```




<hr>



### function OSLoadFPUContext 

```C++
asm  void OSLoadFPUContext (
    register  OSContext * fpuContext
) 
```




<hr>



### function OSSaveContext 

```C++
asm  u32 OSSaveContext (
    register  OSContext * context
) 
```




<hr>



### function OSSaveFPUContext 

```C++
asm  void OSSaveFPUContext (
    register  OSContext * fpuContext
) 
```




<hr>



### function OSSetCurrentContext 

```C++
asm  void OSSetCurrentContext (
    register  OSContext * context
) 
```




<hr>



### function OSSwitchFiber 

```C++
asm  int OSSwitchFiber (
    register  u32 pc,
    register  u32 newsp
) 
```




<hr>



### function OSSwitchStack 

```C++
asm  u32 OSSwitchStack (
    register  u32 newsp
) 
```




<hr>



### function \_\_OSContextInit 

```C++
void __OSContextInit (
    void
) 
```




<hr>



### function \_\_RAS\_OSDisableInterrupts\_begin 

```C++
void __RAS_OSDisableInterrupts_begin () 
```




<hr>



### function \_\_RAS\_OSDisableInterrupts\_end 

```C++
void __RAS_OSDisableInterrupts_end () 
```




<hr>
## Public Static Functions Documentation




### function OSSwitchFPUContext 

```C++
static asm  void OSSwitchFPUContext (
    register  __OSException exception,
    register  OSContext * context
) 
```




<hr>



### function \_\_OSLoadFPUContext 

```C++
static asm  void __OSLoadFPUContext (
    register  u32 p0,
    register  OSContext * fpuContext
) 
```




<hr>



### function \_\_OSSaveFPUContext 

```C++
static asm  void __OSSaveFPUContext (
    register  u32 p0,
    register  u32 p1,
    register  OSContext * fpuContext
) 
```




<hr>
## Macro Definition Documentation





### define HID2 

```C++
#define HID2 `920`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/os/OSContext.c`

