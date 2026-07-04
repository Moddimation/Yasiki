

# File Tree.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**support**](dir_7636aa5346774086801f2528daa452d7.md) **>** [**Tree.c**](_tree_8c.md)

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
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/support/Tree.c`

