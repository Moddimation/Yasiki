

# File OSAddress.c



[**FileList**](files.md) **>** [**dolphin**](dir_8daa6a5f7f30f79e111d6992c13d512c.md) **>** [**os**](dir_8207759a5d5564400a58f6bb524771f0.md) **>** [**OSAddress.c**](_o_s_address_8c.md)

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
The documentation for this class was generated from the following file `SDK/src/dolphin/os/OSAddress.c`

