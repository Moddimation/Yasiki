

# File JKRHeap.cpp



[**FileList**](files.md) **>** [**JKernel**](dir_3e30b8d68747de64b6669890a2c0061c.md) **>** [**src**](dir_0d5cb2348a4682995b8ca3021f0b7bbf.md) **>** [**JKRHeap.cpp**](_j_k_r_heap_8cpp.md)

[Go to the source code of this file](_j_k_r_heap_8cpp_source.md)



* `#include <JKRHeap.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**JKRDefaultMemoryErrorRoutine**](#function-jkrdefaultmemoryerrorroutine) (void \*, u32, int) <br> |
|  void | [**operator delete**](#function-operator-delete) ([**HANDLE**](_j_k_r_heap_8h.md#typedef-handle) obj) <br> |
|  void | [**operator delete[]**](#function-operator-delete[]) ([**HANDLE**](_j_k_r_heap_8h.md#typedef-handle) obj) <br> |
|  void \* | [**operator new**](#function-operator-new) (size\_t size) <br> |
|  void \* | [**operator new**](#function-operator-new) (size\_t size, int align) <br> |
|  void \* | [**operator new**](#function-operator-new) (size\_t size, [**JKRHeap**](class_j_k_r_heap.md) \* heap, int align) <br> |
|  void \* | [**operator new[]**](#function-operator-new[]) (size\_t size) <br> |
|  void \* | [**operator new[]**](#function-operator-new[]) (size\_t size, int align) <br> |
|  void \* | [**operator new[]**](#function-operator-new[]) (size\_t size, [**JKRHeap**](class_j_k_r_heap.md) \* heap, int align) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  void | [**\_\_copyMemory**](#function-__copymemory) (u32 \* \_\_dest, u32 \* \_\_source, u32 size) <br> |


























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
    HANDLE obj
) 
```




<hr>



### function operator delete[] 

```C++
void operator delete[] (
    HANDLE obj
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




### function \_\_copyMemory 

```C++
static inline void __copyMemory (
    u32 * __dest,
    u32 * __source,
    u32 size
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `JSystem/System/JKernel/src/JKRHeap.cpp`

