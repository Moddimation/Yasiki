

# Class JKRHeap



[**ClassList**](annotated.md) **>** [**JKRHeap**](class_j_k_r_heap.md)





* `#include <JKRHeap.h>`



Inherits the following classes: [JKRDisposer](class_j_k_r_disposer.md)


Inherited by the following classes: [JKRExpHeap](class_j_k_r_exp_heap.md),  [JKRSolidHeap](class_j_k_r_solid_heap.md)




















































## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**appendDisposer**](#function-appenddisposer) ([**JKRDisposer**](class_j_k_r_disposer.md) \* disposer) <br> |
|  void | [**removeDisposer**](#function-removedisposer) ([**JKRDisposer**](class_j_k_r_disposer.md) \* disposer) <br> |




## Public Static Functions

| Type | Name |
| ---: | :--- |
|  void \* | [**alloc**](#function-alloc-12) (size\_t size, int align, [**JKRHeap**](class_j_k_r_heap.md) \* heap) <br> |
|  void | [**copyMemory**](#function-copymemory) ([**HANDLE**](_j_k_r_heap_8h.md#typedef-handle) dest, [**HANDLE**](_j_k_r_heap_8h.md#typedef-handle) source, u32 size) <br> |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**findFromRoot**](#function-findfromroot) ([**HANDLE**](_j_k_r_heap_8h.md#typedef-handle) obj) <br> |
|  void | [**free**](#function-free-12) ([**HANDLE**](_j_k_r_heap_8h.md#typedef-handle) ptr, [**JKRHeap**](class_j_k_r_heap.md) \* heap) <br> |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**getCurrentHeap**](#function-getcurrentheap) () <br> |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**getRootHeap**](#function-getrootheap) () <br> |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**getSystemHeap**](#function-getsystemheap) () <br> |
|  [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**initArena**](#function-initarena) (char \*\* ramStart, u32 \* ramSize, int maxHeaps) <br> |












## Protected Attributes

| Type | Name |
| ---: | :--- |
|  [**JSUList**](class_j_s_u_list.md)&lt; [**JKRDisposer**](class_j_k_r_disposer.md) &gt; | [**mDisposerList**](#variable-mdisposerlist)  <br>_0x58_  |
|  [**HANDLE**](_j_k_r_heap_8h.md#typedef-handle) | [**mEnd**](#variable-mend)  <br>_0x34_  |
|  [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**mErrorFlag**](#variable-merrorflag)  <br>_0x64_  |
|  [**JSUTree**](class_j_s_u_tree.md)&lt; [**JKRHeap**](class_j_k_r_heap.md) &gt; | [**mHeapTree**](#variable-mheaptree)  <br>_0x3C_  |
|  OSMutex | [**mMutex**](#variable-mmutex)  <br>_0x18_  |
|  size\_t | [**mSize**](#variable-msize)  <br>_0x38_  |
|  [**HANDLE**](_j_k_r_heap_8h.md#typedef-handle) | [**mStart**](#variable-mstart)  <br>_0x30_  |


## Protected Attributes inherited from JKRDisposer

See [JKRDisposer](class_j_k_r_disposer.md)

| Type | Name |
| ---: | :--- |
|  [**JSULink**](struct_j_s_u_link.md)&lt; [**JKRDisposer**](class_j_k_r_disposer.md) &gt; | [**mHeapLink**](class_j_k_r_disposer.md#variable-mheaplink)  <br>_0x04 // Link to disposer, for heap (?)_  |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**pHeapObj**](class_j_k_r_disposer.md#variable-pheapobj)  <br>_0x00 // Pointer to inheriting heap (?)_  |


## Protected Static Attributes

| Type | Name |
| ---: | :--- |
|  [**JKRErrorRoutine**](_j_k_r_heap_8h.md#typedef-jkrerrorroutine) | [**mErrorHandler**](#variable-merrorhandler)   = `[**Nil**](_j_u_t_types_8h.md#define-nil)`<br> |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**sCurrentHeap**](#variable-scurrentheap)   = `[**Nil**](_j_u_t_types_8h.md#define-nil)`<br> |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**sRootHeap**](#variable-srootheap)   = `[**Nil**](_j_u_t_types_8h.md#define-nil)`<br> |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**sSystemHeap**](#variable-ssystemheap)   = `[**Nil**](_j_u_t_types_8h.md#define-nil)`<br> |




























## Protected Functions

| Type | Name |
| ---: | :--- |
|  [**constructor**](_j_u_t_types_8h.md#define-constructor) | [**JKRHeap**](#function-jkrheap) ([**HANDLE**](_j_k_r_heap_8h.md#typedef-handle) obj, size\_t size, [**JKRHeap**](class_j_k_r_heap.md) \* parent, bool is\_error) <br> |
| virtual [**HANDLE**](_j_k_r_heap_8h.md#typedef-handle) | [**alloc**](#function-alloc-22) (size\_t size, int align) = 0<br> |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**becomeCurrentHeap**](#function-becomecurrentheap) (void) <br> |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**becomeSystemHeap**](#function-becomesystemheap) (void) <br> |
| virtual [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**check**](#function-check) (void) = 0<br> |
|  int | [**dispose**](#function-dispose-13) ([**HANDLE**](_j_k_r_heap_8h.md#typedef-handle) obj, u32 size) <br> |
|  void | [**dispose**](#function-dispose-23) ([**HANDLE**](_j_k_r_heap_8h.md#typedef-handle) begin, [**HANDLE**](_j_k_r_heap_8h.md#typedef-handle) end) <br> |
|  void | [**dispose**](#function-dispose-33) (void) <br> |
|  void | [**dispose\_subroutine**](#function-dispose_subroutine) (size\_t start, size\_t end) <br> |
| virtual [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**dump**](#function-dump) (void) = 0<br> |
| virtual [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**dump\_sort**](#function-dump_sort) (void) <br> |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**find**](#function-find) ([**HANDLE**](_j_k_r_heap_8h.md#typedef-handle) obj) const<br> |
| virtual void | [**free**](#function-free-22) ([**HANDLE**](_j_k_r_heap_8h.md#typedef-handle) ptr) = 0<br> |
| virtual void | [**freeAll**](#function-freeall) (void) <br> |
| virtual void | [**freeTail**](#function-freetail) (void) = 0<br> |
| virtual u32 | [**getCurrentGroupId**](#function-getcurrentgroupid) (void) <br> |
| virtual size\_t | [**getFreeSize**](#function-getfreesize) (void) = 0<br> |
|  [**JSUTree**](class_j_s_u_tree.md)&lt; [**JKRHeap**](class_j_k_r_heap.md) &gt; & | [**getHeapTree**](#function-getheaptree) () <br> |
| virtual u32 | [**getHeapType**](#function-getheaptype) (void) = 0<br> |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**getParent**](#function-getparent) () const<br> |
| virtual s32 | [**getSize**](#function-getsize) ([**HANDLE**](_j_k_r_heap_8h.md#typedef-handle)) = 0<br> |
| virtual size\_t | [**getTotalFreeSize**](#function-gettotalfreesize) (void) = 0<br> |
|  void | [**lock**](#function-lock) () <br> |
| virtual s32 | [**resize**](#function-resize) ([**HANDLE**](_j_k_r_heap_8h.md#typedef-handle), size\_t) = 0<br> |
|  void | [**unlock**](#function-unlock) () <br> |
|  [**destructor**](_j_u_t_types_8h.md#define-destructor) | [**~JKRHeap**](#function-jkrheap) () <br> |








## Public Functions Documentation




### function appendDisposer 

```C++
inline void JKRHeap::appendDisposer (
    JKRDisposer * disposer
) 
```




<hr>



### function removeDisposer 

```C++
inline void JKRHeap::removeDisposer (
    JKRDisposer * disposer
) 
```




<hr>
## Public Static Functions Documentation




### function alloc [1/2]

```C++
static void * JKRHeap::alloc (
    size_t size,
    int align,
    JKRHeap * heap
) 
```




<hr>



### function copyMemory 

```C++
static void JKRHeap::copyMemory (
    HANDLE dest,
    HANDLE source,
    u32 size
) 
```




<hr>



### function findFromRoot 

```C++
static JKRHeap * JKRHeap::findFromRoot (
    HANDLE obj
) 
```




<hr>



### function free [1/2]

```C++
static void JKRHeap::free (
    HANDLE ptr,
    JKRHeap * heap
) 
```




<hr>



### function getCurrentHeap 

```C++
static inline JKRHeap * JKRHeap::getCurrentHeap () 
```




<hr>



### function getRootHeap 

```C++
static inline JKRHeap * JKRHeap::getRootHeap () 
```




<hr>



### function getSystemHeap 

```C++
static inline JKRHeap * JKRHeap::getSystemHeap () 
```




<hr>



### function initArena 

```C++
static BOOL JKRHeap::initArena (
    char ** ramStart,
    u32 * ramSize,
    int maxHeaps
) 
```




<hr>
## Protected Attributes Documentation




### variable mDisposerList 

_0x58_ 
```C++
JSUList<JKRDisposer> JKRHeap::mDisposerList;
```




<hr>



### variable mEnd 

_0x34_ 
```C++
HANDLE JKRHeap::mEnd;
```




<hr>



### variable mErrorFlag 

_0x64_ 
```C++
BOOL JKRHeap::mErrorFlag;
```




<hr>



### variable mHeapTree 

_0x3C_ 
```C++
JSUTree<JKRHeap> JKRHeap::mHeapTree;
```




<hr>



### variable mMutex 

_0x18_ 
```C++
OSMutex JKRHeap::mMutex;
```




<hr>



### variable mSize 

_0x38_ 
```C++
size_t JKRHeap::mSize;
```




<hr>



### variable mStart 

_0x30_ 
```C++
HANDLE JKRHeap::mStart;
```




<hr>
## Protected Static Attributes Documentation




### variable mErrorHandler 

```C++
JKRErrorRoutine JKRHeap::mErrorHandler;
```




<hr>



### variable sCurrentHeap 

```C++
JKRHeap * JKRHeap::sCurrentHeap;
```




<hr>



### variable sRootHeap 

```C++
JKRHeap * JKRHeap::sRootHeap;
```




<hr>



### variable sSystemHeap 

```C++
JKRHeap * JKRHeap::sSystemHeap;
```




<hr>
## Protected Functions Documentation




### function JKRHeap 

```C++
constructor JKRHeap::JKRHeap (
    HANDLE obj,
    size_t size,
    JKRHeap * parent,
    bool is_error
) 
```




<hr>



### function alloc [2/2]

```C++
virtual HANDLE JKRHeap::alloc (
    size_t size,
    int align
) = 0
```




<hr>



### function becomeCurrentHeap 

```C++
JKRHeap * JKRHeap::becomeCurrentHeap (
    void
) 
```




<hr>



### function becomeSystemHeap 

```C++
JKRHeap * JKRHeap::becomeSystemHeap (
    void
) 
```




<hr>



### function check 

```C++
virtual BOOL JKRHeap::check (
    void
) = 0
```




<hr>



### function dispose [1/3]

```C++
int JKRHeap::dispose (
    HANDLE obj,
    u32 size
) 
```




<hr>



### function dispose [2/3]

```C++
void JKRHeap::dispose (
    HANDLE begin,
    HANDLE end
) 
```




<hr>



### function dispose [3/3]

```C++
void JKRHeap::dispose (
    void
) 
```




<hr>



### function dispose\_subroutine 

```C++
void JKRHeap::dispose_subroutine (
    size_t start,
    size_t end
) 
```




<hr>



### function dump 

```C++
virtual BOOL JKRHeap::dump (
    void
) = 0
```




<hr>



### function dump\_sort 

```C++
virtual BOOL JKRHeap::dump_sort (
    void
) 
```




<hr>



### function find 

```C++
JKRHeap * JKRHeap::find (
    HANDLE obj
) const
```




<hr>



### function free [2/2]

```C++
virtual void JKRHeap::free (
    HANDLE ptr
) = 0
```




<hr>



### function freeAll 

```C++
virtual void JKRHeap::freeAll (
    void
) 
```




<hr>



### function freeTail 

```C++
virtual void JKRHeap::freeTail (
    void
) = 0
```




<hr>



### function getCurrentGroupId 

```C++
virtual u32 JKRHeap::getCurrentGroupId (
    void
) 
```




<hr>



### function getFreeSize 

```C++
virtual size_t JKRHeap::getFreeSize (
    void
) = 0
```




<hr>



### function getHeapTree 

```C++
inline JSUTree < JKRHeap > & JKRHeap::getHeapTree () 
```




<hr>



### function getHeapType 

```C++
virtual u32 JKRHeap::getHeapType (
    void
) = 0
```




<hr>



### function getParent 

```C++
inline JKRHeap * JKRHeap::getParent () const
```




<hr>



### function getSize 

```C++
virtual s32 JKRHeap::getSize (
    HANDLE
) = 0
```




<hr>



### function getTotalFreeSize 

```C++
virtual size_t JKRHeap::getTotalFreeSize (
    void
) = 0
```




<hr>



### function lock 

```C++
inline void JKRHeap::lock () 
```




<hr>



### function resize 

```C++
virtual s32 JKRHeap::resize (
    HANDLE,
    size_t
) = 0
```




<hr>



### function unlock 

```C++
inline void JKRHeap::unlock () 
```




<hr>



### function ~JKRHeap 

```C++
destructor JKRHeap::~JKRHeap () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `JSystem/System/JKernel/include/JKRHeap.h`

