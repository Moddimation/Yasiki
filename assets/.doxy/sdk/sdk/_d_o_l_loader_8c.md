

# File DOLLoader.c



[**FileList**](files.md) **>** [**dolformat**](dir_57c75bdfedcf7b3039f657395efead26.md) **>** [**DOLLoader.c**](_d_o_l_loader_8c.md)

[Go to the source code of this file](_d_o_l_loader_8c_source.md)



* `#include <dolphin/db.h>`
* `#include <dolphin/dolformat.h>`
* `#include <stddef.h>`
* `#include <string.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**DOLLoadImage**](#function-dolloadimage) ([**u8**](types_8h.md#typedef-u8) \* buffer, [**BOOL**](types_8h.md#typedef-bool) verbose) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DOLRunApp**](#function-dolrunapp) ([**register**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* entryPoint) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**bzero**](#function-bzero) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* start, [**u32**](types_8h.md#typedef-u32) len) <br> |




























## Public Functions Documentation




### function DOLLoadImage 

```C++
void * DOLLoadImage (
    u8 * buffer,
    BOOL verbose
) 
```




<hr>



### function DOLRunApp 

```C++
asm  void DOLRunApp (
    register  void * entryPoint
) 
```




<hr>



### function bzero 

```C++
void bzero (
    void * start,
    u32 len
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `SDK/src/dolphin/dolformat/DOLLoader.c`

