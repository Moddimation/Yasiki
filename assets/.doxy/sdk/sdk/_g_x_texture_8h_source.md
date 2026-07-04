

# File GXTexture.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**gx**](dir_7aad653e595702d688ea3e342b8a405d.md) **>** [**GXTexture.h**](_g_x_texture_8h.md)

[Go to the documentation of this file](_g_x_texture_8h.md)


```C++
#ifndef _DOLPHIN_GX_GXTEXTURE_H_
#define _DOLPHIN_GX_GXTEXTURE_H_

#include <dolphin/gx/GXEnum.h>
#include <dolphin/gx/GXStruct.h>

#ifdef __cplusplus
extern "C"
{
#endif

typedef GXTexRegion*  (*GXTexRegionCallback) (GXTexObj* t_obj, GXTexMapID id);
typedef GXTlutRegion* (*GXTlutRegionCallback) (u32 idx);

u32   GXGetTexBufferSize (u16 width, u16 height, u32 format, u8 mipmap, u8 max_lod);
void  GXInitTexObj (GXTexObj*     obj,
                    void*         image_ptr,
                    u16           width,
                    u16           height,
                    GXTexFmt      format,
                    GXTexWrapMode wrap_s,
                    GXTexWrapMode wrap_t,
                    u8            mipmap);
void  GXInitTexObjCI (GXTexObj*     obj,
                      void*         image_ptr,
                      u16           width,
                      u16           height,
                      GXCITexFmt    format,
                      GXTexWrapMode wrap_s,
                      GXTexWrapMode wrap_t,
                      u8            mipmap,
                      u32           tlut_name);
void  GXInitTexObjLOD (GXTexObj*    obj,
                       GXTexFilter  min_filt,
                       GXTexFilter  mag_filt,
                       f32          min_lod,
                       f32          max_lod,
                       f32          lod_bias,
                       GXBool       bias_clamp,
                       GXBool       do_edge_lod,
                       GXAnisotropy max_aniso);
void  GXInitTexObjData (GXTexObj* obj, void* image_ptr);
void  GXInitTexObjWrapMode (GXTexObj* obj, GXTexWrapMode s, GXTexWrapMode t);
void  GXInitTexObjTlut (GXTexObj* obj, u32 tlut_name);
void  GXInitTexObjUserData (GXTexObj* obj, void* user_data);
void* GXGetTexObjUserData (const GXTexObj* obj);
void  GXLoadTexObjPreLoaded (GXTexObj* obj, GXTexRegion* region, GXTexMapID id);
void  GXLoadTexObj (GXTexObj* obj, GXTexMapID id);
void  GXInitTlutObj (GXTlutObj* tlut_obj, void* lut, GXTlutFmt fmt, u16 n_entries);
void  GXLoadTlut (GXTlutObj* tlut_obj, u32 tlut_name);
void  GXInitTexCacheRegion (GXTexRegion*   region,
                            u8             is_32b_mipmap,
                            u32            tmem_even,
                            GXTexCacheSize size_even,
                            u32            tmem_odd,
                            GXTexCacheSize size_odd);
void  GXInitTexPreLoadRegion (GXTexRegion* region,
                              u32          tmem_even,
                              u32          size_even,
                              u32          tmem_odd,
                              u32          size_odd);
void  GXInitTlutRegion (GXTlutRegion* region, u32 tmem_addr, GXTlutSize tlut_size);
void  GXInvalidateTexRegion (GXTexRegion* region);
void  GXInvalidateTexAll (void);
GXTexRegionCallback  GXSetTexRegionCallback (GXTexRegionCallback f);
GXTlutRegionCallback GXSetTlutRegionCallback (GXTlutRegionCallback f);
void                 GXPreLoadEntireTexture (GXTexObj* tex_obj, GXTexRegion* region);
void                 GXSetTexCoordScaleManually (GXTexCoordID coord, u8 enable, u16 ss, u16 ts);
void                 GXSetTexCoordCylWrap (GXTexCoordID coord, u8 s_enable, u8 t_enable);
void                 GXSetTexCoordBias (GXTexCoordID coord, u8 s_enable, u8 t_enable);

#ifdef __cplusplus
}
#endif

#endif
```


