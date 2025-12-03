

# Class std::\_\_red\_black\_tree

**template &lt;[**bool**](stdbool_8h.md#define-bool) b&gt;**



[**ClassList**](annotated.md) **>** [**std**](namespacestd.md) **>** [**\_\_red\_black\_tree**](classstd_1_1____red__black__tree.md)





* `#include <tree.h>`









































## Protected Types

| Type | Name |
| ---: | :--- |
| enum  | [**Color**](#enum-color)  <br> |






















## Protected Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](classstd_1_1allocator.md) | [**balance\_erase**](#function-balance_erase) ([**node\_base**](structstd_1_1____red__black__tree_1_1node__base.md) \* z, [**node\_base**](structstd_1_1____red__black__tree_1_1node__base.md) \* root) <br> |
|  [**void**](classstd_1_1allocator.md) | [**balance\_insert**](#function-balance_insert) ([**node\_base**](structstd_1_1____red__black__tree_1_1node__base.md) \* x, [**node\_base**](structstd_1_1____red__black__tree_1_1node__base.md) \* root) <br> |
|  [**void**](classstd_1_1allocator.md) | [**decrement**](#function-decrement) ([**const**](classstd_1_1allocator.md) [**node\_base**](structstd_1_1____red__black__tree_1_1node__base.md) \*& x) <br> |
|  [**void**](classstd_1_1allocator.md) | [**increment**](#function-increment) ([**const**](classstd_1_1allocator.md) [**node\_base**](structstd_1_1____red__black__tree_1_1node__base.md) \*& x) <br> |
|  [**node\_base**](structstd_1_1____red__black__tree_1_1node__base.md) \* | [**leftmost**](#function-leftmost) ([**node\_base**](structstd_1_1____red__black__tree_1_1node__base.md) \* x) <br> |
|  [**node\_base**](structstd_1_1____red__black__tree_1_1node__base.md) \* | [**rightmost**](#function-rightmost) ([**node\_base**](structstd_1_1____red__black__tree_1_1node__base.md) \* x) <br> |


## Protected Types Documentation




### enum Color 

```C++
enum std::__red_black_tree::Color {
    black,
    red
};
```




<hr>
## Protected Static Functions Documentation




### function balance\_erase 

```C++
static void std::__red_black_tree::balance_erase (
    node_base * z,
    node_base * root
) 
```




<hr>



### function balance\_insert 

```C++
static void std::__red_black_tree::balance_insert (
    node_base * x,
    node_base * root
) 
```




<hr>



### function decrement 

```C++
static void std::__red_black_tree::decrement (
    const  node_base *& x
) 
```




<hr>



### function increment 

```C++
static void std::__red_black_tree::increment (
    const  node_base *& x
) 
```




<hr>



### function leftmost 

```C++
static inline node_base * std::__red_black_tree::leftmost (
    node_base * x
) 
```




<hr>



### function rightmost 

```C++
static inline node_base * std::__red_black_tree::rightmost (
    node_base * x
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/CodeWarrior/PowerPC_EABI_Support/Msl/MSL_C++/MSL_Common/Include/tree.h`

