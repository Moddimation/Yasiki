

# Class JSUList

**template &lt;class T&gt;**



[**ClassList**](annotated.md) **>** [**JSUList**](class_j_s_u_list.md)





* `#include <JSUList.h>`



Inherits the following classes: [JSUPtrList](class_j_s_u_ptr_list.md)


Inherited by the following classes: [JSUTree](class_j_s_u_tree.md)






















































## Public Functions inherited from JSUPtrList

See [JSUPtrList](class_j_s_u_ptr_list.md)

| Type | Name |
| ---: | :--- |
|   | [**JSUPtrList**](class_j_s_u_ptr_list.md#function-jsuptrlist) (bool init) <br> |
|  bool | [**append**](class_j_s_u_ptr_list.md#function-append) ([**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* link) <br> |
|  [**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* | [**getFirstLink**](class_j_s_u_ptr_list.md#function-getfirstlink) () const<br> |
|  [**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* | [**getLastLink**](class_j_s_u_ptr_list.md#function-getlastlink) () const<br> |
|  [**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* | [**getNthLink**](class_j_s_u_ptr_list.md#function-getnthlink) (u32 n) const<br> |
|  u32 | [**getNumLinks**](class_j_s_u_ptr_list.md#function-getnumlinks) () <br> |
|  void | [**initiate**](class_j_s_u_ptr_list.md#function-initiate) () <br> |
|  bool | [**insert**](class_j_s_u_ptr_list.md#function-insert) ([**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* last, [**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* next) <br> |
|  bool | [**prepend**](class_j_s_u_ptr_list.md#function-prepend) ([**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* link) <br> |
|  bool | [**remove**](class_j_s_u_ptr_list.md#function-remove) ([**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* link) <br> |
|  void | [**setFirst**](class_j_s_u_ptr_list.md#function-setfirst) ([**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* link) <br> |
|  void | [**setLast**](class_j_s_u_ptr_list.md#function-setlast) ([**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* link) <br> |
|  void | [**setNext**](class_j_s_u_ptr_list.md#function-setnext) ([**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* link) <br> |
|   | [**~JSUPtrList**](class_j_s_u_ptr_list.md#function-jsuptrlist) () <br> |
















## Protected Attributes inherited from JSUPtrList

See [JSUPtrList](class_j_s_u_ptr_list.md)

| Type | Name |
| ---: | :--- |
|  u32 | [**mNumLinks**](class_j_s_u_ptr_list.md#variable-mnumlinks)  <br>_0x08 // number of links in list_  |
|  [**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* | [**pHead**](class_j_s_u_ptr_list.md#variable-phead)  <br>_0x00 // head link of list_  |
|  [**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* | [**pTail**](class_j_s_u_ptr_list.md#variable-ptail)  <br>_0x04 // tail link of list_  |







































------------------------------
The documentation for this class was generated from the following file `JSystem/System/JSupport/include/JSUList.h`

