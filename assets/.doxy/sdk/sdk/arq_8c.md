

# File arq.c



[**FileList**](files.md) **>** [**ar**](dir_1f6a6668d55aa42931fc4b14e0914ad0.md) **>** [**arq.c**](arq_8c.md)

[Go to the source code of this file](arq_8c_source.md)



* `#include <dolphin.h>`
* `#include <dolphin/ar.h>`
* `#include "ar_private.h"`























## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**ARQCallback**](ar_8h.md#typedef-arqcallback) | [**\_\_ARQCallbackHi**](#variable-__arqcallbackhi)  <br> |
|  [**ARQCallback**](ar_8h.md#typedef-arqcallback) | [**\_\_ARQCallbackLo**](#variable-__arqcallbacklo)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**\_\_ARQChunkSize**](#variable-__arqchunksize)  <br> |
|  [**ARQRequest**](struct_a_r_q_request.md) \* | [**\_\_ARQRequestPendingHi**](#variable-__arqrequestpendinghi)  <br> |
|  [**ARQRequest**](struct_a_r_q_request.md) \* | [**\_\_ARQRequestPendingLo**](#variable-__arqrequestpendinglo)  <br> |
|  [**ARQRequest**](struct_a_r_q_request.md) \* | [**\_\_ARQRequestQueueHi**](#variable-__arqrequestqueuehi)  <br> |
|  [**ARQRequest**](struct_a_r_q_request.md) \* | [**\_\_ARQRequestQueueLo**](#variable-__arqrequestqueuelo)  <br> |
|  [**ARQRequest**](struct_a_r_q_request.md) \* | [**\_\_ARQRequestQueueTemp**](#variable-__arqrequestqueuetemp)  <br> |
|  [**ARQRequest**](struct_a_r_q_request.md) \* | [**\_\_ARQRequestTailHi**](#variable-__arqrequesttailhi)  <br> |
|  [**ARQRequest**](struct_a_r_q_request.md) \* | [**\_\_ARQRequestTailLo**](#variable-__arqrequesttaillo)  <br> |
|  [**ARQRequest**](struct_a_r_q_request.md) \* | [**\_\_ARQRequestTailTemp**](#variable-__arqrequesttailtemp)  <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_ARQ\_init\_flag**](#variable-__arq_init_flag)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ARQFlushQueue**](#function-arqflushqueue) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**ARQGetChunkSize**](#function-arqgetchunksize) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ARQInit**](#function-arqinit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ARQPostRequest**](#function-arqpostrequest) ([**ARQRequest**](struct_a_r_q_request.md) \* request, [**u32**](types_8h.md#typedef-u32) owner, [**u32**](types_8h.md#typedef-u32) type, [**u32**](types_8h.md#typedef-u32) priority, [**u32**](types_8h.md#typedef-u32) source, [**u32**](types_8h.md#typedef-u32) dest, [**u32**](types_8h.md#typedef-u32) length, [**ARQCallback**](ar_8h.md#typedef-arqcallback) callback) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ARQRemoveOwnerRequest**](#function-arqremoveownerrequest) ([**u32**](types_8h.md#typedef-u32) owner) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ARQRemoveRequest**](#function-arqremoverequest) ([**ARQRequest**](struct_a_r_q_request.md) \* request) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ARQReset**](#function-arqreset) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ARQSetChunkSize**](#function-arqsetchunksize) ([**u32**](types_8h.md#typedef-u32) size) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_ARQCallbackHack**](#function-__arqcallbackhack) ([**u32**](types_8h.md#typedef-u32) unused) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_ARQInitTempQueue**](#function-__arqinittempqueue) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_ARQInterruptServiceRoutine**](#function-__arqinterruptserviceroutine) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_ARQPopTaskQueueHi**](#function-__arqpoptaskqueuehi) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_ARQPushTempQueue**](#function-__arqpushtempqueue) ([**ARQRequest**](struct_a_r_q_request.md) \* task) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_ARQServiceQueueLo**](#function-__arqservicequeuelo) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |




























## Public Static Attributes Documentation




### variable \_\_ARQCallbackHi 

```C++
ARQCallback __ARQCallbackHi;
```




<hr>



### variable \_\_ARQCallbackLo 

```C++
ARQCallback __ARQCallbackLo;
```




<hr>



### variable \_\_ARQChunkSize 

```C++
u32 __ARQChunkSize;
```




<hr>



### variable \_\_ARQRequestPendingHi 

```C++
ARQRequest* __ARQRequestPendingHi;
```




<hr>



### variable \_\_ARQRequestPendingLo 

```C++
ARQRequest* __ARQRequestPendingLo;
```




<hr>



### variable \_\_ARQRequestQueueHi 

```C++
ARQRequest* __ARQRequestQueueHi;
```




<hr>



### variable \_\_ARQRequestQueueLo 

```C++
ARQRequest* __ARQRequestQueueLo;
```




<hr>



### variable \_\_ARQRequestQueueTemp 

```C++
ARQRequest* __ARQRequestQueueTemp;
```




<hr>



### variable \_\_ARQRequestTailHi 

```C++
ARQRequest* __ARQRequestTailHi;
```




<hr>



### variable \_\_ARQRequestTailLo 

```C++
ARQRequest* __ARQRequestTailLo;
```




<hr>



### variable \_\_ARQRequestTailTemp 

```C++
ARQRequest* __ARQRequestTailTemp;
```




<hr>



### variable \_\_ARQ\_init\_flag 

```C++
int __ARQ_init_flag;
```




<hr>
## Public Functions Documentation




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
    ARQRequest * request,
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
    ARQRequest * request
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



### function \_\_ARQCallbackHack 

```C++
void __ARQCallbackHack (
    u32 unused
) 
```




<hr>



### function \_\_ARQInitTempQueue 

```C++
void __ARQInitTempQueue (
    void
) 
```




<hr>



### function \_\_ARQInterruptServiceRoutine 

```C++
void __ARQInterruptServiceRoutine () 
```




<hr>



### function \_\_ARQPopTaskQueueHi 

```C++
void __ARQPopTaskQueueHi (
    void
) 
```




<hr>



### function \_\_ARQPushTempQueue 

```C++
void __ARQPushTempQueue (
    ARQRequest * task
) 
```




<hr>



### function \_\_ARQServiceQueueLo 

```C++
void __ARQServiceQueueLo (
    void
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/ar/arq.c`

