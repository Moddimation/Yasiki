#ifndef _DOLPHIN_DEMO_H_
#define _DOLPHIN_DEMO_H_

#include <dolphin/gx.h>
#include <dolphin/pad.h>
struct STRUCT_MENU_ITEM
{
    char*               name;                                         ///< 0x00
    u32                 flags;                                        ///< 0x04
    void                (*function) (struct STRUCT_MENU*, u32, u32*); ///< 0x08
    struct STRUCT_MENU* link;                                         ///< 0x0C
};
struct STRUCT_MENU
{
    char*                    title;                                   ///< 0x00
    struct STRUCT_DEMOWIN*   handle;                                  ///< 0x04
    struct STRUCT_MENU_ITEM* items;                                   ///< 0x08
    s32                      max_display_items;                       ///< 0x0C
    u32                      flags;                                   ///< 0x10
    void                     (*cb_open) (struct STRUCT_MENU*, u32);   ///< 0x14
    void                     (*cb_move) (struct STRUCT_MENU*, u32);   ///< 0x18
    void                     (*cb_select) (struct STRUCT_MENU*, u32); ///< 0x1C
    void                     (*cb_cancel) (struct STRUCT_MENU*, u32); ///< 0x20
    s32                      num_display_items;                       ///< 0x24
    s32                      num_items;                               ///< 0x28
    u32                      max_str_len;                             ///< 0x2C
    s32                      curr_pos;                                ///< 0x30
    s32                      display_pos;                             ///< 0x34
};
typedef struct
{
    struct PADStatus pads[4];                                         ///< 0x00
    u32              button[4];                                       ///< 0x30
    u32              old_button[4];                                   ///< 0x40
    u32              changed_button[4];                               ///< 0x50
    u32              repeat_button[4];                                ///< 0x60
    u32              repeat_ctr[4];                                   ///< 0x70
} DEMOWinPadInfo;
struct STRUCT_LISTBOX_ITEM
{
    char* name;  ///< 0x00                                    // offset 0x0, size 0x4
    u32   flags; ///< 0x04                                   // offset 0x4, size 0x4
};
struct STRUCT_LISTBOX
{
    char*                       title;  ///< 0x00             // offset 0x0, size 0x4
    struct STRUCT_DEMOWIN*      handle; ///< 0x04            // offset 0x4, size 0x4
    struct STRUCT_LISTBOX_ITEM* items;  ///< 0x08             // offset 0x8, size 0x4
    s32                         max_display_items; ///< 0x0C // offset 0xC, size 0x4
    u32                         flags;             ///< 0x10 // offset 0x10, size 0x4
    s32 num_display_items; ///< 0x14             // offset 0x14, size 0x4
    s32 num_items;         ///< 0x18                     // offset 0x18, size 0x4
    u32 max_str_len;       ///< 0x1C                   // offset 0x1C, size 0x4
    s32 curr_pos;          ///< 0x20                      // offset 0x20, size 0x4
    s32 display_pos;       ///< 0x24                   // offset 0x24, size 0x4
    int cursor_state;      ///< 0x28                  // offset 0x28, size 0x4
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
