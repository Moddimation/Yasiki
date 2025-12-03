

# Struct std::\_\_red\_black\_tree::node\_base



[**ClassList**](annotated.md) **>** [**std**](namespacestd.md) **>** [**\_\_red\_black\_tree**](classstd_1_1____red__black__tree.md) **>** [**node\_base**](structstd_1_1____red__black__tree_1_1node__base.md)





* `#include <tree.h>`



Inherits the following classes: [std::\_\_red\_black\_tree::anchor](structstd_1_1____red__black__tree_1_1anchor.md)






















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**\_\_pointer\_plus\_bit**](classstd_1_1____pointer__plus__bit.md)&lt; [**node\_base**](structstd_1_1____red__black__tree_1_1node__base.md) &gt; | [**parent\_**](#variable-parent_)  <br> |
|  [**node\_base**](structstd_1_1____red__black__tree_1_1node__base.md) \* | [**right\_**](#variable-right_)  <br> |


## Public Attributes inherited from std::__red_black_tree::anchor

See [std::\_\_red\_black\_tree::anchor](structstd_1_1____red__black__tree_1_1anchor.md)

| Type | Name |
| ---: | :--- |
|  [**node\_base**](structstd_1_1____red__black__tree_1_1node__base.md) \* | [**left\_**](structstd_1_1____red__black__tree_1_1anchor.md#variable-left_)  <br> |






























## Public Functions

| Type | Name |
| ---: | :--- |
|  [**Color**](classstd_1_1____red__black__tree.md#enum-color) | [**color**](#function-color) () const<br> |
|   | [**node\_base**](#function-node_base) ([**node\_base**](structstd_1_1____red__black__tree_1_1node__base.md) \* left=0, [**node\_base**](structstd_1_1____red__black__tree_1_1node__base.md) \* right=0, [**node\_base**](structstd_1_1____red__black__tree_1_1node__base.md) \* parent=0) <br> |
|  [**void**](classstd_1_1allocator.md) | [**set\_color**](#function-set_color) ([**Color**](classstd_1_1____red__black__tree.md#enum-color) c) <br> |


## Public Functions inherited from std::__red_black_tree::anchor

See [std::\_\_red\_black\_tree::anchor](structstd_1_1____red__black__tree_1_1anchor.md)

| Type | Name |
| ---: | :--- |
|   | [**anchor**](structstd_1_1____red__black__tree_1_1anchor.md#function-anchor) ([**node\_base**](structstd_1_1____red__black__tree_1_1node__base.md) \* left=0) <br> |






















































## Public Attributes Documentation




### variable parent\_ 

```C++
__pointer_plus_bit<node_base> std::__red_black_tree< b >::node_base::parent_;
```




<hr>



### variable right\_ 

```C++
node_base* std::__red_black_tree< b >::node_base::right_;
```




<hr>
## Public Functions Documentation




### function color 

```C++
inline Color std::__red_black_tree::node_base::color () const
```




<hr>



### function node\_base 

```C++
inline std::__red_black_tree::node_base::node_base (
    node_base * left=0,
    node_base * right=0,
    node_base * parent=0
) 
```




<hr>



### function set\_color 

```C++
inline void std::__red_black_tree::node_base::set_color (
    Color c
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C++/MSL_Common/Include/tree.h`

