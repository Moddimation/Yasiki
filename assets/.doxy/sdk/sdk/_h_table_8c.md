

# File HTable.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**support**](dir_7636aa5346774086801f2528daa452d7.md) **>** [**HTable.c**](_h_table_8c.md)

[Go to the source code of this file](_h_table_8c_source.md)



* `#include <charPipeline/structures/HTable.h>`
* `#include <charPipeline/structures/List.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**DSHTableHead**](#function-dshtablehead) ([**DSHashTable**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* hTable, [**s32**](types_8h.md#typedef-s32) index) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**DSHTableIndex**](#function-dshtableindex) ([**DSHashTable**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* hTable, [**Ptr**](types_8h.md#typedef-ptr) obj) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DSHTableToList**](#function-dshtabletolist) ([**DSHashTable**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* hTable, [**DSList**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* list) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DSInitHTable**](#function-dsinithtable) ([**DSHashTable**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* hTable, [**u16**](types_8h.md#typedef-u16) size, [**DSList**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* listArray, [**DSHashFunc**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* hashFunc, [**Ptr**](types_8h.md#typedef-ptr) obj, [**DSLinkPtr**](_c_a_r_d_private_8h.md#define-card_max_mount_step) link) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DSInsertHTableObj**](#function-dsinserthtableobj) ([**DSHashTable**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* hTable, [**Ptr**](types_8h.md#typedef-ptr) obj) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**DSNextHTableObj**](#function-dsnexthtableobj) ([**DSHashTable**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* hTable, [**Ptr**](types_8h.md#typedef-ptr) obj) <br> |




























## Public Functions Documentation




### function DSHTableHead 

```C++
void * DSHTableHead (
    DSHashTable * hTable,
    s32 index
) 
```




<hr>



### function DSHTableIndex 

```C++
s32 DSHTableIndex (
    DSHashTable * hTable,
    Ptr obj
) 
```




<hr>



### function DSHTableToList 

```C++
void DSHTableToList (
    DSHashTable * hTable,
    DSList * list
) 
```




<hr>



### function DSInitHTable 

```C++
void DSInitHTable (
    DSHashTable * hTable,
    u16 size,
    DSList * listArray,
    DSHashFunc * hashFunc,
    Ptr obj,
    DSLinkPtr link
) 
```




<hr>



### function DSInsertHTableObj 

```C++
void DSInsertHTableObj (
    DSHashTable * hTable,
    Ptr obj
) 
```




<hr>



### function DSNextHTableObj 

```C++
void * DSNextHTableObj (
    DSHashTable * hTable,
    Ptr obj
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/support/HTable.c`

