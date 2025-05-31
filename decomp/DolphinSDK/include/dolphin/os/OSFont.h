#ifndef _DOLPHIN_OSFONT_H_
#define _DOLPHIN_OSFONT_H_

#include <types.h>

#ifdef __cplusplus
extern "C"
{
#endif

#define OS_FONT_ENCODE_ANSI   0u
#define OS_FONT_ENCODE_SJIS   1u
#define OS_FONT_SIZE_ANSI     (288 + 131072)   // 9 sheets
#define OS_FONT_SIZE_SJIS     (3840 + 1179648) // 1 sheet
#define OS_FONT_ROM_SIZE_ANSI 0x03000
#define OS_FONT_ROM_SIZE_SJIS 0x4D000

typedef struct OSFontHeader
{
    u16 fontType;                              ///< 0x00
    u16 firstChar;                             ///< 0x02
    u16 lastChar;                              ///< 0x04
    u16 invalChar;                             ///< 0x06
    u16 ascent;                                ///< 0x08
    u16 descent;                               ///< 0x0A
    u16 width;                                 ///< 0x0C
    u16 leading;                               ///< 0x0E
    u16 cellWidth;                             ///< 0x10
    u16 cellHeight;                            ///< 0x14
    u32 sheetSize;                             ///< 0x14
    u16 sheetFormat;                           ///< 0x18
    u16 sheetColumn;                           ///< 0x1A
    u16 sheetRow;                              ///< 0X1C
    u16 sheetWidth;                            ///< 0X1E
    u16 sheetHeight;                           ///< 0x20
    u16 widthTable;                            ///< 0x22
    u32 sheetImage;                            ///< 0x24
    u32 sheetFullSize;                         ///< 0x28
    u8  c0;                                    ///< 0x2C
    u8  c1;                                    ///< 0x2D
    u8  c2;                                    ///< 0x2E
    u8  c3;                                    ///< 0x2F
} OSFontHeader;

u16   OSGetFontEncode (void);
BOOL  OSInitFont (OSFontHeader* fontData);
u32   OSLoadFont (OSFontHeader* fontData, void* temp);
char* OSGetFontTexture (char* string, void** image, s32* x, s32* y, s32* width);
char* OSGetFontWidth (char* string, s32* width);
char* OSGetFontTexel (char* string, void* image, s32 pos, s32 stride, s32* width);

#ifdef __cplusplus
}
#endif

#endif
