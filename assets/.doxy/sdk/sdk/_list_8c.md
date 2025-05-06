

# File List.c



[**FileList**](files.md) **>** [**dolphin**](dir_8daa6a5f7f30f79e111d6992c13d512c.md) **>** [**support**](dir_1d8507286bd8537f351086f771eb843c.md) **>** [**List.c**](_list_8c.md)

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
The documentation for this class was generated from the following file `SDK/src/dolphin/support/List.c`

