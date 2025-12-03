

# Struct STRUCT\_LISTBOX



[**ClassList**](annotated.md) **>** [**STRUCT\_LISTBOX**](struct_s_t_r_u_c_t___l_i_s_t_b_o_x.md)





* `#include <demo.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**s32**](types_8h.md#typedef-s32) | [**curr\_pos**](#variable-curr_pos)  <br>_0x20 // offset 0x20, size 0x4_  |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**cursor\_state**](#variable-cursor_state)  <br>_0x28 // offset 0x28, size 0x4_  |
|  [**s32**](types_8h.md#typedef-s32) | [**display\_pos**](#variable-display_pos)  <br>_0x24 // offset 0x24, size 0x4_  |
|  [**u32**](types_8h.md#typedef-u32) | [**flags**](#variable-flags)  <br>_0x10 // offset 0x10, size 0x4_  |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**STRUCT\_DEMOWIN**](struct_s_t_r_u_c_t___d_e_m_o_w_i_n.md) \* | [**handle**](#variable-handle)  <br>_0x04 // offset 0x4, size 0x4_  |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**STRUCT\_LISTBOX\_ITEM**](struct_s_t_r_u_c_t___l_i_s_t_b_o_x___i_t_e_m.md) \* | [**items**](#variable-items)  <br>_0x08 // offset 0x8, size 0x4_  |
|  [**s32**](types_8h.md#typedef-s32) | [**max\_display\_items**](#variable-max_display_items)  <br>_0x0C // offset 0xC, size 0x4_  |
|  [**u32**](types_8h.md#typedef-u32) | [**max\_str\_len**](#variable-max_str_len)  <br>_0x1C // offset 0x1C, size 0x4_  |
|  [**s32**](types_8h.md#typedef-s32) | [**num\_display\_items**](#variable-num_display_items)  <br>_0x14 // offset 0x14, size 0x4_  |
|  [**s32**](types_8h.md#typedef-s32) | [**num\_items**](#variable-num_items)  <br>_0x18 // offset 0x18, size 0x4_  |
|  [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**title**](#variable-title)  <br>_0x00 // offset 0x0, size 0x4_  |












































## Public Attributes Documentation




### variable curr\_pos 

_0x20 // offset 0x20, size 0x4_ 
```C++
s32 STRUCT_LISTBOX::curr_pos;
```




<hr>



### variable cursor\_state 

_0x28 // offset 0x28, size 0x4_ 
```C++
int STRUCT_LISTBOX::cursor_state;
```




<hr>



### variable display\_pos 

_0x24 // offset 0x24, size 0x4_ 
```C++
s32 STRUCT_LISTBOX::display_pos;
```




<hr>



### variable flags 

_0x10 // offset 0x10, size 0x4_ 
```C++
u32 STRUCT_LISTBOX::flags;
```




<hr>



### variable handle 

_0x04 // offset 0x4, size 0x4_ 
```C++
struct STRUCT_DEMOWIN* STRUCT_LISTBOX::handle;
```




<hr>



### variable items 

_0x08 // offset 0x8, size 0x4_ 
```C++
struct STRUCT_LISTBOX_ITEM* STRUCT_LISTBOX::items;
```




<hr>



### variable max\_display\_items 

_0x0C // offset 0xC, size 0x4_ 
```C++
s32 STRUCT_LISTBOX::max_display_items;
```




<hr>



### variable max\_str\_len 

_0x1C // offset 0x1C, size 0x4_ 
```C++
u32 STRUCT_LISTBOX::max_str_len;
```




<hr>



### variable num\_display\_items 

_0x14 // offset 0x14, size 0x4_ 
```C++
s32 STRUCT_LISTBOX::num_display_items;
```




<hr>



### variable num\_items 

_0x18 // offset 0x18, size 0x4_ 
```C++
s32 STRUCT_LISTBOX::num_items;
```




<hr>



### variable title 

_0x00 // offset 0x0, size 0x4_ 
```C++
char* STRUCT_LISTBOX::title;
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/demo.h`

