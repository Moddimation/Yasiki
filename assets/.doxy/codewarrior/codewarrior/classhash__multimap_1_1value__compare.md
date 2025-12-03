

# Class hash\_multimap::value\_compare



[**ClassList**](annotated.md) **>** [**hash\_multimap**](classhash__multimap.md) **>** [**value\_compare**](classhash__multimap_1_1value__compare.md)





* `#include <hashmmap.h>`



Inherits the following classes: binary_function< value_type, value_type, bool >


































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**bool**](stdbool_8h.md#define-bool) | [**operator()**](#function-operator) (const [**value\_type**](classhash__multimap.md#typedef-value_type) & x, const [**value\_type**](classhash__multimap.md#typedef-value_type) & y) const<br> |








## Protected Attributes

| Type | Name |
| ---: | :--- |
|  KeyEqual | [**comp**](#variable-comp)  <br> |
















## Protected Functions

| Type | Name |
| ---: | :--- |
|   | [**value\_compare**](#function-value_compare) (KeyEqual c) <br> |




## Public Functions Documentation




### function operator() 

```C++
inline bool hash_multimap::value_compare::operator() (
    const value_type & x,
    const value_type & y
) const
```




<hr>
## Protected Attributes Documentation




### variable comp 

```C++
KeyEqual hash_multimap< Key, T, HashFunction, KeyEqual >::value_compare::comp;
```




<hr>
## Protected Functions Documentation




### function value\_compare 

```C++
inline hash_multimap::value_compare::value_compare (
    KeyEqual c
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C++/MSL_Common/Include/hashmmap.h`

