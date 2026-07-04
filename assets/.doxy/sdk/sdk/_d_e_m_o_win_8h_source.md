

# File DEMOWin.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**demo**](dir_331bf99e07843061bc97f5d482e7f04d.md) **>** [**DEMOWin.h**](_d_e_m_o_win_8h.md)

[Go to the documentation of this file](_d_e_m_o_win_8h.md)


```C++
#ifndef _DOLPHIN_DEMOWIN_H_
#define _DOLPHIN_DEMOWIN_H_

enum DEMOWinItem
{
    DEMOWIN_ITEM_CAP,
    DEMOWIN_ITEM_BKGND,
    DEMOWIN_ITEM_BORDER,
    DEMOWIN_ITEM_DEFAULT
};

// flags
#define DEMOWIN_FLAGS_INIT   (1 << 0)
#define DEMOWIN_FLAGS_OPENED (1 << 1)

struct STRUCT_DEMOWIN
{
    s32                    x1;                                  
    s32                    y1;                                  
    s32                    x2;                                  
    s32                    y2;                                  
    u32                    priority;                            
    u32                    flags;                               
    u16                    x_cal;                               
    u16                    y_cal;                               
    u16                    pixel_width;                         
    u16                    pixel_height;                        
    u16                    char_width;                          
    u16                    char_height;                         
    u16                    num_scroll_lines;                    
    u16                    total_lines;                         
    u16                    curr_output_line;                    
    u16                    curr_output_col;                     
    u16                    curr_view_line;                      
    s16                    cursor_line;                         
    char*                  caption;                             
    u16*                   buffer;                              
    GXColor                bkgnd;                               
    GXColor                cap;                                 
    GXColor                border;                              
    void                   (*refresh) (struct STRUCT_DEMOWIN*); 
    struct STRUCT_DEMOWIN* next;                                
    struct STRUCT_DEMOWIN* prev;                                
    void*                  parent;                              
};

// functions
void                   DEMOWinInit ();
struct STRUCT_DEMOWIN* DEMOWinCreateWindow (s32   x1,
                                            s32   y1,
                                            s32   x2,
                                            s32   y2,
                                            char* caption,
                                            u16   scroll,
                                            void* func);
void                   DEMOWinDestroyWindow (struct STRUCT_DEMOWIN* handle);
void                   DEMOWinOpenWindow (struct STRUCT_DEMOWIN* handle);
void                   DEMOWinCloseWindow (struct STRUCT_DEMOWIN* handle);
void                   DEMOWinSetWindowColor (struct STRUCT_DEMOWIN* handle,
                                              enum DEMOWinItem       item,
                                              u8                     r,
                                              u8                     g,
                                              u8                     b,
                                              u8                     a);
void                   DEMOWinLogPrintf (struct STRUCT_DEMOWIN* handle, char* fmt, ...);
void DEMOWinPrintfXY (struct STRUCT_DEMOWIN* handle, u16 col, u16 row, char* fmt, ...);
void DEMOWinScrollWindow (struct STRUCT_DEMOWIN* handle, u32 dir);
void DEMOWinBringToFront (struct STRUCT_DEMOWIN* handle);
void DEMOWinSendToBack (struct STRUCT_DEMOWIN* handle);
void DEMOWinClearRow (struct STRUCT_DEMOWIN* handle, u16 row);
void DEMOWinClearWindow (struct STRUCT_DEMOWIN* handle);
void DEMOWinClearBuffer (struct STRUCT_DEMOWIN* handle);
void DEMOWinRefresh ();
struct STRUCT_MENU*    DEMOWinCreateMenuWindow (struct STRUCT_MENU* menu, u16 x, u16 y);
void                   DEMOWinDestroyMenuWindow (struct STRUCT_MENU* menu);
u32                    DEMOWinMenuChild (struct STRUCT_MENU* menu, int child_flag);
void                   DEMOWinPadInit (DEMOWinPadInfo* p);
void                   DEMOWinPadRead (DEMOWinPadInfo* p);
void                   DEMOWinSetRepeat (u32 threshold, u32 rate);
void                   DEMOWinResetRepeat ();
struct STRUCT_LISTBOX* DEMOWinCreateListWindow (struct STRUCT_LISTBOX* list, u16 x, u16 y);
void                   DEMOWinDestroyListWindow (struct STRUCT_LISTBOX* list);
void                   DEMOWinListSetCursor (struct STRUCT_LISTBOX* list, int x);
s32                    DEMOWinListScrollList (struct STRUCT_LISTBOX* list, u32 dir);
s32                    DEMOWinListMoveCursor (struct STRUCT_LISTBOX* list, u32 dir);

#endif // _DOLPHIN_DEMOWIN_H_
```


