

# File DEMOWin.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**demo**](dir_12b9b9f3614a19f67fa121459aa56b48.md) **>** [**DEMOWin.c**](_d_e_m_o_win_8c.md)

[Go to the source code of this file](_d_e_m_o_win_8c_source.md)



* `#include <dolphin/demo.h>`
* `#include <dolphin/gx.h>`
* `#include <dolphin.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**STRUCT\_DEMOWIN**](struct_s_t_r_u_c_t___d_e_m_o_w_i_n.md) \* | [**\_\_curr\_node**](#variable-__curr_node)  <br> |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**STRUCT\_DEMOWIN**](struct_s_t_r_u_c_t___d_e_m_o_w_i_n.md) \* | [**\_\_first\_node**](#variable-__first_node)  <br> |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**STRUCT\_DEMOWIN**](struct_s_t_r_u_c_t___d_e_m_o_w_i_n.md) \* | [**\_\_last\_node**](#variable-__last_node)  <br> |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**\_GXRenderModeObj**](struct___g_x_render_mode_obj.md) \* | [**\_\_rmp**](#variable-__rmp)  <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**fontShift**](#variable-fontshift)   = `0`<br> |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**u32**](types_8h.md#typedef-u32) | [**\_\_DEMOWIN\_PAD\_repeat\_rate**](#variable-__demowin_pad_repeat_rate)   = `0x00000002`<br> |
|  [**u32**](types_8h.md#typedef-u32) | [**\_\_DEMOWIN\_PAD\_repeat\_threshold**](#variable-__demowin_pad_repeat_threshold)   = `0x0000000F`<br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOWinBringToFront**](#function-demowinbringtofront) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**STRUCT\_DEMOWIN**](struct_s_t_r_u_c_t___d_e_m_o_w_i_n.md) \* handle) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOWinClearBuffer**](#function-demowinclearbuffer) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**STRUCT\_DEMOWIN**](struct_s_t_r_u_c_t___d_e_m_o_w_i_n.md) \* handle) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOWinClearRow**](#function-demowinclearrow) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**STRUCT\_DEMOWIN**](struct_s_t_r_u_c_t___d_e_m_o_w_i_n.md) \* handle, [**u16**](types_8h.md#typedef-u16) row) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOWinClearWindow**](#function-demowinclearwindow) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**STRUCT\_DEMOWIN**](struct_s_t_r_u_c_t___d_e_m_o_w_i_n.md) \* handle) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOWinCloseWindow**](#function-demowinclosewindow) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**STRUCT\_DEMOWIN**](struct_s_t_r_u_c_t___d_e_m_o_w_i_n.md) \* handle) <br> |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**STRUCT\_LISTBOX**](struct_s_t_r_u_c_t___l_i_s_t_b_o_x.md) \* | [**DEMOWinCreateListWindow**](#function-demowincreatelistwindow) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**STRUCT\_LISTBOX**](struct_s_t_r_u_c_t___l_i_s_t_b_o_x.md) \* list, [**u16**](types_8h.md#typedef-u16) x, [**u16**](types_8h.md#typedef-u16) y) <br> |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**STRUCT\_MENU**](struct_s_t_r_u_c_t___m_e_n_u.md) \* | [**DEMOWinCreateMenuWindow**](#function-demowincreatemenuwindow) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**STRUCT\_MENU**](struct_s_t_r_u_c_t___m_e_n_u.md) \* menu, [**u16**](types_8h.md#typedef-u16) x, [**u16**](types_8h.md#typedef-u16) y) <br> |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**STRUCT\_DEMOWIN**](struct_s_t_r_u_c_t___d_e_m_o_w_i_n.md) \* | [**DEMOWinCreateWindow**](#function-demowincreatewindow) ([**s32**](types_8h.md#typedef-s32) x1, [**s32**](types_8h.md#typedef-s32) y1, [**s32**](types_8h.md#typedef-s32) x2, [**s32**](types_8h.md#typedef-s32) y2, [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* caption, [**u16**](types_8h.md#typedef-u16) scroll, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* func) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOWinDestroyListWindow**](#function-demowindestroylistwindow) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**STRUCT\_LISTBOX**](struct_s_t_r_u_c_t___l_i_s_t_b_o_x.md) \* list) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOWinDestroyMenuWindow**](#function-demowindestroymenuwindow) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**STRUCT\_MENU**](struct_s_t_r_u_c_t___m_e_n_u.md) \* menu) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOWinDestroyWindow**](#function-demowindestroywindow) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**STRUCT\_DEMOWIN**](struct_s_t_r_u_c_t___d_e_m_o_w_i_n.md) \* handle) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOWinInit**](#function-demowininit) () <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**DEMOWinListMoveCursor**](#function-demowinlistmovecursor) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**STRUCT\_LISTBOX**](struct_s_t_r_u_c_t___l_i_s_t_b_o_x.md) \* list, [**u32**](types_8h.md#typedef-u32) dir) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**DEMOWinListScrollList**](#function-demowinlistscrolllist) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**STRUCT\_LISTBOX**](struct_s_t_r_u_c_t___l_i_s_t_b_o_x.md) \* list, [**u32**](types_8h.md#typedef-u32) dir) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOWinListSetCursor**](#function-demowinlistsetcursor) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**STRUCT\_LISTBOX**](struct_s_t_r_u_c_t___l_i_s_t_b_o_x.md) \* list, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) x) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOWinLogPrintf**](#function-demowinlogprintf) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**STRUCT\_DEMOWIN**](struct_s_t_r_u_c_t___d_e_m_o_w_i_n.md) \* handle, [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* fmt, ...) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**DEMOWinMenuChild**](#function-demowinmenuchild) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**STRUCT\_MENU**](struct_s_t_r_u_c_t___m_e_n_u.md) \* menu, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) child\_flag) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOWinOpenWindow**](#function-demowinopenwindow) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**STRUCT\_DEMOWIN**](struct_s_t_r_u_c_t___d_e_m_o_w_i_n.md) \* handle) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOWinPadInit**](#function-demowinpadinit) ([**DEMOWinPadInfo**](struct_d_e_m_o_win_pad_info.md) \* p) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOWinPadRead**](#function-demowinpadread) ([**DEMOWinPadInfo**](struct_d_e_m_o_win_pad_info.md) \* p) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOWinPrintfXY**](#function-demowinprintfxy) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**STRUCT\_DEMOWIN**](struct_s_t_r_u_c_t___d_e_m_o_w_i_n.md) \* handle, [**u16**](types_8h.md#typedef-u16) col, [**u16**](types_8h.md#typedef-u16) row, [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* fmt, ...) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOWinRefresh**](#function-demowinrefresh) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOWinResetRepeat**](#function-demowinresetrepeat) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOWinScrollWindow**](#function-demowinscrollwindow) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**STRUCT\_DEMOWIN**](struct_s_t_r_u_c_t___d_e_m_o_w_i_n.md) \* handle, [**u32**](types_8h.md#typedef-u32) dir) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOWinSendToBack**](#function-demowinsendtoback) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**STRUCT\_DEMOWIN**](struct_s_t_r_u_c_t___d_e_m_o_w_i_n.md) \* handle) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOWinSetRepeat**](#function-demowinsetrepeat) ([**u32**](types_8h.md#typedef-u32) threshold, [**u32**](types_8h.md#typedef-u32) rate) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOWinSetWindowColor**](#function-demowinsetwindowcolor) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**STRUCT\_DEMOWIN**](struct_s_t_r_u_c_t___d_e_m_o_w_i_n.md) \* handle, [**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DEMOWinItem**](_d_e_m_o_win_8h.md#enum-demowinitem) item, [**u8**](types_8h.md#typedef-u8) r, [**u8**](types_8h.md#typedef-u8) g, [**u8**](types_8h.md#typedef-u8) b, [**u8**](types_8h.md#typedef-u8) a) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DEMOWinList\_refresh\_list**](#function-__demowinlist_refresh_list) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**STRUCT\_DEMOWIN**](struct_s_t_r_u_c_t___d_e_m_o_w_i_n.md) \* w) <br> |
|  [**u16**](types_8h.md#typedef-u16) | [**\_\_DEMOWinMenu\_get\_user\_input**](#function-__demowinmenu_get_user_input) ([**DEMOWinPadInfo**](struct_d_e_m_o_win_pad_info.md) \* p) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DEMOWinMenu\_refesh\_menu**](#function-__demowinmenu_refesh_menu) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**STRUCT\_DEMOWIN**](struct_s_t_r_u_c_t___d_e_m_o_w_i_n.md) \* w) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DEMOWin\_add\_node**](#function-__demowin_add_node) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**STRUCT\_DEMOWIN**](struct_s_t_r_u_c_t___d_e_m_o_w_i_n.md) \* handle) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DEMOWin\_delete\_node**](#function-__demowin_delete_node) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**STRUCT\_DEMOWIN**](struct_s_t_r_u_c_t___d_e_m_o_w_i_n.md) \* handle) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DEMOWin\_puts\_n**](#function-__demowin_puts_n) ([**s16**](types_8h.md#typedef-s16) x, [**s16**](types_8h.md#typedef-s16) y, [**s16**](types_8h.md#typedef-s16) z, [**u16**](types_8h.md#typedef-u16) n, [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* string) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DEMOWin\_puts\_n**](#function-__demowin_puts_n) ([**s16**](types_8h.md#typedef-s16) x, [**signed**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**s16**](types_8h.md#typedef-s16) y, [**signed**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**short**](_c_a_r_d_private_8h.md#define-card_max_mount_step) z, [**u16**](types_8h.md#typedef-u16) n, [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* string) <br> |


























## Public Attributes Documentation




### variable \_\_curr\_node 

```C++
struct STRUCT_DEMOWIN* __curr_node;
```




<hr>



### variable \_\_first\_node 

```C++
struct STRUCT_DEMOWIN* __first_node;
```




<hr>



### variable \_\_last\_node 

```C++
struct STRUCT_DEMOWIN* __last_node;
```




<hr>



### variable \_\_rmp 

```C++
struct _GXRenderModeObj* __rmp;
```




<hr>



### variable fontShift 

```C++
s32 fontShift;
```




<hr>
## Public Static Attributes Documentation




### variable \_\_DEMOWIN\_PAD\_repeat\_rate 

```C++
u32 __DEMOWIN_PAD_repeat_rate;
```




<hr>



### variable \_\_DEMOWIN\_PAD\_repeat\_threshold 

```C++
u32 __DEMOWIN_PAD_repeat_threshold;
```




<hr>
## Public Functions Documentation




### function DEMOWinBringToFront 

```C++
void DEMOWinBringToFront (
    struct  STRUCT_DEMOWIN * handle
) 
```




<hr>



### function DEMOWinClearBuffer 

```C++
void DEMOWinClearBuffer (
    struct  STRUCT_DEMOWIN * handle
) 
```




<hr>



### function DEMOWinClearRow 

```C++
void DEMOWinClearRow (
    struct  STRUCT_DEMOWIN * handle,
    u16 row
) 
```




<hr>



### function DEMOWinClearWindow 

```C++
void DEMOWinClearWindow (
    struct  STRUCT_DEMOWIN * handle
) 
```




<hr>



### function DEMOWinCloseWindow 

```C++
void DEMOWinCloseWindow (
    struct  STRUCT_DEMOWIN * handle
) 
```




<hr>



### function DEMOWinCreateListWindow 

```C++
struct  STRUCT_LISTBOX * DEMOWinCreateListWindow (
    struct  STRUCT_LISTBOX * list,
    u16 x,
    u16 y
) 
```




<hr>



### function DEMOWinCreateMenuWindow 

```C++
struct  STRUCT_MENU * DEMOWinCreateMenuWindow (
    struct  STRUCT_MENU * menu,
    u16 x,
    u16 y
) 
```




<hr>



### function DEMOWinCreateWindow 

```C++
struct  STRUCT_DEMOWIN * DEMOWinCreateWindow (
    s32 x1,
    s32 y1,
    s32 x2,
    s32 y2,
    char * caption,
    u16 scroll,
    void * func
) 
```




<hr>



### function DEMOWinDestroyListWindow 

```C++
void DEMOWinDestroyListWindow (
    struct  STRUCT_LISTBOX * list
) 
```




<hr>



### function DEMOWinDestroyMenuWindow 

```C++
void DEMOWinDestroyMenuWindow (
    struct  STRUCT_MENU * menu
) 
```




<hr>



### function DEMOWinDestroyWindow 

```C++
void DEMOWinDestroyWindow (
    struct  STRUCT_DEMOWIN * handle
) 
```




<hr>



### function DEMOWinInit 

```C++
void DEMOWinInit () 
```




<hr>



### function DEMOWinListMoveCursor 

```C++
s32 DEMOWinListMoveCursor (
    struct  STRUCT_LISTBOX * list,
    u32 dir
) 
```




<hr>



### function DEMOWinListScrollList 

```C++
s32 DEMOWinListScrollList (
    struct  STRUCT_LISTBOX * list,
    u32 dir
) 
```




<hr>



### function DEMOWinListSetCursor 

```C++
void DEMOWinListSetCursor (
    struct  STRUCT_LISTBOX * list,
    int x
) 
```




<hr>



### function DEMOWinLogPrintf 

```C++
void DEMOWinLogPrintf (
    struct  STRUCT_DEMOWIN * handle,
    char * fmt,
    ...
) 
```




<hr>



### function DEMOWinMenuChild 

```C++
u32 DEMOWinMenuChild (
    struct  STRUCT_MENU * menu,
    int child_flag
) 
```




<hr>



### function DEMOWinOpenWindow 

```C++
void DEMOWinOpenWindow (
    struct  STRUCT_DEMOWIN * handle
) 
```




<hr>



### function DEMOWinPadInit 

```C++
void DEMOWinPadInit (
    DEMOWinPadInfo * p
) 
```




<hr>



### function DEMOWinPadRead 

```C++
void DEMOWinPadRead (
    DEMOWinPadInfo * p
) 
```




<hr>



### function DEMOWinPrintfXY 

```C++
void DEMOWinPrintfXY (
    struct  STRUCT_DEMOWIN * handle,
    u16 col,
    u16 row,
    char * fmt,
    ...
) 
```




<hr>



### function DEMOWinRefresh 

```C++
void DEMOWinRefresh () 
```




<hr>



### function DEMOWinResetRepeat 

```C++
void DEMOWinResetRepeat () 
```




<hr>



### function DEMOWinScrollWindow 

```C++
void DEMOWinScrollWindow (
    struct  STRUCT_DEMOWIN * handle,
    u32 dir
) 
```




<hr>



### function DEMOWinSendToBack 

```C++
void DEMOWinSendToBack (
    struct  STRUCT_DEMOWIN * handle
) 
```




<hr>



### function DEMOWinSetRepeat 

```C++
void DEMOWinSetRepeat (
    u32 threshold,
    u32 rate
) 
```




<hr>



### function DEMOWinSetWindowColor 

```C++
void DEMOWinSetWindowColor (
    struct  STRUCT_DEMOWIN * handle,
    enum  DEMOWinItem item,
    u8 r,
    u8 g,
    u8 b,
    u8 a
) 
```




<hr>
## Public Static Functions Documentation




### function \_\_DEMOWinList\_refresh\_list 

```C++
static void __DEMOWinList_refresh_list (
    struct  STRUCT_DEMOWIN * w
) 
```




<hr>



### function \_\_DEMOWinMenu\_get\_user\_input 

```C++
static u16 __DEMOWinMenu_get_user_input (
    DEMOWinPadInfo * p
) 
```




<hr>



### function \_\_DEMOWinMenu\_refesh\_menu 

```C++
static void __DEMOWinMenu_refesh_menu (
    struct  STRUCT_DEMOWIN * w
) 
```




<hr>



### function \_\_DEMOWin\_add\_node 

```C++
static void __DEMOWin_add_node (
    struct  STRUCT_DEMOWIN * handle
) 
```




<hr>



### function \_\_DEMOWin\_delete\_node 

```C++
static void __DEMOWin_delete_node (
    struct  STRUCT_DEMOWIN * handle
) 
```




<hr>



### function \_\_DEMOWin\_puts\_n 

```C++
static void __DEMOWin_puts_n (
    s16 x,
    s16 y,
    s16 z,
    u16 n,
    char * string
) 
```




<hr>



### function \_\_DEMOWin\_puts\_n 

```C++
static void __DEMOWin_puts_n (
    s16 x,
    signed  s16 y,
    signed  short z,
    u16 n,
    char * string
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/demo/DEMOWin.c`

