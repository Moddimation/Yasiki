

# File OSCache.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**os**](dir_2e13e6cf1d2e2aa91cbc210fef9f68a3.md) **>** [**OSCache.h**](_o_s_cache_8h.md)

[Go to the source code of this file](_o_s_cache_8h_source.md)



* `#include <types.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DCFlushRange**](#function-dcflushrange) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* addr, [**u32**](types_8h.md#typedef-u32) nBytes) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DCFlushRangeNoSync**](#function-dcflushrangenosync) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* addr, [**u32**](types_8h.md#typedef-u32) nBytes) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DCInvalidateRange**](#function-dcinvalidaterange) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* addr, [**u32**](types_8h.md#typedef-u32) nBytes) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DCStoreRange**](#function-dcstorerange) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* addr, [**u32**](types_8h.md#typedef-u32) nBytes) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DCStoreRangeNoSync**](#function-dcstorerangenosync) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* addr, [**u32**](types_8h.md#typedef-u32) nBytes) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DCTouchRange**](#function-dctouchrange) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* addr, [**u32**](types_8h.md#typedef-u32) nBytes) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DCZeroRange**](#function-dczerorange) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* addr, [**u32**](types_8h.md#typedef-u32) nBytes) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ICInvalidateRange**](#function-icinvalidaterange) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* addr, [**u32**](types_8h.md#typedef-u32) nBytes) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**LCDisable**](#function-lcdisable) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**LCEnable**](#function-lcenable) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**LCFlushQueue**](#function-lcflushqueue) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**LCLoadBlocks**](#function-lcloadblocks) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* destTag, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* srcAddr, [**u32**](types_8h.md#typedef-u32) numBlocks) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**LCLoadData**](#function-lcloaddata) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* destAddr, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* srcAddr, [**u32**](types_8h.md#typedef-u32) nBytes) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**LCQueueLength**](#function-lcqueuelength) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**LCQueueWait**](#function-lcqueuewait) ([**u32**](types_8h.md#typedef-u32) len) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**LCStoreBlocks**](#function-lcstoreblocks) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* destAddr, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* srcTag, [**u32**](types_8h.md#typedef-u32) numBlocks) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**LCStoreData**](#function-lcstoredata) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* destAddr, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* srcAddr, [**u32**](types_8h.md#typedef-u32) nBytes) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_OSCacheInit**](#function-__oscacheinit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**LCGetBase**](_o_s_cache_8h.md#define-lcgetbase) () `(([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)\*)[**LC\_BASE**](_o_s_cache_8h.md#define-lc_base))`<br> |
| define  | [**LC\_BASE**](_o_s_cache_8h.md#define-lc_base)  `([**LC\_BASE\_PREFIX**](_o_s_cache_8h.md#define-lc_base_prefix) &lt;&lt; 16)`<br> |
| define  | [**LC\_BASE\_PREFIX**](_o_s_cache_8h.md#define-lc_base_prefix)  `0xE000`<br> |

## Public Functions Documentation




### function DCFlushRange 

```C++
void DCFlushRange (
    void * addr,
    u32 nBytes
) 
```




<hr>



### function DCFlushRangeNoSync 

```C++
void DCFlushRangeNoSync (
    void * addr,
    u32 nBytes
) 
```




<hr>



### function DCInvalidateRange 

```C++
void DCInvalidateRange (
    void * addr,
    u32 nBytes
) 
```




<hr>



### function DCStoreRange 

```C++
void DCStoreRange (
    void * addr,
    u32 nBytes
) 
```




<hr>



### function DCStoreRangeNoSync 

```C++
void DCStoreRangeNoSync (
    void * addr,
    u32 nBytes
) 
```




<hr>



### function DCTouchRange 

```C++
void DCTouchRange (
    void * addr,
    u32 nBytes
) 
```




<hr>



### function DCZeroRange 

```C++
void DCZeroRange (
    void * addr,
    u32 nBytes
) 
```




<hr>



### function ICInvalidateRange 

```C++
void ICInvalidateRange (
    void * addr,
    u32 nBytes
) 
```




<hr>



### function LCDisable 

```C++
void LCDisable (
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
void LCFlushQueue (
    void
) 
```




<hr>



### function LCLoadBlocks 

```C++
void LCLoadBlocks (
    void * destTag,
    void * srcAddr,
    u32 numBlocks
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
u32 LCQueueLength (
    void
) 
```




<hr>



### function LCQueueWait 

```C++
void LCQueueWait (
    u32 len
) 
```




<hr>



### function LCStoreBlocks 

```C++
void LCStoreBlocks (
    void * destAddr,
    void * srcTag,
    u32 numBlocks
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
void __OSCacheInit (
    void
) 
```




<hr>
## Macro Definition Documentation





### define LCGetBase 

```C++
#define LCGetBase (
    
) `(( void *) LC_BASE )`
```




<hr>



### define LC\_BASE 

```C++
#define LC_BASE `( LC_BASE_PREFIX << 16)`
```




<hr>



### define LC\_BASE\_PREFIX 

```C++
#define LC_BASE_PREFIX `0xE000`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/os/OSCache.h`

