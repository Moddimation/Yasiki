

# File JKRHeap.cpp



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**JSystem**](dir_2add8750dabb2c81b6f2c3c5af4cfeba.md) **>** [**System**](dir_e5be38218225624e70ebb9ea7ff5d81f.md) **>** [**JKernel**](dir_cddf90ee7c92ffd4474a8c27c5ea5882.md) **>** [**src**](dir_2af99252d1c483de143a7a3f414b45a2.md) **>** [**JKRHeap.cpp**](_j_k_r_heap_8cpp.md)

[Go to the source code of this file](_j_k_r_heap_8cpp_source.md)



* `#include <JKRHeap.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**JKRDefaultMemoryErrorRoutine**](#function-jkrdefaultmemoryerrorroutine) ([**JKRHeap**](class_j_k_r_heap.md) \* heap, size\_t size, int align) <br> |
|  void | [**operator delete**](#function-operator-delete) (void \* obj) <br> |
|  void | [**operator delete[]**](#function-operator-delete[]) (void \* obj) <br> |
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
    JKRHeap * heap,
    size_t size,
    int align
) 
```




<hr>



### function operator delete 

```C++
void operator delete (
    void * obj
) 
```




<hr>



### function operator delete[] 

```C++
void operator delete[] (
    void * obj
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
The documentation for this class was generated from the following file `decomp/JSystem/System/JKernel/src/JKRHeap.cpp`

