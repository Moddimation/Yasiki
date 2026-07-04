

# File GXCpu2Efb.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**gx**](dir_7aad653e595702d688ea3e342b8a405d.md) **>** [**GXCpu2Efb.h**](_g_x_cpu2_efb_8h.md)

[Go to the documentation of this file](_g_x_cpu2_efb_8h.md)


```C++
#ifndef _DOLPHIN_GX_GXCPU2EFB_H_
#define _DOLPHIN_GX_GXCPU2EFB_H_

#include <dolphin/gx/GXEnum.h>

#ifdef __cplusplus
extern "C"
{
#endif

void GXPokeAlphaMode (GXCompare func, u8 threshold);
void GXPokeAlphaRead (GXAlphaReadMode mode);
void GXPokeAlphaUpdate (GXBool update_enable);
void GXPokeBlendMode (GXBlendMode   type,
                      GXBlendFactor src_factor,
                      GXBlendFactor dst_factor,
                      GXLogicOp     op);
void GXPokeColorUpdate (GXBool update_enable);
void GXPokeDstAlpha (GXBool enable, u8 alpha);
void GXPokeDither (GXBool dither);
void GXPokeZMode (GXBool compare_enable, GXCompare func, GXBool update_enable);
void GXPeekARGB (u16 x, u16 y, u32* color);
void GXPokeARGB (u16 x, u16 y, u32 color);
void GXPeekZ (u16 x, u16 y, u32* z);
void GXPokeZ (u16 x, u16 y, u32 z);
u32  GXCompressZ16 (u32 z24, GXZFmt16 zfmt);
u32  GXDecompressZ16 (u32 z16, GXZFmt16 zfmt);

#ifdef __cplusplus
}
#endif

#endif
```


