

# Class JKRDisposer



[**ClassList**](annotated.md) **>** [**JKRDisposer**](class_j_k_r_disposer.md)





* `#include <JKRDisposer.h>`





Inherited by the following classes: [JKRHeap](class_j_k_r_heap.md),  [JKRThread](class_j_k_r_thread.md)








































## Protected Attributes

| Type | Name |
| ---: | :--- |
|  [**JSULink**](struct_j_s_u_link.md)&lt; [**JKRDisposer**](class_j_k_r_disposer.md) &gt; | [**mHeapLink**](#variable-mheaplink)  <br>_0x04 // Link to disposer, for heap (?)_  |
|  [**JKRHeap**](class_j_k_r_heap.md) \* | [**pHeapObj**](#variable-pheapobj)  <br>_0x00 // Pointer to inheriting heap (?)_  |
















## Protected Functions

| Type | Name |
| ---: | :--- |
|  [**constructor**](_j_u_t_types_8h.md#define-constructor) | [**JKRDisposer**](#function-jkrdisposer) () <br> |
|  [**destructor**](_j_u_t_types_8h.md#define-destructor) | [**~JKRDisposer**](#function-jkrdisposer) () <br>_0x08v_  |




## Protected Attributes Documentation




### variable mHeapLink 

_0x04 // Link to disposer, for heap (?)_ 
```C++
JSULink<JKRDisposer> JKRDisposer::mHeapLink;
```




<hr>



### variable pHeapObj 

_0x00 // Pointer to inheriting heap (?)_ 
```C++
JKRHeap* JKRDisposer::pHeapObj;
```




<hr>
## Protected Functions Documentation




### function JKRDisposer 

```C++
constructor JKRDisposer::JKRDisposer () 
```




<hr>



### function ~JKRDisposer 

_0x08v_ 
```C++
destructor JKRDisposer::~JKRDisposer () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/JSystem/System/JKernel/include/JKRDisposer.h`

