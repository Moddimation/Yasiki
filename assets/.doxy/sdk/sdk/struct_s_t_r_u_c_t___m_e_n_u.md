

# Struct STRUCT\_MENU



[**ClassList**](annotated.md) **>** [**STRUCT\_MENU**](struct_s_t_r_u_c_t___m_e_n_u.md)





* `#include <demo.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**cb\_cancel**](#variable-cb_cancel)  <br>_0x20_  |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**cb\_move**](#variable-cb_move)  <br>_0x18_  |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**cb\_open**](#variable-cb_open)  <br>_0x14_  |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**cb\_select**](#variable-cb_select)  <br>_0x1C_  |
|  [**s32**](types_8h.md#typedef-s32) | [**curr\_pos**](#variable-curr_pos)  <br>_0x30_  |
|  [**s32**](types_8h.md#typedef-s32) | [**display\_pos**](#variable-display_pos)  <br>_0x34_  |
|  [**u32**](types_8h.md#typedef-u32) | [**flags**](#variable-flags)  <br>_0x10_  |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**STRUCT\_DEMOWIN**](struct_s_t_r_u_c_t___d_e_m_o_w_i_n.md) \* | [**handle**](#variable-handle)  <br>_0x04_  |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**STRUCT\_MENU\_ITEM**](struct_s_t_r_u_c_t___m_e_n_u___i_t_e_m.md) \* | [**items**](#variable-items)  <br>_0x08_  |
|  [**s32**](types_8h.md#typedef-s32) | [**max\_display\_items**](#variable-max_display_items)  <br>_0x0C_  |
|  [**u32**](types_8h.md#typedef-u32) | [**max\_str\_len**](#variable-max_str_len)  <br>_0x2C_  |
|  [**s32**](types_8h.md#typedef-s32) | [**num\_display\_items**](#variable-num_display_items)  <br>_0x24_  |
|  [**s32**](types_8h.md#typedef-s32) | [**num\_items**](#variable-num_items)  <br>_0x28_  |
|  [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**title**](#variable-title)  <br>_0x00_  |












































## Public Attributes Documentation




### variable cb\_cancel 

_0x20_ 
```C++
void(* STRUCT_MENU::cb_cancel) (struct STRUCT_MENU *, u32);
```




<hr>



### variable cb\_move 

_0x18_ 
```C++
void(* STRUCT_MENU::cb_move) (struct STRUCT_MENU *, u32);
```




<hr>



### variable cb\_open 

_0x14_ 
```C++
void(* STRUCT_MENU::cb_open) (struct STRUCT_MENU *, u32);
```




<hr>



### variable cb\_select 

_0x1C_ 
```C++
void(* STRUCT_MENU::cb_select) (struct STRUCT_MENU *, u32);
```




<hr>



### variable curr\_pos 

_0x30_ 
```C++
s32 STRUCT_MENU::curr_pos;
```




<hr>



### variable display\_pos 

_0x34_ 
```C++
s32 STRUCT_MENU::display_pos;
```




<hr>



### variable flags 

_0x10_ 
```C++
u32 STRUCT_MENU::flags;
```




<hr>



### variable handle 

_0x04_ 
```C++
struct STRUCT_DEMOWIN* STRUCT_MENU::handle;
```




<hr>



### variable items 

_0x08_ 
```C++
struct STRUCT_MENU_ITEM* STRUCT_MENU::items;
```




<hr>



### variable max\_display\_items 

_0x0C_ 
```C++
s32 STRUCT_MENU::max_display_items;
```




<hr>



### variable max\_str\_len 

_0x2C_ 
```C++
u32 STRUCT_MENU::max_str_len;
```




<hr>



### variable num\_display\_items 

_0x24_ 
```C++
s32 STRUCT_MENU::num_display_items;
```




<hr>



### variable num\_items 

_0x28_ 
```C++
s32 STRUCT_MENU::num_items;
```




<hr>



### variable title 

_0x00_ 
```C++
char* STRUCT_MENU::title;
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/demo.h`

