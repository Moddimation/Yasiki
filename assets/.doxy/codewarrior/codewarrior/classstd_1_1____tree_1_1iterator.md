

# Class std::\_\_tree::iterator



[**ClassList**](annotated.md) **>** [**std**](namespacestd.md) **>** [**\_\_tree**](classstd_1_1____tree.md) **>** [**iterator**](classstd_1_1____tree_1_1iterator.md)





* `#include <tree.h>`



Inherits the following classes: _STD::iterator< bidirectional_iterator_tag, value_type, difference_type, pointer, reference >


































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**iterator**](#function-iterator-12) () <br> |
|  [**reference**](classstd_1_1____tree.md#typedef-reference) | [**operator\***](#function-operator) () const<br> |
|  [**iterator**](classstd_1_1____tree_1_1iterator.md) & | [**operator++**](#function-operator_1) () <br> |
|  [**iterator**](classstd_1_1____tree_1_1iterator.md) | [**operator++**](#function-operator_2) ([**int**](classstd_1_1allocator.md)) <br> |
|  [**iterator**](classstd_1_1____tree_1_1iterator.md) & | [**operator--**](#function-operator-) () <br> |
|  [**iterator**](classstd_1_1____tree_1_1iterator.md) | [**operator--**](#function-operator-_1) ([**int**](classstd_1_1allocator.md)) <br> |
|  [**pointer**](classstd_1_1____tree.md#typedef-pointer) | [**operator-&gt;**](#function-operator-) () const<br> |




























## Public Functions Documentation




### function iterator [1/2]

```C++
inline std::__tree::iterator::iterator () 
```




<hr>



### function operator\* 

```C++
inline reference std::__tree::iterator::operator* () const
```




<hr>



### function operator++ 

```C++
inline iterator & std::__tree::iterator::operator++ () 
```




<hr>



### function operator++ 

```C++
inline iterator std::__tree::iterator::operator++ (
    int
) 
```




<hr>



### function operator-- 

```C++
inline iterator & std::__tree::iterator::operator-- () 
```




<hr>



### function operator-- 

```C++
inline iterator std::__tree::iterator::operator-- (
    int
) 
```




<hr>



### function operator-&gt; 

```C++
inline pointer std::__tree::iterator::operator-> () const
```




<hr>## Friends Documentation





### friend const\_iterator 

```C++
class std::__tree::iterator::const_iterator (
    __tree::const_iterator
) 
```




<hr>



### friend operator!= 

```C++
inline bool std::__tree::iterator::operator!= (
    const  iterator & x,
    const  iterator & y
) 
```




<hr>



### friend operator== 

```C++
inline bool std::__tree::iterator::operator== (
    const  iterator & x,
    const  iterator & y
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C++/MSL_Common/Include/tree.h`

