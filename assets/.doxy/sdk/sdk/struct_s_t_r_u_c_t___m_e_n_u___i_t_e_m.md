

# Struct STRUCT\_MENU\_ITEM



[**ClassList**](annotated.md) **>** [**STRUCT\_MENU\_ITEM**](struct_s_t_r_u_c_t___m_e_n_u___i_t_e_m.md)





* `#include <demo.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**u32**](types_8h.md#typedef-u32) | [**flags**](#variable-flags)  <br>_0x04_  |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**function**](#variable-function)  <br>_0x08_  |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**STRUCT\_MENU**](struct_s_t_r_u_c_t___m_e_n_u.md) \* | [**link**](#variable-link)  <br>_0x0C_  |
|  [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**name**](#variable-name)  <br>_0x00_  |












































## Public Attributes Documentation




### variable flags 

_0x04_ 
```C++
u32 STRUCT_MENU_ITEM::flags;
```




<hr>



### variable function 

_0x08_ 
```C++
void(* STRUCT_MENU_ITEM::function) (struct STRUCT_MENU *, u32, u32 *);
```




<hr>



### variable link 

_0x0C_ 
```C++
struct STRUCT_MENU* STRUCT_MENU_ITEM::link;
```




<hr>



### variable name 

_0x00_ 
```C++
char* STRUCT_MENU_ITEM::name;
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/demo.h`

