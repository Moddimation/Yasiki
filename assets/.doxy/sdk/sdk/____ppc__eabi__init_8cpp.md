

# File \_\_ppc\_eabi\_init.cpp



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**os**](dir_c85f9e83f0f4b4374578811cecebda65.md) **>** [**init**](dir_2a4304f6eb90ba2fa36075e24b786609.md) **>** [**\_\_ppc\_eabi\_init.cpp**](____ppc__eabi__init_8cpp.md)

[Go to the source code of this file](____ppc__eabi__init_8cpp_source.md)



* `#include <dolphin/os.h>`
* `#include "OSPrivate.h"`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**rept**](____ppc__eabi__init_8cpp.md#variable-rept) | [**\_\_pad0\_\_**](#variable-__pad0__)  <br> |
|   | [**blr**](#variable-blr)  <br> |
|   | [**icbi**](#variable-icbi)  <br> |
|   | [**isync**](#variable-isync)  <br> |
|  [**lis**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**ori**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**and**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**r3**](#variable-r3)  <br> |
|  [**add**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**r4**](#variable-r4)  <br> |
|  [**lis**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**r5**](#variable-r5)  <br> |
|  [**addic**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**subic**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**bge**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**rept**](#variable-rept)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**size**](#variable-size)   = `/* multi line expression */`<br> |
|   | [**sync**](#variable-sync)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_ExitProcess**](#function-_exitprocess) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|   | [**\_\_declspec**](#function-__declspec) (section ".ctors") <br> |
|   | [**\_\_declspec**](#function-__declspec) (section ".dtors") <br> |
|   | [**\_\_declspec**](#function-__declspec) (section ".init") <br> |
|   | [**\_\_declspec**](#function-__declspec) ([**weak**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_init\_user**](#function-__init_user) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**abort**](#function-abort) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**exit**](#function-exit) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) status) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_fini\_cpp**](#function-__fini_cpp) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_init\_cpp**](#function-__init_cpp) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |


























## Public Attributes Documentation




### variable \_\_pad0\_\_ 

```C++
rept __pad0__;
```




<hr>



### variable blr 

```C++
blr;
```




<hr>



### variable icbi 

```C++
icbi;
```




<hr>



### variable isync 

```C++
isync;
```




<hr>



### variable r3 

```C++
add r3;
```




<hr>



### variable r4 

```C++
addic subic r4;
```




<hr>



### variable r5 

```C++
addic r5;
```




<hr>



### variable rept 

```C++
addic subic bge rept;
```




<hr>



### variable size 

```C++
u32 size;
```




<hr>



### variable sync 

```C++
sync;
```




<hr>
## Public Functions Documentation




### function \_ExitProcess 

```C++
void _ExitProcess (
    void
) 
```




<hr>



### function \_\_declspec 

```C++
__declspec (
    section ".ctors"
) 
```




<hr>



### function \_\_declspec 

```C++
__declspec (
    section ".dtors"
) 
```




<hr>



### function \_\_declspec 

```C++
__declspec (
    section ".init"
) 
```




<hr>



### function \_\_declspec 

```C++
__declspec (
    weak
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
void abort (
    void
) 
```




<hr>



### function exit 

```C++
void exit (
    int status
) 
```




<hr>
## Public Static Functions Documentation




### function \_\_fini\_cpp 

```C++
static void __fini_cpp (
    void
) 
```




<hr>



### function \_\_init\_cpp 

```C++
static void __init_cpp (
    void
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/os/init/__ppc_eabi_init.cpp`

