

# Class std::\_\_tree::const\_iterator



[**ClassList**](annotated.md) **>** [**std**](namespacestd.md) **>** [**\_\_tree**](classstd_1_1____tree.md) **>** [**const\_iterator**](classstd_1_1____tree_1_1const__iterator.md)





* `#include <tree.h>`



Inherits the following classes: _STD::iterator< bidirectional_iterator_tag, value_type, difference_type, const_pointer, const_reference >


































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**const\_iterator**](#function-const_iterator-13) () <br> |
|   | [**const\_iterator**](#function-const_iterator-23) ([**const**](classstd_1_1allocator.md) [**\_\_tree::iterator**](classstd_1_1____tree_1_1iterator.md) & i) <br> |
|  [**const\_reference**](classstd_1_1____tree.md#typedef-const_reference) | [**operator\***](#function-operator) () const<br> |
|  [**const\_iterator**](classstd_1_1____tree_1_1const__iterator.md) & | [**operator++**](#function-operator_1) () <br> |
|  [**const\_iterator**](classstd_1_1____tree_1_1const__iterator.md) | [**operator++**](#function-operator_2) ([**int**](classstd_1_1allocator.md)) <br> |
|  [**const\_iterator**](classstd_1_1____tree_1_1const__iterator.md) & | [**operator--**](#function-operator-) () <br> |
|  [**const\_iterator**](classstd_1_1____tree_1_1const__iterator.md) | [**operator--**](#function-operator-_1) ([**int**](classstd_1_1allocator.md)) <br> |
|  [**const\_pointer**](classstd_1_1____tree.md#typedef-const_pointer) | [**operator-&gt;**](#function-operator-) () const<br> |




























## Public Functions Documentation




### function const\_iterator [1/3]

```C++
inline std::__tree::const_iterator::const_iterator () 
```




<hr>



### function const\_iterator [2/3]

```C++
inline std::__tree::const_iterator::const_iterator (
    const  __tree::iterator & i
) 
```




<hr>



### function operator\* 

```C++
inline const_reference std::__tree::const_iterator::operator* () const
```




<hr>



### function operator++ 

```C++
inline const_iterator & std::__tree::const_iterator::operator++ () 
```




<hr>



### function operator++ 

```C++
inline const_iterator std::__tree::const_iterator::operator++ (
    int
) 
```




<hr>



### function operator-- 

```C++
inline const_iterator & std::__tree::const_iterator::operator-- () 
```




<hr>



### function operator-- 

```C++
inline const_iterator std::__tree::const_iterator::operator-- (
    int
) 
```




<hr>



### function operator-&gt; 

```C++
inline const_pointer std::__tree::const_iterator::operator-> () const
```




<hr>## Friends Documentation





### friend operator!= 

```C++
inline bool std::__tree::const_iterator::operator!= (
    const  const_iterator & x,
    const  const_iterator & y
) 
```




<hr>



### friend operator== 

```C++
inline bool std::__tree::const_iterator::operator== (
    const  const_iterator & x,
    const  const_iterator & y
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C++/MSL_Common/Include/tree.h`

