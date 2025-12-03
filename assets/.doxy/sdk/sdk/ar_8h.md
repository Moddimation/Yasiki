

# File ar.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**ar.h**](ar_8h.md)

[Go to the source code of this file](ar_8h_source.md)



* `#include <types.h>`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**ARQRequest**](struct_a_r_q_request.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**ARQCallback**](#typedef-arqcallback)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**ARQRequest**](struct_a_r_q_request.md) | [**ARQRequest**](#typedef-arqrequest)  <br> |




















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
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ARQFlushQueue**](#function-arqflushqueue) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**ARQGetChunkSize**](#function-arqgetchunksize) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ARQInit**](#function-arqinit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ARQPostRequest**](#function-arqpostrequest) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**ARQRequest**](struct_a_r_q_request.md) \* request, [**u32**](types_8h.md#typedef-u32) owner, [**u32**](types_8h.md#typedef-u32) type, [**u32**](types_8h.md#typedef-u32) priority, [**u32**](types_8h.md#typedef-u32) source, [**u32**](types_8h.md#typedef-u32) dest, [**u32**](types_8h.md#typedef-u32) length, [**ARQCallback**](ar_8h.md#typedef-arqcallback) callback) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ARQRemoveOwnerRequest**](#function-arqremoveownerrequest) ([**u32**](types_8h.md#typedef-u32) owner) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ARQRemoveRequest**](#function-arqremoverequest) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**ARQRequest**](struct_a_r_q_request.md) \* request) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ARQReset**](#function-arqreset) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ARQSetChunkSize**](#function-arqsetchunksize) ([**u32**](types_8h.md#typedef-u32) size) <br> |
|  [**ARQCallback**](ar_8h.md#typedef-arqcallback) | [**ARRegisterDMACallback**](#function-arregisterdmacallback) ([**ARQCallback**](ar_8h.md#typedef-arqcallback) callback) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ARReset**](#function-arreset) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ARSetSize**](#function-arsetsize) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ARStartDMA**](#function-arstartdma) ([**u32**](types_8h.md#typedef-u32) type, [**u32**](types_8h.md#typedef-u32) mainmem\_addr, [**u32**](types_8h.md#typedef-u32) aram\_addr, [**u32**](types_8h.md#typedef-u32) length) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**ARAM\_DIR\_ARAM\_TO\_MRAM**](ar_8h.md#define-aram_dir_aram_to_mram)  `0x01`<br> |
| define  | [**ARAM\_DIR\_MRAM\_TO\_ARAM**](ar_8h.md#define-aram_dir_mram_to_aram)  `0x00`<br> |
| define  | [**ARQ\_DMA\_ALIGNMENT**](ar_8h.md#define-arq_dma_alignment)  `32`<br> |
| define  | [**ARQ\_PRIORITY\_HIGH**](ar_8h.md#define-arq_priority_high)  `1`<br> |
| define  | [**ARQ\_PRIORITY\_LOW**](ar_8h.md#define-arq_priority_low)  `0`<br> |
| define  | [**ARQ\_TYPE\_ARAM\_TO\_MRAM**](ar_8h.md#define-arq_type_aram_to_mram)  `[**ARAM\_DIR\_ARAM\_TO\_MRAM**](ar_8h.md#define-aram_dir_aram_to_mram)`<br> |
| define  | [**ARQ\_TYPE\_MRAM\_TO\_ARAM**](ar_8h.md#define-arq_type_mram_to_aram)  `[**ARAM\_DIR\_MRAM\_TO\_ARAM**](ar_8h.md#define-aram_dir_mram_to_aram)`<br> |
| define  | [**ARStartDMARead**](ar_8h.md#define-arstartdmaread) (mmem, aram, len) `[**ARStartDMA**](ar_8h.md#function-arstartdma) ([**ARAM\_DIR\_ARAM\_TO\_MRAM**](ar_8h.md#define-aram_dir_aram_to_mram), [**mmem**](_c_a_r_d_private_8h.md#define-card_max_mount_step), [**aram**](_c_a_r_d_private_8h.md#define-card_max_mount_step), [**len**](_c_a_r_d_private_8h.md#define-card_max_mount_step))`<br> |
| define  | [**ARStartDMAWrite**](ar_8h.md#define-arstartdmawrite) (mmem, aram, len) `[**ARStartDMA**](ar_8h.md#function-arstartdma) ([**ARAM\_DIR\_MRAM\_TO\_ARAM**](ar_8h.md#define-aram_dir_mram_to_aram), [**mmem**](_c_a_r_d_private_8h.md#define-card_max_mount_step), [**aram**](_c_a_r_d_private_8h.md#define-card_max_mount_step), [**len**](_c_a_r_d_private_8h.md#define-card_max_mount_step))`<br> |

## Public Types Documentation




### typedef ARQCallback 

```C++
typedef void(* ARQCallback) (u32 pointerToARQRequest);
```




<hr>



### typedef ARQRequest 

```C++
typedef struct ARQRequest ARQRequest;
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



### function ARQFlushQueue 

```C++
void ARQFlushQueue (
    void
) 
```




<hr>



### function ARQGetChunkSize 

```C++
u32 ARQGetChunkSize (
    void
) 
```




<hr>



### function ARQInit 

```C++
void ARQInit (
    void
) 
```




<hr>



### function ARQPostRequest 

```C++
void ARQPostRequest (
    struct  ARQRequest * request,
    u32 owner,
    u32 type,
    u32 priority,
    u32 source,
    u32 dest,
    u32 length,
    ARQCallback callback
) 
```




<hr>



### function ARQRemoveOwnerRequest 

```C++
void ARQRemoveOwnerRequest (
    u32 owner
) 
```




<hr>



### function ARQRemoveRequest 

```C++
void ARQRemoveRequest (
    struct  ARQRequest * request
) 
```




<hr>



### function ARQReset 

```C++
void ARQReset (
    void
) 
```




<hr>



### function ARQSetChunkSize 

```C++
void ARQSetChunkSize (
    u32 size
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
## Macro Definition Documentation





### define ARAM\_DIR\_ARAM\_TO\_MRAM 

```C++
#define ARAM_DIR_ARAM_TO_MRAM `0x01`
```




<hr>



### define ARAM\_DIR\_MRAM\_TO\_ARAM 

```C++
#define ARAM_DIR_MRAM_TO_ARAM `0x00`
```




<hr>



### define ARQ\_DMA\_ALIGNMENT 

```C++
#define ARQ_DMA_ALIGNMENT `32`
```




<hr>



### define ARQ\_PRIORITY\_HIGH 

```C++
#define ARQ_PRIORITY_HIGH `1`
```




<hr>



### define ARQ\_PRIORITY\_LOW 

```C++
#define ARQ_PRIORITY_LOW `0`
```




<hr>



### define ARQ\_TYPE\_ARAM\_TO\_MRAM 

```C++
#define ARQ_TYPE_ARAM_TO_MRAM `ARAM_DIR_ARAM_TO_MRAM`
```




<hr>



### define ARQ\_TYPE\_MRAM\_TO\_ARAM 

```C++
#define ARQ_TYPE_MRAM_TO_ARAM `ARAM_DIR_MRAM_TO_ARAM`
```




<hr>



### define ARStartDMARead 

```C++
#define ARStartDMARead (
    mmem,
    aram,
    len
) `ARStartDMA ( ARAM_DIR_ARAM_TO_MRAM , mmem , aram , len )`
```




<hr>



### define ARStartDMAWrite 

```C++
#define ARStartDMAWrite (
    mmem,
    aram,
    len
) `ARStartDMA ( ARAM_DIR_MRAM_TO_ARAM , mmem , aram , len )`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/ar.h`

