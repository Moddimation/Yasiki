

# Class JKRSolidHeap



[**ClassList**](annotated.md) **>** [**JKRSolidHeap**](class_j_k_r_solid_heap.md)





* `#include <JKRSolidHeap.h>`



Inherits the following classes: [JKRHeap](class_j_k_r_heap.md)










































































## Public Functions

| Type | Name |
| ---: | :--- |
|  s32 | [**adjustSize**](#function-adjustsize) (void) <br> |
| virtual [**override**](_j_u_t_types_8h.md#define-override) [**HANDLE**](_j_k_r_heap_8h.md#typedef-handle) | [**alloc**](#function-alloc) (size\_t size, int align) <br> |
|  [**HANDLE**](_j_k_r_heap_8h.md#typedef-handle) | [**allocFromHead**](#function-allocfromhead) (size\_t size, int align) <br> |
|  [**HANDLE**](_j_k_r_heap_8h.md#typedef-handle) | [**allocFromTail**](#function-allocfromtail) (size\_t size, int align) <br> |
| virtual [**override**](_j_u_t_types_8h.md#define-override) [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**check**](#function-check) (void) <br> |
|  void | [**destroy**](#function-destroy) (void) <br> |
| virtual [**override**](_j_u_t_types_8h.md#define-override) [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**dump**](#function-dump) (void) <br> |
| virtual [**override**](_j_u_t_types_8h.md#define-override) void | [**free**](#function-free) ([**HANDLE**](_j_k_r_heap_8h.md#typedef-handle) ptr) <br> |
| virtual [**override**](_j_u_t_types_8h.md#define-override) void | [**freeAll**](#function-freeall) (void) <br> |
| virtual [**override**](_j_u_t_types_8h.md#define-override) void | [**freeTail**](#function-freetail) (void) <br> |
| virtual [**override**](_j_u_t_types_8h.md#define-override) size\_t | [**getFreeSize**](#function-getfreesize) (void) <br> |
| virtual [**override**](_j_u_t_types_8h.md#define-override) u32 | [**getHeapType**](#function-getheaptype) (void) <br> |
| virtual [**override**](_j_u_t_types_8h.md#define-override) s32 | [**getSize**](#function-getsize) ([**HANDLE**](_j_k_r_heap_8h.md#typedef-handle) obj) <br> |
| virtual [**override**](_j_u_t_types_8h.md#define-override) size\_t | [**getTotalFreeSize**](#function-gettotalfreesize) (void) <br> |
| virtual [**override**](_j_u_t_types_8h.md#define-override) s32 | [**resize**](#function-resize) ([**HANDLE**](_j_k_r_heap_8h.md#typedef-handle) obj, size\_t size) <br> |


## Public Functions inherited from JKRHeap

See [JKRHeap](class_j_k_r_heap.md)

| Type | Name |
| ---: | :--- |
|  void | [**appendDisposer**](class_j_k_r_heap.md#function-appenddisposer) ([**JKRDisposer**](class_j_k_r_disposer.md) \* disposer) <br> |
|  void | [**removeDisposer**](class_j_k_r_heap.md#function-removedisposer) ([**JKRDisposer**](class_j_k_r_disposer.md) \* disposer) <br> |




## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**JKRSolidHeap**](class_j_k_r_solid_heap.md) \* | [**create**](#function-create) (size\_t size, [**JKRHeap**](class_j_k_r_heap.md) \* parent, [**BOOL**](_j_u_t_types_8h.md#define-bool) isError) <br> |


## Public Static Functions inherited from JKRHeap

See [JKRHeap](class_j_k_r_heap.md)

| Type | Name |
| ---: | :--- |
|  void \* | [**alloc**](class_j_k_r_heap.md#function-alloc-12) (size\_t size, int align, [**JKRHeap**](class_j_k_r_heap.md) \* heap) <br> |
|  void | [**copyMemory**](class_j_k_r_heap.md#function-copymemory) ([**HANDLE**](_j_k_r_heap_8h.md#typedef-handle) dest, [**HANDLE**](_j_k_r_heap_8h.md#typedef-handle) source, u32 size) <br> |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**findFromRoot**](class_j_k_r_heap.md#function-findfromroot) ([**HANDLE**](_j_k_r_heap_8h.md#typedef-handle) obj) <br> |
|  void | [**free**](class_j_k_r_heap.md#function-free-12) ([**HANDLE**](_j_k_r_heap_8h.md#typedef-handle) ptr, [**JKRHeap**](class_j_k_r_heap.md) \* heap) <br> |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**getCurrentHeap**](class_j_k_r_heap.md#function-getcurrentheap) () <br> |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**getRootHeap**](class_j_k_r_heap.md#function-getrootheap) () <br> |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**getSystemHeap**](class_j_k_r_heap.md#function-getsystemheap) () <br> |
|  [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**initArena**](class_j_k_r_heap.md#function-initarena) (char \*\* ramStart, u32 \* ramSize, int maxHeaps) <br> |




## Protected Types

| Type | Name |
| ---: | :--- |
| typedef struct [**Iter**](struct_j_k_r_solid_heap_1_1_iter.md) | [**Iter**](#typedef-iter)  <br> |












## Protected Attributes

| Type | Name |
| ---: | :--- |
|  size\_t | [**mFreeSize**](#variable-mfreesize)  <br> |
|  [**HANDLE**](_j_k_r_heap_8h.md#typedef-handle) | [**mHead**](#variable-mhead)  <br> |
|  [**Iter**](struct_j_k_r_solid_heap_1_1_iter.md) \* | [**mIter**](#variable-miter)  <br> |
|  [**HANDLE**](_j_k_r_heap_8h.md#typedef-handle) | [**mTail**](#variable-mtail)  <br> |


## Protected Attributes inherited from JKRHeap

See [JKRHeap](class_j_k_r_heap.md)

| Type | Name |
| ---: | :--- |
|  [**JSUList**](class_j_s_u_list.md)&lt; [**JKRDisposer**](class_j_k_r_disposer.md) &gt; | [**mDisposerList**](class_j_k_r_heap.md#variable-mdisposerlist)  <br>_0x58_  |
|  [**HANDLE**](_j_k_r_heap_8h.md#typedef-handle) | [**mEnd**](class_j_k_r_heap.md#variable-mend)  <br>_0x34_  |
|  [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**mErrorFlag**](class_j_k_r_heap.md#variable-merrorflag)  <br>_0x64_  |
|  [**JSUTree**](class_j_s_u_tree.md)&lt; [**JKRHeap**](class_j_k_r_heap.md) &gt; | [**mHeapTree**](class_j_k_r_heap.md#variable-mheaptree)  <br>_0x3C_  |
|  OSMutex | [**mMutex**](class_j_k_r_heap.md#variable-mmutex)  <br>_0x18_  |
|  size\_t | [**mSize**](class_j_k_r_heap.md#variable-msize)  <br>_0x38_  |
|  [**HANDLE**](_j_k_r_heap_8h.md#typedef-handle) | [**mStart**](class_j_k_r_heap.md#variable-mstart)  <br>_0x30_  |


## Protected Attributes inherited from JKRDisposer

See [JKRDisposer](class_j_k_r_disposer.md)

| Type | Name |
| ---: | :--- |
|  [**JSULink**](struct_j_s_u_link.md)&lt; [**JKRDisposer**](class_j_k_r_disposer.md) &gt; | [**mHeapLink**](class_j_k_r_disposer.md#variable-mheaplink)  <br>_0x04 // Link to disposer, for heap (?)_  |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**pHeapObj**](class_j_k_r_disposer.md#variable-pheapobj)  <br>_0x00 // Pointer to inheriting heap (?)_  |




## Protected Static Attributes inherited from JKRHeap

See [JKRHeap](class_j_k_r_heap.md)

| Type | Name |
| ---: | :--- |
|  [**JKRErrorRoutine**](_j_k_r_heap_8h.md#typedef-jkrerrorroutine) | [**mErrorHandler**](class_j_k_r_heap.md#variable-merrorhandler)   = `[**Nil**](_j_u_t_types_8h.md#define-nil)`<br> |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**sCurrentHeap**](class_j_k_r_heap.md#variable-scurrentheap)   = `[**Nil**](_j_u_t_types_8h.md#define-nil)`<br> |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**sRootHeap**](class_j_k_r_heap.md#variable-srootheap)   = `[**Nil**](_j_u_t_types_8h.md#define-nil)`<br> |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**sSystemHeap**](class_j_k_r_heap.md#variable-ssystemheap)   = `[**Nil**](_j_u_t_types_8h.md#define-nil)`<br> |








































## Protected Functions

| Type | Name |
| ---: | :--- |
|  [**constructor**](_j_u_t_types_8h.md#define-constructor) | [**JKRSolidHeap**](#function-jkrsolidheap) ([**HANDLE**](_j_k_r_heap_8h.md#typedef-handle) obj, size\_t size, [**JKRHeap**](class_j_k_r_heap.md) \* parent, bool is\_error) <br> |
|  [**destructor**](_j_u_t_types_8h.md#define-destructor) | [**~JKRSolidHeap**](#function-jkrsolidheap) () <br> |


## Protected Functions inherited from JKRHeap

See [JKRHeap](class_j_k_r_heap.md)

| Type | Name |
| ---: | :--- |
|  [**constructor**](_j_u_t_types_8h.md#define-constructor) | [**JKRHeap**](class_j_k_r_heap.md#function-jkrheap) ([**HANDLE**](_j_k_r_heap_8h.md#typedef-handle) obj, size\_t size, [**JKRHeap**](class_j_k_r_heap.md) \* parent, bool is\_error) <br> |
| virtual [**HANDLE**](_j_k_r_heap_8h.md#typedef-handle) | [**alloc**](class_j_k_r_heap.md#function-alloc-22) (size\_t size, int align) = 0<br> |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**becomeCurrentHeap**](class_j_k_r_heap.md#function-becomecurrentheap) (void) <br> |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**becomeSystemHeap**](class_j_k_r_heap.md#function-becomesystemheap) (void) <br> |
| virtual [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**check**](class_j_k_r_heap.md#function-check) (void) = 0<br> |
|  int | [**dispose**](class_j_k_r_heap.md#function-dispose-13) ([**HANDLE**](_j_k_r_heap_8h.md#typedef-handle) obj, u32 size) <br> |
|  void | [**dispose**](class_j_k_r_heap.md#function-dispose-23) ([**HANDLE**](_j_k_r_heap_8h.md#typedef-handle) begin, [**HANDLE**](_j_k_r_heap_8h.md#typedef-handle) end) <br> |
|  void | [**dispose**](class_j_k_r_heap.md#function-dispose-33) (void) <br> |
|  void | [**dispose\_subroutine**](class_j_k_r_heap.md#function-dispose_subroutine) (size\_t start, size\_t end) <br> |
| virtual [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**dump**](class_j_k_r_heap.md#function-dump) (void) = 0<br> |
| virtual [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**dump\_sort**](class_j_k_r_heap.md#function-dump_sort) (void) <br> |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**find**](class_j_k_r_heap.md#function-find) ([**HANDLE**](_j_k_r_heap_8h.md#typedef-handle) obj) const<br> |
| virtual void | [**free**](class_j_k_r_heap.md#function-free-22) ([**HANDLE**](_j_k_r_heap_8h.md#typedef-handle) ptr) = 0<br> |
| virtual void | [**freeAll**](class_j_k_r_heap.md#function-freeall) (void) <br> |
| virtual void | [**freeTail**](class_j_k_r_heap.md#function-freetail) (void) = 0<br> |
| virtual u32 | [**getCurrentGroupId**](class_j_k_r_heap.md#function-getcurrentgroupid) (void) <br> |
| virtual size\_t | [**getFreeSize**](class_j_k_r_heap.md#function-getfreesize) (void) = 0<br> |
|  [**JSUTree**](class_j_s_u_tree.md)&lt; [**JKRHeap**](class_j_k_r_heap.md) &gt; & | [**getHeapTree**](class_j_k_r_heap.md#function-getheaptree) () <br> |
| virtual u32 | [**getHeapType**](class_j_k_r_heap.md#function-getheaptype) (void) = 0<br> |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**getParent**](class_j_k_r_heap.md#function-getparent) () const<br> |
| virtual s32 | [**getSize**](class_j_k_r_heap.md#function-getsize) ([**HANDLE**](_j_k_r_heap_8h.md#typedef-handle)) = 0<br> |
| virtual size\_t | [**getTotalFreeSize**](class_j_k_r_heap.md#function-gettotalfreesize) (void) = 0<br> |
|  void | [**lock**](class_j_k_r_heap.md#function-lock) () <br> |
| virtual s32 | [**resize**](class_j_k_r_heap.md#function-resize) ([**HANDLE**](_j_k_r_heap_8h.md#typedef-handle), size\_t) = 0<br> |
|  void | [**unlock**](class_j_k_r_heap.md#function-unlock) () <br> |
|  [**destructor**](_j_u_t_types_8h.md#define-destructor) | [**~JKRHeap**](class_j_k_r_heap.md#function-jkrheap) () <br> |










## Public Functions Documentation




### function adjustSize 

```C++
s32 JKRSolidHeap::adjustSize (
    void
) 
```




<hr>



### function alloc 

```C++
virtual override  HANDLE JKRSolidHeap::alloc (
    size_t size,
    int align
) 
```



Implements [*JKRHeap::alloc*](class_j_k_r_heap.md#function-alloc-22)


<hr>



### function allocFromHead 

```C++
HANDLE JKRSolidHeap::allocFromHead (
    size_t size,
    int align
) 
```




<hr>



### function allocFromTail 

```C++
HANDLE JKRSolidHeap::allocFromTail (
    size_t size,
    int align
) 
```




<hr>



### function check 

```C++
virtual override  BOOL JKRSolidHeap::check (
    void
) 
```



Implements [*JKRHeap::check*](class_j_k_r_heap.md#function-check)


<hr>



### function destroy 

```C++
void JKRSolidHeap::destroy (
    void
) 
```




<hr>



### function dump 

```C++
virtual override  BOOL JKRSolidHeap::dump (
    void
) 
```



Implements [*JKRHeap::dump*](class_j_k_r_heap.md#function-dump)


<hr>



### function free 

```C++
virtual override void JKRSolidHeap::free (
    HANDLE ptr
) 
```



Implements [*JKRHeap::free*](class_j_k_r_heap.md#function-free-22)


<hr>



### function freeAll 

```C++
virtual override void JKRSolidHeap::freeAll (
    void
) 
```



Implements [*JKRHeap::freeAll*](class_j_k_r_heap.md#function-freeall)


<hr>



### function freeTail 

```C++
virtual override void JKRSolidHeap::freeTail (
    void
) 
```



Implements [*JKRHeap::freeTail*](class_j_k_r_heap.md#function-freetail)


<hr>



### function getFreeSize 

```C++
inline virtual override size_t JKRSolidHeap::getFreeSize (
    void
) 
```



Implements [*JKRHeap::getFreeSize*](class_j_k_r_heap.md#function-getfreesize)


<hr>



### function getHeapType 

```C++
virtual override u32 JKRSolidHeap::getHeapType (
    void
) 
```



Implements [*JKRHeap::getHeapType*](class_j_k_r_heap.md#function-getheaptype)


<hr>



### function getSize 

```C++
virtual override s32 JKRSolidHeap::getSize (
    HANDLE obj
) 
```



Implements [*JKRHeap::getSize*](class_j_k_r_heap.md#function-getsize)


<hr>



### function getTotalFreeSize 

```C++
virtual override size_t JKRSolidHeap::getTotalFreeSize (
    void
) 
```



Implements [*JKRHeap::getTotalFreeSize*](class_j_k_r_heap.md#function-gettotalfreesize)


<hr>



### function resize 

```C++
virtual override s32 JKRSolidHeap::resize (
    HANDLE obj,
    size_t size
) 
```



Implements [*JKRHeap::resize*](class_j_k_r_heap.md#function-resize)


<hr>
## Public Static Functions Documentation




### function create 

```C++
static JKRSolidHeap * JKRSolidHeap::create (
    size_t size,
    JKRHeap * parent,
    BOOL isError
) 
```




<hr>
## Protected Types Documentation




### typedef Iter 

```C++
typedef struct Iter JKRSolidHeap::Iter;
```




<hr>
## Protected Attributes Documentation




### variable mFreeSize 

```C++
size_t JKRSolidHeap::mFreeSize;
```




<hr>



### variable mHead 

```C++
HANDLE JKRSolidHeap::mHead;
```




<hr>



### variable mIter 

```C++
Iter* JKRSolidHeap::mIter;
```




<hr>



### variable mTail 

```C++
HANDLE JKRSolidHeap::mTail;
```




<hr>
## Protected Functions Documentation




### function JKRSolidHeap 

```C++
constructor JKRSolidHeap::JKRSolidHeap (
    HANDLE obj,
    size_t size,
    JKRHeap * parent,
    bool is_error
) 
```




<hr>



### function ~JKRSolidHeap 

```C++
destructor JKRSolidHeap::~JKRSolidHeap () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `JSystem/System/JKernel/include/JKRSolidHeap.h`

