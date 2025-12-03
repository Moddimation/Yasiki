

# Class JSUTree

**template &lt;typename T&gt;**



[**ClassList**](annotated.md) **>** [**JSUTree**](class_j_s_u_tree.md)





* `#include <JSUList.h>`



Inherits the following classes: [JSUList](class_j_s_u_list.md),  [JSULink](struct_j_s_u_link.md)










































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
|   | [**JSUTree**](#function-jsutree) (T \* owner) <br> |
|  [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**appendChild**](#function-appendchild) ([**JSUTree**](class_j_s_u_tree.md)&lt; T &gt; \* child) <br> |
|  [**JSUTree**](class_j_s_u_tree.md)&lt; T &gt; \* | [**getEndChild**](#function-getendchild) () const<br> |
|  [**JSUTree**](class_j_s_u_tree.md)&lt; T &gt; \* | [**getFirstChild**](#function-getfirstchild) () const<br> |
|  [**JSUTree**](class_j_s_u_tree.md)&lt; T &gt; \* | [**getLastChild**](#function-getlastchild) () const<br> |
|  [**JSUTree**](class_j_s_u_tree.md)&lt; T &gt; \* | [**getNextChild**](#function-getnextchild) () const<br> |
|  u32 | [**getNumChildren**](#function-getnumchildren) () const<br> |
|  T \* | [**getObject**](#function-getobject) () const<br> |
|  [**JSUTree**](class_j_s_u_tree.md)&lt; T &gt; \* | [**getParent**](#function-getparent) () const<br> |
|  [**JSUTree**](class_j_s_u_tree.md)&lt; T &gt; \* | [**getPrevChild**](#function-getprevchild) () const<br> |
|  [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**insertChild**](#function-insertchild) ([**JSUTree**](class_j_s_u_tree.md)&lt; T &gt; \* before, [**JSUTree**](class_j_s_u_tree.md)&lt; T &gt; \* child) <br> |
|  [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**prependChild**](#function-prependchild) ([**JSUTree**](class_j_s_u_tree.md)&lt; T &gt; \* child) <br> |
|  [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**removeChild**](#function-removechild) ([**JSUTree**](class_j_s_u_tree.md)&lt; T &gt; \* child) <br> |
|   | [**~JSUTree**](#function-jsutree) () <br> |


## Public Functions inherited from JSUList

See [JSUList](class_j_s_u_list.md)

| Type | Name |
| ---: | :--- |
|   | [**JSUList**](class_j_s_u_list.md#function-jsulist-12) ([**BOOL**](_j_u_t_types_8h.md#define-bool) init) <br> |
|   | [**JSUList**](class_j_s_u_list.md#function-jsulist-22) () <br> |
|  [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**append**](class_j_s_u_list.md#function-append) ([**JSULink**](struct_j_s_u_link.md)&lt; T &gt; \* link) <br> |
|  [**JSULink**](struct_j_s_u_link.md)&lt; T &gt; \* | [**getEnd**](class_j_s_u_list.md#function-getend) () const<br> |
|  [**JSULink**](struct_j_s_u_link.md)&lt; T &gt; \* | [**getFirst**](class_j_s_u_list.md#function-getfirst) () const<br> |
|  [**JSULink**](struct_j_s_u_link.md)&lt; T &gt; \* | [**getLast**](class_j_s_u_list.md#function-getlast) () const<br> |
|  u32 | [**getNumLinks**](class_j_s_u_list.md#function-getnumlinks) () const<br> |
|  void | [**initiate**](class_j_s_u_list.md#function-initiate) () <br> |
|  [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**insert**](class_j_s_u_list.md#function-insert) ([**JSULink**](struct_j_s_u_link.md)&lt; T &gt; \* prev, [**JSULink**](struct_j_s_u_link.md)&lt; T &gt; \* next) <br> |
|  [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**prepend**](class_j_s_u_list.md#function-prepend) ([**JSULink**](struct_j_s_u_link.md)&lt; T &gt; \* link) <br> |
|  [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**remove**](class_j_s_u_list.md#function-remove) ([**JSULink**](struct_j_s_u_link.md)&lt; T &gt; \* link) <br> |


## Public Functions inherited from JSUPtrList

See [JSUPtrList](class_j_s_u_ptr_list.md)

| Type | Name |
| ---: | :--- |
|   | [**JSUPtrList**](class_j_s_u_ptr_list.md#function-jsuptrlist-12) () <br> |
|   | [**JSUPtrList**](class_j_s_u_ptr_list.md#function-jsuptrlist-22) ([**BOOL**](_j_u_t_types_8h.md#define-bool) do\_init) <br> |
|  [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**append**](class_j_s_u_ptr_list.md#function-append) ([**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* link) <br> |
|  [**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* | [**getFirstLink**](class_j_s_u_ptr_list.md#function-getfirstlink) () const<br> |
|  [**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* | [**getLastLink**](class_j_s_u_ptr_list.md#function-getlastlink) () const<br> |
|  [**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* | [**getNthLink**](class_j_s_u_ptr_list.md#function-getnthlink) (u32 n) const<br> |
|  u32 | [**getNumLinks**](class_j_s_u_ptr_list.md#function-getnumlinks) () const<br> |
|  void | [**initiate**](class_j_s_u_ptr_list.md#function-initiate) () <br> |
|  [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**insert**](class_j_s_u_ptr_list.md#function-insert) ([**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* last, [**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* next) <br> |
|  [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**prepend**](class_j_s_u_ptr_list.md#function-prepend) ([**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* link) <br> |
|  [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**remove**](class_j_s_u_ptr_list.md#function-remove) ([**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* link) <br> |
|  void | [**setFirst**](class_j_s_u_ptr_list.md#function-setfirst) ([**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* link) <br> |
|  void | [**setLast**](class_j_s_u_ptr_list.md#function-setlast) ([**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* link) <br> |
|  void | [**setNext**](class_j_s_u_ptr_list.md#function-setnext) ([**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* link) <br> |
|   | [**~JSUPtrList**](class_j_s_u_ptr_list.md#function-jsuptrlist) () <br> |


## Public Functions inherited from JSULink

See [JSULink](struct_j_s_u_link.md)

| Type | Name |
| ---: | :--- |
|   | [**JSULink**](struct_j_s_u_link.md#function-jsulink) (void \* data) <br> |
|  [**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* | [**getNext**](struct_j_s_u_link.md#function-getnext) () <br> |
|  void \* | [**getObject**](struct_j_s_u_link.md#function-getobject) () <br> |
|  [**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* | [**getPrev**](struct_j_s_u_link.md#function-getprev) () <br> |
|  [**JSUPtrList**](class_j_s_u_ptr_list.md) \* | [**getSupervisor**](struct_j_s_u_link.md#function-getsupervisor) () <br> |
|   | [**~JSULink**](struct_j_s_u_link.md#function-jsulink) () <br> |


## Public Functions inherited from JSUPtrLink

See [JSUPtrLink](struct_j_s_u_ptr_link.md)

| Type | Name |
| ---: | :--- |
|   | [**JSUPtrLink**](struct_j_s_u_ptr_link.md#function-jsuptrlink) (void \* data) <br> |
|   | [**~JSUPtrLink**](struct_j_s_u_ptr_link.md#function-jsuptrlink) () <br> |




































## Protected Attributes inherited from JSUPtrList

See [JSUPtrList](class_j_s_u_ptr_list.md)

| Type | Name |
| ---: | :--- |
|  u32 | [**mNumLinks**](class_j_s_u_ptr_list.md#variable-mnumlinks)  <br>_0x08 // number of links in list_  |
|  [**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* | [**pFirst**](class_j_s_u_ptr_list.md#variable-pfirst)  <br>_0x00 // head link of list_  |
|  [**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* | [**pLast**](class_j_s_u_ptr_list.md#variable-plast)  <br>_0x04 // tail link of list_  |
































































































## Public Functions Documentation




### function JSUTree 

```C++
inline JSUTree::JSUTree (
    T * owner
) 
```




<hr>



### function appendChild 

```C++
inline BOOL JSUTree::appendChild (
    JSUTree < T > * child
) 
```




<hr>



### function getEndChild 

```C++
inline JSUTree < T > * JSUTree::getEndChild () const
```




<hr>



### function getFirstChild 

```C++
inline JSUTree < T > * JSUTree::getFirstChild () const
```




<hr>



### function getLastChild 

```C++
inline JSUTree < T > * JSUTree::getLastChild () const
```




<hr>



### function getNextChild 

```C++
inline JSUTree < T > * JSUTree::getNextChild () const
```




<hr>



### function getNumChildren 

```C++
inline u32 JSUTree::getNumChildren () const
```




<hr>



### function getObject 

```C++
inline T * JSUTree::getObject () const
```




<hr>



### function getParent 

```C++
inline JSUTree < T > * JSUTree::getParent () const
```




<hr>



### function getPrevChild 

```C++
inline JSUTree < T > * JSUTree::getPrevChild () const
```




<hr>



### function insertChild 

```C++
inline BOOL JSUTree::insertChild (
    JSUTree < T > * before,
    JSUTree < T > * child
) 
```




<hr>



### function prependChild 

```C++
inline BOOL JSUTree::prependChild (
    JSUTree < T > * child
) 
```




<hr>



### function removeChild 

```C++
inline BOOL JSUTree::removeChild (
    JSUTree < T > * child
) 
```




<hr>



### function ~JSUTree 

```C++
inline JSUTree::~JSUTree () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/JSystem/System/JSupport/include/JSUList.h`

