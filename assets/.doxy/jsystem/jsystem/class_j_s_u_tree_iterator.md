

# Class JSUTreeIterator

**template &lt;typename T&gt;**



[**ClassList**](annotated.md) **>** [**JSUTreeIterator**](class_j_s_u_tree_iterator.md)





* `#include <JSUList.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**JSUTreeIterator**](#function-jsutreeiterator-12) () <br> |
|   | [**JSUTreeIterator**](#function-jsutreeiterator-22) ([**JSUTree**](class_j_s_u_tree.md)&lt; T &gt; \* tree) <br> |
|  T \* | [**getObject**](#function-getobject) () const<br> |
|  bool | [**operator!=**](#function-operator) (const [**JSUTree**](class_j_s_u_tree.md)&lt; T &gt; \* other) const<br> |
|  T & | [**operator\***](#function-operator_1) () <br> |
|  [**JSUTreeIterator**](class_j_s_u_tree_iterator.md)&lt; T &gt; | [**operator++**](#function-operator_2) (int) <br> |
|  [**JSUTreeIterator**](class_j_s_u_tree_iterator.md)&lt; T &gt; & | [**operator++**](#function-operator_3) () <br> |
|  T \* | [**operator-&gt;**](#function-operator_4) () const<br> |
|  [**JSUTreeIterator**](class_j_s_u_tree_iterator.md)&lt; T &gt; & | [**operator=**](#function-operator_5) ([**JSUTree**](class_j_s_u_tree.md)&lt; T &gt; \* tree) <br> |
|  bool | [**operator==**](#function-operator_6) ([**JSUTree**](class_j_s_u_tree.md)&lt; T &gt; \* other) <br> |




























## Public Functions Documentation




### function JSUTreeIterator [1/2]

```C++
inline JSUTreeIterator::JSUTreeIterator () 
```




<hr>



### function JSUTreeIterator [2/2]

```C++
inline JSUTreeIterator::JSUTreeIterator (
    JSUTree < T > * tree
) 
```




<hr>



### function getObject 

```C++
inline T * JSUTreeIterator::getObject () const
```




<hr>



### function operator!= 

```C++
inline bool JSUTreeIterator::operator!= (
    const JSUTree < T > * other
) const
```




<hr>



### function operator\* 

```C++
inline T & JSUTreeIterator::operator* () 
```




<hr>



### function operator++ 

```C++
inline JSUTreeIterator < T > JSUTreeIterator::operator++ (
    int
) 
```




<hr>



### function operator++ 

```C++
inline JSUTreeIterator < T > & JSUTreeIterator::operator++ () 
```




<hr>



### function operator-&gt; 

```C++
inline T * JSUTreeIterator::operator-> () const
```




<hr>



### function operator= 

```C++
inline JSUTreeIterator < T > & JSUTreeIterator::operator= (
    JSUTree < T > * tree
) 
```




<hr>



### function operator== 

```C++
inline bool JSUTreeIterator::operator== (
    JSUTree < T > * other
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `JSystem/System/JSupport/include/JSUList.h`

