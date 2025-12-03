

# Class JSUListIterator

**template &lt;typename T&gt;**



[**ClassList**](annotated.md) **>** [**JSUListIterator**](class_j_s_u_list_iterator.md)





* `#include <JSUList.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**JSUListIterator**](#function-jsulistiterator-13) () <br> |
|   | [**JSUListIterator**](#function-jsulistiterator-23) ([**JSULink**](struct_j_s_u_link.md)&lt; T &gt; \* link) <br> |
|   | [**JSUListIterator**](#function-jsulistiterator-33) ([**JSUList**](class_j_s_u_list.md)&lt; T &gt; \* list) <br> |
|  T \* | [**getObject**](#function-getobject) () const<br> |
|  [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**isAvailable**](#function-isavailable) () <br> |
|  [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**operator!=**](#function-operator) (const [**JSULink**](struct_j_s_u_link.md)&lt; T &gt; \* other) const<br> |
|  [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**operator!=**](#function-operator_1) (const [**JSUListIterator**](class_j_s_u_list_iterator.md)&lt; T &gt; & other) const<br> |
|  [**JSUListIterator**](class_j_s_u_list_iterator.md)&lt; T &gt; | [**operator++**](#function-operator_2) (int) <br> |
|  [**JSUListIterator**](class_j_s_u_list_iterator.md)&lt; T &gt; & | [**operator++**](#function-operator_3) () <br> |
|  [**JSUListIterator**](class_j_s_u_list_iterator.md)&lt; T &gt; | [**operator--**](#function-operator-) (int) <br> |
|  [**JSUListIterator**](class_j_s_u_list_iterator.md)&lt; T &gt; & | [**operator--**](#function-operator-_1) () <br> |
|  T \* | [**operator-&gt;**](#function-operator-) () const<br> |
|  [**JSUListIterator**](class_j_s_u_list_iterator.md)&lt; T &gt; & | [**operator=**](#function-operator_4) ([**JSULink**](struct_j_s_u_link.md)&lt; T &gt; \* link) <br> |
|  [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**operator==**](#function-operator_5) (const [**JSULink**](struct_j_s_u_link.md)&lt; T &gt; \* other) const<br> |
|  [**BOOL**](_j_u_t_types_8h.md#define-bool) | [**operator==**](#function-operator_6) (const [**JSUListIterator**](class_j_s_u_list_iterator.md)&lt; T &gt; & other) const<br> |




























## Public Functions Documentation




### function JSUListIterator [1/3]

```C++
inline JSUListIterator::JSUListIterator () 
```




<hr>



### function JSUListIterator [2/3]

```C++
inline JSUListIterator::JSUListIterator (
    JSULink < T > * link
) 
```




<hr>



### function JSUListIterator [3/3]

```C++
inline JSUListIterator::JSUListIterator (
    JSUList < T > * list
) 
```




<hr>



### function getObject 

```C++
inline T * JSUListIterator::getObject () const
```




<hr>



### function isAvailable 

```C++
inline BOOL JSUListIterator::isAvailable () 
```




<hr>



### function operator!= 

```C++
inline BOOL JSUListIterator::operator!= (
    const JSULink < T > * other
) const
```




<hr>



### function operator!= 

```C++
inline BOOL JSUListIterator::operator!= (
    const JSUListIterator < T > & other
) const
```




<hr>



### function operator++ 

```C++
inline JSUListIterator < T > JSUListIterator::operator++ (
    int
) 
```




<hr>



### function operator++ 

```C++
inline JSUListIterator < T > & JSUListIterator::operator++ () 
```




<hr>



### function operator-- 

```C++
inline JSUListIterator < T > JSUListIterator::operator-- (
    int
) 
```




<hr>



### function operator-- 

```C++
inline JSUListIterator < T > & JSUListIterator::operator-- () 
```




<hr>



### function operator-&gt; 

```C++
inline T * JSUListIterator::operator-> () const
```




<hr>



### function operator= 

```C++
inline JSUListIterator < T > & JSUListIterator::operator= (
    JSULink < T > * link
) 
```




<hr>



### function operator== 

```C++
inline BOOL JSUListIterator::operator== (
    const JSULink < T > * other
) const
```




<hr>



### function operator== 

```C++
inline BOOL JSUListIterator::operator== (
    const JSUListIterator < T > & other
) const
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/JSystem/System/JSupport/include/JSUList.h`

