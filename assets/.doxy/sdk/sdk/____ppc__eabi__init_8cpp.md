

# File \_\_ppc\_eabi\_init.cpp



[**FileList**](files.md) **>** [**dolphin**](dir_8daa6a5f7f30f79e111d6992c13d512c.md) **>** [**os**](dir_8207759a5d5564400a58f6bb524771f0.md) **>** [**init**](dir_be5dd60ccbb00e452f5d06bcd029e1bc.md) **>** [**\_\_ppc\_eabi\_init.cpp**](____ppc__eabi__init_8cpp.md)

[Go to the source code of this file](____ppc__eabi__init_8cpp_source.md)



* `#include <dolphin/os.h>`
* `#include <stdlib.h>`
* `#include "OSPrivate.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**DECL\_SECT**](#function-decl_sect) (".ctors") <br> |
|   | [**DECL\_SECT**](#function-decl_sect) (".dtors") <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_ExitProcess**](#function-_exitprocess) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_fini\_cpp**](#function-__fini_cpp) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_flush\_cache**](#function-__flush_cache) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* address, [**u32**](types_8h.md#typedef-u32) size) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_init\_cpp**](#function-__init_cpp) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**asm**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_init\_hardware**](#function-__init_hardware) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_init\_user**](#function-__init_user) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**WEAKFUNC**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**abort**](#function-abort) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**WEAKFUNC**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**exit**](#function-exit) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) status) <br> |




























## Public Functions Documentation




### function DECL\_SECT 

```C++
DECL_SECT (
    ".ctors"
) 
```




<hr>



### function DECL\_SECT 

```C++
DECL_SECT (
    ".dtors"
) 
```




<hr>



### function \_ExitProcess 

```C++
void _ExitProcess (
    void
) 
```




<hr>



### function \_\_fini\_cpp 

```C++
void __fini_cpp (
    void
) 
```




<hr>



### function \_\_flush\_cache 

```C++
asm  void __flush_cache (
    void * address,
    u32 size
) 
```




<hr>



### function \_\_init\_cpp 

```C++
void __init_cpp (
    void
) 
```




<hr>



### function \_\_init\_hardware 

```C++
asm  void __init_hardware (
    void
) 
```




<hr>



### function \_\_init\_user 

```C++
void __init_user (
    void
) 
```




<hr>



### function abort 

```C++
WEAKFUNC  void abort (
    void
) 
```




<hr>



### function exit 

```C++
WEAKFUNC  void exit (
    int status
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `SDK/src/dolphin/os/init/__ppc_eabi_init.cpp`

