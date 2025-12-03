

# Class JSUList

**template &lt;class T&gt;**



[**ClassList**](annotated.md) **>** [**JSUList**](class_j_s_u_list.md)





* `#include <JSUList.h>`



Inherits the following classes: [JSUPtrList](class_j_s_u_ptr_list.md)


Inherited by the following classes: [JSUTree](class_j_s_u_tree.md),  [JSUTree](class_j_s_u_tree.md)




















































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**JSUList**](#function-jsulist-12) ([**BOOL**](_j_u_t_types_8h.md#define-bool) init) <br> |
|   | [**JSUList**](#function-jsulist-22) () <br> |
|  [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**append**](#function-append) ([**JSULink**](struct_j_s_u_link.md)&lt; T &gt; \* link) <br> |
|  [**JSULink**](struct_j_s_u_link.md)&lt; T &gt; \* | [**getEnd**](#function-getend) () const<br> |
|  [**JSULink**](struct_j_s_u_link.md)&lt; T &gt; \* | [**getFirst**](#function-getfirst) () const<br> |
|  [**JSULink**](struct_j_s_u_link.md)&lt; T &gt; \* | [**getLast**](#function-getlast) () const<br> |
|  u32 | [**getNumLinks**](#function-getnumlinks) () const<br> |
|  void | [**initiate**](#function-initiate) () <br> |
|  [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**insert**](#function-insert) ([**JSULink**](struct_j_s_u_link.md)&lt; T &gt; \* prev, [**JSULink**](struct_j_s_u_link.md)&lt; T &gt; \* next) <br> |
|  [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**prepend**](#function-prepend) ([**JSULink**](struct_j_s_u_link.md)&lt; T &gt; \* link) <br> |
|  [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**remove**](#function-remove) ([**JSULink**](struct_j_s_u_link.md)&lt; T &gt; \* link) <br> |


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
















## Protected Attributes inherited from JSUPtrList

See [JSUPtrList](class_j_s_u_ptr_list.md)

| Type | Name |
| ---: | :--- |
|  u32 | [**mNumLinks**](class_j_s_u_ptr_list.md#variable-mnumlinks)  <br>_0x08 // number of links in list_  |
|  [**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* | [**pFirst**](class_j_s_u_ptr_list.md#variable-pfirst)  <br>_0x00 // head link of list_  |
|  [**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* | [**pLast**](class_j_s_u_ptr_list.md#variable-plast)  <br>_0x04 // tail link of list_  |






































## Public Functions Documentation




### function JSUList [1/2]

```C++
inline JSUList::JSUList (
    BOOL init
) 
```




<hr>



### function JSUList [2/2]

```C++
inline JSUList::JSUList () 
```




<hr>



### function append 

```C++
inline BOOL JSUList::append (
    JSULink < T > * link
) 
```




<hr>



### function getEnd 

```C++
inline JSULink < T > * JSUList::getEnd () const
```




<hr>



### function getFirst 

```C++
inline JSULink < T > * JSUList::getFirst () const
```




<hr>



### function getLast 

```C++
inline JSULink < T > * JSUList::getLast () const
```




<hr>



### function getNumLinks 

```C++
inline u32 JSUList::getNumLinks () const
```




<hr>



### function initiate 

```C++
inline void JSUList::initiate () 
```




<hr>



### function insert 

```C++
inline BOOL JSUList::insert (
    JSULink < T > * prev,
    JSULink < T > * next
) 
```




<hr>



### function prepend 

```C++
inline BOOL JSUList::prepend (
    JSULink < T > * link
) 
```




<hr>



### function remove 

```C++
inline BOOL JSUList::remove (
    JSULink < T > * link
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/JSystem/System/JSupport/include/JSUList.h`

