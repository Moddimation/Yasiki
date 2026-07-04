

# File OSAlloc.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**os**](dir_2e13e6cf1d2e2aa91cbc210fef9f68a3.md) **>** [**OSAlloc.h**](_o_s_alloc_8h.md)

[Go to the source code of this file](_o_s_alloc_8h_source.md)



* `#include <types.h>`

















## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSHeapHandle**](#typedef-osheaphandle)  <br> |




## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSHeapHandle**](_o_s_alloc_8h.md#typedef-osheaphandle) | [**\_\_OSCurrHeap**](#variable-__oscurrheap)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSAddToHeap**](#function-osaddtoheap) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) heap, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* start, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* end) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**OSAllocFixed**](#function-osallocfixed) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* rstart, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* rend) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**OSAllocFromHeap**](#function-osallocfromheap) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) heap, [**u32**](types_8h.md#typedef-u32) size) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**OSCheckHeap**](#function-oscheckheap) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) heap) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSCreateHeap**](#function-oscreateheap) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* start, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* end) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSDestroyHeap**](#function-osdestroyheap) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) heap) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSDumpHeap**](#function-osdumpheap) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) heap) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSFreeToHeap**](#function-osfreetoheap) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) heap, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* ptr) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**OSInitAlloc**](#function-osinitalloc) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* arenaStart, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* arenaEnd, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) maxHeaps) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**OSReferentSize**](#function-osreferentsize) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* ptr) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSSetCurrentHeap**](#function-ossetcurrentheap) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) heap) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSVisitAllocated**](#function-osvisitallocated) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \*, [**u32**](types_8h.md#typedef-u32)) visitor) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**OSAlloc**](_o_s_alloc_8h.md#define-osalloc) (size) `[**OSAllocFromHeap**](_o_s_alloc_8h.md#function-osallocfromheap) ([**\_\_OSCurrHeap**](_o_s_alloc_8h.md#variable-__oscurrheap), ([**size**](____ppc__eabi__init_8cpp.md#variable-size)))`<br> |
| define  | [**OSFree**](_o_s_alloc_8h.md#define-osfree) (ptr) `[**OSFreeToHeap**](_o_s_alloc_8h.md#function-osfreetoheap) ([**\_\_OSCurrHeap**](_o_s_alloc_8h.md#variable-__oscurrheap), ([**ptr**](_c_a_r_d_private_8h.md#define-card_max_mount_step)))`<br> |

## Public Types Documentation




### typedef OSHeapHandle 

```C++
typedef int OSHeapHandle;
```




<hr>
## Public Attributes Documentation




### variable \_\_OSCurrHeap 

```C++
volatile OSHeapHandle __OSCurrHeap;
```




<hr>
## Public Functions Documentation




### function OSAddToHeap 

```C++
void OSAddToHeap (
    int heap,
    void * start,
    void * end
) 
```




<hr>



### function OSAllocFixed 

```C++
void * OSAllocFixed (
    void * rstart,
    void * rend
) 
```




<hr>



### function OSAllocFromHeap 

```C++
void * OSAllocFromHeap (
    int heap,
    u32 size
) 
```




<hr>



### function OSCheckHeap 

```C++
s32 OSCheckHeap (
    int heap
) 
```




<hr>



### function OSCreateHeap 

```C++
int OSCreateHeap (
    void * start,
    void * end
) 
```




<hr>



### function OSDestroyHeap 

```C++
void OSDestroyHeap (
    int heap
) 
```




<hr>



### function OSDumpHeap 

```C++
void OSDumpHeap (
    int heap
) 
```




<hr>



### function OSFreeToHeap 

```C++
void OSFreeToHeap (
    int heap,
    void * ptr
) 
```




<hr>



### function OSInitAlloc 

```C++
void * OSInitAlloc (
    void * arenaStart,
    void * arenaEnd,
    int maxHeaps
) 
```




<hr>



### function OSReferentSize 

```C++
u32 OSReferentSize (
    void * ptr
) 
```




<hr>



### function OSSetCurrentHeap 

```C++
int OSSetCurrentHeap (
    int heap
) 
```




<hr>



### function OSVisitAllocated 

```C++
void OSVisitAllocated (
    void (*)( void *, u32 ) visitor
) 
```




<hr>
## Macro Definition Documentation





### define OSAlloc 

```C++
#define OSAlloc (
    size
) `OSAllocFromHeap ( __OSCurrHeap , ( size ))`
```




<hr>



### define OSFree 

```C++
#define OSFree (
    ptr
) `OSFreeToHeap ( __OSCurrHeap , ( ptr ))`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/os/OSAlloc.h`

