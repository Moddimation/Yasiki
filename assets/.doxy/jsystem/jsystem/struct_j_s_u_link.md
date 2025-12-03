

# Struct JSULink

**template &lt;class T&gt;**



[**ClassList**](annotated.md) **>** [**JSULink**](struct_j_s_u_link.md)





* `#include <JSUList.h>`



Inherits the following classes: [JSUPtrLink](struct_j_s_u_ptr_link.md)


Inherited by the following classes: [JSUTree](class_j_s_u_tree.md),  [JSUTree](class_j_s_u_tree.md)






















## Public Attributes inherited from JSUPtrLink

See [JSUPtrLink](struct_j_s_u_ptr_link.md)

| Type | Name |
| ---: | :--- |
|  [**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* | [**pNext**](struct_j_s_u_ptr_link.md#variable-pnext)  <br>_0x08 // next link_  |
|  void \* | [**pObject**](struct_j_s_u_ptr_link.md#variable-pobject)  <br>_0x00 // data ptr_  |
|  [**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* | [**pPrev**](struct_j_s_u_ptr_link.md#variable-pprev)  <br>_0x0C // previous link_  |
|  [**JSUPtrList**](class_j_s_u_ptr_list.md) \* | [**pSupervisor**](struct_j_s_u_ptr_link.md#variable-psupervisor)  <br>_0x04 // list that owns the link_  |






























## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**JSULink**](#function-jsulink) (void \* data) <br> |
|  [**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* | [**getNext**](#function-getnext) () <br> |
|  void \* | [**getObject**](#function-getobject) () <br> |
|  [**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* | [**getPrev**](#function-getprev) () <br> |
|  [**JSUPtrList**](class_j_s_u_ptr_list.md) \* | [**getSupervisor**](#function-getsupervisor) () <br> |
|   | [**~JSULink**](#function-jsulink) () <br> |


## Public Functions inherited from JSUPtrLink

See [JSUPtrLink](struct_j_s_u_ptr_link.md)

| Type | Name |
| ---: | :--- |
|   | [**JSUPtrLink**](struct_j_s_u_ptr_link.md#function-jsuptrlink) (void \* data) <br> |
|   | [**~JSUPtrLink**](struct_j_s_u_ptr_link.md#function-jsuptrlink) () <br> |






















































## Public Functions Documentation




### function JSULink 

```C++
inline JSULink::JSULink (
    void * data
) 
```




<hr>



### function getNext 

```C++
inline JSUPtrLink * JSULink::getNext () 
```




<hr>



### function getObject 

```C++
inline void * JSULink::getObject () 
```




<hr>



### function getPrev 

```C++
inline JSUPtrLink * JSULink::getPrev () 
```




<hr>



### function getSupervisor 

```C++
inline JSUPtrList * JSULink::getSupervisor () 
```




<hr>



### function ~JSULink 

```C++
inline JSULink::~JSULink () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/JSystem/System/JSupport/include/JSUList.h`

