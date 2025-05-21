

# Class JKRExpHeap



[**ClassList**](annotated.md) **>** [**JKRExpHeap**](class_j_k_r_exp_heap.md)





* `#include <JKRExpHeap.h>`



Inherits the following classes: [JKRHeap](class_j_k_r_heap.md)












## Classes

| Type | Name |
| ---: | :--- |
| class | [**CMemBlock**](class_j_k_r_exp_heap_1_1_c_mem_block.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| enum  | [**EAllocMode**](#enum-eallocmode)  <br> |












## Public Attributes

| Type | Name |
| ---: | :--- |
|  bool | [**\_6E**](#variable-_6e)  <br>_0x6E_  |
|  u8 | [**mAllocMode**](#variable-mallocmode)  <br>_0x6C_  |
|  u8 | [**mGroupId**](#variable-mgroupid)  <br>_0x6D_  |
















































## Public Functions

| Type | Name |
| ---: | :--- |
| virtual [**override**](_j_u_t_types_8h.md#define-override) [**HANDLE**](_j_k_r_heap_8h.md#typedef-handle) | [**alloc**](#function-alloc) (size\_t size, int align) <br> |
| virtual [**override**](_j_u_t_types_8h.md#define-override) [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**check**](#function-check) (void) <br> |
| virtual [**override**](_j_u_t_types_8h.md#define-override) [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**dump**](#function-dump) (void) <br> |
| virtual [**override**](_j_u_t_types_8h.md#define-override) void | [**free**](#function-free) ([**HANDLE**](_j_k_r_heap_8h.md#typedef-handle) obj) <br> |
| virtual [**override**](_j_u_t_types_8h.md#define-override) void | [**freeAll**](#function-freeall) (void) <br> |
| virtual [**override**](_j_u_t_types_8h.md#define-override) void | [**freeTail**](#function-freetail) (void) <br> |
| virtual [**override**](_j_u_t_types_8h.md#define-override) size\_t | [**getFreeSize**](#function-getfreesize) (void) <br> |
|  [**CMemBlock**](class_j_k_r_exp_heap_1_1_c_mem_block.md) \* | [**getHeadUsedList**](#function-getheadusedlist) () const<br> |
| virtual [**override**](_j_u_t_types_8h.md#define-override) u32 | [**getHeapType**](#function-getheaptype) (void) <br> |
| virtual [**override**](_j_u_t_types_8h.md#define-override) s32 | [**getSize**](#function-getsize) ([**HANDLE**](_j_k_r_heap_8h.md#typedef-handle) obj) <br> |
| virtual [**override**](_j_u_t_types_8h.md#define-override) size\_t | [**getTotalFreeSize**](#function-gettotalfreesize) (void) <br> |
|  s32 | [**getTotalUsedSize**](#function-gettotalusedsize) (void) const<br> |
|  s32 | [**getUsedSize**](#function-getusedsize) (u8 groupId) const<br> |
| virtual [**override**](_j_u_t_types_8h.md#define-override) s32 | [**resize**](#function-resize) ([**HANDLE**](_j_k_r_heap_8h.md#typedef-handle) obj, size\_t size) <br> |
|  void | [**setAllocationMode**](#function-setallocationmode) ([**EAllocMode**](class_j_k_r_exp_heap.md#enum-eallocmode) mode) <br> |


## Public Functions inherited from JKRHeap

See [JKRHeap](class_j_k_r_heap.md)

| Type | Name |
| ---: | :--- |
|  void | [**appendDisposer**](class_j_k_r_heap.md#function-appenddisposer) ([**JKRDisposer**](class_j_k_r_disposer.md) \* disposer) <br> |
|  void | [**removeDisposer**](class_j_k_r_heap.md#function-removedisposer) ([**JKRDisposer**](class_j_k_r_disposer.md) \* disposer) <br> |




## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**JKRExpHeap**](class_j_k_r_exp_heap.md) \* | [**create**](#function-create-12) (size\_t size, [**JKRHeap**](class_j_k_r_heap.md) \* parent, bool errorFlag) <br> |
|  [**JKRExpHeap**](class_j_k_r_exp_heap.md) \* | [**create**](#function-create-22) ([**HANDLE**](_j_k_r_heap_8h.md#typedef-handle) obj, size\_t size, [**JKRHeap**](class_j_k_r_heap.md) \* parent, bool errorFlag) <br> |
|  [**JKRExpHeap**](class_j_k_r_exp_heap.md) \* | [**createRoot**](#function-createroot) (int maxHeaps, bool errorFlag) <br> |


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
|  [**constructor**](_j_u_t_types_8h.md#define-constructor) | [**JKRExpHeap**](#function-jkrexpheap) (void \* data, size\_t size, [**JKRHeap**](class_j_k_r_heap.md) \* parent, bool errorFlag) <br> |
|  void \* | [**allocFromHead**](#function-allocfromhead-12) (size\_t size, int align) <br> |
|  void \* | [**allocFromHead**](#function-allocfromhead-22) (size\_t size) <br> |
|  void \* | [**allocFromTail**](#function-allocfromtail-12) (size\_t size, int align) <br> |
|  void \* | [**allocFromTail**](#function-allocfromtail-22) (size\_t size) <br> |
|  void | [**appendUsedList**](#function-appendusedlist) ([**CMemBlock**](class_j_k_r_exp_heap_1_1_c_mem_block.md) \* newblock) <br> |
|  void | [**joinTwoBlocks**](#function-jointwoblocks) ([**CMemBlock**](class_j_k_r_exp_heap_1_1_c_mem_block.md) \* block) <br> |
|  void | [**recycleFreeBlock**](#function-recyclefreeblock) ([**CMemBlock**](class_j_k_r_exp_heap_1_1_c_mem_block.md) \* block) <br> |
|  void | [**removeFreeBlock**](#function-removefreeblock) ([**CMemBlock**](class_j_k_r_exp_heap_1_1_c_mem_block.md) \* block) <br> |
|  void | [**removeUsedBlock**](#function-removeusedblock) ([**CMemBlock**](class_j_k_r_exp_heap_1_1_c_mem_block.md) \* block) <br> |
|  void | [**setFreeBlock**](#function-setfreeblock) ([**CMemBlock**](class_j_k_r_exp_heap_1_1_c_mem_block.md) \* block, [**CMemBlock**](class_j_k_r_exp_heap_1_1_c_mem_block.md) \* prev, [**CMemBlock**](class_j_k_r_exp_heap_1_1_c_mem_block.md) \* next) <br> |
|  [**destructor**](_j_u_t_types_8h.md#define-destructor) | [**~JKRExpHeap**](#function-jkrexpheap) () <br> |


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










## Public Types Documentation




### enum EAllocMode 

```C++
enum JKRExpHeap::EAllocMode {
    ALLOC_MODE_1 = 1
};
```




<hr>
## Public Attributes Documentation




### variable \_6E 

_0x6E_ 
```C++
bool JKRExpHeap::_6E;
```




<hr>



### variable mAllocMode 

_0x6C_ 
```C++
u8 JKRExpHeap::mAllocMode;
```




<hr>



### variable mGroupId 

_0x6D_ 
```C++
u8 JKRExpHeap::mGroupId;
```




<hr>
## Public Functions Documentation




### function alloc 

```C++
virtual override  HANDLE JKRExpHeap::alloc (
    size_t size,
    int align
) 
```



Implements [*JKRHeap::alloc*](class_j_k_r_heap.md#function-alloc-22)


<hr>



### function check 

```C++
virtual override  BOOL JKRExpHeap::check (
    void
) 
```



Implements [*JKRHeap::check*](class_j_k_r_heap.md#function-check)


<hr>



### function dump 

```C++
virtual override  BOOL JKRExpHeap::dump (
    void
) 
```



Implements [*JKRHeap::dump*](class_j_k_r_heap.md#function-dump)


<hr>



### function free 

```C++
virtual override void JKRExpHeap::free (
    HANDLE obj
) 
```



Implements [*JKRHeap::free*](class_j_k_r_heap.md#function-free-22)


<hr>



### function freeAll 

```C++
virtual override void JKRExpHeap::freeAll (
    void
) 
```



Implements [*JKRHeap::freeAll*](class_j_k_r_heap.md#function-freeall)


<hr>



### function freeTail 

```C++
virtual override void JKRExpHeap::freeTail (
    void
) 
```



Implements [*JKRHeap::freeTail*](class_j_k_r_heap.md#function-freetail)


<hr>



### function getFreeSize 

```C++
virtual override size_t JKRExpHeap::getFreeSize (
    void
) 
```



Implements [*JKRHeap::getFreeSize*](class_j_k_r_heap.md#function-getfreesize)


<hr>



### function getHeadUsedList 

```C++
inline CMemBlock * JKRExpHeap::getHeadUsedList () const
```




<hr>



### function getHeapType 

```C++
virtual override u32 JKRExpHeap::getHeapType (
    void
) 
```



Implements [*JKRHeap::getHeapType*](class_j_k_r_heap.md#function-getheaptype)


<hr>



### function getSize 

```C++
virtual override s32 JKRExpHeap::getSize (
    HANDLE obj
) 
```



Implements [*JKRHeap::getSize*](class_j_k_r_heap.md#function-getsize)


<hr>



### function getTotalFreeSize 

```C++
virtual override size_t JKRExpHeap::getTotalFreeSize (
    void
) 
```



Implements [*JKRHeap::getTotalFreeSize*](class_j_k_r_heap.md#function-gettotalfreesize)


<hr>



### function getTotalUsedSize 

```C++
s32 JKRExpHeap::getTotalUsedSize (
    void
) const
```




<hr>



### function getUsedSize 

```C++
s32 JKRExpHeap::getUsedSize (
    u8 groupId
) const
```




<hr>



### function resize 

```C++
virtual override s32 JKRExpHeap::resize (
    HANDLE obj,
    size_t size
) 
```



Implements [*JKRHeap::resize*](class_j_k_r_heap.md#function-resize)


<hr>



### function setAllocationMode 

```C++
inline void JKRExpHeap::setAllocationMode (
    EAllocMode mode
) 
```




<hr>
## Public Static Functions Documentation




### function create [1/2]

```C++
static JKRExpHeap * JKRExpHeap::create (
    size_t size,
    JKRHeap * parent,
    bool errorFlag
) 
```




<hr>



### function create [2/2]

```C++
static JKRExpHeap * JKRExpHeap::create (
    HANDLE obj,
    size_t size,
    JKRHeap * parent,
    bool errorFlag
) 
```




<hr>



### function createRoot 

```C++
static JKRExpHeap * JKRExpHeap::createRoot (
    int maxHeaps,
    bool errorFlag
) 
```




<hr>
## Protected Functions Documentation




### function JKRExpHeap 

```C++
constructor JKRExpHeap::JKRExpHeap (
    void * data,
    size_t size,
    JKRHeap * parent,
    bool errorFlag
) 
```




<hr>



### function allocFromHead [1/2]

```C++
void * JKRExpHeap::allocFromHead (
    size_t size,
    int align
) 
```




<hr>



### function allocFromHead [2/2]

```C++
void * JKRExpHeap::allocFromHead (
    size_t size
) 
```




<hr>



### function allocFromTail [1/2]

```C++
void * JKRExpHeap::allocFromTail (
    size_t size,
    int align
) 
```




<hr>



### function allocFromTail [2/2]

```C++
void * JKRExpHeap::allocFromTail (
    size_t size
) 
```




<hr>



### function appendUsedList 

```C++
void JKRExpHeap::appendUsedList (
    CMemBlock * newblock
) 
```




<hr>



### function joinTwoBlocks 

```C++
void JKRExpHeap::joinTwoBlocks (
    CMemBlock * block
) 
```




<hr>



### function recycleFreeBlock 

```C++
void JKRExpHeap::recycleFreeBlock (
    CMemBlock * block
) 
```




<hr>



### function removeFreeBlock 

```C++
void JKRExpHeap::removeFreeBlock (
    CMemBlock * block
) 
```




<hr>



### function removeUsedBlock 

```C++
void JKRExpHeap::removeUsedBlock (
    CMemBlock * block
) 
```




<hr>



### function setFreeBlock 

```C++
void JKRExpHeap::setFreeBlock (
    CMemBlock * block,
    CMemBlock * prev,
    CMemBlock * next
) 
```




<hr>



### function ~JKRExpHeap 

```C++
destructor JKRExpHeap::~JKRExpHeap () 
```




<hr>## Friends Documentation





### friend CMemBlock 

```C++
class JKRExpHeap::CMemBlock (
    CMemBlock
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `JSystem/System/JKernel/include/JKRExpHeap.h`

