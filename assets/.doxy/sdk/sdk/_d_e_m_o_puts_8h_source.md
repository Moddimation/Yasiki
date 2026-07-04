

# File DEMOPuts.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**demo**](dir_331bf99e07843061bc97f5d482e7f04d.md) **>** [**DEMOPuts.h**](_d_e_m_o_puts_8h.md)

[Go to the documentation of this file](_d_e_m_o_puts_8h.md)


```C++
#ifndef _DOLPHIN_DEMOPUTS_H_
#define _DOLPHIN_DEMOPUTS_H_

#include <dolphin/gx/GXEnum.h>
#include <types.h>

typedef enum
{
    DMTF_POINTSAMPLE,
    DMTF_BILERP
} DMTexFlt;

typedef enum
{
    DM_FT_OPQ,
    DM_FT_RVS,
    DM_FT_XLU
} DMFontType;

void                 DEMOSetFontType (DMFontType attr);
void                 DEMOLoadFont (GXTexMapID texMap, GXTexMtx texMtx, DMTexFlt texFlt);
void                 DEMOSetupScrnSpc (s32 width, long height, float depth);
void                 DEMOInitCaption (s32 font_type, long width, long height);
void                 DEMOPuts (s16 x, s16 y, s16 z, char* string);
void                 DEMOPrintf (s16 x, s16 y, s16 z, char* fmt, ...);
struct OSFontHeader* DEMOInitROMFont ();
void                 DEMOSetROMFontSize (s16 size, s16 space);
int                  DEMORFPuts (s16 x, s16 y, s16 z, char* string);
int                  DEMORFPutsEx (s16 x, s16 y, s16 z, char* string, s16 maxWidth, int length);
int                  DEMORFPrintf (s16 x, s16 y, s16 z, char* fmt, ...);
char*                DEMODumpROMFont (char* string);
int                  DEMOGetRFTextWidth (char* string);

#endif
```


