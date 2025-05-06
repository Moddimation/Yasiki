

# File GXStruct.h

[**File List**](files.md) **>** [**dolphin**](dir_8d73ddf10613ffd25a966cd68a313b8d.md) **>** [**gx**](dir_049675cf3b51aca8087b2c87edff05c3.md) **>** [**GXStruct.h**](_g_x_struct_8h.md)

[Go to the documentation of this file](_g_x_struct_8h.md)


```C++
#ifndef _DOLPHIN_GX_GXSTRUCT_H_
#define _DOLPHIN_GX_GXSTRUCT_H_

#include <dolphin/gx/GXEnum.h>
#include <dolphin/vi/vitypes.h>

#ifdef __cplusplus
extern "C"
{
#endif
typedef struct _GXRenderModeObj
{
    VITVMode  viTVmode;              
    u16       fbWidth;               
    u16       efbHeight;             
    u16       xfbHeight;             
    u16       viXOrigin;             
    u16       viYOrigin;             
    u16       viWidth;               
    u16       viHeight;              
    VIXFBMode xFBmode;               
    u8        field_rendering;       
    u8        aa;                    
    u8        sample_pattern[12][2]; 
    u8        vfilter[7];            
} GXRenderModeObj;

typedef struct _GXColor
{
    u8 r, g, b, a;
} GXColor;

typedef struct _GXColorS10
{
    s16 r, g, b, a;
} GXColorS10;

typedef struct _GXTexObj
{
    u32 dummy[8];
} GXTexObj;

typedef struct _GXLightObj
{
    u32 dummy[16];
} GXLightObj;

typedef struct _GXTexRegion
{
    u32 dummy[4];
} GXTexRegion;

typedef struct _GXTlutObj
{
    u32 dummy[3];
} GXTlutObj;

typedef struct _GXTlutRegion
{
    u32 dummy[4];
} GXTlutRegion;

typedef struct _GXFogAdjTable
{
    u16 r[10];
} GXFogAdjTable;

typedef struct _GXVtxDescList
{
    GXAttr     attr;
    GXAttrType type;
} GXVtxDescList;

typedef struct _GXVtxAttrFmtList
{
    GXAttr     attr;
    GXCompCnt  cnt;
    GXCompType type;
    u8         frac;
} GXVtxAttrFmtList;
#ifdef __cplusplus
}
#endif

#endif
```


