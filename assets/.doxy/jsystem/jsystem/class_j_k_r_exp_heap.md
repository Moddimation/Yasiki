

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
|  u8 | [**mAllocMode**](#variable-mallocmode)  <br>_0x6C_  |
|  u8 | [**mGroupID**](#variable-mgroupid)  <br>_0x6D_  |
|  bool | [**mIsRoot**](#variable-misroot)  <br>_0x6E_  |








## Public Static Attributes inherited from JKRHeap

See [JKRHeap](class_j_k_r_heap.md)

| Type | Name |
| ---: | :--- |
|  [**JKRErrorRoutine**](_j_k_r_heap_8h.md#typedef-jkrerrorroutine) | [**mErrorHandler**](class_j_k_r_heap.md#variable-merrorhandler)   = `[**Nil**](_j_u_t_types_8h.md#define-nil)`<br> |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**sCurrentHeap**](class_j_k_r_heap.md#variable-scurrentheap)   = `[**Nil**](_j_u_t_types_8h.md#define-nil)`<br> |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**sRootHeap**](class_j_k_r_heap.md#variable-srootheap)   = `[**Nil**](_j_u_t_types_8h.md#define-nil)`<br> |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**sSystemHeap**](class_j_k_r_heap.md#variable-ssystemheap)   = `[**Nil**](_j_u_t_types_8h.md#define-nil)`<br> |








































## Public Functions

| Type | Name |
| ---: | :--- |
| virtual [**override**](_j_u_t_types_8h.md#define-override) void \* | [**alloc**](#function-alloc) (size\_t size, int align) <br>_0x0Cv_  |
|  u8 | [**changeGroupID**](#function-changegroupid) (u8 group\_id) <br> |
| virtual [**override**](_j_u_t_types_8h.md#define-override) [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**check**](#function-check) (void) <br>_0x30v_  |
|  void | [**destroy**](#function-destroy) (void) <br> |
| virtual [**override**](_j_u_t_types_8h.md#define-override) [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**dump**](#function-dump) (void) <br>_0x34v_  |
|  [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**dump\_sort**](#function-dump_sort) (void) <br> |
| virtual [**override**](_j_u_t_types_8h.md#define-override) void | [**free**](#function-free) (void \* ptr) <br>_0x10v_  |
| virtual [**override**](_j_u_t_types_8h.md#define-override) void | [**freeAll**](#function-freeall) (void) <br>_0x14v_  |
|  s32 | [**freeGroup**](#function-freegroup) (u8 groupID) <br> |
| virtual [**override**](_j_u_t_types_8h.md#define-override) void | [**freeTail**](#function-freetail) (void) <br>_0x18v_  |
| virtual [**override**](_j_u_t_types_8h.md#define-override) u32 | [**getCurrentGroupId**](#function-getcurrentgroupid) (void) <br>_0x3Cv_  |
| virtual [**override**](_j_u_t_types_8h.md#define-override) size\_t | [**getFreeSize**](#function-getfreesize) (void) <br>_0x24v_  |
|  [**CMemBlock**](class_j_k_r_exp_heap_1_1_c_mem_block.md) \* | [**getHeadUsedList**](#function-getheadusedlist) () const<br> |
| virtual [**override**](_j_u_t_types_8h.md#define-override) u32 | [**getHeapType**](#function-getheaptype) (void) <br>_0x2Cv_  |
| virtual [**override**](_j_u_t_types_8h.md#define-override) size\_t | [**getSize**](#function-getsize) (void \*) <br>_0x20v_  |
| virtual [**override**](_j_u_t_types_8h.md#define-override) size\_t | [**getTotalFreeSize**](#function-gettotalfreesize) (void) <br>_0x28v_  |
|  size\_t | [**getTotalUsedSize**](#function-gettotalusedsize) (void) const<br> |
| virtual [**override**](_j_u_t_types_8h.md#define-override) u32 | [**getUNK**](#function-getunk) (void) <br>_0x38v_  |
|  size\_t | [**getUsedSize**](#function-getusedsize) (u8 group\_id) const<br> |
| virtual [**override**](_j_u_t_types_8h.md#define-override) size\_t | [**resize**](#function-resize) (void \*, size\_t) <br>_0x1Cv_  |
|  void | [**setAllocationMode**](#function-setallocationmode) ([**EAllocMode**](class_j_k_r_exp_heap.md#enum-eallocmode) mode) <br> |


## Public Functions inherited from JKRHeap

See [JKRHeap](class_j_k_r_heap.md)

| Type | Name |
| ---: | :--- |
|  void | [**appendDisposer**](class_j_k_r_heap.md#function-appenddisposer) ([**JKRDisposer**](class_j_k_r_disposer.md) \* disposer) <br> |
|  void | [**callErrorHandler**](class_j_k_r_heap.md#function-callerrorhandler) ([**JKRHeap**](class_j_k_r_heap.md) \* heap, size\_t size, int align) <br> |
|  [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**getErrorFlag**](class_j_k_r_heap.md#function-geterrorflag) () <br> |
|  void | [**removeDisposer**](class_j_k_r_heap.md#function-removedisposer) ([**JKRDisposer**](class_j_k_r_disposer.md) \* disposer) <br> |




## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**JKRExpHeap**](class_j_k_r_exp_heap.md) \* | [**create**](#function-create-12) (size\_t size, [**JKRHeap**](class_j_k_r_heap.md) \* parent, bool errorFlag) <br> |
|  [**JKRExpHeap**](class_j_k_r_exp_heap.md) \* | [**create**](#function-create-22) (void \* obj, size\_t size, [**JKRHeap**](class_j_k_r_heap.md) \* parent, bool errorFlag) <br> |
|  [**JKRExpHeap**](class_j_k_r_exp_heap.md) \* | [**createRoot**](#function-createroot) (int maxHeaps, bool errorFlag) <br> |


## Public Static Functions inherited from JKRHeap

See [JKRHeap](class_j_k_r_heap.md)

| Type | Name |
| ---: | :--- |
|  void \* | [**alloc**](class_j_k_r_heap.md#function-alloc-12) (size\_t size, int align, [**JKRHeap**](class_j_k_r_heap.md) \* heap) <br> |
|  void | [**copyMemory**](class_j_k_r_heap.md#function-copymemory) (void \* dest, void \* source, u32 size) <br> |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**findFromRoot**](class_j_k_r_heap.md#function-findfromroot) (void \* obj) <br> |
|  void | [**free**](class_j_k_r_heap.md#function-free-12) (void \* ptr, [**JKRHeap**](class_j_k_r_heap.md) \* heap) <br> |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**getCurrentHeap**](class_j_k_r_heap.md#function-getcurrentheap) () <br> |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**getRootHeap**](class_j_k_r_heap.md#function-getrootheap) () <br> |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**getSystemHeap**](class_j_k_r_heap.md#function-getsystemheap) () <br> |
|  [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**initArena**](class_j_k_r_heap.md#function-initarena) (char \*\* ramStart, u32 \* ramSize, int maxHeaps) <br> |


















## Protected Attributes inherited from JKRHeap

See [JKRHeap](class_j_k_r_heap.md)

| Type | Name |
| ---: | :--- |
|  [**JSUList**](class_j_s_u_list.md)&lt; [**JKRDisposer**](class_j_k_r_disposer.md) &gt; | [**mDisposerList**](class_j_k_r_heap.md#variable-mdisposerlist)  <br>_0x58_  |
|  void \* | [**mEnd**](class_j_k_r_heap.md#variable-mend)  <br>_0x34_  |
|  [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**mErrorFlag**](class_j_k_r_heap.md#variable-merrorflag)  <br>_0x64_  |
|  [**JSUTree**](class_j_s_u_tree.md)&lt; [**JKRHeap**](class_j_k_r_heap.md) &gt; | [**mHeapTree**](class_j_k_r_heap.md#variable-mheaptree)  <br>_0x3C_  |
|  OSMutex | [**mMutex**](class_j_k_r_heap.md#variable-mmutex)  <br>_0x18_  |
|  size\_t | [**mSize**](class_j_k_r_heap.md#variable-msize)  <br>_0x38_  |
|  void \* | [**mStart**](class_j_k_r_heap.md#variable-mstart)  <br>_0x30_  |


## Protected Attributes inherited from JKRDisposer

See [JKRDisposer](class_j_k_r_disposer.md)

| Type | Name |
| ---: | :--- |
|  [**JSULink**](struct_j_s_u_link.md)&lt; [**JKRDisposer**](class_j_k_r_disposer.md) &gt; | [**mHeapLink**](class_j_k_r_disposer.md#variable-mheaplink)  <br>_0x04 // Link to disposer, for heap (?)_  |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**pHeapObj**](class_j_k_r_disposer.md#variable-pheapobj)  <br>_0x00 // Pointer to inheriting heap (?)_  |












































## Protected Functions

| Type | Name |
| ---: | :--- |
|  [**constructor**](_j_u_t_types_8h.md#define-constructor) | [**JKRExpHeap**](#function-jkrexpheap) (void \* data, size\_t size, [**JKRHeap**](class_j_k_r_heap.md) \* parent, bool error) <br> |
|  void \* | [**allocFromHead**](#function-allocfromhead-12) (size\_t size, int align) <br> |
|  void \* | [**allocFromHead**](#function-allocfromhead-22) (size\_t size) <br> |
|  void \* | [**allocFromTail**](#function-allocfromtail-12) (size\_t size, int align) <br> |
|  void \* | [**allocFromTail**](#function-allocfromtail-22) (size\_t size) <br> |
|  void | [**appendUsedList**](#function-appendusedlist) ([**CMemBlock**](class_j_k_r_exp_heap_1_1_c_mem_block.md) \* block) <br> |
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
|  [**constructor**](_j_u_t_types_8h.md#define-constructor) | [**JKRHeap**](class_j_k_r_heap.md#function-jkrheap) (void \* obj, size\_t size, [**JKRHeap**](class_j_k_r_heap.md) \* parent, bool is\_error) <br> |
| virtual void \* | [**alloc**](class_j_k_r_heap.md#function-alloc-22) (size\_t size, int align) = 0<br>_0x0Cv_  |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**becomeCurrentHeap**](class_j_k_r_heap.md#function-becomecurrentheap) (void) <br> |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**becomeSystemHeap**](class_j_k_r_heap.md#function-becomesystemheap) (void) <br> |
| virtual [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**check**](class_j_k_r_heap.md#function-check) (void) = 0<br>_0x30v_  |
|  int | [**dispose**](class_j_k_r_heap.md#function-dispose-13) (void \* obj, u32 size) <br> |
|  void | [**dispose**](class_j_k_r_heap.md#function-dispose-23) (void \* begin, void \* end) <br> |
|  void | [**dispose**](class_j_k_r_heap.md#function-dispose-33) (void) <br> |
|  void | [**dispose\_subroutine**](class_j_k_r_heap.md#function-dispose_subroutine) (size\_t start, size\_t end) <br> |
| virtual [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**dump**](class_j_k_r_heap.md#function-dump) (void) = 0<br>_0x34v_  |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**find**](class_j_k_r_heap.md#function-find) (void \* obj) const<br> |
| virtual void | [**free**](class_j_k_r_heap.md#function-free-22) (void \* ptr) = 0<br>_0x10v_  |
| virtual void | [**freeAll**](class_j_k_r_heap.md#function-freeall) (void) <br>_0x14v_  |
| virtual void | [**freeTail**](class_j_k_r_heap.md#function-freetail) (void) = 0<br>_0x18v_  |
| virtual u32 | [**getCurrentGroupId**](class_j_k_r_heap.md#function-getcurrentgroupid) (void) <br>_0x3Cv_  |
| virtual size\_t | [**getFreeSize**](class_j_k_r_heap.md#function-getfreesize) (void) = 0<br>_0x24v_  |
|  [**JSUTree**](class_j_s_u_tree.md)&lt; [**JKRHeap**](class_j_k_r_heap.md) &gt; & | [**getHeapTree**](class_j_k_r_heap.md#function-getheaptree) () <br> |
| virtual u32 | [**getHeapType**](class_j_k_r_heap.md#function-getheaptype) (void) = 0<br>_0x2Cv_  |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**getParent**](class_j_k_r_heap.md#function-getparent) () const<br> |
| virtual size\_t | [**getSize**](class_j_k_r_heap.md#function-getsize) (void \*) = 0<br>_0x20v_  |
| virtual size\_t | [**getTotalFreeSize**](class_j_k_r_heap.md#function-gettotalfreesize) (void) = 0<br>_0x28v_  |
| virtual u32 | [**getUNK**](class_j_k_r_heap.md#function-getunk) (void) <br>_0x38v_  |
|  void | [**lock**](class_j_k_r_heap.md#function-lock) () <br> |
| virtual size\_t | [**resize**](class_j_k_r_heap.md#function-resize) (void \*, size\_t) = 0<br>_0x1Cv_  |
|  void | [**unlock**](class_j_k_r_heap.md#function-unlock) () <br> |
|  [**destructor**](_j_u_t_types_8h.md#define-destructor) | [**~JKRHeap**](class_j_k_r_heap.md#function-jkrheap) () <br>_0x08v_  |


## Protected Functions inherited from JKRDisposer

See [JKRDisposer](class_j_k_r_disposer.md)

| Type | Name |
| ---: | :--- |
|  [**constructor**](_j_u_t_types_8h.md#define-constructor) | [**JKRDisposer**](class_j_k_r_disposer.md#function-jkrdisposer) () <br> |
|  [**destructor**](_j_u_t_types_8h.md#define-destructor) | [**~JKRDisposer**](class_j_k_r_disposer.md#function-jkrdisposer) () <br>_0x08v_  |








## Public Types Documentation




### enum EAllocMode 

```C++
enum JKRExpHeap::EAllocMode {
    ALLOC_HEAD = 0,
    ALLOC_TAIL = 1
};
```




<hr>
## Public Attributes Documentation




### variable mAllocMode 

_0x6C_ 
```C++
u8 JKRExpHeap::mAllocMode;
```




<hr>



### variable mGroupID 

_0x6D_ 
```C++
u8 JKRExpHeap::mGroupID;
```




<hr>



### variable mIsRoot 

_0x6E_ 
```C++
bool JKRExpHeap::mIsRoot;
```




<hr>
## Public Functions Documentation




### function alloc 

_0x0Cv_ 
```C++
virtual override void * JKRExpHeap::alloc (
    size_t size,
    int align
) 
```



Implements [*JKRHeap::alloc*](class_j_k_r_heap.md#function-alloc-22)


<hr>



### function changeGroupID 

```C++
u8 JKRExpHeap::changeGroupID (
    u8 group_id
) 
```




<hr>



### function check 

_0x30v_ 
```C++
virtual override  BOOL JKRExpHeap::check (
    void
) 
```



Implements [*JKRHeap::check*](class_j_k_r_heap.md#function-check)


<hr>



### function destroy 

```C++
void JKRExpHeap::destroy (
    void
) 
```




<hr>



### function dump 

_0x34v_ 
```C++
virtual override  BOOL JKRExpHeap::dump (
    void
) 
```



Implements [*JKRHeap::dump*](class_j_k_r_heap.md#function-dump)


<hr>



### function dump\_sort 

```C++
BOOL JKRExpHeap::dump_sort (
    void
) 
```




<hr>



### function free 

_0x10v_ 
```C++
virtual override void JKRExpHeap::free (
    void * ptr
) 
```



Implements [*JKRHeap::free*](class_j_k_r_heap.md#function-free-22)


<hr>



### function freeAll 

_0x14v_ 
```C++
virtual override void JKRExpHeap::freeAll (
    void
) 
```



Implements [*JKRHeap::freeAll*](class_j_k_r_heap.md#function-freeall)


<hr>



### function freeGroup 

```C++
s32 JKRExpHeap::freeGroup (
    u8 groupID
) 
```




<hr>



### function freeTail 

_0x18v_ 
```C++
virtual override void JKRExpHeap::freeTail (
    void
) 
```



Implements [*JKRHeap::freeTail*](class_j_k_r_heap.md#function-freetail)


<hr>



### function getCurrentGroupId 

_0x3Cv_ 
```C++
virtual override u32 JKRExpHeap::getCurrentGroupId (
    void
) 
```



Implements [*JKRHeap::getCurrentGroupId*](class_j_k_r_heap.md#function-getcurrentgroupid)


<hr>



### function getFreeSize 

_0x24v_ 
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

_0x2Cv_ 
```C++
virtual override u32 JKRExpHeap::getHeapType (
    void
) 
```



Implements [*JKRHeap::getHeapType*](class_j_k_r_heap.md#function-getheaptype)


<hr>



### function getSize 

_0x20v_ 
```C++
virtual override size_t JKRExpHeap::getSize (
    void *
) 
```



Implements [*JKRHeap::getSize*](class_j_k_r_heap.md#function-getsize)


<hr>



### function getTotalFreeSize 

_0x28v_ 
```C++
virtual override size_t JKRExpHeap::getTotalFreeSize (
    void
) 
```



Implements [*JKRHeap::getTotalFreeSize*](class_j_k_r_heap.md#function-gettotalfreesize)


<hr>



### function getTotalUsedSize 

```C++
size_t JKRExpHeap::getTotalUsedSize (
    void
) const
```




<hr>



### function getUNK 

_0x38v_ 
```C++
virtual override u32 JKRExpHeap::getUNK (
    void
) 
```



Implements [*JKRHeap::getUNK*](class_j_k_r_heap.md#function-getunk)


<hr>



### function getUsedSize 

```C++
size_t JKRExpHeap::getUsedSize (
    u8 group_id
) const
```




<hr>



### function resize 

_0x1Cv_ 
```C++
virtual override size_t JKRExpHeap::resize (
    void *,
    size_t
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
    void * obj,
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
    bool error
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
    CMemBlock * block
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
The documentation for this class was generated from the following file `decomp/JSystem/System/JKernel/include/JKRExpHeap.h`

