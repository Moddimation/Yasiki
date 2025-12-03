

# Struct JSUPtrLink



[**ClassList**](annotated.md) **>** [**JSUPtrLink**](struct_j_s_u_ptr_link.md)





* `#include <JSUList.h>`





Inherited by the following classes: [JSULink](struct_j_s_u_link.md),  [JSULink](struct_j_s_u_link.md),  [JSULink](struct_j_s_u_link.md),  [JSULink](struct_j_s_u_link.md)
















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* | [**pNext**](#variable-pnext)  <br>_0x08 // next link_  |
|  void \* | [**pObject**](#variable-pobject)  <br>_0x00 // data ptr_  |
|  [**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* | [**pPrev**](#variable-pprev)  <br>_0x0C // previous link_  |
|  [**JSUPtrList**](class_j_s_u_ptr_list.md) \* | [**pSupervisor**](#variable-psupervisor)  <br>_0x04 // list that owns the link_  |
















## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**JSUPtrLink**](#function-jsuptrlink) (void \* data) <br> |
|   | [**~JSUPtrLink**](#function-jsuptrlink) () <br> |




























## Public Attributes Documentation




### variable pNext 

_0x08 // next link_ 
```C++
JSUPtrLink* JSUPtrLink::pNext;
```




<hr>



### variable pObject 

_0x00 // data ptr_ 
```C++
void* JSUPtrLink::pObject;
```




<hr>



### variable pPrev 

_0x0C // previous link_ 
```C++
JSUPtrLink* JSUPtrLink::pPrev;
```




<hr>



### variable pSupervisor 

_0x04 // list that owns the link_ 
```C++
JSUPtrList* JSUPtrLink::pSupervisor;
```




<hr>
## Public Functions Documentation




### function JSUPtrLink 

```C++
JSUPtrLink::JSUPtrLink (
    void * data
) 
```




<hr>



### function ~JSUPtrLink 

```C++
JSUPtrLink::~JSUPtrLink () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/JSystem/System/JSupport/include/JSUList.h`

