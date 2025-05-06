

# File Tree.c



[**FileList**](files.md) **>** [**dolphin**](dir_8daa6a5f7f30f79e111d6992c13d512c.md) **>** [**support**](dir_1d8507286bd8537f351086f771eb843c.md) **>** [**Tree.c**](_tree_8c.md)

[Go to the source code of this file](_tree_8c_source.md)



* `#include <charPipeline/structures/Tree.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DSExtractBranch**](#function-dsextractbranch) ([**DSTreePtr**](_c_a_r_d_private_8h.md#define-card_max_mount_step) tree, [**Ptr**](types_8h.md#typedef-ptr) obj) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DSInitTree**](#function-dsinittree) ([**DSTreePtr**](_c_a_r_d_private_8h.md#define-card_max_mount_step) tree, [**Ptr**](types_8h.md#typedef-ptr) obj, [**DSBranchPtr**](_c_a_r_d_private_8h.md#define-card_max_mount_step) branch) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DSInsertBranchBelow**](#function-dsinsertbranchbelow) ([**DSTreePtr**](_c_a_r_d_private_8h.md#define-card_max_mount_step) tree, [**Ptr**](types_8h.md#typedef-ptr) cursor, [**Ptr**](types_8h.md#typedef-ptr) obj) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DSInsertBranchBeside**](#function-dsinsertbranchbeside) ([**DSTreePtr**](_c_a_r_d_private_8h.md#define-card_max_mount_step) tree, [**Ptr**](types_8h.md#typedef-ptr) cursor, [**Ptr**](types_8h.md#typedef-ptr) obj) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DSRemoveBranch**](#function-dsremovebranch) ([**DSTreePtr**](_c_a_r_d_private_8h.md#define-card_max_mount_step) tree, [**Ptr**](types_8h.md#typedef-ptr) obj) <br> |




























## Public Functions Documentation




### function DSExtractBranch 

```C++
void DSExtractBranch (
    DSTreePtr tree,
    Ptr obj
) 
```




<hr>



### function DSInitTree 

```C++
void DSInitTree (
    DSTreePtr tree,
    Ptr obj,
    DSBranchPtr branch
) 
```




<hr>



### function DSInsertBranchBelow 

```C++
void DSInsertBranchBelow (
    DSTreePtr tree,
    Ptr cursor,
    Ptr obj
) 
```




<hr>



### function DSInsertBranchBeside 

```C++
void DSInsertBranchBeside (
    DSTreePtr tree,
    Ptr cursor,
    Ptr obj
) 
```




<hr>



### function DSRemoveBranch 

```C++
void DSRemoveBranch (
    DSTreePtr tree,
    Ptr obj
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `SDK/src/dolphin/support/Tree.c`

