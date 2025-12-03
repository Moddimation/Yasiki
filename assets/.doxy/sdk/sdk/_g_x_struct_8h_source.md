

# File GXStruct.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**gx**](dir_7aad653e595702d688ea3e342b8a405d.md) **>** [**GXStruct.h**](_g_x_struct_8h.md)

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


