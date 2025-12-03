

# File demo.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**demo.h**](demo_8h.md)

[Go to the documentation of this file](demo_8h.md)


```C++
#ifndef _DOLPHIN_DEMO_H_
#define _DOLPHIN_DEMO_H_

#include <dolphin/gx.h>
#include <dolphin/pad.h>

struct STRUCT_MENU_ITEM
{
    char*               name;                                         
    u32                 flags;                                        
    void                (*function) (struct STRUCT_MENU*, u32, u32*); 
    struct STRUCT_MENU* link;                                         
};

struct STRUCT_MENU
{
    char*                    title;                                   
    struct STRUCT_DEMOWIN*   handle;                                  
    struct STRUCT_MENU_ITEM* items;                                   
    s32                      max_display_items;                       
    u32                      flags;                                   
    void                     (*cb_open) (struct STRUCT_MENU*, u32);   
    void                     (*cb_move) (struct STRUCT_MENU*, u32);   
    void                     (*cb_select) (struct STRUCT_MENU*, u32); 
    void                     (*cb_cancel) (struct STRUCT_MENU*, u32); 
    s32                      num_display_items;                       
    s32                      num_items;                               
    u32                      max_str_len;                             
    s32                      curr_pos;                                
    s32                      display_pos;                             
};

typedef struct
{
    PADStatus pads[4];                                                
    u32       button[4];                                              
    u32       old_button[4];                                          
    u32       changed_button[4];                                      
    u32       repeat_button[4];                                       
    u32       repeat_ctr[4];                                          
} DEMOWinPadInfo;

struct STRUCT_LISTBOX_ITEM
{
    char* name;  
    u32   flags; 
};

struct STRUCT_LISTBOX
{
    char*                       title;             
    struct STRUCT_DEMOWIN*      handle;            
    struct STRUCT_LISTBOX_ITEM* items;             
    s32                         max_display_items; 
    u32                         flags;             
    s32                         num_display_items; 
    s32                         num_items;   
    u32                         max_str_len; 
    s32                         curr_pos;    
    s32                         display_pos; 
    int                         cursor_state; 
};

extern u32 DEMOFontBitmap[768];

#include <dolphin/demo/DEMOInit.h>
#include <dolphin/demo/DEMOPad.h>
#include <dolphin/demo/DEMOPuts.h>
#include <dolphin/demo/DEMOStats.h>
#include <dolphin/demo/DEMOWin.h>

// unsorted externs
extern void DEMOPrintf (s16 x, s16 y, s16 priority, char* str, ...);

extern struct _GXRenderModeObj* DEMOGetRenderModeObj ();

#endif // _DOLPHIN_DEMO_H_
```


