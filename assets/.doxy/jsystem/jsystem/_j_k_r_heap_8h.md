

# File JKRHeap.h



[**FileList**](files.md) **>** [**include**](dir_aa4045410c0ff4a0352c8e4463772829.md) **>** [**JKRHeap.h**](_j_k_r_heap_8h.md)

[Go to the source code of this file](_j_k_r_heap_8h_source.md)



* `#include <dolphin/os.h>`
* `#include <JKRDisposer.h>`
* `#include <size_t.h>`















## Classes

| Type | Name |
| ---: | :--- |
| class | [**JKRHeap**](class_j_k_r_heap.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef void \* | [**HANDLE**](#typedef-handle)  <br> |
| typedef void(\* | [**JKRErrorRoutine**](#typedef-jkrerrorroutine)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**JKRDefaultMemoryErrorRoutine**](#function-jkrdefaultmemoryerrorroutine) (void \*, u32, int) <br> |
|  void | [**operator delete**](#function-operator-delete) (void \* data) <br> |
|  void | [**operator delete[]**](#function-operator-delete[]) (void \* data) <br> |
|  void \* | [**operator new**](#function-operator-new) (size\_t size) <br> |
|  void \* | [**operator new**](#function-operator-new) (size\_t size, int align) <br> |
|  void \* | [**operator new**](#function-operator-new) (size\_t size, [**JKRHeap**](class_j_k_r_heap.md) \* heap, int align) <br> |
|  void \* | [**operator new[]**](#function-operator-new[]) (size\_t size) <br> |
|  void \* | [**operator new[]**](#function-operator-new[]) (size\_t size, int align) <br> |
|  void \* | [**operator new[]**](#function-operator-new[]) (size\_t size, [**JKRHeap**](class_j_k_r_heap.md) \* heap, int align) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**USE\_CURRENTHEAP**](_j_k_r_heap_8h.md#define-use_currentheap)  `[**JKRHeap**](class_j_k_r_heap.md)\* heap = [**JKRHeap::sCurrentHeap**](class_j_k_r_heap.md#variable-scurrentheap)`<br> |
| define  | [**USE\_MYHEAP**](_j_k_r_heap_8h.md#define-use_myheap)  `[**JKRHeap**](class_j_k_r_heap.md)\* heap = [**JKRHeap::findFromRoot**](class_j_k_r_heap.md#function-findfromroot) (this)`<br> |
| define  | [**USE\_ROOTHEAP**](_j_k_r_heap_8h.md#define-use_rootheap)  `[**JKRHeap**](class_j_k_r_heap.md)\* heap = [**JKRHeap::sRootHeap**](class_j_k_r_heap.md#variable-srootheap)`<br> |
| define  | [**USE\_SYSTEMHEAP**](_j_k_r_heap_8h.md#define-use_systemheap)  `[**JKRHeap**](class_j_k_r_heap.md)\* heap = [**JKRHeap::sSystemHeap**](class_j_k_r_heap.md#variable-ssystemheap)`<br> |

## Public Types Documentation




### typedef HANDLE 

```C++
typedef void* HANDLE;
```




<hr>



### typedef JKRErrorRoutine 

```C++
typedef void(* JKRErrorRoutine) (void *, u32, int);
```




<hr>
## Public Functions Documentation




### function JKRDefaultMemoryErrorRoutine 

```C++
void JKRDefaultMemoryErrorRoutine (
    void *,
    u32,
    int
) 
```




<hr>



### function operator delete 

```C++
void operator delete (
    void * data
) 
```




<hr>



### function operator delete[] 

```C++
void operator delete[] (
    void * data
) 
```




<hr>



### function operator new 

```C++
void * operator new (
    size_t size
) 
```




<hr>



### function operator new 

```C++
void * operator new (
    size_t size,
    int align
) 
```




<hr>



### function operator new 

```C++
void * operator new (
    size_t size,
    JKRHeap * heap,
    int align
) 
```




<hr>



### function operator new[] 

```C++
void * operator new[] (
    size_t size
) 
```




<hr>



### function operator new[] 

```C++
void * operator new[] (
    size_t size,
    int align
) 
```




<hr>



### function operator new[] 

```C++
void * operator new[] (
    size_t size,
    JKRHeap * heap,
    int align
) 
```




<hr>
## Macro Definition Documentation





### define USE\_CURRENTHEAP 

```C++
#define USE_CURRENTHEAP `JKRHeap * heap = JKRHeap::sCurrentHeap`
```




<hr>



### define USE\_MYHEAP 

```C++
#define USE_MYHEAP `JKRHeap * heap = JKRHeap::findFromRoot (this)`
```




<hr>



### define USE\_ROOTHEAP 

```C++
#define USE_ROOTHEAP `JKRHeap * heap = JKRHeap::sRootHeap`
```




<hr>



### define USE\_SYSTEMHEAP 

```C++
#define USE_SYSTEMHEAP `JKRHeap * heap = JKRHeap::sSystemHeap`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `JSystem/System/JKernel/include/JKRHeap.h`

