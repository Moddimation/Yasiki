

# File GXGeometry.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**gx**](dir_7aad653e595702d688ea3e342b8a405d.md) **>** [**GXGeometry.h**](_g_x_geometry_8h.md)

[Go to the documentation of this file](_g_x_geometry_8h.md)


```C++
#ifndef _DOLPHIN_GX_GXGEOMETRY_H_
#define _DOLPHIN_GX_GXGEOMETRY_H_

#include <dolphin/gx/GXEnum.h>

#ifdef __cplusplus
extern "C"
{
#endif

void GXSetVtxDesc (GXAttr attr, GXAttrType type);
void GXSetVtxDescv (const GXVtxDescList* attrPtr);
void GXClearVtxDesc (void);
void GXSetVtxAttrFmt (GXVtxFmt vtxfmt, GXAttr attr, GXCompCnt cnt, GXCompType type, u8 frac);
void GXSetVtxAttrFmtv (GXVtxFmt vtxfmt, const GXVtxAttrFmtList* list);
void GXSetArray (GXAttr attr, const void* base_ptr, u8 stride);
void GXInvalidateVtxCache (void);
void GXSetTexCoordGen2 (GXTexCoordID dst_coord,
                        GXTexGenType func,
                        GXTexGenSrc  src_param,
                        u32          mtx,
                        GXBool       normalize,
                        u32          pt_texmtx);
void GXSetNumTexGens (u8 nTexGens);

static inline void
GXSetTexCoordGen (GXTexCoordID dst_coord, GXTexGenType func, GXTexGenSrc src_param, u32 mtx)
{
    GXSetTexCoordGen2 (dst_coord, func, src_param, mtx, GX_FALSE, GX_PTIDENTITY);
}

void GXBegin (GXPrimitive type, GXVtxFmt vtxfmt, u16 nverts);

static inline void
GXEnd (void)
{
#if DEBUG
    extern GXBool __GXinBegin;
    extern void   OSPanic (char* file, int line, char* msg, ...);
    if (!__GXinBegin)
    {
        OSPanic (__FILE__, 0x6D, "GXEnd: called without a GXBegin");
    }
    __GXinBegin = GX_FALSE;
#endif
}

void GXSetLineWidth (u8 width, GXTexOffset texOffsets);
void GXSetPointSize (u8 pointSize, GXTexOffset texOffsets);
void GXEnableTexOffsets (GXTexCoordID coord, u8 line_enable, u8 point_enable);

#ifdef __cplusplus
}
#endif

#endif
```


