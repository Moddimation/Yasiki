

# Class hash\_multiset

**template &lt;class Key, class HashFunction, class KeyEqual&gt;**



[**ClassList**](annotated.md) **>** [**hash\_multiset**](classhash__multiset.md)



[_**hashmset.h**_](hashmset_8h.md) __[More...](#detailed-description)

* `#include <hashmset.h>`

















## Public Types

| Type | Name |
| ---: | :--- |
| typedef rep\_type::const\_iterator | [**const\_iterator**](#typedef-const_iterator)  <br> |
| typedef [**rep\_type::const\_pointer**](classhash__table.md#typedef-const_pointer) | [**const\_pointer**](#typedef-const_pointer)  <br> |
| typedef [**rep\_type::const\_reference**](classhash__table.md#typedef-const_reference) | [**const\_reference**](#typedef-const_reference)  <br> |
| typedef [**rep\_type::difference\_type**](classhash__table.md#typedef-difference_type) | [**difference\_type**](#typedef-difference_type)  <br> |
| typedef HashFunction | [**hash\_function**](#typedef-hash_function)  <br> |
| typedef rep\_type::iterator | [**iterator**](#typedef-iterator)  <br> |
| typedef KeyEqual | [**key\_equal**](#typedef-key_equal)  <br> |
| typedef Key | [**key\_type**](#typedef-key_type)  <br> |
| typedef pair&lt; [**const\_iterator**](classhash__multiset.md#typedef-const_iterator), [**const\_iterator**](classhash__multiset.md#typedef-const_iterator) &gt; | [**pair\_citerator\_citerator**](#typedef-pair_citerator_citerator)  <br> |
| typedef pair&lt; [**iterator**](classhash__multiset.md#typedef-iterator), [**iterator**](classhash__multiset.md#typedef-iterator) &gt; | [**pair\_iterator\_iterator**](#typedef-pair_iterator_iterator)  <br> |
| typedef [**rep\_type::pointer**](classhash__table.md#typedef-pointer) | [**pointer**](#typedef-pointer)  <br> |
| typedef [**rep\_type::reference**](classhash__table.md#typedef-reference) | [**reference**](#typedef-reference)  <br> |
| typedef [**hash\_table**](classhash__table.md)&lt; [**key\_type**](classhash__multiset.md#typedef-key_type), [**value\_type**](classhash__multiset.md#typedef-value_type), identity&lt; [**value\_type**](classhash__multiset.md#typedef-value_type) &gt;, [**hash\_function**](classhash__multiset.md#typedef-hash_function), [**key\_equal**](classhash__multiset.md#typedef-key_equal), allocator&lt; [**value\_type**](classhash__multiset.md#typedef-value_type) &gt; &gt; | [**rep\_type**](#typedef-rep_type)  <br> |
| typedef [**rep\_type::size\_type**](classhash__table.md#typedef-size_type) | [**size\_type**](#typedef-size_type)  <br> |
| typedef KeyEqual | [**value\_compare**](#typedef-value_compare)  <br> |
| typedef Key | [**value\_type**](#typedef-value_type)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**iterator**](classhash__multiset.md#typedef-iterator) | [**begin**](#function-begin-12) () <br> |
|  [**const\_iterator**](classhash__multiset.md#typedef-const_iterator) | [**begin**](#function-begin-22) () const<br> |
|  void | [**clear**](#function-clear) () <br> |
|  [**size\_type**](classhash__multiset.md#typedef-size_type) | [**count**](#function-count) (const [**key\_type**](classhash__multiset.md#typedef-key_type) & x) const<br> |
|  [**bool**](stdbool_8h.md#define-bool) | [**empty**](#function-empty) () const<br> |
|  [**iterator**](classhash__multiset.md#typedef-iterator) | [**end**](#function-end-12) () <br> |
|  [**const\_iterator**](classhash__multiset.md#typedef-const_iterator) | [**end**](#function-end-22) () const<br> |
|  [**pair\_iterator\_iterator**](classhash__multiset.md#typedef-pair_iterator_iterator) | [**equal\_range**](#function-equal_range-12) (const [**key\_type**](classhash__multiset.md#typedef-key_type) & x) <br> |
|  [**pair\_citerator\_citerator**](classhash__multiset.md#typedef-pair_citerator_citerator) | [**equal\_range**](#function-equal_range-22) (const [**key\_type**](classhash__multiset.md#typedef-key_type) & x) const<br> |
|  void | [**erase**](#function-erase-13) ([**iterator**](classhash__multiset.md#typedef-iterator) position) <br> |
|  [**size\_type**](classhash__multiset.md#typedef-size_type) | [**erase**](#function-erase-23) (const [**key\_type**](classhash__multiset.md#typedef-key_type) & x) <br> |
|  void | [**erase**](#function-erase-33) ([**iterator**](classhash__multiset.md#typedef-iterator) first, [**iterator**](classhash__multiset.md#typedef-iterator) last) <br> |
|  [**iterator**](classhash__multiset.md#typedef-iterator) | [**find**](#function-find-12) (const [**key\_type**](classhash__multiset.md#typedef-key_type) & x) <br> |
|  [**const\_iterator**](classhash__multiset.md#typedef-const_iterator) | [**find**](#function-find-22) (const [**key\_type**](classhash__multiset.md#typedef-key_type) & x) const<br> |
|  [**hash\_function**](classhash__multiset.md#typedef-hash_function) | [**hash\_funct**](#function-hash_funct) () const<br> |
|   | [**hash\_multiset**](#function-hash_multiset-13) ([**size\_type**](classhash__multiset.md#typedef-size_type) initSize=10007, const HashFunction & hf=HashFunction(), const KeyEqual & equal=KeyEqual()) <br> |
|   | [**hash\_multiset**](#function-hash_multiset-23) (const [**value\_type**](classhash__multiset.md#typedef-value_type) \* first, const [**value\_type**](classhash__multiset.md#typedef-value_type) \* last, [**size\_type**](classhash__multiset.md#typedef-size_type) initSize=10007, const HashFunction & hf=HashFunction(), const KeyEqual & equal=KeyEqual()) <br> |
|   | [**hash\_multiset**](#function-hash_multiset-33) (const [**hash\_multiset**](classhash__multiset.md)&lt; Key, HashFunction, KeyEqual &gt; & x) <br> |
|  [**iterator**](classhash__multiset.md#typedef-iterator) | [**insert**](#function-insert-13) (const [**value\_type**](classhash__multiset.md#typedef-value_type) & x) <br> |
|  void | [**insert**](#function-insert-23) ([**iterator**](classhash__multiset.md#typedef-iterator) first, [**iterator**](classhash__multiset.md#typedef-iterator) last) <br> |
|  void | [**insert**](#function-insert-33) (const [**value\_type**](classhash__multiset.md#typedef-value_type) \* first, const [**value\_type**](classhash__multiset.md#typedef-value_type) \* last) <br> |
|  [**key\_equal**](classhash__multiset.md#typedef-key_equal) | [**key\_comp**](#function-key_comp) () const<br> |
|  [**iterator**](classhash__multiset.md#typedef-iterator) | [**lower\_bound**](#function-lower_bound-12) (const [**key\_type**](classhash__multiset.md#typedef-key_type) & x) <br> |
|  [**const\_iterator**](classhash__multiset.md#typedef-const_iterator) | [**lower\_bound**](#function-lower_bound-22) (const [**key\_type**](classhash__multiset.md#typedef-key_type) & x) const<br> |
|  [**size\_type**](classhash__multiset.md#typedef-size_type) | [**max\_size**](#function-max_size) () const<br> |
|  [**hash\_multiset**](classhash__multiset.md)&lt; Key, HashFunction, KeyEqual &gt; & | [**operator=**](#function-operator) (const [**hash\_multiset**](classhash__multiset.md)&lt; Key, HashFunction, KeyEqual &gt; & x) <br> |
|  [**size\_type**](classhash__multiset.md#typedef-size_type) | [**size**](#function-size) () const<br> |
|  void | [**swap**](#function-swap) ([**hash\_multiset**](classhash__multiset.md)&lt; Key, HashFunction, KeyEqual &gt; & x) <br> |
|  [**iterator**](classhash__multiset.md#typedef-iterator) | [**upper\_bound**](#function-upper_bound-12) (const [**key\_type**](classhash__multiset.md#typedef-key_type) & x) <br> |
|  [**const\_iterator**](classhash__multiset.md#typedef-const_iterator) | [**upper\_bound**](#function-upper_bound-22) (const [**key\_type**](classhash__multiset.md#typedef-key_type) & x) const<br> |
|  [**value\_compare**](classhash__multiset.md#typedef-value_compare) | [**value\_comp**](#function-value_comp) () const<br> |




























## Detailed Description


Lib++ : The Modena C++ Standard Library, Version 2.4, October 1997


Copyright (c) 1995-1997 Modena Software Inc. 


    
## Public Types Documentation




### typedef const\_iterator 

```C++
typedef rep_type::const_iterator hash_multiset< Key, HashFunction, KeyEqual >::const_iterator;
```




<hr>



### typedef const\_pointer 

```C++
typedef rep_type::const_pointer hash_multiset< Key, HashFunction, KeyEqual >::const_pointer;
```




<hr>



### typedef const\_reference 

```C++
typedef rep_type::const_reference hash_multiset< Key, HashFunction, KeyEqual >::const_reference;
```




<hr>



### typedef difference\_type 

```C++
typedef rep_type::difference_type hash_multiset< Key, HashFunction, KeyEqual >::difference_type;
```




<hr>



### typedef hash\_function 

```C++
typedef HashFunction hash_multiset< Key, HashFunction, KeyEqual >::hash_function;
```




<hr>



### typedef iterator 

```C++
typedef rep_type::iterator hash_multiset< Key, HashFunction, KeyEqual >::iterator;
```




<hr>



### typedef key\_equal 

```C++
typedef KeyEqual hash_multiset< Key, HashFunction, KeyEqual >::key_equal;
```




<hr>



### typedef key\_type 

```C++
typedef Key hash_multiset< Key, HashFunction, KeyEqual >::key_type;
```




<hr>



### typedef pair\_citerator\_citerator 

```C++
typedef pair<const_iterator, const_iterator> hash_multiset< Key, HashFunction, KeyEqual >::pair_citerator_citerator;
```




<hr>



### typedef pair\_iterator\_iterator 

```C++
typedef pair<iterator, iterator> hash_multiset< Key, HashFunction, KeyEqual >::pair_iterator_iterator;
```




<hr>



### typedef pointer 

```C++
typedef rep_type::pointer hash_multiset< Key, HashFunction, KeyEqual >::pointer;
```




<hr>



### typedef reference 

```C++
typedef rep_type::reference hash_multiset< Key, HashFunction, KeyEqual >::reference;
```




<hr>



### typedef rep\_type 

```C++
typedef hash_table<key_type, value_type, identity<value_type>, hash_function, key_equal, allocator<value_type> > hash_multiset< Key, HashFunction, KeyEqual >::rep_type;
```




<hr>



### typedef size\_type 

```C++
typedef rep_type::size_type hash_multiset< Key, HashFunction, KeyEqual >::size_type;
```




<hr>



### typedef value\_compare 

```C++
typedef KeyEqual hash_multiset< Key, HashFunction, KeyEqual >::value_compare;
```




<hr>



### typedef value\_type 

```C++
typedef Key hash_multiset< Key, HashFunction, KeyEqual >::value_type;
```




<hr>
## Public Functions Documentation




### function begin [1/2]

```C++
inline iterator hash_multiset::begin () 
```




<hr>



### function begin [2/2]

```C++
inline const_iterator hash_multiset::begin () const
```




<hr>



### function clear 

```C++
inline void hash_multiset::clear () 
```




<hr>



### function count 

```C++
inline size_type hash_multiset::count (
    const key_type & x
) const
```




<hr>



### function empty 

```C++
inline bool hash_multiset::empty () const
```




<hr>



### function end [1/2]

```C++
inline iterator hash_multiset::end () 
```




<hr>



### function end [2/2]

```C++
inline const_iterator hash_multiset::end () const
```




<hr>



### function equal\_range [1/2]

```C++
inline pair_iterator_iterator hash_multiset::equal_range (
    const key_type & x
) 
```




<hr>



### function equal\_range [2/2]

```C++
inline pair_citerator_citerator hash_multiset::equal_range (
    const key_type & x
) const
```




<hr>



### function erase [1/3]

```C++
inline void hash_multiset::erase (
    iterator position
) 
```




<hr>



### function erase [2/3]

```C++
inline size_type hash_multiset::erase (
    const key_type & x
) 
```




<hr>



### function erase [3/3]

```C++
inline void hash_multiset::erase (
    iterator first,
    iterator last
) 
```




<hr>



### function find [1/2]

```C++
inline iterator hash_multiset::find (
    const key_type & x
) 
```




<hr>



### function find [2/2]

```C++
inline const_iterator hash_multiset::find (
    const key_type & x
) const
```




<hr>



### function hash\_funct 

```C++
inline hash_function hash_multiset::hash_funct () const
```




<hr>



### function hash\_multiset [1/3]

```C++
inline hash_multiset::hash_multiset (
    size_type initSize=10007,
    const HashFunction & hf=HashFunction(),
    const KeyEqual & equal=KeyEqual()
) 
```




<hr>



### function hash\_multiset [2/3]

```C++
inline hash_multiset::hash_multiset (
    const value_type * first,
    const value_type * last,
    size_type initSize=10007,
    const HashFunction & hf=HashFunction(),
    const KeyEqual & equal=KeyEqual()
) 
```




<hr>



### function hash\_multiset [3/3]

```C++
inline hash_multiset::hash_multiset (
    const hash_multiset < Key, HashFunction, KeyEqual > & x
) 
```




<hr>



### function insert [1/3]

```C++
inline iterator hash_multiset::insert (
    const value_type & x
) 
```




<hr>



### function insert [2/3]

```C++
inline void hash_multiset::insert (
    iterator first,
    iterator last
) 
```




<hr>



### function insert [3/3]

```C++
inline void hash_multiset::insert (
    const value_type * first,
    const value_type * last
) 
```




<hr>



### function key\_comp 

```C++
inline key_equal hash_multiset::key_comp () const
```




<hr>



### function lower\_bound [1/2]

```C++
inline iterator hash_multiset::lower_bound (
    const key_type & x
) 
```




<hr>



### function lower\_bound [2/2]

```C++
inline const_iterator hash_multiset::lower_bound (
    const key_type & x
) const
```




<hr>



### function max\_size 

```C++
inline size_type hash_multiset::max_size () const
```




<hr>



### function operator= 

```C++
inline hash_multiset < Key, HashFunction, KeyEqual > & hash_multiset::operator= (
    const hash_multiset < Key, HashFunction, KeyEqual > & x
) 
```




<hr>



### function size 

```C++
inline size_type hash_multiset::size () const
```




<hr>



### function swap 

```C++
inline void hash_multiset::swap (
    hash_multiset < Key, HashFunction, KeyEqual > & x
) 
```




<hr>



### function upper\_bound [1/2]

```C++
inline iterator hash_multiset::upper_bound (
    const key_type & x
) 
```




<hr>



### function upper\_bound [2/2]

```C++
inline const_iterator hash_multiset::upper_bound (
    const key_type & x
) const
```




<hr>



### function value\_comp 

```C++
inline value_compare hash_multiset::value_comp () const
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C++/MSL_Common/Include/hashmset.h`

