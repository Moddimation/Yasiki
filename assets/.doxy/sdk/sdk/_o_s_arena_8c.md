

# File OSArena.c



[**FileList**](files.md) **>** [**dolphin**](dir_8daa6a5f7f30f79e111d6992c13d512c.md) **>** [**os**](dir_8207759a5d5564400a58f6bb524771f0.md) **>** [**OSArena.c**](_o_s_arena_8c.md)

[Go to the source code of this file](_o_s_arena_8c_source.md)



* `#include <dolphin/os.h>`























## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**\_\_OSArenaHi**](#variable-__osarenahi)  <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**\_\_OSArenaLo**](#variable-__osarenalo)   = `([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)\*)-1`<br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**OSAllocFromArenaHi**](#function-osallocfromarenahi) ([**u32**](types_8h.md#typedef-u32) size, [**u32**](types_8h.md#typedef-u32) align) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**OSAllocFromArenaLo**](#function-osallocfromarenalo) ([**u32**](types_8h.md#typedef-u32) size, [**u32**](types_8h.md#typedef-u32) align) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**OSGetArenaHi**](#function-osgetarenahi) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**OSGetArenaLo**](#function-osgetarenalo) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSSetArenaHi**](#function-ossetarenahi) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* newHi) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSSetArenaLo**](#function-ossetarenalo) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* newLo) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**ROUND**](_o_s_arena_8c.md#define-round) (n, a) `((([**u32**](types_8h.md#typedef-u32))([**n**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) + (a) - 1) & ~((a) - 1))`<br> |
| define  | [**TRUNC**](_o_s_arena_8c.md#define-trunc) (n, a) `((([**u32**](types_8h.md#typedef-u32))([**n**](_c_a_r_d_private_8h.md#define-card_max_mount_step))) & ~((a) - 1))`<br> |

## Public Static Attributes Documentation




### variable \_\_OSArenaHi 

```C++
void* __OSArenaHi;
```




<hr>



### variable \_\_OSArenaLo 

```C++
void* __OSArenaLo;
```




<hr>
## Public Functions Documentation




### function OSAllocFromArenaHi 

```C++
void * OSAllocFromArenaHi (
    u32 size,
    u32 align
) 
```




<hr>



### function OSAllocFromArenaLo 

```C++
void * OSAllocFromArenaLo (
    u32 size,
    u32 align
) 
```




<hr>



### function OSGetArenaHi 

```C++
void * OSGetArenaHi () 
```




<hr>



### function OSGetArenaLo 

```C++
void * OSGetArenaLo () 
```




<hr>



### function OSSetArenaHi 

```C++
void OSSetArenaHi (
    void * newHi
) 
```




<hr>



### function OSSetArenaLo 

```C++
void OSSetArenaLo (
    void * newLo
) 
```




<hr>
## Macro Definition Documentation





### define ROUND 

```C++
#define ROUND (
    n,
    a
) `((( u32 )( n ) + (a) - 1) & ~((a) - 1))`
```




<hr>



### define TRUNC 

```C++
#define TRUNC (
    n,
    a
) `((( u32 )( n )) & ~((a) - 1))`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `SDK/src/dolphin/os/OSArena.c`

