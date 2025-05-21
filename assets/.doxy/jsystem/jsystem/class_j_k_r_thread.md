

# Class JKRThread



[**ClassList**](annotated.md) **>** [**JKRThread**](class_j_k_r_thread.md)





* `#include <JKRThread.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**constructor**](_j_u_t_types_8h.md#define-constructor) | [**JKRThread**](#function-jkrthread) (OSThread \* thread, int i) <br> |
| virtual int | [**run**](#function-run) () <br> |
|  void | [**start**](#function-start) (void \*) <br> |
|  [**destructor**](_j_u_t_types_8h.md#define-destructor) | [**~JKRThread**](#function-jkrthread) () <br> |








## Protected Attributes

| Type | Name |
| ---: | :--- |
|  unk32 | [**\_58**](#variable-_58)  <br>_0x58_  |
|  unk32 | [**\_5C**](#variable-_5c)  <br>_0x5C_  |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**mCurrHeap**](#variable-mcurrheap)  <br>_0x28_  |
|  [**JSULink**](struct_j_s_u_link.md)&lt; [**JKRThread**](class_j_k_r_thread.md) &gt; | [**mLink**](#variable-mlink)  <br>_0x18_  |
|  void \* | [**mMesgArray**](#variable-mmesgarray)  <br>_0x50_  |
|  u32 | [**mMesgCount**](#variable-mmesgcount)  <br>_0x54_  |
|  OSMessageQueue | [**mMesgQueue**](#variable-mmesgqueue)  <br>_0x30_  |
|  OSThread \* | [**mOSThread**](#variable-mosthread)  <br>_0x2C_  |




















## Public Functions Documentation




### function JKRThread 

```C++
constructor JKRThread::JKRThread (
    OSThread * thread,
    int i
) 
```




<hr>



### function run 

```C++
inline virtual int JKRThread::run () 
```




<hr>



### function start 

```C++
void JKRThread::start (
    void *
) 
```




<hr>



### function ~JKRThread 

```C++
destructor JKRThread::~JKRThread () 
```




<hr>
## Protected Attributes Documentation




### variable \_58 

_0x58_ 
```C++
unk32 JKRThread::_58;
```




<hr>



### variable \_5C 

_0x5C_ 
```C++
unk32 JKRThread::_5C;
```




<hr>



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
u32 JKRThread::mMesgCount;
```




<hr>



### variable mMesgQueue 

_0x30_ 
```C++
OSMessageQueue JKRThread::mMesgQueue;
```




<hr>



### variable mOSThread 

_0x2C_ 
```C++
OSThread* JKRThread::mOSThread;
```




<hr>

------------------------------
The documentation for this class was generated from the following file `JSystem/System/JKernel/include/JKRThread.h`

