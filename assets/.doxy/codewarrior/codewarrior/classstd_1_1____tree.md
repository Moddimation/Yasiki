

# Class std::\_\_tree

**template &lt;[**class**](classstd_1_1allocator.md) [**T**](k__tan_8c.md#variable-t), [**class**](classstd_1_1allocator.md) [**Compare**](classstd_1_1allocator.md), [**class**](classstd_1_1allocator.md) [**Allocator**](classstd_1_1allocator.md)&gt;**



[**ClassList**](annotated.md) **>** [**std**](namespacestd.md) **>** [**\_\_tree**](classstd_1_1____tree.md)





* `#include <tree.h>`



Inherits the following classes: [std::\_\_red\_black\_tree](classstd_1_1____red__black__tree.md)












## Classes

| Type | Name |
| ---: | :--- |
| class | [**const\_iterator**](classstd_1_1____tree_1_1const__iterator.md) <br> |
| struct | [**debug\_view**](structstd_1_1____tree_1_1debug__view.md) <br> |
| class | [**iterator**](classstd_1_1____tree_1_1iterator.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**Allocator**](classstd_1_1allocator.md) | [**allocator\_type**](#typedef-allocator_type)  <br> |
| typedef Allocator::const\_pointer | [**const\_pointer**](#typedef-const_pointer)  <br> |
| typedef Allocator::const\_reference | [**const\_reference**](#typedef-const_reference)  <br> |
| typedef \_STD::reverse\_iterator&lt; [**const\_iterator**](classstd_1_1____tree_1_1const__iterator.md) &gt; | [**const\_reverse\_iterator**](#typedef-const_reverse_iterator)  <br> |
| typedef Allocator::difference\_type | [**difference\_type**](#typedef-difference_type)  <br> |
| typedef Allocator::pointer | [**pointer**](#typedef-pointer)  <br> |
| typedef Allocator::reference | [**reference**](#typedef-reference)  <br> |
| typedef \_STD::reverse\_iterator&lt; [**iterator**](classstd_1_1____tree_1_1iterator.md) &gt; | [**reverse\_iterator**](#typedef-reverse_iterator)  <br> |
| typedef Allocator::size\_type | [**size\_type**](#typedef-size_type)  <br> |
| typedef [**Compare**](classstd_1_1allocator.md) | [**value\_compare**](#typedef-value_compare)  <br> |
| typedef [**T**](k__tan_8c.md#variable-t) | [**value\_type**](#typedef-value_type)  <br> |








































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**\_\_tree**](#function-__tree-13) ([**const**](classstd_1_1allocator.md) [**Compare**](classstd_1_1allocator.md) & comp, [**const**](classstd_1_1allocator.md) [**Allocator**](classstd_1_1allocator.md) & a) <br> |
|   | [**\_\_tree**](#function-__tree-23) ([**InputIterator**](classstd_1_1allocator.md) first, [**InputIterator**](classstd_1_1allocator.md) last, [**bool**](stdbool_8h.md#define-bool) multi, [**const**](classstd_1_1allocator.md) [**Compare**](classstd_1_1allocator.md) & comp, [**const**](classstd_1_1allocator.md) [**Allocator**](classstd_1_1allocator.md) & a) <br> |
|   | [**\_\_tree**](#function-__tree-33) ([**const**](classstd_1_1allocator.md) [**\_\_tree**](classstd_1_1____tree.md) & x) <br> |
|  [**iterator**](classstd_1_1____tree_1_1iterator.md) | [**begin**](#function-begin-12) () <br> |
|  [**const\_iterator**](classstd_1_1____tree_1_1const__iterator.md) | [**begin**](#function-begin-22) () const<br> |
|  [**void**](classstd_1_1allocator.md) | [**clear**](#function-clear) () <br> |
|  [**size\_type**](classstd_1_1____tree.md#typedef-size_type) | [**count\_multi**](#function-count_multi) ([**const**](classstd_1_1allocator.md) [**value\_type**](classstd_1_1____tree.md#typedef-value_type) & x) const<br> |
|  [**size\_type**](classstd_1_1____tree.md#typedef-size_type) | [**count\_one**](#function-count_one) ([**const**](classstd_1_1allocator.md) [**value\_type**](classstd_1_1____tree.md#typedef-value_type) & x) const<br> |
|  [**bool**](stdbool_8h.md#define-bool) | [**empty**](#function-empty) () const<br> |
|  [**iterator**](classstd_1_1____tree_1_1iterator.md) | [**end**](#function-end-12) () <br> |
|  [**const\_iterator**](classstd_1_1____tree_1_1const__iterator.md) | [**end**](#function-end-22) () const<br> |
|  [**pair**](classstd_1_1allocator.md)&lt; [**iterator**](classstd_1_1____tree_1_1iterator.md), [**iterator**](classstd_1_1____tree_1_1iterator.md) &gt; | [**equal\_range**](#function-equal_range-12) ([**const**](classstd_1_1allocator.md) [**value\_type**](classstd_1_1____tree.md#typedef-value_type) & x) <br> |
|  [**pair**](classstd_1_1allocator.md)&lt; [**const\_iterator**](classstd_1_1____tree_1_1const__iterator.md), [**const\_iterator**](classstd_1_1____tree_1_1const__iterator.md) &gt; | [**equal\_range**](#function-equal_range-22) ([**const**](classstd_1_1allocator.md) [**value\_type**](classstd_1_1____tree.md#typedef-value_type) & x) const<br> |
|  [**void**](classstd_1_1allocator.md) | [**erase**](#function-erase-12) ([**iterator**](classstd_1_1____tree_1_1iterator.md) position) <br> |
|  [**void**](classstd_1_1allocator.md) | [**erase**](#function-erase-22) ([**iterator**](classstd_1_1____tree_1_1iterator.md) first, [**iterator**](classstd_1_1____tree_1_1iterator.md) last) <br> |
|  [**size\_type**](classstd_1_1____tree.md#typedef-size_type) | [**erase\_multi**](#function-erase_multi) ([**const**](classstd_1_1allocator.md) [**value\_type**](classstd_1_1____tree.md#typedef-value_type) & x) <br> |
|  [**size\_type**](classstd_1_1____tree.md#typedef-size_type) | [**erase\_one**](#function-erase_one) ([**const**](classstd_1_1allocator.md) [**value\_type**](classstd_1_1____tree.md#typedef-value_type) & x) <br> |
|  [**iterator**](classstd_1_1____tree_1_1iterator.md) | [**find**](#function-find-12) ([**const**](classstd_1_1allocator.md) [**value\_type**](classstd_1_1____tree.md#typedef-value_type) & x) <br> |
|  [**const\_iterator**](classstd_1_1____tree_1_1const__iterator.md) | [**find**](#function-find-22) ([**const**](classstd_1_1allocator.md) [**value\_type**](classstd_1_1____tree.md#typedef-value_type) & x) const<br> |
|  [**allocator\_type**](classstd_1_1____tree.md#typedef-allocator_type) | [**get\_allocator**](#function-get_allocator) () const<br> |
|  [**iterator**](classstd_1_1____tree_1_1iterator.md) | [**insert\_multi**](#function-insert_multi-13) ([**const**](classstd_1_1allocator.md) [**value\_type**](classstd_1_1____tree.md#typedef-value_type) & x) <br> |
|  [**iterator**](classstd_1_1____tree_1_1iterator.md) | [**insert\_multi**](#function-insert_multi-23) ([**iterator**](classstd_1_1____tree_1_1iterator.md) position, [**const**](classstd_1_1allocator.md) [**value\_type**](classstd_1_1____tree.md#typedef-value_type) & x) <br> |
|  [**void**](classstd_1_1allocator.md) | [**insert\_multi**](#function-insert_multi-33) ([**InputIterator**](classstd_1_1allocator.md) first, [**InputIterator**](classstd_1_1allocator.md) last) <br> |
|  [**pair**](classstd_1_1allocator.md)&lt; [**iterator**](classstd_1_1____tree_1_1iterator.md), [**bool**](stdbool_8h.md#define-bool) &gt; | [**insert\_one**](#function-insert_one-13) ([**const**](classstd_1_1allocator.md) [**value\_type**](classstd_1_1____tree.md#typedef-value_type) & x) <br> |
|  [**iterator**](classstd_1_1____tree_1_1iterator.md) | [**insert\_one**](#function-insert_one-23) ([**iterator**](classstd_1_1____tree_1_1iterator.md) position, [**const**](classstd_1_1allocator.md) [**value\_type**](classstd_1_1____tree.md#typedef-value_type) & x) <br> |
|  [**void**](classstd_1_1allocator.md) | [**insert\_one**](#function-insert_one-33) ([**InputIterator**](classstd_1_1allocator.md) first, [**InputIterator**](classstd_1_1allocator.md) last) <br> |
|  [**iterator**](classstd_1_1____tree_1_1iterator.md) | [**lower\_bound**](#function-lower_bound-12) ([**const**](classstd_1_1allocator.md) [**value\_type**](classstd_1_1____tree.md#typedef-value_type) & x) <br> |
|  [**const\_iterator**](classstd_1_1____tree_1_1const__iterator.md) | [**lower\_bound**](#function-lower_bound-22) ([**const**](classstd_1_1allocator.md) [**value\_type**](classstd_1_1____tree.md#typedef-value_type) & x) const<br> |
|  [**size\_type**](classstd_1_1____tree.md#typedef-size_type) | [**max\_size**](#function-max_size) () const<br> |
|  [**\_\_tree**](classstd_1_1____tree.md) & | [**operator=**](#function-operator) ([**const**](classstd_1_1allocator.md) [**\_\_tree**](classstd_1_1____tree.md) & x) <br> |
|  [**reverse\_iterator**](classstd_1_1____tree.md#typedef-reverse_iterator) | [**rbegin**](#function-rbegin-12) () <br> |
|  [**const\_reverse\_iterator**](classstd_1_1____tree.md#typedef-const_reverse_iterator) | [**rbegin**](#function-rbegin-22) () const<br> |
|  [**reverse\_iterator**](classstd_1_1____tree.md#typedef-reverse_iterator) | [**rend**](#function-rend-12) () <br> |
|  [**const\_reverse\_iterator**](classstd_1_1____tree.md#typedef-const_reverse_iterator) | [**rend**](#function-rend-22) () const<br> |
|  [**size\_type**](classstd_1_1____tree.md#typedef-size_type) | [**size**](#function-size) () const<br> |
|  [**void**](classstd_1_1allocator.md) | [**swap**](#function-swap) ([**\_\_tree**](classstd_1_1____tree.md) & x) <br> |
|  [**iterator**](classstd_1_1____tree_1_1iterator.md) | [**upper\_bound**](#function-upper_bound-12) ([**const**](classstd_1_1allocator.md) [**value\_type**](classstd_1_1____tree.md#typedef-value_type) & x) <br> |
|  [**const\_iterator**](classstd_1_1____tree_1_1const__iterator.md) | [**upper\_bound**](#function-upper_bound-22) ([**const**](classstd_1_1allocator.md) [**value\_type**](classstd_1_1____tree.md#typedef-value_type) & x) const<br> |
|  [**value\_compare**](classstd_1_1____tree.md#typedef-value_compare) | [**value\_comp**](#function-value_comp) () const<br> |
|   | [**~\_\_tree**](#function-__tree) () <br> |










## Protected Types inherited from std::__red_black_tree

See [std::\_\_red\_black\_tree](classstd_1_1____red__black__tree.md)

| Type | Name |
| ---: | :--- |
| enum  | [**Color**](classstd_1_1____red__black__tree.md#enum-color)  <br> |












































## Protected Static Functions inherited from std::__red_black_tree

See [std::\_\_red\_black\_tree](classstd_1_1____red__black__tree.md)

| Type | Name |
| ---: | :--- |
|  [**void**](classstd_1_1allocator.md) | [**balance\_erase**](classstd_1_1____red__black__tree.md#function-balance_erase) ([**node\_base**](structstd_1_1____red__black__tree_1_1node__base.md) \* z, [**node\_base**](structstd_1_1____red__black__tree_1_1node__base.md) \* root) <br> |
|  [**void**](classstd_1_1allocator.md) | [**balance\_insert**](classstd_1_1____red__black__tree.md#function-balance_insert) ([**node\_base**](structstd_1_1____red__black__tree_1_1node__base.md) \* x, [**node\_base**](structstd_1_1____red__black__tree_1_1node__base.md) \* root) <br> |
|  [**void**](classstd_1_1allocator.md) | [**decrement**](classstd_1_1____red__black__tree.md#function-decrement) ([**const**](classstd_1_1allocator.md) [**node\_base**](structstd_1_1____red__black__tree_1_1node__base.md) \*& x) <br> |
|  [**void**](classstd_1_1allocator.md) | [**increment**](classstd_1_1____red__black__tree.md#function-increment) ([**const**](classstd_1_1allocator.md) [**node\_base**](structstd_1_1____red__black__tree_1_1node__base.md) \*& x) <br> |
|  [**node\_base**](structstd_1_1____red__black__tree_1_1node__base.md) \* | [**leftmost**](classstd_1_1____red__black__tree.md#function-leftmost) ([**node\_base**](structstd_1_1____red__black__tree_1_1node__base.md) \* x) <br> |
|  [**node\_base**](structstd_1_1____red__black__tree_1_1node__base.md) \* | [**rightmost**](classstd_1_1____red__black__tree.md#function-rightmost) ([**node\_base**](structstd_1_1____red__black__tree_1_1node__base.md) \* x) <br> |


## Public Types Documentation




### typedef allocator\_type 

```C++
typedef Allocator std::__tree< T, Compare, Allocator >::allocator_type;
```




<hr>



### typedef const\_pointer 

```C++
typedef Allocator::const_pointer std::__tree< T, Compare, Allocator >::const_pointer;
```




<hr>



### typedef const\_reference 

```C++
typedef Allocator::const_reference std::__tree< T, Compare, Allocator >::const_reference;
```




<hr>



### typedef const\_reverse\_iterator 

```C++
typedef _STD::reverse_iterator<const_iterator> std::__tree< T, Compare, Allocator >::const_reverse_iterator;
```




<hr>



### typedef difference\_type 

```C++
typedef Allocator::difference_type std::__tree< T, Compare, Allocator >::difference_type;
```




<hr>



### typedef pointer 

```C++
typedef Allocator::pointer std::__tree< T, Compare, Allocator >::pointer;
```




<hr>



### typedef reference 

```C++
typedef Allocator::reference std::__tree< T, Compare, Allocator >::reference;
```




<hr>



### typedef reverse\_iterator 

```C++
typedef _STD::reverse_iterator<iterator> std::__tree< T, Compare, Allocator >::reverse_iterator;
```




<hr>



### typedef size\_type 

```C++
typedef Allocator::size_type std::__tree< T, Compare, Allocator >::size_type;
```




<hr>



### typedef value\_compare 

```C++
typedef Compare std::__tree< T, Compare, Allocator >::value_compare;
```




<hr>



### typedef value\_type 

```C++
typedef T std::__tree< T, Compare, Allocator >::value_type;
```




<hr>
## Public Functions Documentation




### function \_\_tree [1/3]

```C++
explicit std::__tree::__tree (
    const  Compare & comp,
    const  Allocator & a
) 
```




<hr>



### function \_\_tree [2/3]

```C++
template<class  InputIterator>
std::__tree::__tree (
    InputIterator first,
    InputIterator last,
    bool multi,
    const  Compare & comp,
    const  Allocator & a
) 
```




<hr>



### function \_\_tree [3/3]

```C++
std::__tree::__tree (
    const  __tree & x
) 
```




<hr>



### function begin [1/2]

```C++
inline iterator std::__tree::begin () 
```




<hr>



### function begin [2/2]

```C++
inline const_iterator std::__tree::begin () const
```




<hr>



### function clear 

```C++
void std::__tree::clear () 
```




<hr>



### function count\_multi 

```C++
inline size_type std::__tree::count_multi (
    const  value_type & x
) const
```




<hr>



### function count\_one 

```C++
inline size_type std::__tree::count_one (
    const  value_type & x
) const
```




<hr>



### function empty 

```C++
inline bool std::__tree::empty () const
```




<hr>



### function end [1/2]

```C++
inline iterator std::__tree::end () 
```




<hr>



### function end [2/2]

```C++
inline const_iterator std::__tree::end () const
```




<hr>



### function equal\_range [1/2]

```C++
inline pair < iterator , iterator > std::__tree::equal_range (
    const  value_type & x
) 
```




<hr>



### function equal\_range [2/2]

```C++
inline pair < const_iterator , const_iterator > std::__tree::equal_range (
    const  value_type & x
) const
```




<hr>



### function erase [1/2]

```C++
void std::__tree::erase (
    iterator position
) 
```




<hr>



### function erase [2/2]

```C++
inline void std::__tree::erase (
    iterator first,
    iterator last
) 
```




<hr>



### function erase\_multi 

```C++
size_type std::__tree::erase_multi (
    const  value_type & x
) 
```




<hr>



### function erase\_one 

```C++
size_type std::__tree::erase_one (
    const  value_type & x
) 
```




<hr>



### function find [1/2]

```C++
iterator std::__tree::find (
    const  value_type & x
) 
```




<hr>



### function find [2/2]

```C++
const_iterator std::__tree::find (
    const  value_type & x
) const
```




<hr>



### function get\_allocator 

```C++
inline allocator_type std::__tree::get_allocator () const
```




<hr>



### function insert\_multi [1/3]

```C++
iterator std::__tree::insert_multi (
    const  value_type & x
) 
```




<hr>



### function insert\_multi [2/3]

```C++
iterator std::__tree::insert_multi (
    iterator position,
    const  value_type & x
) 
```




<hr>



### function insert\_multi [3/3]

```C++
template<class  InputIterator>
void std::__tree::insert_multi (
    InputIterator first,
    InputIterator last
) 
```




<hr>



### function insert\_one [1/3]

```C++
pair < iterator , bool > std::__tree::insert_one (
    const  value_type & x
) 
```




<hr>



### function insert\_one [2/3]

```C++
iterator std::__tree::insert_one (
    iterator position,
    const  value_type & x
) 
```




<hr>



### function insert\_one [3/3]

```C++
template<class  InputIterator>
void std::__tree::insert_one (
    InputIterator first,
    InputIterator last
) 
```




<hr>



### function lower\_bound [1/2]

```C++
iterator std::__tree::lower_bound (
    const  value_type & x
) 
```




<hr>



### function lower\_bound [2/2]

```C++
const_iterator std::__tree::lower_bound (
    const  value_type & x
) const
```




<hr>



### function max\_size 

```C++
inline size_type std::__tree::max_size () const
```




<hr>



### function operator= 

```C++
__tree & std::__tree::operator= (
    const  __tree & x
) 
```




<hr>



### function rbegin [1/2]

```C++
inline reverse_iterator std::__tree::rbegin () 
```




<hr>



### function rbegin [2/2]

```C++
inline const_reverse_iterator std::__tree::rbegin () const
```




<hr>



### function rend [1/2]

```C++
inline reverse_iterator std::__tree::rend () 
```




<hr>



### function rend [2/2]

```C++
inline const_reverse_iterator std::__tree::rend () const
```




<hr>



### function size 

```C++
inline size_type std::__tree::size () const
```




<hr>



### function swap 

```C++
void std::__tree::swap (
    __tree & x
) 
```




<hr>



### function upper\_bound [1/2]

```C++
iterator std::__tree::upper_bound (
    const  value_type & x
) 
```




<hr>



### function upper\_bound [2/2]

```C++
const_iterator std::__tree::upper_bound (
    const  value_type & x
) const
```




<hr>



### function value\_comp 

```C++
inline value_compare std::__tree::value_comp () const
```




<hr>



### function ~\_\_tree 

```C++
inline std::__tree::~__tree () 
```




<hr>## Friends Documentation





### friend const\_iterator 

```C++
class std::__tree::const_iterator (
    const_iterator
) 
```




<hr>



### friend iterator 

```C++
class std::__tree::iterator (
    iterator
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C++/MSL_Common/Include/tree.h`

