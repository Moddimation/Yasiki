

# Class JKRThread



[**ClassList**](annotated.md) **>** [**JKRThread**](class_j_k_r_thread.md)





* `#include <JKRThread.h>`



Inherits the following classes: [JKRDisposer](class_j_k_r_disposer.md)






































































## Protected Attributes

| Type | Name |
| ---: | :--- |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**mCurrHeap**](#variable-mcurrheap)  <br>_0x28_  |
|  [**JSULink**](struct_j_s_u_link.md)&lt; [**JKRThread**](class_j_k_r_thread.md) &gt; | [**mLink**](#variable-mlink)  <br>_0x18_  |
|  void \* | [**mMesgArray**](#variable-mmesgarray)  <br>_0x50_  |
|  int | [**mMesgCount**](#variable-mmesgcount)  <br>_0x54_  |
|  OSMessageQueue | [**mMesgQueue**](#variable-mmesgqueue)  <br>_0x30_  |
|  void \* | [**mStack**](#variable-mstack)  <br>_0x58_  |
|  size\_t | [**mStackSize**](#variable-mstacksize)  <br>_0x5C_  |
|  OSThread \* | [**mThreadRecord**](#variable-mthreadrecord)  <br>_0x2C_  |


## Protected Attributes inherited from JKRDisposer

See [JKRDisposer](class_j_k_r_disposer.md)

| Type | Name |
| ---: | :--- |
|  [**JSULink**](struct_j_s_u_link.md)&lt; [**JKRDisposer**](class_j_k_r_disposer.md) &gt; | [**mHeapLink**](class_j_k_r_disposer.md#variable-mheaplink)  <br>_0x04 // Link to disposer, for heap (?)_  |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**pHeapObj**](class_j_k_r_disposer.md#variable-pheapobj)  <br>_0x00 // Pointer to inheriting heap (?)_  |






























## Protected Functions

| Type | Name |
| ---: | :--- |
|  [**constructor**](_j_u_t_types_8h.md#define-constructor) | [**JKRThread**](#function-jkrthread-12) (OSThread \* thread, int i) <br> |
|  [**constructor**](_j_u_t_types_8h.md#define-constructor) | [**JKRThread**](#function-jkrthread-22) (size\_t size, int mesg\_count, int priority) <br> |
| virtual void \* | [**run**](#function-run) () <br> |
|  [**destructor**](_j_u_t_types_8h.md#define-destructor) | [**~JKRThread**](#function-jkrthread) () <br> |


## Protected Functions inherited from JKRDisposer

See [JKRDisposer](class_j_k_r_disposer.md)

| Type | Name |
| ---: | :--- |
|  [**constructor**](_j_u_t_types_8h.md#define-constructor) | [**JKRDisposer**](class_j_k_r_disposer.md#function-jkrdisposer) () <br> |
|  [**destructor**](_j_u_t_types_8h.md#define-destructor) | [**~JKRDisposer**](class_j_k_r_disposer.md#function-jkrdisposer) () <br>_0x08v_  |






## Protected Attributes Documentation




### variable mCurrHeap 

_0x28_ 
```C++
JKRHeap* JKRThread::mCurrHeap;
```




<hr>



### variable mLink 

_0x18_ 
```C++
JSULink<JKRThread> JKRThread::mLink;
```




<hr>



### variable mMesgArray 

_0x50_ 
```C++
void* JKRThread::mMesgArray;
```




<hr>



### variable mMesgCount 

_0x54_ 
```C++
int JKRThread::mMesgCount;
```




<hr>



### variable mMesgQueue 

_0x30_ 
```C++
OSMessageQueue JKRThread::mMesgQueue;
```




<hr>



### variable mStack 

_0x58_ 
```C++
void* JKRThread::mStack;
```




<hr>



### variable mStackSize 

_0x5C_ 
```C++
size_t JKRThread::mStackSize;
```




<hr>



### variable mThreadRecord 

_0x2C_ 
```C++
OSThread* JKRThread::mThreadRecord;
```




<hr>
## Protected Functions Documentation




### function JKRThread [1/2]

```C++
constructor JKRThread::JKRThread (
    OSThread * thread,
    int i
) 
```




<hr>



### function JKRThread [2/2]

```C++
constructor JKRThread::JKRThread (
    size_t size,
    int mesg_count,
    int priority
) 
```




<hr>



### function run 

```C++
inline virtual void * JKRThread::run () 
```




<hr>



### function ~JKRThread 

```C++
destructor JKRThread::~JKRThread () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/JSystem/System/JKernel/include/JKRThread.h`

