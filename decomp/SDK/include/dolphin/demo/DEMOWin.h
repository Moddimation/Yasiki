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
    s32                    x1;                                  ///< 0x00
    s32                    y1;                                  ///< 0x04
    s32                    x2;                                  ///< 0x08
    s32                    y2;                                  ///< 0x0C
    u32                    priority;                            ///< 0x10
    u32                    flags;                               ///< 0x14
    u16                    x_cal;                               ///< 0x18
    u16                    y_cal;                               ///< 0x1A
    u16                    pixel_width;                         ///< 0x1C
    u16                    pixel_height;                        ///< 0x1E
    u16                    char_width;                          ///< 0x20
    u16                    char_height;                         ///< 0x22
    u16                    num_scroll_lines;                    ///< 0x24
    u16                    total_lines;                         ///< 0x26
    u16                    curr_output_line;                    ///< 0x28
    u16                    curr_output_col;                     ///< 0x2A
    u16                    curr_view_line;                      ///< 0x2C
    s16                    cursor_line;                         ///< 0x2E
    char*                  caption;                             ///< 0x30
    u16*                   buffer;                              ///< 0x34
    GXColor                bkgnd;                               ///< 0x38
    GXColor                cap;                                 ///< 0x3C
    GXColor                border;                              ///< 0x40
    void                   (*refresh) (struct STRUCT_DEMOWIN*); ///< 0x44
    struct STRUCT_DEMOWIN* next;                                ///< 0x48
    struct STRUCT_DEMOWIN* prev;                                ///< 0x4C
    void*                  parent;                              ///< 0x50
};
// functions
void                   DEMOWinInit ();
struct STRUCT_DEMOWIN* DEMOWinCreateWindow (
    s32 x1, s32 y1, s32 x2, s32 y2, char* caption, u16 scroll, void* func);
void DEMOWinDestroyWindow (struct STRUCT_DEMOWIN* handle);
void DEMOWinOpenWindow (struct STRUCT_DEMOWIN* handle);
void DEMOWinCloseWindow (struct STRUCT_DEMOWIN* handle);
void DEMOWinSetWindowColor (
    struct STRUCT_DEMOWIN* handle, enum DEMOWinItem item, u8 r, u8 g, u8 b, u8 a);
void DEMOWinLogPrintf (struct STRUCT_DEMOWIN* handle, char* fmt, ...);
void DEMOWinPrintfXY (
    struct STRUCT_DEMOWIN* handle, u16 col, u16 row, char* fmt, ...);
void                DEMOWinScrollWindow (struct STRUCT_DEMOWIN* handle, u32 dir);
void                DEMOWinBringToFront (struct STRUCT_DEMOWIN* handle);
void                DEMOWinSendToBack (struct STRUCT_DEMOWIN* handle);
void                DEMOWinClearRow (struct STRUCT_DEMOWIN* handle, u16 row);
void                DEMOWinClearWindow (struct STRUCT_DEMOWIN* handle);
void                DEMOWinClearBuffer (struct STRUCT_DEMOWIN* handle);
void                DEMOWinRefresh ();
struct STRUCT_MENU* DEMOWinCreateMenuWindow (struct STRUCT_MENU* menu, u16 x, u16 y);
void                DEMOWinDestroyMenuWindow (struct STRUCT_MENU* menu);
u32                 DEMOWinMenuChild (struct STRUCT_MENU* menu, int child_flag);
void                DEMOWinPadInit (DEMOWinPadInfo* p);
void                DEMOWinPadRead (DEMOWinPadInfo* p);
void                DEMOWinSetRepeat (u32 threshold, u32 rate);
void                DEMOWinResetRepeat ();
struct STRUCT_LISTBOX* DEMOWinCreateListWindow (struct STRUCT_LISTBOX* list,
                                                u16                    x,
                                                u16                    y);
void                   DEMOWinDestroyListWindow (struct STRUCT_LISTBOX* list);
void                   DEMOWinListSetCursor (struct STRUCT_LISTBOX* list, int x);
s32                    DEMOWinListScrollList (struct STRUCT_LISTBOX* list, u32 dir);
s32                    DEMOWinListMoveCursor (struct STRUCT_LISTBOX* list, u32 dir);

#endif // _DOLPHIN_DEMOWIN_H_
