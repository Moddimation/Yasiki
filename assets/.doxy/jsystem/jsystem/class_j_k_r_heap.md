

# Class JKRHeap



[**ClassList**](annotated.md) **>** [**JKRHeap**](class_j_k_r_heap.md)





* `#include <JKRHeap.h>`



Inherits the following classes: [JKRDisposer](class_j_k_r_disposer.md)


Inherited by the following classes: [JKRExpHeap](class_j_k_r_exp_heap.md),  [JKRSolidHeap](class_j_k_r_solid_heap.md)
























## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**JKRErrorRoutine**](_j_k_r_heap_8h.md#typedef-jkrerrorroutine) | [**mErrorHandler**](#variable-merrorhandler)   = `[**Nil**](_j_u_t_types_8h.md#define-nil)`<br> |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**sCurrentHeap**](#variable-scurrentheap)   = `[**Nil**](_j_u_t_types_8h.md#define-nil)`<br> |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**sRootHeap**](#variable-srootheap)   = `[**Nil**](_j_u_t_types_8h.md#define-nil)`<br> |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**sSystemHeap**](#variable-ssystemheap)   = `[**Nil**](_j_u_t_types_8h.md#define-nil)`<br> |




























## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**appendDisposer**](#function-appenddisposer) ([**JKRDisposer**](class_j_k_r_disposer.md) \* disposer) <br> |
|  void | [**callErrorHandler**](#function-callerrorhandler) ([**JKRHeap**](class_j_k_r_heap.md) \* heap, size\_t size, int align) <br> |
|  [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**getErrorFlag**](#function-geterrorflag) () <br> |
|  void | [**removeDisposer**](#function-removedisposer) ([**JKRDisposer**](class_j_k_r_disposer.md) \* disposer) <br> |




## Public Static Functions

| Type | Name |
| ---: | :--- |
|  void \* | [**alloc**](#function-alloc-12) (size\_t size, int align, [**JKRHeap**](class_j_k_r_heap.md) \* heap) <br> |
|  void | [**copyMemory**](#function-copymemory) (void \* dest, void \* source, u32 size) <br> |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**findFromRoot**](#function-findfromroot) (void \* obj) <br> |
|  void | [**free**](#function-free-12) (void \* ptr, [**JKRHeap**](class_j_k_r_heap.md) \* heap) <br> |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**getCurrentHeap**](#function-getcurrentheap) () <br> |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**getRootHeap**](#function-getrootheap) () <br> |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**getSystemHeap**](#function-getsystemheap) () <br> |
|  [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**initArena**](#function-initarena) (char \*\* ramStart, u32 \* ramSize, int maxHeaps) <br> |












## Protected Attributes

| Type | Name |
| ---: | :--- |
|  [**JSUList**](class_j_s_u_list.md)&lt; [**JKRDisposer**](class_j_k_r_disposer.md) &gt; | [**mDisposerList**](#variable-mdisposerlist)  <br>_0x58_  |
|  void \* | [**mEnd**](#variable-mend)  <br>_0x34_  |
|  [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**mErrorFlag**](#variable-merrorflag)  <br>_0x64_  |
|  [**JSUTree**](class_j_s_u_tree.md)&lt; [**JKRHeap**](class_j_k_r_heap.md) &gt; | [**mHeapTree**](#variable-mheaptree)  <br>_0x3C_  |
|  OSMutex | [**mMutex**](#variable-mmutex)  <br>_0x18_  |
|  size\_t | [**mSize**](#variable-msize)  <br>_0x38_  |
|  void \* | [**mStart**](#variable-mstart)  <br>_0x30_  |


## Protected Attributes inherited from JKRDisposer

See [JKRDisposer](class_j_k_r_disposer.md)

| Type | Name |
| ---: | :--- |
|  [**JSULink**](struct_j_s_u_link.md)&lt; [**JKRDisposer**](class_j_k_r_disposer.md) &gt; | [**mHeapLink**](class_j_k_r_disposer.md#variable-mheaplink)  <br>_0x04 // Link to disposer, for heap (?)_  |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**pHeapObj**](class_j_k_r_disposer.md#variable-pheapobj)  <br>_0x00 // Pointer to inheriting heap (?)_  |






























## Protected Functions

| Type | Name |
| ---: | :--- |
|  [**constructor**](_j_u_t_types_8h.md#define-constructor) | [**JKRHeap**](#function-jkrheap) (void \* obj, size\_t size, [**JKRHeap**](class_j_k_r_heap.md) \* parent, bool is\_error) <br> |
| virtual void \* | [**alloc**](#function-alloc-22) (size\_t size, int align) = 0<br>_0x0Cv_  |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**becomeCurrentHeap**](#function-becomecurrentheap) (void) <br> |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**becomeSystemHeap**](#function-becomesystemheap) (void) <br> |
| virtual [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**check**](#function-check) (void) = 0<br>_0x30v_  |
|  int | [**dispose**](#function-dispose-13) (void \* obj, u32 size) <br> |
|  void | [**dispose**](#function-dispose-23) (void \* begin, void \* end) <br> |
|  void | [**dispose**](#function-dispose-33) (void) <br> |
|  void | [**dispose\_subroutine**](#function-dispose_subroutine) (size\_t start, size\_t end) <br> |
| virtual [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**dump**](#function-dump) (void) = 0<br>_0x34v_  |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**find**](#function-find) (void \* obj) const<br> |
| virtual void | [**free**](#function-free-22) (void \* ptr) = 0<br>_0x10v_  |
| virtual void | [**freeAll**](#function-freeall) (void) <br>_0x14v_  |
| virtual void | [**freeTail**](#function-freetail) (void) = 0<br>_0x18v_  |
| virtual u32 | [**getCurrentGroupId**](#function-getcurrentgroupid) (void) <br>_0x3Cv_  |
| virtual size\_t | [**getFreeSize**](#function-getfreesize) (void) = 0<br>_0x24v_  |
|  [**JSUTree**](class_j_s_u_tree.md)&lt; [**JKRHeap**](class_j_k_r_heap.md) &gt; & | [**getHeapTree**](#function-getheaptree) () <br> |
| virtual u32 | [**getHeapType**](#function-getheaptype) (void) = 0<br>_0x2Cv_  |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**getParent**](#function-getparent) () const<br> |
| virtual size\_t | [**getSize**](#function-getsize) (void \*) = 0<br>_0x20v_  |
| virtual size\_t | [**getTotalFreeSize**](#function-gettotalfreesize) (void) = 0<br>_0x28v_  |
| virtual u32 | [**getUNK**](#function-getunk) (void) <br>_0x38v_  |
|  void | [**lock**](#function-lock) () <br> |
| virtual size\_t | [**resize**](#function-resize) (void \*, size\_t) = 0<br>_0x1Cv_  |
|  void | [**unlock**](#function-unlock) () <br> |
|  [**destructor**](_j_u_t_types_8h.md#define-destructor) | [**~JKRHeap**](#function-jkrheap) () <br>_0x08v_  |


## Protected Functions inherited from JKRDisposer

See [JKRDisposer](class_j_k_r_disposer.md)

| Type | Name |
| ---: | :--- |
|  [**constructor**](_j_u_t_types_8h.md#define-constructor) | [**JKRDisposer**](class_j_k_r_disposer.md#function-jkrdisposer) () <br> |
|  [**destructor**](_j_u_t_types_8h.md#define-destructor) | [**~JKRDisposer**](class_j_k_r_disposer.md#function-jkrdisposer) () <br>_0x08v_  |






## Public Static Attributes Documentation




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
## Public Functions Documentation




### function appendDisposer 

```C++
inline void JKRHeap::appendDisposer (
    JKRDisposer * disposer
) 
```




<hr>



### function callErrorHandler 

```C++
inline void JKRHeap::callErrorHandler (
    JKRHeap * heap,
    size_t size,
    int align
) 
```




<hr>



### function getErrorFlag 

```C++
inline BOOL JKRHeap::getErrorFlag () 
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
    void * dest,
    void * source,
    u32 size
) 
```




<hr>



### function findFromRoot 

```C++
static JKRHeap * JKRHeap::findFromRoot (
    void * obj
) 
```




<hr>



### function free [1/2]

```C++
static void JKRHeap::free (
    void * ptr,
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
void* JKRHeap::mEnd;
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
void* JKRHeap::mStart;
```




<hr>
## Protected Functions Documentation




### function JKRHeap 

```C++
constructor JKRHeap::JKRHeap (
    void * obj,
    size_t size,
    JKRHeap * parent,
    bool is_error
) 
```




<hr>



### function alloc [2/2]

_0x0Cv_ 
```C++
virtual void * JKRHeap::alloc (
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

_0x30v_ 
```C++
virtual BOOL JKRHeap::check (
    void
) = 0
```




<hr>



### function dispose [1/3]

```C++
int JKRHeap::dispose (
    void * obj,
    u32 size
) 
```




<hr>



### function dispose [2/3]

```C++
void JKRHeap::dispose (
    void * begin,
    void * end
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

_0x34v_ 
```C++
virtual BOOL JKRHeap::dump (
    void
) = 0
```




<hr>



### function find 

```C++
JKRHeap * JKRHeap::find (
    void * obj
) const
```




<hr>



### function free [2/2]

_0x10v_ 
```C++
virtual void JKRHeap::free (
    void * ptr
) = 0
```




<hr>



### function freeAll 

_0x14v_ 
```C++
virtual void JKRHeap::freeAll (
    void
) 
```




<hr>



### function freeTail 

_0x18v_ 
```C++
virtual void JKRHeap::freeTail (
    void
) = 0
```




<hr>



### function getCurrentGroupId 

_0x3Cv_ 
```C++
virtual u32 JKRHeap::getCurrentGroupId (
    void
) 
```




<hr>



### function getFreeSize 

_0x24v_ 
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

_0x2Cv_ 
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

_0x20v_ 
```C++
virtual size_t JKRHeap::getSize (
    void *
) = 0
```




<hr>



### function getTotalFreeSize 

_0x28v_ 
```C++
virtual size_t JKRHeap::getTotalFreeSize (
    void
) = 0
```




<hr>



### function getUNK 

_0x38v_ 
```C++
virtual u32 JKRHeap::getUNK (
    void
) 
```




<hr>



### function lock 

```C++
inline void JKRHeap::lock () 
```




<hr>



### function resize 

_0x1Cv_ 
```C++
virtual size_t JKRHeap::resize (
    void *,
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

_0x08v_ 
```C++
destructor JKRHeap::~JKRHeap () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/JSystem/System/JKernel/include/JKRHeap.h`

