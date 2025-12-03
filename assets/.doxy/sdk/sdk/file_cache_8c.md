

# File fileCache.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**fileCache**](dir_4ddba504d40851ddcdd8c9a647bf66a4.md) **>** [**fileCache.c**](file_cache_8c.md)

[Go to the source code of this file](file_cache_8c_source.md)



* `#include <dolphin/os.h>`
* `#include <charPipeline/fileCache.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**u8**](types_8h.md#typedef-u8) | [**DOCacheInitialized**](#variable-docacheinitialized)  <br> |
|  [**DSCache**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DODisplayCache**](#variable-dodisplaycache)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**CSHInitDisplayCache**](#function-cshinitdisplaycache) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**DSCacheNodePtr**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DSAddCacheNode**](#function-dsaddcachenode) ([**DSCachePtr**](_c_a_r_d_private_8h.md#define-card_max_mount_step) cache, [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* name, [**Ptr**](types_8h.md#typedef-ptr) data, [**Ptr**](types_8h.md#typedef-ptr) OSFreeFunc) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DSEmptyCache**](#function-dsemptycache) ([**DSCachePtr**](_c_a_r_d_private_8h.md#define-card_max_mount_step) cache) <br> |
|  [**Ptr**](types_8h.md#typedef-ptr) | [**DSGetCacheObj**](#function-dsgetcacheobj) ([**DSCachePtr**](_c_a_r_d_private_8h.md#define-card_max_mount_step) cache, [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* name) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DSInitCache**](#function-dsinitcache) ([**DSCachePtr**](_c_a_r_d_private_8h.md#define-card_max_mount_step) cache) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DSPurgeCache**](#function-dspurgecache) ([**DSCachePtr**](_c_a_r_d_private_8h.md#define-card_max_mount_step) cache) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DSReleaseCacheObj**](#function-dsreleasecacheobj) ([**DSCachePtr**](_c_a_r_d_private_8h.md#define-card_max_mount_step) cache, [**Ptr**](types_8h.md#typedef-ptr) data) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DSSetCachePurgeFlag**](#function-dssetcachepurgeflag) ([**DSCachePtr**](_c_a_r_d_private_8h.md#define-card_max_mount_step) cache, [**u8**](types_8h.md#typedef-u8) purgeFlag) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**u8**](types_8h.md#typedef-u8) | [**AllocCacheNode**](#function-alloccachenode) ([**DSCacheNodePtr**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* cacheNode, [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* name) <br> |
|  [**DSCacheNodePtr**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**FindCacheNode**](#function-findcachenode) ([**DSCachePtr**](_c_a_r_d_private_8h.md#define-card_max_mount_step) cache, [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* name, [**Ptr**](types_8h.md#typedef-ptr) data) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**FreeCacheNode**](#function-freecachenode) ([**DSCacheNodePtr**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* cacheNode) <br> |


























## Public Attributes Documentation




### variable DOCacheInitialized 

```C++
u8 DOCacheInitialized;
```




<hr>



### variable DODisplayCache 

```C++
DSCache DODisplayCache;
```




<hr>
## Public Functions Documentation




### function CSHInitDisplayCache 

```C++
void CSHInitDisplayCache (
    void
) 
```




<hr>



### function DSAddCacheNode 

```C++
DSCacheNodePtr DSAddCacheNode (
    DSCachePtr cache,
    char * name,
    Ptr data,
    Ptr OSFreeFunc
) 
```




<hr>



### function DSEmptyCache 

```C++
void DSEmptyCache (
    DSCachePtr cache
) 
```




<hr>



### function DSGetCacheObj 

```C++
Ptr DSGetCacheObj (
    DSCachePtr cache,
    char * name
) 
```




<hr>



### function DSInitCache 

```C++
void DSInitCache (
    DSCachePtr cache
) 
```




<hr>



### function DSPurgeCache 

```C++
void DSPurgeCache (
    DSCachePtr cache
) 
```




<hr>



### function DSReleaseCacheObj 

```C++
void DSReleaseCacheObj (
    DSCachePtr cache,
    Ptr data
) 
```




<hr>



### function DSSetCachePurgeFlag 

```C++
void DSSetCachePurgeFlag (
    DSCachePtr cache,
    u8 purgeFlag
) 
```




<hr>
## Public Static Functions Documentation




### function AllocCacheNode 

```C++
static u8 AllocCacheNode (
    DSCacheNodePtr * cacheNode,
    char * name
) 
```




<hr>



### function FindCacheNode 

```C++
static DSCacheNodePtr FindCacheNode (
    DSCachePtr cache,
    char * name,
    Ptr data
) 
```




<hr>



### function FreeCacheNode 

```C++
static void FreeCacheNode (
    DSCacheNodePtr * cacheNode
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/fileCache/fileCache.c`

