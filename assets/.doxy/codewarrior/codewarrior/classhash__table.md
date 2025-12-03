

# Class hash\_table



[**ClassList**](annotated.md) **>** [**hash\_table**](classhash__table.md)





* `#include <hashtbl.h>`















## Classes

| Type | Name |
| ---: | :--- |
| class | [**const\_iterator**](classhash__table_1_1const__iterator.md) <br> |
| struct | [**hash\_node**](structhash__table_1_1hash__node.md) <br> |
| class | [**iterator**](classhash__table_1_1iterator.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef const [**value\_type**](classhash__table.md#typedef-value_type) \* | [**const\_pointer**](#typedef-const_pointer)  <br> |
| typedef const [**value\_type**](classhash__table.md#typedef-value_type) & | [**const\_reference**](#typedef-const_reference)  <br> |
| typedef ptrdiff\_t | [**difference\_type**](#typedef-difference_type)  <br> |
| typedef HashFunction | [**hash\_function**](#typedef-hash_function)  <br> |
| typedef Key | [**key\_type**](#typedef-key_type)  <br> |
| typedef hash\_node\_allocator\_type::pointer | [**link\_type**](#typedef-link_type)  <br> |
| typedef pair&lt; [**const\_iterator**](classhash__table_1_1const__iterator.md), [**const\_iterator**](classhash__table_1_1const__iterator.md) &gt; | [**pair\_citerator\_citerator**](#typedef-pair_citerator_citerator)  <br> |
| typedef pair&lt; [**iterator**](classhash__table_1_1iterator.md), [**bool**](stdbool_8h.md#define-bool) &gt; | [**pair\_iterator\_bool**](#typedef-pair_iterator_bool)  <br> |
| typedef pair&lt; [**iterator**](classhash__table_1_1iterator.md), [**iterator**](classhash__table_1_1iterator.md) &gt; | [**pair\_iterator\_iterator**](#typedef-pair_iterator_iterator)  <br> |
| typedef [**value\_type**](classhash__table.md#typedef-value_type) \* | [**pointer**](#typedef-pointer)  <br> |
| typedef [**value\_type**](classhash__table.md#typedef-value_type) & | [**reference**](#typedef-reference)  <br> |
| typedef [**size\_t**](size__t_8h.md#typedef-size_t) | [**size\_type**](#typedef-size_type)  <br> |
| typedef Value | [**value\_type**](#typedef-value_type)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  typedef | [**ALLOC\_BIND**](#function-alloc_bind-13) ([**hash\_node**](structhash__table_1_1hash__node.md)) <br> |
|  typedef | [**ALLOC\_BIND**](#function-alloc_bind-23) ([**value\_type**](classhash__table.md#typedef-value_type)) <br> |
|  typedef | [**ALLOC\_BIND**](#function-alloc_bind-33) ([**link\_type**](classhash__table.md#typedef-link_type)) <br> |
|  [**iterator**](classhash__table_1_1iterator.md) | [**begin**](#function-begin-12) () <br> |
|  [**const\_iterator**](classhash__table_1_1const__iterator.md) | [**begin**](#function-begin-22) () const<br> |
|  [**size\_type**](classhash__table.md#typedef-size_type) | [**bucket\_count**](#function-bucket_count) () const<br> |
|  [**size\_type**](classhash__table.md#typedef-size_type) | [**count**](#function-count) (const [**key\_type**](classhash__table.md#typedef-key_type) & key) const<br> |
|  [**size\_type**](classhash__table.md#typedef-size_type) | [**elems\_in\_bucket**](#function-elems_in_bucket) ([**size\_type**](classhash__table.md#typedef-size_type) bucket) const<br> |
|  [**bool**](stdbool_8h.md#define-bool) | [**empty**](#function-empty) () const<br> |
|  [**iterator**](classhash__table_1_1iterator.md) | [**end**](#function-end-12) () <br> |
|  [**const\_iterator**](classhash__table_1_1const__iterator.md) | [**end**](#function-end-22) () const<br> |
|  [**pair\_iterator\_iterator**](classhash__table.md#typedef-pair_iterator_iterator) | [**equal\_range**](#function-equal_range-12) (const [**key\_type**](classhash__table.md#typedef-key_type) & key) <br> |
|  [**pair\_citerator\_citerator**](classhash__table.md#typedef-pair_citerator_citerator) | [**equal\_range**](#function-equal_range-22) (const [**key\_type**](classhash__table.md#typedef-key_type) & key) const<br> |
|  [**size\_type**](classhash__table.md#typedef-size_type) | [**erase**](#function-erase-15) (const [**key\_type**](classhash__table.md#typedef-key_type) & key) <br> |
|  void | [**erase**](#function-erase-25) (const [**iterator**](classhash__table_1_1iterator.md) & it) <br> |
|  void | [**erase**](#function-erase-35) ([**iterator**](classhash__table_1_1iterator.md) first, [**iterator**](classhash__table_1_1iterator.md) last) <br> |
|  void | [**erase**](#function-erase-45) (const [**const\_iterator**](classhash__table_1_1const__iterator.md) & it) <br> |
|  void | [**erase**](#function-erase-55) ([**const\_iterator**](classhash__table_1_1const__iterator.md) first, [**const\_iterator**](classhash__table_1_1const__iterator.md) last) <br> |
|  [**iterator**](classhash__table_1_1iterator.md) | [**find**](#function-find-12) (const [**key\_type**](classhash__table.md#typedef-key_type) & key) <br> |
|  [**const\_iterator**](classhash__table_1_1const__iterator.md) | [**find**](#function-find-22) (const [**key\_type**](classhash__table.md#typedef-key_type) & key) const<br> |
|  [**reference**](classhash__table.md#typedef-reference) | [**find\_or\_insert**](#function-find_or_insert) (const [**value\_type**](classhash__table.md#typedef-value_type) & obj) <br> |
|  [**hash\_function**](classhash__table.md#typedef-hash_function) | [**hash\_funct**](#function-hash_funct) () const<br> |
|   | [**hash\_table**](#function-hash_table-13) ([**size\_type**](classhash__table.md#typedef-size_type) initSize, const HashFunction & hf=HashFunction(), const KeyEqual & equal=KeyEqual(), const KeyOfValue & ext=KeyOfValue()) <br> |
|   | [**hash\_table**](#function-hash_table-23) (const [**value\_type**](classhash__table.md#typedef-value_type) \* first, const [**value\_type**](classhash__table.md#typedef-value_type) \* last, [**size\_type**](classhash__table.md#typedef-size_type) initSize, const HashFunction & hf=HashFunction(), const KeyEqual & equal=KeyEqual(), const KeyOfValue & ext=KeyOfValue()) <br> |
|   | [**hash\_table**](#function-hash_table-33) (const [**HT\_TYPE**](hashtbl_8h.md#define-ht_type) & ht) <br> |
|  [**iterator**](classhash__table_1_1iterator.md) | [**insert\_equal**](#function-insert_equal-14) (const [**value\_type**](classhash__table.md#typedef-value_type) & obj) <br> |
|  void | [**insert\_equal**](#function-insert_equal-24) (const [**value\_type**](classhash__table.md#typedef-value_type) \* f, const [**value\_type**](classhash__table.md#typedef-value_type) \* l) <br> |
|  void | [**insert\_equal**](#function-insert_equal-34) ([**const\_iterator**](classhash__table_1_1const__iterator.md) f, [**const\_iterator**](classhash__table_1_1const__iterator.md) l) <br> |
|  void | [**insert\_equal**](#function-insert_equal-44) ([**iterator**](classhash__table_1_1iterator.md) f, [**iterator**](classhash__table_1_1iterator.md) l) <br> |
|  [**iterator**](classhash__table_1_1iterator.md) | [**insert\_equal\_noresize**](#function-insert_equal_noresize) (const [**value\_type**](classhash__table.md#typedef-value_type) & obj) <br> |
|  [**pair\_iterator\_bool**](classhash__table.md#typedef-pair_iterator_bool) | [**insert\_unique**](#function-insert_unique-14) (const [**value\_type**](classhash__table.md#typedef-value_type) & obj) <br> |
|  void | [**insert\_unique**](#function-insert_unique-24) (const [**value\_type**](classhash__table.md#typedef-value_type) \* f, const [**value\_type**](classhash__table.md#typedef-value_type) \* l) <br> |
|  void | [**insert\_unique**](#function-insert_unique-34) ([**const\_iterator**](classhash__table_1_1const__iterator.md) f, [**const\_iterator**](classhash__table_1_1const__iterator.md) l) <br> |
|  void | [**insert\_unique**](#function-insert_unique-44) ([**iterator**](classhash__table_1_1iterator.md) f, [**iterator**](classhash__table_1_1iterator.md) l) <br> |
|  pair&lt; [**iterator**](classhash__table_1_1iterator.md), [**bool**](stdbool_8h.md#define-bool) &gt; | [**insert\_unique\_noresize**](#function-insert_unique_noresize) (const [**value\_type**](classhash__table.md#typedef-value_type) & obj) <br> |
|  KeyEqual | [**key\_comp**](#function-key_comp) () const<br> |
|  [**iterator**](classhash__table_1_1iterator.md) | [**lower\_bound**](#function-lower_bound-12) (const [**key\_type**](classhash__table.md#typedef-key_type) & key) <br> |
|  [**const\_iterator**](classhash__table_1_1const__iterator.md) | [**lower\_bound**](#function-lower_bound-22) (const [**key\_type**](classhash__table.md#typedef-key_type) & key) const<br> |
|  [**size\_type**](classhash__table.md#typedef-size_type) | [**max\_bucket\_count**](#function-max_bucket_count) () const<br> |
|  [**size\_type**](classhash__table.md#typedef-size_type) | [**max\_size**](#function-max_size) () const<br> |
|  [**bool**](stdbool_8h.md#define-bool) | [**operator!=**](#function-operator) (const [**HT\_TYPE**](hashtbl_8h.md#define-ht_type) & ht) <br> |
|  [**HT\_TYPE**](hashtbl_8h.md#define-ht_type) & | [**operator=**](#function-operator_1) (const [**HT\_TYPE**](hashtbl_8h.md#define-ht_type) & ht) <br> |
|  [**bool**](stdbool_8h.md#define-bool) | [**operator==**](#function-operator_2) (const [**HT\_TYPE**](hashtbl_8h.md#define-ht_type) & ht) <br> |
|  void | [**resize**](#function-resize) ([**size\_type**](classhash__table.md#typedef-size_type) num\_elements\_hint) <br> |
|  [**size\_type**](classhash__table.md#typedef-size_type) | [**size**](#function-size) () const<br> |
|  void | [**swap**](#function-swap) ([**HT\_TYPE**](hashtbl_8h.md#define-ht_type) & ht) <br> |
|  [**iterator**](classhash__table_1_1iterator.md) | [**upper\_bound**](#function-upper_bound-12) (const [**key\_type**](classhash__table.md#typedef-key_type) & key) <br> |
|  [**const\_iterator**](classhash__table_1_1const__iterator.md) | [**upper\_bound**](#function-upper_bound-22) (const [**key\_type**](classhash__table.md#typedef-key_type) & key) const<br> |
|   | [**~hash\_table**](#function-hash_table) () <br> |








## Protected Attributes

| Type | Name |
| ---: | :--- |
|  vector&lt; [**link\_type**](classhash__table.md#typedef-link_type), allocator\_link\_type &gt; | [**buckets**](#variable-buckets)  <br> |
|  KeyEqual | [**equals**](#variable-equals)  <br> |
|  [**link\_type**](classhash__table.md#typedef-link_type) | [**free\_list**](#variable-free_list)  <br> |
|  KeyOfValue | [**get\_key**](#variable-get_key)  <br> |
|  HashFunction | [**hash**](#variable-hash)  <br> |
|  hash\_node\_allocator\_type | [**hash\_node\_allocator**](#variable-hash_node_allocator)  <br> |
|  [**size\_type**](classhash__table.md#typedef-size_type) | [**num\_elements**](#variable-num_elements)  <br> |
|  value\_allocator\_type | [**value\_allocator**](#variable-value_allocator)  <br> |




















## Public Types Documentation




### typedef const\_pointer 

```C++
typedef const value_type* hash_table::const_pointer;
```




<hr>



### typedef const\_reference 

```C++
typedef const value_type& hash_table::const_reference;
```




<hr>



### typedef difference\_type 

```C++
typedef ptrdiff_t hash_table::difference_type;
```




<hr>



### typedef hash\_function 

```C++
typedef HashFunction hash_table::hash_function;
```




<hr>



### typedef key\_type 

```C++
typedef Key hash_table::key_type;
```




<hr>



### typedef link\_type 

```C++
typedef hash_node_allocator_type::pointer hash_table::link_type;
```




<hr>



### typedef pair\_citerator\_citerator 

```C++
typedef pair<const_iterator, const_iterator> hash_table::pair_citerator_citerator;
```




<hr>



### typedef pair\_iterator\_bool 

```C++
typedef pair<iterator, bool> hash_table::pair_iterator_bool;
```




<hr>



### typedef pair\_iterator\_iterator 

```C++
typedef pair<iterator, iterator> hash_table::pair_iterator_iterator;
```




<hr>



### typedef pointer 

```C++
typedef value_type* hash_table::pointer;
```




<hr>



### typedef reference 

```C++
typedef value_type& hash_table::reference;
```




<hr>



### typedef size\_type 

```C++
typedef size_t hash_table::size_type;
```




<hr>



### typedef value\_type 

```C++
typedef Value hash_table::value_type;
```




<hr>
## Public Functions Documentation




### function ALLOC\_BIND [1/3]

```C++
typedef hash_table::ALLOC_BIND (
    hash_node
) 
```




<hr>



### function ALLOC\_BIND [2/3]

```C++
typedef hash_table::ALLOC_BIND (
    value_type
) 
```




<hr>



### function ALLOC\_BIND [3/3]

```C++
typedef hash_table::ALLOC_BIND (
    link_type
) 
```




<hr>



### function begin [1/2]

```C++
inline iterator hash_table::begin () 
```




<hr>



### function begin [2/2]

```C++
inline const_iterator hash_table::begin () const
```




<hr>



### function bucket\_count 

```C++
inline size_type hash_table::bucket_count () const
```




<hr>



### function count 

```C++
inline size_type hash_table::count (
    const key_type & key
) const
```




<hr>



### function elems\_in\_bucket 

```C++
inline size_type hash_table::elems_in_bucket (
    size_type bucket
) const
```




<hr>



### function empty 

```C++
inline bool hash_table::empty () const
```




<hr>



### function end [1/2]

```C++
inline iterator hash_table::end () 
```




<hr>



### function end [2/2]

```C++
inline const_iterator hash_table::end () const
```




<hr>



### function equal\_range [1/2]

```C++
inline pair_iterator_iterator hash_table::equal_range (
    const key_type & key
) 
```




<hr>



### function equal\_range [2/2]

```C++
inline pair_citerator_citerator hash_table::equal_range (
    const key_type & key
) const
```




<hr>



### function erase [1/5]

```C++
size_type hash_table::erase (
    const key_type & key
) 
```




<hr>



### function erase [2/5]

```C++
void hash_table::erase (
    const iterator & it
) 
```




<hr>



### function erase [3/5]

```C++
void hash_table::erase (
    iterator first,
    iterator last
) 
```




<hr>



### function erase [4/5]

```C++
void hash_table::erase (
    const const_iterator & it
) 
```




<hr>



### function erase [5/5]

```C++
void hash_table::erase (
    const_iterator first,
    const_iterator last
) 
```




<hr>



### function find [1/2]

```C++
inline iterator hash_table::find (
    const key_type & key
) 
```




<hr>



### function find [2/2]

```C++
inline const_iterator hash_table::find (
    const key_type & key
) const
```




<hr>



### function find\_or\_insert 

```C++
reference hash_table::find_or_insert (
    const value_type & obj
) 
```




<hr>



### function hash\_funct 

```C++
inline hash_function hash_table::hash_funct () const
```




<hr>



### function hash\_table [1/3]

```C++
inline hash_table::hash_table (
    size_type initSize,
    const HashFunction & hf=HashFunction(),
    const KeyEqual & equal=KeyEqual(),
    const KeyOfValue & ext=KeyOfValue()
) 
```




<hr>



### function hash\_table [2/3]

```C++
inline hash_table::hash_table (
    const value_type * first,
    const value_type * last,
    size_type initSize,
    const HashFunction & hf=HashFunction(),
    const KeyEqual & equal=KeyEqual(),
    const KeyOfValue & ext=KeyOfValue()
) 
```




<hr>



### function hash\_table [3/3]

```C++
inline hash_table::hash_table (
    const HT_TYPE & ht
) 
```




<hr>



### function insert\_equal [1/4]

```C++
inline iterator hash_table::insert_equal (
    const value_type & obj
) 
```




<hr>



### function insert\_equal [2/4]

```C++
inline void hash_table::insert_equal (
    const value_type * f,
    const value_type * l
) 
```




<hr>



### function insert\_equal [3/4]

```C++
inline void hash_table::insert_equal (
    const_iterator f,
    const_iterator l
) 
```




<hr>



### function insert\_equal [4/4]

```C++
inline void hash_table::insert_equal (
    iterator f,
    iterator l
) 
```




<hr>



### function insert\_equal\_noresize 

```C++
iterator hash_table::insert_equal_noresize (
    const value_type & obj
) 
```




<hr>



### function insert\_unique [1/4]

```C++
inline pair_iterator_bool hash_table::insert_unique (
    const value_type & obj
) 
```




<hr>



### function insert\_unique [2/4]

```C++
inline void hash_table::insert_unique (
    const value_type * f,
    const value_type * l
) 
```




<hr>



### function insert\_unique [3/4]

```C++
inline void hash_table::insert_unique (
    const_iterator f,
    const_iterator l
) 
```




<hr>



### function insert\_unique [4/4]

```C++
inline void hash_table::insert_unique (
    iterator f,
    iterator l
) 
```




<hr>



### function insert\_unique\_noresize 

```C++
pair< iterator , bool > hash_table::insert_unique_noresize (
    const value_type & obj
) 
```




<hr>



### function key\_comp 

```C++
inline KeyEqual hash_table::key_comp () const
```




<hr>



### function lower\_bound [1/2]

```C++
inline iterator hash_table::lower_bound (
    const key_type & key
) 
```




<hr>



### function lower\_bound [2/2]

```C++
inline const_iterator hash_table::lower_bound (
    const key_type & key
) const
```




<hr>



### function max\_bucket\_count 

```C++
inline size_type hash_table::max_bucket_count () const
```




<hr>



### function max\_size 

```C++
inline size_type hash_table::max_size () const
```




<hr>



### function operator!= 

```C++
inline bool hash_table::operator!= (
    const HT_TYPE & ht
) 
```




<hr>



### function operator= 

```C++
inline HT_TYPE & hash_table::operator= (
    const HT_TYPE & ht
) 
```




<hr>



### function operator== 

```C++
inline bool hash_table::operator== (
    const HT_TYPE & ht
) 
```




<hr>



### function resize 

```C++
void hash_table::resize (
    size_type num_elements_hint
) 
```




<hr>



### function size 

```C++
inline size_type hash_table::size () const
```




<hr>



### function swap 

```C++
inline void hash_table::swap (
    HT_TYPE & ht
) 
```




<hr>



### function upper\_bound [1/2]

```C++
inline iterator hash_table::upper_bound (
    const key_type & key
) 
```




<hr>



### function upper\_bound [2/2]

```C++
inline const_iterator hash_table::upper_bound (
    const key_type & key
) const
```




<hr>



### function ~hash\_table 

```C++
inline hash_table::~hash_table () 
```




<hr>
## Protected Attributes Documentation




### variable buckets 

```C++
vector<link_type, allocator_link_type> hash_table::buckets;
```




<hr>



### variable equals 

```C++
KeyEqual hash_table::equals;
```




<hr>



### variable free\_list 

```C++
link_type hash_table::free_list;
```




<hr>



### variable get\_key 

```C++
KeyOfValue hash_table::get_key;
```




<hr>



### variable hash 

```C++
HashFunction hash_table::hash;
```




<hr>



### variable hash\_node\_allocator 

```C++
hash_node_allocator_type hash_table::hash_node_allocator;
```




<hr>



### variable num\_elements 

```C++
size_type hash_table::num_elements;
```




<hr>



### variable value\_allocator 

```C++
value_allocator_type hash_table::value_allocator;
```




<hr>## Friends Documentation





### friend const\_iterator 

```C++
class hash_table::const_iterator (
    const_iterator
) 
```




<hr>



### friend iterator 

```C++
class hash_table::iterator (
    iterator
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C++/MSL_Common/Include/hashtbl.h`

