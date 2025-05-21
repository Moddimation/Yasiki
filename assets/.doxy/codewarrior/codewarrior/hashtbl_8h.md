

# File hashtbl.h



[**FileList**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**Msl**](dir_7345a9473b198df67a564f445bc0d615.md) **>** [**MSL\_C++**](dir_bbcc9336d50f30308554b0fe78acfee6.md) **>** [**MSL\_Common**](dir_0c0c2b83f86d5caed54e8218e0fa784d.md) **>** [**Include**](dir_4b09b958bee5575b6e3a9125618b7d0e.md) **>** [**hashtbl.h**](hashtbl_8h.md)

[Go to the source code of this file](hashtbl_8h_source.md)



* `#include <mcompile.h>`
* `#include <cstdlib>`
* `#include <iosfwd>`
* `#include <iterator>`
* `#include <functional_ext>`
* `#include <algorithm>`
* `#include <vector>`
* `#include <mexcept.h>`















## Classes

| Type | Name |
| ---: | :--- |
| class | [**hash\_table**](classhash__table.md) <br> |
| class | [**const\_iterator**](classhash__table_1_1const__iterator.md) <br> |
| struct | [**hash\_node**](structhash__table_1_1hash__node.md) <br> |
| class | [**iterator**](classhash__table_1_1iterator.md) <br> |

















































## Macros

| Type | Name |
| ---: | :--- |
| define  | [**HT\_TEMPLATE**](hashtbl_8h.md#define-ht_template)  `template &lt;class Key, class Value, class KeyOfValue, class HashFunction, class KeyEqual, class Allocator&gt;`<br>[_**hashtbl.h**_](hashtbl_8h.md) __ |
| define  | [**HT\_TYPE**](hashtbl_8h.md#define-ht_type)  `[**hash\_table**](classhash__table.md)&lt;Key, Value, KeyOfValue, HashFunction, KeyEqual, Allocator&gt;`<br> |
| define  | [**\_MN\_**](hashtbl_8h.md#define-_mn_) (size) `if (n &lt; [**size**](____ppc__eabi__init_8h.md#variable-size)) return [**size**](____ppc__eabi__init_8h.md#variable-size);`<br> |

## Macro Definition Documentation





### define HT\_TEMPLATE 

[_**hashtbl.h**_](hashtbl_8h.md) __
```C++
#define HT_TEMPLATE `template <class Key, class Value, class KeyOfValue, class HashFunction, class KeyEqual, class Allocator>`
```



Lib++ : The Modena C++ Standard Library, Version 2.4, October 1997


Copyright (c) 1995-1997 Modena Software Inc. 


        

<hr>



### define HT\_TYPE 

```C++
#define HT_TYPE `hash_table <Key, Value, KeyOfValue, HashFunction, KeyEqual, Allocator>`
```




<hr>



### define \_MN\_ 

```C++
#define _MN_ (
    size
) `if (n < size ) return size ;`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C++/MSL_Common/Include/hashtbl.h`

