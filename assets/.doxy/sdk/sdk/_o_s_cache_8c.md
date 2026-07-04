

# File OSCache.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**os**](dir_c85f9e83f0f4b4374578811cecebda65.md) **>** [**OSCache.c**](_o_s_cache_8c.md)

[Go to the source code of this file](_o_s_cache_8c_source.md)



* `#include <dolphin/db.h>`
* `#include <dolphin/os.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DCBlockFlush**](#function-dcblockflush) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* addr) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DCBlockInvalidate**](#function-dcblockinvalidate) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* addr) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DCBlockStore**](#function-dcblockstore) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* addr) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DCBlockZero**](#function-dcblockzero) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* addr) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DCDisable**](#function-dcdisable) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DCEnable**](#function-dcenable) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DCFlashInvalidate**](#function-dcflashinvalidate) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DCFlushRange**](#function-dcflushrange) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* addr, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) nBytes) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DCFlushRangeNoSync**](#function-dcflushrangenosync) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* addr, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) nBytes) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DCFreeze**](#function-dcfreeze) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DCInvalidateRange**](#function-dcinvalidaterange) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* addr, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) nBytes) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DCStoreRange**](#function-dcstorerange) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* addr, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) nBytes) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DCStoreRangeNoSync**](#function-dcstorerangenosync) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* addr, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) nBytes) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DCTouchLoad**](#function-dctouchload) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* addr) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DCTouchRange**](#function-dctouchrange) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* addr, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) nBytes) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DCUnfreeze**](#function-dcunfreeze) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DCZeroRange**](#function-dczerorange) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* addr, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) nBytes) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DMAErrorHandler**](#function-dmaerrorhandler) ([**OSError**](_o_s_error_8h.md#typedef-oserror) error, [**OSContext**](struct_o_s_context.md) \* context, ...) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ICBlockInvalidate**](#function-icblockinvalidate) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* addr) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ICDisable**](#function-icdisable) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ICEnable**](#function-icenable) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ICFlashInvalidate**](#function-icflashinvalidate) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ICFreeze**](#function-icfreeze) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ICInvalidateRange**](#function-icinvalidaterange) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* addr, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) nBytes) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ICSync**](#function-icsync) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ICUnfreeze**](#function-icunfreeze) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**L2Disable**](#function-l2disable) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**L2Enable**](#function-l2enable) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**L2GlobalInvalidate**](#function-l2globalinvalidate) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**L2SetDataOnly**](#function-l2setdataonly) ([**BOOL**](types_8h.md#typedef-bool) dataOnly) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**L2SetWriteThrough**](#function-l2setwritethrough) ([**BOOL**](types_8h.md#typedef-bool) writeThrough) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**LCAlloc**](#function-lcalloc) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* addr, [**u32**](types_8h.md#typedef-u32) nBytes) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**LCAllocNoInvalidate**](#function-lcallocnoinvalidate) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* addr, [**u32**](types_8h.md#typedef-u32) nBytes) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**LCAllocOneTag**](#function-lcalloconetag) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**BOOL**](types_8h.md#typedef-bool) invalidate, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* tag) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**LCAllocTags**](#function-lcalloctags) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**BOOL**](types_8h.md#typedef-bool) invalidate, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* startTag, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) numBlocks) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**LCDisable**](#function-lcdisable) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**LCEnable**](#function-lcenable) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**LCFlushQueue**](#function-lcflushqueue) () <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**LCLoadBlocks**](#function-lcloadblocks) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* destTag, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* srcAddr, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) numBlocks) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**LCLoadData**](#function-lcloaddata) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* destAddr, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* srcAddr, [**u32**](types_8h.md#typedef-u32) nBytes) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) | [**LCQueueLength**](#function-lcqueuelength) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**LCQueueWait**](#function-lcqueuewait) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) len) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**LCStoreBlocks**](#function-lcstoreblocks) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* destAddr, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* srcTag, [**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) numBlocks) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**LCStoreData**](#function-lcstoredata) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* destAddr, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* srcAddr, [**u32**](types_8h.md#typedef-u32) nBytes) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSCacheInit**](#function-__oscacheinit) () <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**L2Init**](#function-l2init) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_LCEnable**](#function-__lcenable) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |

























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**CACHE\_LINES**](_o_s_cache_8c.md#define-cache_lines)  `1024`<br> |
| define  | [**HID2**](_o_s_cache_8c.md#define-hid2)  `920`<br> |
| define  | [**LC\_LINES**](_o_s_cache_8c.md#define-lc_lines)  `512`<br> |

## Public Functions Documentation




### function DCBlockFlush 

```C++
asm  void DCBlockFlush (
    register  void * addr
) 
```




<hr>



### function DCBlockInvalidate 

```C++
asm  void DCBlockInvalidate (
    register  void * addr
) 
```




<hr>



### function DCBlockStore 

```C++
asm  void DCBlockStore (
    register  void * addr
) 
```




<hr>



### function DCBlockZero 

```C++
asm  void DCBlockZero (
    register  void * addr
) 
```




<hr>



### function DCDisable 

```C++
asm  void DCDisable (
    void
) 
```




<hr>



### function DCEnable 

```C++
asm  void DCEnable (
    void
) 
```




<hr>



### function DCFlashInvalidate 

```C++
asm  void DCFlashInvalidate (
    void
) 
```




<hr>



### function DCFlushRange 

```C++
asm  void DCFlushRange (
    register  void * addr,
    register  u32 nBytes
) 
```




<hr>



### function DCFlushRangeNoSync 

```C++
asm  void DCFlushRangeNoSync (
    register  void * addr,
    register  u32 nBytes
) 
```




<hr>



### function DCFreeze 

```C++
asm  void DCFreeze (
    void
) 
```




<hr>



### function DCInvalidateRange 

```C++
asm  void DCInvalidateRange (
    register  void * addr,
    register  u32 nBytes
) 
```




<hr>



### function DCStoreRange 

```C++
asm  void DCStoreRange (
    register  void * addr,
    register  u32 nBytes
) 
```




<hr>



### function DCStoreRangeNoSync 

```C++
asm  void DCStoreRangeNoSync (
    register  void * addr,
    register  u32 nBytes
) 
```




<hr>



### function DCTouchLoad 

```C++
asm  void DCTouchLoad (
    register  void * addr
) 
```




<hr>



### function DCTouchRange 

```C++
asm  void DCTouchRange (
    register  void * addr,
    register  u32 nBytes
) 
```




<hr>



### function DCUnfreeze 

```C++
asm  void DCUnfreeze (
    void
) 
```




<hr>



### function DCZeroRange 

```C++
asm  void DCZeroRange (
    register  void * addr,
    register  u32 nBytes
) 
```




<hr>



### function DMAErrorHandler 

```C++
void DMAErrorHandler (
    OSError error,
    OSContext * context,
    ...
) 
```




<hr>



### function ICBlockInvalidate 

```C++
asm  void ICBlockInvalidate (
    register  void * addr
) 
```




<hr>



### function ICDisable 

```C++
asm  void ICDisable (
    void
) 
```




<hr>



### function ICEnable 

```C++
asm  void ICEnable (
    void
) 
```




<hr>



### function ICFlashInvalidate 

```C++
asm  void ICFlashInvalidate (
    void
) 
```




<hr>



### function ICFreeze 

```C++
asm  void ICFreeze (
    void
) 
```




<hr>



### function ICInvalidateRange 

```C++
asm  void ICInvalidateRange (
    register  void * addr,
    register  u32 nBytes
) 
```




<hr>



### function ICSync 

```C++
asm  void ICSync (
    void
) 
```




<hr>



### function ICUnfreeze 

```C++
asm  void ICUnfreeze (
    void
) 
```




<hr>



### function L2Disable 

```C++
void L2Disable (
    void
) 
```




<hr>



### function L2Enable 

```C++
void L2Enable (
    void
) 
```




<hr>



### function L2GlobalInvalidate 

```C++
void L2GlobalInvalidate (
    void
) 
```




<hr>



### function L2SetDataOnly 

```C++
void L2SetDataOnly (
    BOOL dataOnly
) 
```




<hr>



### function L2SetWriteThrough 

```C++
void L2SetWriteThrough (
    BOOL writeThrough
) 
```




<hr>



### function LCAlloc 

```C++
void LCAlloc (
    void * addr,
    u32 nBytes
) 
```




<hr>



### function LCAllocNoInvalidate 

```C++
void LCAllocNoInvalidate (
    void * addr,
    u32 nBytes
) 
```




<hr>



### function LCAllocOneTag 

```C++
asm  void LCAllocOneTag (
    register  BOOL invalidate,
    register  void * tag
) 
```




<hr>



### function LCAllocTags 

```C++
asm  void LCAllocTags (
    register  BOOL invalidate,
    register  void * startTag,
    register  u32 numBlocks
) 
```




<hr>



### function LCDisable 

```C++
asm  void LCDisable (
    void
) 
```




<hr>



### function LCEnable 

```C++
void LCEnable (
    void
) 
```




<hr>



### function LCFlushQueue 

```C++
void LCFlushQueue () 
```




<hr>



### function LCLoadBlocks 

```C++
asm  void LCLoadBlocks (
    register  void * destTag,
    register  void * srcAddr,
    register  u32 numBlocks
) 
```




<hr>



### function LCLoadData 

```C++
u32 LCLoadData (
    void * destAddr,
    void * srcAddr,
    u32 nBytes
) 
```




<hr>



### function LCQueueLength 

```C++
asm  u32 LCQueueLength (
    void
) 
```




<hr>



### function LCQueueWait 

```C++
asm  void LCQueueWait (
    register  u32 len
) 
```




<hr>



### function LCStoreBlocks 

```C++
asm  void LCStoreBlocks (
    register  void * destAddr,
    register  void * srcTag,
    register  u32 numBlocks
) 
```




<hr>



### function LCStoreData 

```C++
u32 LCStoreData (
    void * destAddr,
    void * srcAddr,
    u32 nBytes
) 
```




<hr>



### function \_\_OSCacheInit 

```C++
void __OSCacheInit () 
```




<hr>
## Public Static Functions Documentation




### function L2Init 

```C++
static void L2Init (
    void
) 
```




<hr>



### function \_\_LCEnable 

```C++
static asm  void __LCEnable (
    void
) 
```




<hr>
## Macro Definition Documentation





### define CACHE\_LINES 

```C++
#define CACHE_LINES `1024`
```




<hr>



### define HID2 

```C++
#define HID2 `920`
```




<hr>



### define LC\_LINES 

```C++
#define LC_LINES `512`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/os/OSCache.c`

