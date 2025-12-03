

# File demo.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**demo.h**](demo_8h.md)

[Go to the source code of this file](demo_8h_source.md)



* `#include <dolphin/gx.h>`
* `#include <dolphin/pad.h>`
* `#include <dolphin/demo/DEMOInit.h>`
* `#include <dolphin/demo/DEMOPad.h>`
* `#include <dolphin/demo/DEMOPuts.h>`
* `#include <dolphin/demo/DEMOStats.h>`
* `#include <dolphin/demo/DEMOWin.h>`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**DEMOWinPadInfo**](struct_d_e_m_o_win_pad_info.md) <br> |
| struct | [**STRUCT\_LISTBOX**](struct_s_t_r_u_c_t___l_i_s_t_b_o_x.md) <br> |
| struct | [**STRUCT\_LISTBOX\_ITEM**](struct_s_t_r_u_c_t___l_i_s_t_b_o_x___i_t_e_m.md) <br> |
| struct | [**STRUCT\_MENU**](struct_s_t_r_u_c_t___m_e_n_u.md) <br> |
| struct | [**STRUCT\_MENU\_ITEM**](struct_s_t_r_u_c_t___m_e_n_u___i_t_e_m.md) <br> |






## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**u32**](types_8h.md#typedef-u32) | [**DEMOFontBitmap**](#variable-demofontbitmap)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**\_GXRenderModeObj**](struct___g_x_render_mode_obj.md) \* | [**DEMOGetRenderModeObj**](#function-demogetrendermodeobj) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOPrintf**](#function-demoprintf) ([**s16**](types_8h.md#typedef-s16) x, [**s16**](types_8h.md#typedef-s16) y, [**s16**](types_8h.md#typedef-s16) priority, [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* str, ...) <br> |




























## Public Attributes Documentation




### variable DEMOFontBitmap 

```C++
u32 DEMOFontBitmap[768];
```




<hr>
## Public Functions Documentation




### function DEMOGetRenderModeObj 

```C++
struct  _GXRenderModeObj * DEMOGetRenderModeObj () 
```




<hr>



### function DEMOPrintf 

```C++
void DEMOPrintf (
    s16 x,
    s16 y,
    s16 priority,
    char * str,
    ...
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/demo.h`

