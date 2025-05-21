

# File OSFont.h

[**File List**](files.md) **>** [**dolphin**](dir_f645f2e507aca82374da44bd9d3eb5ac.md) **>** [**os**](dir_c13ebdd3af764081039ea1aa77ad78f7.md) **>** [**OSFont.h**](_o_s_font_8h.md)

[Go to the documentation of this file](_o_s_font_8h.md)


```C++
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
    u16 fontType;                              
    u16 firstChar;                             
    u16 lastChar;                              
    u16 invalChar;                             
    u16 ascent;                                
    u16 descent;                               
    u16 width;                                 
    u16 leading;                               
    u16 cellWidth;                             
    u16 cellHeight;                            
    u32 sheetSize;                             
    u16 sheetFormat;                           
    u16 sheetColumn;                           
    u16 sheetRow;                              
    u16 sheetWidth;                            
    u16 sheetHeight;                           
    u16 widthTable;                            
    u32 sheetImage;                            
    u32 sheetFullSize;                         
    u8  c0;                                    
    u8  c1;                                    
    u8  c2;                                    
    u8  c3;                                    
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
```


