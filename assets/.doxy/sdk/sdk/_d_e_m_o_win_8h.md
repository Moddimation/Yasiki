

# File DEMOWin.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**demo**](dir_331bf99e07843061bc97f5d482e7f04d.md) **>** [**DEMOWin.h**](_d_e_m_o_win_8h.md)

[Go to the source code of this file](_d_e_m_o_win_8h_source.md)


















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**STRUCT\_DEMOWIN**](struct_s_t_r_u_c_t___d_e_m_o_w_i_n.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| enum  | [**DEMOWinItem**](#enum-demowinitem)  <br> |




















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



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**DEMOWIN\_FLAGS\_INIT**](_d_e_m_o_win_8h.md#define-demowin_flags_init)  `(1 &lt;&lt; 0)`<br> |
| define  | [**DEMOWIN\_FLAGS\_OPENED**](_d_e_m_o_win_8h.md#define-demowin_flags_opened)  `(1 &lt;&lt; 1)`<br> |

## Public Types Documentation




### enum DEMOWinItem 

```C++
enum DEMOWinItem {
    DEMOWIN_ITEM_CAP,
    DEMOWIN_ITEM_BKGND,
    DEMOWIN_ITEM_BORDER,
    DEMOWIN_ITEM_DEFAULT
};
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
## Macro Definition Documentation





### define DEMOWIN\_FLAGS\_INIT 

```C++
#define DEMOWIN_FLAGS_INIT `(1 << 0)`
```




<hr>



### define DEMOWIN\_FLAGS\_OPENED 

```C++
#define DEMOWIN_FLAGS_OPENED `(1 << 1)`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/demo/DEMOWin.h`

