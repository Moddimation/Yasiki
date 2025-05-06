

# Class JKRHeap



[**ClassList**](annotated.md) **>** [**JKRHeap**](class_j_k_r_heap.md)





* `#include <JKRHeap.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**constructor**](_j_u_t_types_8h.md#define-constructor) | [**JKRHeap**](#function-jkrheap) ([**JKRHeapObj**](_j_k_r_heap_8h.md#typedef-jkrheapobj), u32, [**JKRHeap**](class_j_k_r_heap.md) \*, bool) <br> |
| virtual void | [**alloc**](#function-alloc-12) (u32, int) <br> |
|  void | [**appendDisposer**](#function-appenddisposer) ([**JKRDisposer**](struct_j_k_r_disposer.md) \* disposer) <br> |
|  void | [**becomeCurrentHeap**](#function-becomecurrentheap) () <br> |
|  void | [**becomeSystemHeap**](#function-becomesystemheap) () <br> |
| virtual void | [**check**](#function-check) () <br> |
|  void | [**dispose**](#function-dispose-13) ([**JKRHeapObj**](_j_k_r_heap_8h.md#typedef-jkrheapobj), u32) <br> |
|  void | [**dispose**](#function-dispose-23) ([**JKRHeapObj**](_j_k_r_heap_8h.md#typedef-jkrheapobj), [**JKRHeapObj**](_j_k_r_heap_8h.md#typedef-jkrheapobj)) <br> |
|  void | [**dispose**](#function-dispose-33) () <br> |
|  void | [**dispose\_subroutine**](#function-dispose_subroutine) (u32, u32) <br> |
| virtual void | [**dump**](#function-dump) () <br> |
| virtual void | [**dump\_sort**](#function-dump_sort) () <br> |
|  void | [**find**](#function-find) ([**JKRHeapObj**](_j_k_r_heap_8h.md#typedef-jkrheapobj)) const<br> |
| virtual void | [**free**](#function-free) ([**JKRHeapObj**](_j_k_r_heap_8h.md#typedef-jkrheapobj)) <br> |
| virtual void | [**freeAll**](#function-freeall) () <br> |
| virtual void | [**freeTail**](#function-freetail) () <br> |
| virtual u32 | [**getCurrentGroupId**](#function-getcurrentgroupid) () <br> |
| virtual u32 | [**getFreeSize**](#function-getfreesize) () <br> |
| virtual u32 | [**getHeapType**](#function-getheaptype) () <br> |
| virtual u32 | [**getSize**](#function-getsize) ([**JKRHeapObj**](_j_k_r_heap_8h.md#typedef-jkrheapobj)) <br> |
| virtual u32 | [**getTotalFreeSize**](#function-gettotalfreesize) () <br> |
|  void | [**removeDisposer**](#function-removedisposer) ([**JKRDisposer**](struct_j_k_r_disposer.md) \* disposer) <br> |
| virtual void | [**resize**](#function-resize) ([**JKRHeapObj**](_j_k_r_heap_8h.md#typedef-jkrheapobj), int) <br> |
|  [**destructor**](_j_u_t_types_8h.md#define-destructor) | [**~JKRHeap**](#function-jkrheap) () <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  void | [**alloc**](#function-alloc-22) (u32, int, [**JKRHeap**](class_j_k_r_heap.md) \* heap) <br> |
|  void | [**copyMemory**](#function-copymemory) ([**JKRHeapObj**](_j_k_r_heap_8h.md#typedef-jkrheapobj), [**JKRHeapObj**](_j_k_r_heap_8h.md#typedef-jkrheapobj), u32) <br> |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**findFromRoot**](#function-findfromroot) ([**JKRHeapObj**](_j_k_r_heap_8h.md#typedef-jkrheapobj)) <br> |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**initArena**](#function-initarena) (char \*\*, u32 \*, int size) <br> |


























## Public Functions Documentation




### function JKRHeap 

```C++
constructor JKRHeap::JKRHeap (
    JKRHeapObj,
    u32,
    JKRHeap *,
    bool
) 
```




<hr>



### function alloc [1/2]

```C++
virtual void JKRHeap::alloc (
    u32,
    int
) 
```




<hr>



### function appendDisposer 

```C++
inline void JKRHeap::appendDisposer (
    JKRDisposer * disposer
) 
```




<hr>



### function becomeCurrentHeap 

```C++
void JKRHeap::becomeCurrentHeap () 
```




<hr>



### function becomeSystemHeap 

```C++
void JKRHeap::becomeSystemHeap () 
```




<hr>



### function check 

```C++
virtual void JKRHeap::check () 
```




<hr>



### function dispose [1/3]

```C++
void JKRHeap::dispose (
    JKRHeapObj,
    u32
) 
```




<hr>



### function dispose [2/3]

```C++
void JKRHeap::dispose (
    JKRHeapObj,
    JKRHeapObj
) 
```




<hr>



### function dispose [3/3]

```C++
void JKRHeap::dispose () 
```




<hr>



### function dispose\_subroutine 

```C++
void JKRHeap::dispose_subroutine (
    u32,
    u32
) 
```




<hr>



### function dump 

```C++
virtual void JKRHeap::dump () 
```




<hr>



### function dump\_sort 

```C++
virtual void JKRHeap::dump_sort () 
```




<hr>



### function find 

```C++
void JKRHeap::find (
    JKRHeapObj
) const
```




<hr>



### function free 

```C++
virtual void JKRHeap::free (
    JKRHeapObj
) 
```




<hr>



### function freeAll 

```C++
virtual void JKRHeap::freeAll () 
```




<hr>



### function freeTail 

```C++
virtual void JKRHeap::freeTail () 
```




<hr>



### function getCurrentGroupId 

```C++
virtual u32 JKRHeap::getCurrentGroupId () 
```




<hr>



### function getFreeSize 

```C++
virtual u32 JKRHeap::getFreeSize () 
```




<hr>



### function getHeapType 

```C++
virtual u32 JKRHeap::getHeapType () 
```




<hr>



### function getSize 

```C++
virtual u32 JKRHeap::getSize (
    JKRHeapObj
) 
```




<hr>



### function getTotalFreeSize 

```C++
virtual u32 JKRHeap::getTotalFreeSize () 
```




<hr>



### function removeDisposer 

```C++
inline void JKRHeap::removeDisposer (
    JKRDisposer * disposer
) 
```




<hr>



### function resize 

```C++
virtual void JKRHeap::resize (
    JKRHeapObj,
    int
) 
```




<hr>



### function ~JKRHeap 

```C++
destructor JKRHeap::~JKRHeap () 
```




<hr>
## Public Static Functions Documentation




### function alloc [2/2]

```C++
static void JKRHeap::alloc (
    u32,
    int,
    JKRHeap * heap
) 
```




<hr>



### function copyMemory 

```C++
static void JKRHeap::copyMemory (
    JKRHeapObj,
    JKRHeapObj,
    u32
) 
```




<hr>



### function findFromRoot 

```C++
static JKRHeap * JKRHeap::findFromRoot (
    JKRHeapObj
) 
```




<hr>



### function initArena 

```C++
static JKRHeap * JKRHeap::initArena (
    char **,
    u32 *,
    int size
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `JSystem/System/JKernel/include/JKRHeap.h`

