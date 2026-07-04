

# File ar.c



[**FileList**](files.md) **>** [**ar**](dir_1f6a6668d55aa42931fc4b14e0914ad0.md) **>** [**ar.c**](ar_8c.md)

[Go to the source code of this file](ar_8c_source.md)



* `#include <dolphin/os.h>`
* `#include <string.h>`
* `#include "ar_private.h"`























## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**u32**](types_8h.md#typedef-u32) \* | [**\_\_AR\_BlockLength**](#variable-__ar_blocklength)  <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**\_\_AR\_Callback**](#variable-__ar_callback)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**\_\_AR\_FreeBlocks**](#variable-__ar_freeblocks)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**\_\_AR\_Size**](#variable-__ar_size)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**\_\_AR\_StackPointer**](#variable-__ar_stackpointer)  <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_AR\_init\_flag**](#variable-__ar_init_flag)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**u32**](types_8h.md#typedef-u32) | [**ARAlloc**](#function-aralloc) ([**u32**](types_8h.md#typedef-u32) length) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ARCheckInit**](#function-archeckinit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**ARFree**](#function-arfree) ([**u32**](types_8h.md#typedef-u32) \* length) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**ARGetBaseAddress**](#function-argetbaseaddress) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**ARGetDMAStatus**](#function-argetdmastatus) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**ARGetSize**](#function-argetsize) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**ARInit**](#function-arinit) ([**u32**](types_8h.md#typedef-u32) \* stack\_index\_addr, [**u32**](types_8h.md#typedef-u32) num\_entries) <br> |
|  [**ARQCallback**](ar_8h.md#typedef-arqcallback) | [**ARRegisterDMACallback**](#function-arregisterdmacallback) ([**ARQCallback**](ar_8h.md#typedef-arqcallback) callback) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ARReset**](#function-arreset) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ARSetSize**](#function-arsetsize) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ARStartDMA**](#function-arstartdma) ([**u32**](types_8h.md#typedef-u32) type, [**u32**](types_8h.md#typedef-u32) mainmem\_addr, [**u32**](types_8h.md#typedef-u32) aram\_addr, [**u32**](types_8h.md#typedef-u32) length) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_ARChecksize**](#function-__archecksize) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_ARHandler**](#function-__arhandler) ([**s16**](types_8h.md#typedef-s16) exception, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_ARReadDMA**](#function-__arreaddma) ([**u32**](types_8h.md#typedef-u32) mmem\_addr, [**u32**](types_8h.md#typedef-u32) aram\_addr, [**u32**](types_8h.md#typedef-u32) length) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_ARWaitForDMA**](#function-__arwaitfordma) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_ARWriteDMA**](#function-__arwritedma) ([**u32**](types_8h.md#typedef-u32) mmem\_addr, [**u32**](types_8h.md#typedef-u32) aram\_addr, [**u32**](types_8h.md#typedef-u32) length) <br> |


























## Public Static Attributes Documentation




### variable \_\_AR\_BlockLength 

```C++
u32* __AR_BlockLength;
```




<hr>



### variable \_\_AR\_Callback 

```C++
void(* __AR_Callback) ();
```




<hr>



### variable \_\_AR\_FreeBlocks 

```C++
u32 __AR_FreeBlocks;
```




<hr>



### variable \_\_AR\_Size 

```C++
u32 __AR_Size;
```




<hr>



### variable \_\_AR\_StackPointer 

```C++
u32 __AR_StackPointer;
```




<hr>



### variable \_\_AR\_init\_flag 

```C++
int __AR_init_flag;
```




<hr>
## Public Functions Documentation




### function ARAlloc 

```C++
u32 ARAlloc (
    u32 length
) 
```




<hr>



### function ARCheckInit 

```C++
int ARCheckInit (
    void
) 
```




<hr>



### function ARFree 

```C++
u32 ARFree (
    u32 * length
) 
```




<hr>



### function ARGetBaseAddress 

```C++
u32 ARGetBaseAddress (
    void
) 
```




<hr>



### function ARGetDMAStatus 

```C++
u32 ARGetDMAStatus (
    void
) 
```




<hr>



### function ARGetSize 

```C++
u32 ARGetSize (
    void
) 
```




<hr>



### function ARInit 

```C++
u32 ARInit (
    u32 * stack_index_addr,
    u32 num_entries
) 
```




<hr>



### function ARRegisterDMACallback 

```C++
ARQCallback ARRegisterDMACallback (
    ARQCallback callback
) 
```




<hr>



### function ARReset 

```C++
void ARReset (
    void
) 
```




<hr>



### function ARSetSize 

```C++
void ARSetSize (
    void
) 
```




<hr>



### function ARStartDMA 

```C++
void ARStartDMA (
    u32 type,
    u32 mainmem_addr,
    u32 aram_addr,
    u32 length
) 
```




<hr>
## Public Static Functions Documentation




### function \_\_ARChecksize 

```C++
static void __ARChecksize (
    void
) 
```




<hr>



### function \_\_ARHandler 

```C++
static void __ARHandler (
    s16 exception,
    OSContext * context
) 
```




<hr>



### function \_\_ARReadDMA 

```C++
static void __ARReadDMA (
    u32 mmem_addr,
    u32 aram_addr,
    u32 length
) 
```




<hr>



### function \_\_ARWaitForDMA 

```C++
static void __ARWaitForDMA (
    void
) 
```




<hr>



### function \_\_ARWriteDMA 

```C++
static void __ARWriteDMA (
    u32 mmem_addr,
    u32 aram_addr,
    u32 length
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/ar/ar.c`

