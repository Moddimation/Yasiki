

# Class hash\_table::iterator



[**ClassList**](annotated.md) **>** [**hash\_table**](classhash__table.md) **>** [**iterator**](classhash__table_1_1iterator.md)





* `#include <hashtbl.h>`



Inherits the following classes: MSIPLSTD::iterator< forward_iterator_tag, Value, difference_type, pointer, reference >


































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**iterator**](#function-iterator-12) ([**link\_type**](classhash__table.md#typedef-link_type) ptr, const [**HT\_TYPE**](hashtbl_8h.md#define-ht_type) \* ht) <br> |
|   | [**iterator**](#function-iterator-22) () <br> |
|  [**bool**](stdbool_8h.md#define-bool) | [**operator!=**](#function-operator) (const [**iterator**](classhash__table_1_1iterator.md) & rhs) const<br> |
|  [**bool**](stdbool_8h.md#define-bool) | [**operator!=**](#function-operator_1) (const [**const\_iterator**](classhash__table_1_1const__iterator.md) & rhs) const<br> |
|  [**reference**](classhash__table.md#typedef-reference) | [**operator\***](#function-operator_2) () <br> |
|  [**iterator**](classhash__table_1_1iterator.md) & | [**operator++**](#function-operator_3) () <br> |
|  [**iterator**](classhash__table_1_1iterator.md) | [**operator++**](#function-operator_4) (int) <br> |
|  [**pointer**](classhash__table.md#typedef-pointer) | [**operator-&gt;**](#function-operator-) () <br> |
|  [**bool**](stdbool_8h.md#define-bool) | [**operator==**](#function-operator_5) (const [**iterator**](classhash__table_1_1iterator.md) & rhs) const<br> |
|  [**bool**](stdbool_8h.md#define-bool) | [**operator==**](#function-operator_6) (const [**const\_iterator**](classhash__table_1_1const__iterator.md) & rhs) const<br> |
|   | [**~iterator**](#function-iterator) () <br> |








## Protected Attributes

| Type | Name |
| ---: | :--- |
|  [**link\_type**](classhash__table.md#typedef-link_type) | [**cur**](#variable-cur)  <br> |
|  [**HT\_TYPE**](hashtbl_8h.md#define-ht_type) \* | [**ht**](#variable-ht)  <br> |




















## Public Functions Documentation




### function iterator [1/2]

```C++
inline hash_table::iterator::iterator (
    link_type ptr,
    const HT_TYPE * ht
) 
```




<hr>



### function iterator [2/2]

```C++
inline hash_table::iterator::iterator () 
```




<hr>



### function operator!= 

```C++
inline bool hash_table::iterator::operator!= (
    const iterator & rhs
) const
```




<hr>



### function operator!= 

```C++
inline bool hash_table::iterator::operator!= (
    const const_iterator & rhs
) const
```




<hr>



### function operator\* 

```C++
inline reference hash_table::iterator::operator* () 
```




<hr>



### function operator++ 

```C++
inline iterator & hash_table::iterator::operator++ () 
```




<hr>



### function operator++ 

```C++
inline iterator hash_table::iterator::operator++ (
    int
) 
```




<hr>



### function operator-&gt; 

```C++
inline pointer hash_table::iterator::operator-> () 
```




<hr>



### function operator== 

```C++
inline bool hash_table::iterator::operator== (
    const iterator & rhs
) const
```




<hr>



### function operator== 

```C++
inline bool hash_table::iterator::operator== (
    const const_iterator & rhs
) const
```




<hr>



### function ~iterator 

```C++
inline hash_table::iterator::~iterator () 
```




<hr>
## Protected Attributes Documentation




### variable cur 

```C++
link_type hash_table::iterator::cur;
```




<hr>



### variable ht 

```C++
HT_TYPE* hash_table::iterator::ht;
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C++/MSL_Common/Include/hashtbl.h`

