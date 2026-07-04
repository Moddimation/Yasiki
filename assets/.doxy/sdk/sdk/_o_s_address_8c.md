

# File OSAddress.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**os**](dir_c85f9e83f0f4b4374578811cecebda65.md) **>** [**OSAddress.c**](_o_s_address_8c.md)

[Go to the source code of this file](_o_s_address_8c_source.md)



* `#include <dolphin/os.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**u32**](types_8h.md#typedef-u32) | [**OSCachedToPhysical**](#function-oscachedtophysical) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* caddr) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**OSCachedToUncached**](#function-oscachedtouncached) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* caddr) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**OSPhysicalToCached**](#function-osphysicaltocached) ([**u32**](types_8h.md#typedef-u32) paddr) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**OSPhysicalToUncached**](#function-osphysicaltouncached) ([**u32**](types_8h.md#typedef-u32) paddr) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**OSUncachedToCached**](#function-osuncachedtocached) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* ucaddr) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**OSUncachedToPhysical**](#function-osuncachedtophysical) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* ucaddr) <br> |




























## Public Functions Documentation




### function OSCachedToPhysical 

```C++
u32 OSCachedToPhysical (
    void * caddr
) 
```




<hr>



### function OSCachedToUncached 

```C++
void * OSCachedToUncached (
    void * caddr
) 
```




<hr>



### function OSPhysicalToCached 

```C++
void * OSPhysicalToCached (
    u32 paddr
) 
```




<hr>



### function OSPhysicalToUncached 

```C++
void * OSPhysicalToUncached (
    u32 paddr
) 
```




<hr>



### function OSUncachedToCached 

```C++
void * OSUncachedToCached (
    void * ucaddr
) 
```




<hr>



### function OSUncachedToPhysical 

```C++
u32 OSUncachedToPhysical (
    void * ucaddr
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/os/OSAddress.c`

