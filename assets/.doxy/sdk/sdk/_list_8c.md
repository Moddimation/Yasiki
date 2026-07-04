

# File List.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**support**](dir_7636aa5346774086801f2528daa452d7.md) **>** [**List.c**](_list_8c.md)

[Go to the source code of this file](_list_8c_source.md)



* `#include <charPipeline/structures/List.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DSAttachList**](#function-dsattachlist) ([**DSListPtr**](_c_a_r_d_private_8h.md#define-card_max_mount_step) baseList, [**DSListPtr**](_c_a_r_d_private_8h.md#define-card_max_mount_step) attachList) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DSInitList**](#function-dsinitlist) ([**DSListPtr**](_c_a_r_d_private_8h.md#define-card_max_mount_step) list, [**Ptr**](types_8h.md#typedef-ptr) obj, [**DSLinkPtr**](_c_a_r_d_private_8h.md#define-card_max_mount_step) link) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DSInsertListObject**](#function-dsinsertlistobject) ([**DSListPtr**](_c_a_r_d_private_8h.md#define-card_max_mount_step) list, [**Ptr**](types_8h.md#typedef-ptr) cursor, [**Ptr**](types_8h.md#typedef-ptr) obj) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**DSNextListObj**](#function-dsnextlistobj) ([**DSListPtr**](_c_a_r_d_private_8h.md#define-card_max_mount_step) list, [**Ptr**](types_8h.md#typedef-ptr) obj) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DSRemoveListObject**](#function-dsremovelistobject) ([**DSListPtr**](_c_a_r_d_private_8h.md#define-card_max_mount_step) list, [**Ptr**](types_8h.md#typedef-ptr) obj) <br> |




























## Public Functions Documentation




### function DSAttachList 

```C++
void DSAttachList (
    DSListPtr baseList,
    DSListPtr attachList
) 
```




<hr>



### function DSInitList 

```C++
void DSInitList (
    DSListPtr list,
    Ptr obj,
    DSLinkPtr link
) 
```




<hr>



### function DSInsertListObject 

```C++
void DSInsertListObject (
    DSListPtr list,
    Ptr cursor,
    Ptr obj
) 
```




<hr>



### function DSNextListObj 

```C++
void * DSNextListObj (
    DSListPtr list,
    Ptr obj
) 
```




<hr>



### function DSRemoveListObject 

```C++
void DSRemoveListObject (
    DSListPtr list,
    Ptr obj
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/support/List.c`

