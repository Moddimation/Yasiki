

# Class JSUPtrList



[**ClassList**](annotated.md) **>** [**JSUPtrList**](class_j_s_u_ptr_list.md)





* `#include <JSUList.h>`





Inherited by the following classes: [JSUList](class_j_s_u_list.md)
































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**JSUPtrList**](#function-jsuptrlist) (bool init) <br> |
|  bool | [**append**](#function-append) ([**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* link) <br> |
|  [**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* | [**getFirstLink**](#function-getfirstlink) () const<br> |
|  [**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* | [**getLastLink**](#function-getlastlink) () const<br> |
|  [**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* | [**getNthLink**](#function-getnthlink) (u32 n) const<br> |
|  u32 | [**getNumLinks**](#function-getnumlinks) () <br> |
|  void | [**initiate**](#function-initiate) () <br> |
|  bool | [**insert**](#function-insert) ([**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* last, [**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* next) <br> |
|  bool | [**prepend**](#function-prepend) ([**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* link) <br> |
|  bool | [**remove**](#function-remove) ([**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* link) <br> |
|  void | [**setFirst**](#function-setfirst) ([**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* link) <br> |
|  void | [**setLast**](#function-setlast) ([**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* link) <br> |
|  void | [**setNext**](#function-setnext) ([**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* link) <br> |
|   | [**~JSUPtrList**](#function-jsuptrlist) () <br> |








## Protected Attributes

| Type | Name |
| ---: | :--- |
|  u32 | [**mNumLinks**](#variable-mnumlinks)  <br>_0x08 // number of links in list_  |
|  [**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* | [**pHead**](#variable-phead)  <br>_0x00 // head link of list_  |
|  [**JSUPtrLink**](struct_j_s_u_ptr_link.md) \* | [**pTail**](#variable-ptail)  <br>_0x04 // tail link of list_  |




















## Public Functions Documentation




### function JSUPtrList 

```C++
JSUPtrList::JSUPtrList (
    bool init
) 
```




<hr>



### function append 

```C++
bool JSUPtrList::append (
    JSUPtrLink * link
) 
```




<hr>



### function getFirstLink 

```C++
JSUPtrLink * JSUPtrList::getFirstLink () const
```




<hr>



### function getLastLink 

```C++
JSUPtrLink * JSUPtrList::getLastLink () const
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
inline u32 JSUPtrList::getNumLinks () 
```




<hr>



### function initiate 

```C++
void JSUPtrList::initiate () 
```




<hr>



### function insert 

```C++
bool JSUPtrList::insert (
    JSUPtrLink * last,
    JSUPtrLink * next
) 
```




<hr>



### function prepend 

```C++
bool JSUPtrList::prepend (
    JSUPtrLink * link
) 
```




<hr>



### function remove 

```C++
bool JSUPtrList::remove (
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
inline void JSUPtrList::setLast (
    JSUPtrLink * link
) 
```




<hr>



### function setNext 

```C++
inline void JSUPtrList::setNext (
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



### variable pHead 

_0x00 // head link of list_ 
```C++
JSUPtrLink* JSUPtrList::pHead;
```




<hr>



### variable pTail 

_0x04 // tail link of list_ 
```C++
JSUPtrLink* JSUPtrList::pTail;
```




<hr>

------------------------------
The documentation for this class was generated from the following file `JSystem/System/JSupport/include/JSUList.h`

