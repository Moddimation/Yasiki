

# File JKRHeap.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**JSystem**](dir_2add8750dabb2c81b6f2c3c5af4cfeba.md) **>** [**System**](dir_e5be38218225624e70ebb9ea7ff5d81f.md) **>** [**JKernel**](dir_cddf90ee7c92ffd4474a8c27c5ea5882.md) **>** [**include**](dir_f5aca01ef7e59deeb7bfd439213c8ac0.md) **>** [**JKRHeap.h**](_j_k_r_heap_8h.md)

[Go to the source code of this file](_j_k_r_heap_8h_source.md)



* `#include <dolphin/os.h>`
* `#include <JKRDisposer.h>`















## Classes

| Type | Name |
| ---: | :--- |
| class | [**JKRHeap**](class_j_k_r_heap.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef void(\* | [**JKRErrorRoutine**](#typedef-jkrerrorroutine)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**JKRDefaultMemoryErrorRoutine**](#function-jkrdefaultmemoryerrorroutine) ([**JKRHeap**](class_j_k_r_heap.md) \* heao, size\_t size, int align) <br> |
|  void | [**operator delete**](#function-operator-delete) (void \* data) <br> |
|  void | [**operator delete[]**](#function-operator-delete[]) (void \* data) <br> |
|  void \* | [**operator new**](#function-operator-new) (size\_t size) <br> |
|  void \* | [**operator new**](#function-operator-new) (size\_t size, int align) <br> |
|  void \* | [**operator new**](#function-operator-new) (size\_t size, [**JKRHeap**](class_j_k_r_heap.md) \* heap, int align) <br> |
|  void \* | [**operator new[]**](#function-operator-new[]) (size\_t size) <br> |
|  void \* | [**operator new[]**](#function-operator-new[]) (size\_t size, int align) <br> |
|  void \* | [**operator new[]**](#function-operator-new[]) (size\_t size, [**JKRHeap**](class_j_k_r_heap.md) \* heap, int align) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  void \* | [**JKRAllocFromHeap**](#function-jkrallocfromheap) ([**JKRHeap**](class_j_k_r_heap.md) \* heap, size\_t size, int align) <br> |
|  void | [**JKRFree**](#function-jkrfree) (void \* obj) <br> |
|  void | [**JKRFreeToHeap**](#function-jkrfreetoheap) ([**JKRHeap**](class_j_k_r_heap.md) \* heap, void \* obj) <br> |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**JKRGetCurrentHeap**](#function-jkrgetcurrentheap) () <br> |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**JKRGetRootHeap**](#function-jkrgetrootheap) () <br> |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**JKRGetSystemHeap**](#function-jkrgetsystemheap) () <br> |

























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**USE\_CURRENTHEAP**](_j_k_r_heap_8h.md#define-use_currentheap)  `[**JKRHeap**](class_j_k_r_heap.md)\* heap = [**JKRHeap::sCurrentHeap**](class_j_k_r_heap.md#variable-scurrentheap)`<br> |
| define  | [**USE\_MYHEAP**](_j_k_r_heap_8h.md#define-use_myheap)  `[**JKRHeap**](class_j_k_r_heap.md)\* heap = [**JKRHeap::findFromRoot**](class_j_k_r_heap.md#function-findfromroot) (this)`<br> |
| define  | [**USE\_ROOTHEAP**](_j_k_r_heap_8h.md#define-use_rootheap)  `[**JKRHeap**](class_j_k_r_heap.md)\* heap = [**JKRHeap::sRootHeap**](class_j_k_r_heap.md#variable-srootheap)`<br> |
| define  | [**USE\_SYSTEMHEAP**](_j_k_r_heap_8h.md#define-use_systemheap)  `[**JKRHeap**](class_j_k_r_heap.md)\* heap = [**JKRHeap::sSystemHeap**](class_j_k_r_heap.md#variable-ssystemheap)`<br> |

## Public Types Documentation




### typedef JKRErrorRoutine 

```C++
typedef void(* JKRErrorRoutine) (JKRHeap *heap, size_t size, int align);
```




<hr>
## Public Functions Documentation




### function JKRDefaultMemoryErrorRoutine 

```C++
void JKRDefaultMemoryErrorRoutine (
    JKRHeap * heao,
    size_t size,
    int align
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
## Public Static Functions Documentation




### function JKRAllocFromHeap 

```C++
static inline void * JKRAllocFromHeap (
    JKRHeap * heap,
    size_t size,
    int align
) 
```




<hr>



### function JKRFree 

```C++
static inline void JKRFree (
    void * obj
) 
```




<hr>



### function JKRFreeToHeap 

```C++
static inline void JKRFreeToHeap (
    JKRHeap * heap,
    void * obj
) 
```




<hr>



### function JKRGetCurrentHeap 

```C++
static inline JKRHeap * JKRGetCurrentHeap () 
```




<hr>



### function JKRGetRootHeap 

```C++
static inline JKRHeap * JKRGetRootHeap () 
```




<hr>



### function JKRGetSystemHeap 

```C++
static inline JKRHeap * JKRGetSystemHeap () 
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
The documentation for this class was generated from the following file `decomp/JSystem/System/JKernel/include/JKRHeap.h`

