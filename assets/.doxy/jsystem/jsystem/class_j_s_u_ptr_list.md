

# Class JSUPtrList



[**ClassList**](annotated.md) **>** [**JSUPtrList**](class_j_s_u_ptr_list.md)





* `#include <JSUList.h>`





Inherited by the following classes: [JSUList](class_j_s_u_list.md),  [JSUList](class_j_s_u_list.md),  [JSUList](class_j_s_u_list.md)
































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**JSUPtrList**](#function-jsuptrlist-12) () <br> |
|   | [**JSUPtrList**](#function-jsuptrlist-22) ([**BOOL**](_j_u_t_types_8h.md#define-bool) do\_init) <br> |
|  [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**append**](#function-append) ([**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* link) <br> |
|  [**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* | [**getFirstLink**](#function-getfirstlink) () const<br> |
|  [**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* | [**getLastLink**](#function-getlastlink) () const<br> |
|  [**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* | [**getNthLink**](#function-getnthlink) (u32 n) const<br> |
|  u32 | [**getNumLinks**](#function-getnumlinks) () const<br> |
|  void | [**initiate**](#function-initiate) () <br> |
|  [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**insert**](#function-insert) ([**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* last, [**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* next) <br> |
|  [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**prepend**](#function-prepend) ([**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* link) <br> |
|  [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**remove**](#function-remove) ([**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* link) <br> |
|  void | [**setFirst**](#function-setfirst) ([**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* link) <br> |
|  void | [**setLast**](#function-setlast) ([**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* link) <br> |
|  void | [**setNext**](#function-setnext) ([**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* link) <br> |
|   | [**~JSUPtrList**](#function-jsuptrlist) () <br> |








## Protected Attributes

| Type | Name |
| ---: | :--- |
|  u32 | [**mNumLinks**](#variable-mnumlinks)  <br>_0x08 // number of links in list_  |
|  [**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* | [**pFirst**](#variable-pfirst)  <br>_0x00 // head link of list_  |
|  [**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* | [**pLast**](#variable-plast)  <br>_0x04 // tail link of list_  |




















## Public Functions Documentation




### function JSUPtrList [1/2]

```C++
inline JSUPtrList::JSUPtrList () 
```




<hr>



### function JSUPtrList [2/2]

```C++
JSUPtrList::JSUPtrList (
    BOOL do_init
) 
```




<hr>



### function append 

```C++
BOOL JSUPtrList::append (
    JSUPtrLink * link
) 
```




<hr>



### function getFirstLink 

```C++
inline JSUPtrLink * JSUPtrList::getFirstLink () const
```




<hr>



### function getLastLink 

```C++
inline JSUPtrLink * JSUPtrList::getLastLink () const
```




<hr>



### function getNthLink 

```C++
JSUPtrLink * JSUPtrList::getNthLink (
    u32 n
) const
```




<hr>



### function getNumLinks 

```C++
inline u32 JSUPtrList::getNumLinks () const
```




<hr>



### function initiate 

```C++
void JSUPtrList::initiate () 
```




<hr>



### function insert 

```C++
BOOL JSUPtrList::insert (
    JSUPtrLink * last,
    JSUPtrLink * next
) 
```




<hr>



### function prepend 

```C++
BOOL JSUPtrList::prepend (
    JSUPtrLink * link
) 
```




<hr>



### function remove 

```C++
BOOL JSUPtrList::remove (
    JSUPtrLink * link
) 
```




<hr>



### function setFirst 

```C++
void JSUPtrList::setFirst (
    JSUPtrLink * link
) 
```




<hr>



### function setLast 

```C++
void JSUPtrList::setLast (
    JSUPtrLink * link
) 
```




<hr>



### function setNext 

```C++
void JSUPtrList::setNext (
    JSUPtrLink * link
) 
```




<hr>



### function ~JSUPtrList 

```C++
JSUPtrList::~JSUPtrList () 
```




<hr>
## Protected Attributes Documentation




### variable mNumLinks 

_0x08 // number of links in list_ 
```C++
u32 JSUPtrList::mNumLinks;
```




<hr>



### variable pFirst 

_0x00 // head link of list_ 
```C++
JSUPtrLink* JSUPtrList::pFirst;
```




<hr>



### variable pLast 

_0x04 // tail link of list_ 
```C++
JSUPtrLink* JSUPtrList::pLast;
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/JSystem/System/JSupport/include/JSUList.h`

