

# File OSReset.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**os**](dir_c85f9e83f0f4b4374578811cecebda65.md) **>** [**OSReset.c**](_o_s_reset_8c.md)

[Go to the source code of this file](_o_s_reset_8c_source.md)



* `#include <dolphin/os.h>`
* `#include "OSPrivate.h"`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**OSThreadQueue**](struct_o_s_thread_queue.md) | [**\_\_OSActiveThreadQueue**](#variable-__osactivethreadqueue)  <br> |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSResetFunctionQueue**](struct_o_s_reset_function_queue.md) | [**ResetFunctionQueue**](#variable-resetfunctionqueue)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**u32**](types_8h.md#typedef-u32) | [**OSGetResetCode**](#function-osgetresetcode) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSRegisterResetFunction**](#function-osregisterresetfunction) ([**OSResetFunctionInfo**](struct_o_s_reset_function_info.md) \* info) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSResetSystem**](#function-osresetsystem) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) reset, [**u32**](types_8h.md#typedef-u32) resetCode, [**BOOL**](types_8h.md#typedef-bool) forceMenu) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSUnregisterResetFunction**](#function-osunregisterresetfunction) ([**OSResetFunctionInfo**](struct_o_s_reset_function_info.md) \* info) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSDoHotReset**](#function-__osdohotreset) ([**s32**](types_8h.md#typedef-s32) code) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**CallResetFunctions**](#function-callresetfunctions) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) final) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**KillThreads**](#function-killthreads) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**Reset**](#function-reset) ([**u32**](types_8h.md#typedef-u32) resetCode) <br> |

























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**DEQUEUE\_INFO**](_o_s_reset_8c.md#define-dequeue_info) (info, queue) `/* multi line expression */`<br> |
| define  | [**ENQUEUE\_INFO**](_o_s_reset_8c.md#define-enqueue_info) (info, queue) `/* multi line expression */`<br> |
| define  | [**ENQUEUE\_INFO\_PRIO**](_o_s_reset_8c.md#define-enqueue_info_prio) (info, queue) `/* multi line expression */`<br> |

## Public Attributes Documentation




### variable \_\_OSActiveThreadQueue 

```C++
OSThreadQueue __OSActiveThreadQueue;
```




<hr>
## Public Static Attributes Documentation




### variable ResetFunctionQueue 

```C++
struct OSResetFunctionQueue ResetFunctionQueue;
```




<hr>
## Public Functions Documentation




### function OSGetResetCode 

```C++
u32 OSGetResetCode () 
```




<hr>



### function OSRegisterResetFunction 

```C++
void OSRegisterResetFunction (
    OSResetFunctionInfo * info
) 
```




<hr>



### function OSResetSystem 

```C++
void OSResetSystem (
    int reset,
    u32 resetCode,
    BOOL forceMenu
) 
```




<hr>



### function OSUnregisterResetFunction 

```C++
void OSUnregisterResetFunction (
    OSResetFunctionInfo * info
) 
```




<hr>



### function \_\_OSDoHotReset 

```C++
void __OSDoHotReset (
    s32 code
) 
```




<hr>
## Public Static Functions Documentation




### function CallResetFunctions 

```C++
static int CallResetFunctions (
    int final
) 
```




<hr>



### function KillThreads 

```C++
static void KillThreads (
    void
) 
```




<hr>



### function Reset 

```C++
static asm  void Reset (
    u32 resetCode
) 
```




<hr>
## Macro Definition Documentation





### define DEQUEUE\_INFO 

```C++
#define DEQUEUE_INFO (
    info,
    queue
) `/* multi line expression */`
```




<hr>



### define ENQUEUE\_INFO 

```C++
#define ENQUEUE_INFO (
    info,
    queue
) `/* multi line expression */`
```




<hr>



### define ENQUEUE\_INFO\_PRIO 

```C++
#define ENQUEUE_INFO_PRIO (
    info,
    queue
) `/* multi line expression */`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/os/OSReset.c`

