

# Class hash\_table::const\_iterator



[**ClassList**](annotated.md) **>** [**hash\_table**](classhash__table.md) **>** [**const\_iterator**](classhash__table_1_1const__iterator.md)





* `#include <hashtbl.h>`



Inherits the following classes: MSIPLSTD::iterator< forward_iterator_tag, Value, difference_type, pointer, reference >


































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**const\_iterator**](#function-const_iterator-13) ([**link\_type**](classhash__table.md#typedef-link_type) ptr, const [**HT\_TYPE**](hashtbl_8h.md#define-ht_type) \* ht) <br> |
|   | [**const\_iterator**](#function-const_iterator-23) () <br> |
|   | [**const\_iterator**](#function-const_iterator-33) (const [**hash\_table**](classhash__table.md)&lt; Key, Value, KeyOfValue, HashFunction, KeyEqual, Allocator &gt;::iterator & x) <br> |
|  [**bool**](stdbool_8h.md#define-bool) | [**operator!=**](#function-operator) (const [**hash\_table**](classhash__table.md)&lt; Key, Value, KeyOfValue, HashFunction, KeyEqual, Allocator &gt;::iterator & rhs) const<br> |
|  [**bool**](stdbool_8h.md#define-bool) | [**operator!=**](#function-operator_1) (const [**const\_iterator**](classhash__table_1_1const__iterator.md) & rhs) const<br> |
|  [**const\_reference**](classhash__table.md#typedef-const_reference) | [**operator\***](#function-operator_2) () <br> |
|  [**const\_iterator**](classhash__table_1_1const__iterator.md) & | [**operator++**](#function-operator_3) () <br> |
|  [**const\_iterator**](classhash__table_1_1const__iterator.md) | [**operator++**](#function-operator_4) (int) <br> |
|  [**const\_pointer**](classhash__table.md#typedef-const_pointer) | [**operator-&gt;**](#function-operator-) () <br> |
|  [**bool**](stdbool_8h.md#define-bool) | [**operator==**](#function-operator_5) (const [**hash\_table**](classhash__table.md)&lt; Key, Value, KeyOfValue, HashFunction, KeyEqual, Allocator &gt;::iterator & rhs) const<br> |
|  [**bool**](stdbool_8h.md#define-bool) | [**operator==**](#function-operator_6) (const [**const\_iterator**](classhash__table_1_1const__iterator.md) & rhs) const<br> |
|   | [**~const\_iterator**](#function-const_iterator) () <br> |








## Protected Attributes

| Type | Name |
| ---: | :--- |
|  [**link\_type**](classhash__table.md#typedef-link_type) | [**cur**](#variable-cur)  <br> |
|  [**HT\_TYPE**](hashtbl_8h.md#define-ht_type) \* | [**ht**](#variable-ht)  <br> |




















## Public Functions Documentation




### function const\_iterator [1/3]

```C++
inline hash_table::const_iterator::const_iterator (
    link_type ptr,
    const HT_TYPE * ht
) 
```




<hr>



### function const\_iterator [2/3]

```C++
inline hash_table::const_iterator::const_iterator () 
```




<hr>



### function const\_iterator [3/3]

```C++
inline hash_table::const_iterator::const_iterator (
    const hash_table < Key, Value, KeyOfValue, HashFunction, KeyEqual, Allocator >::iterator & x
) 
```




<hr>



### function operator!= 

```C++
inline bool hash_table::const_iterator::operator!= (
    const hash_table < Key, Value, KeyOfValue, HashFunction, KeyEqual, Allocator >::iterator & rhs
) const
```




<hr>



### function operator!= 

```C++
inline bool hash_table::const_iterator::operator!= (
    const const_iterator & rhs
) const
```




<hr>



### function operator\* 

```C++
inline const_reference hash_table::const_iterator::operator* () 
```




<hr>



### function operator++ 

```C++
inline const_iterator & hash_table::const_iterator::operator++ () 
```




<hr>



### function operator++ 

```C++
inline const_iterator hash_table::const_iterator::operator++ (
    int
) 
```




<hr>



### function operator-&gt; 

```C++
inline const_pointer hash_table::const_iterator::operator-> () 
```




<hr>



### function operator== 

```C++
inline bool hash_table::const_iterator::operator== (
    const hash_table < Key, Value, KeyOfValue, HashFunction, KeyEqual, Allocator >::iterator & rhs
) const
```




<hr>



### function operator== 

```C++
inline bool hash_table::const_iterator::operator== (
    const const_iterator & rhs
) const
```




<hr>



### function ~const\_iterator 

```C++
inline hash_table::const_iterator::~const_iterator () 
```




<hr>
## Protected Attributes Documentation




### variable cur 

```C++
link_type hash_table::const_iterator::cur;
```




<hr>



### variable ht 

```C++
HT_TYPE* hash_table::const_iterator::ht;
```




<hr>## Friends Documentation





### friend iterator 

```C++
class hash_table::const_iterator::iterator (
    hash_table < Key, Value, KeyOfValue, HashFunction, KeyEqual, Allocator >::iterator
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C++/MSL_Common/Include/hashtbl.h`

