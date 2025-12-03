

# File GXTexture.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**gx**](dir_7aad653e595702d688ea3e342b8a405d.md) **>** [**GXTexture.h**](_g_x_texture_8h.md)

[Go to the source code of this file](_g_x_texture_8h_source.md)



* `#include <dolphin/gx/GXEnum.h>`
* `#include <dolphin/gx/GXStruct.h>`

















## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**GXTexRegion**](_g_x_struct_8h.md#typedef-gxtexregion) \*(\* | [**GXTexRegionCallback**](#typedef-gxtexregioncallback)  <br> |
| typedef [**GXTlutRegion**](_g_x_struct_8h.md#typedef-gxtlutregion) \*(\* | [**GXTlutRegionCallback**](#typedef-gxtlutregioncallback)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**u32**](types_8h.md#typedef-u32) | [**GXGetTexBufferSize**](#function-gxgettexbuffersize) ([**u16**](types_8h.md#typedef-u16) width, [**u16**](types_8h.md#typedef-u16) height, [**u32**](types_8h.md#typedef-u32) format, [**u8**](types_8h.md#typedef-u8) mipmap, [**u8**](types_8h.md#typedef-u8) max\_lod) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**GXGetTexObjUserData**](#function-gxgettexobjuserdata) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**GXTexObj**](_g_x_struct_8h.md#typedef-gxtexobj) \* obj) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXInitTexCacheRegion**](#function-gxinittexcacheregion) ([**GXTexRegion**](_g_x_struct_8h.md#typedef-gxtexregion) \* region, [**u8**](types_8h.md#typedef-u8) is\_32b\_mipmap, [**u32**](types_8h.md#typedef-u32) tmem\_even, [**GXTexCacheSize**](_g_x_enum_8h.md#typedef-gxtexcachesize) size\_even, [**u32**](types_8h.md#typedef-u32) tmem\_odd, [**GXTexCacheSize**](_g_x_enum_8h.md#typedef-gxtexcachesize) size\_odd) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXInitTexObj**](#function-gxinittexobj) ([**GXTexObj**](_g_x_struct_8h.md#typedef-gxtexobj) \* obj, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* image\_ptr, [**u16**](types_8h.md#typedef-u16) width, [**u16**](types_8h.md#typedef-u16) height, [**GXTexFmt**](_g_x_enum_8h.md#typedef-gxtexfmt) format, [**GXTexWrapMode**](_g_x_enum_8h.md#typedef-gxtexwrapmode) wrap\_s, [**GXTexWrapMode**](_g_x_enum_8h.md#typedef-gxtexwrapmode) wrap\_t, [**u8**](types_8h.md#typedef-u8) mipmap) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXInitTexObjCI**](#function-gxinittexobjci) ([**GXTexObj**](_g_x_struct_8h.md#typedef-gxtexobj) \* obj, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* image\_ptr, [**u16**](types_8h.md#typedef-u16) width, [**u16**](types_8h.md#typedef-u16) height, [**GXCITexFmt**](_g_x_enum_8h.md#typedef-gxcitexfmt) format, [**GXTexWrapMode**](_g_x_enum_8h.md#typedef-gxtexwrapmode) wrap\_s, [**GXTexWrapMode**](_g_x_enum_8h.md#typedef-gxtexwrapmode) wrap\_t, [**u8**](types_8h.md#typedef-u8) mipmap, [**u32**](types_8h.md#typedef-u32) tlut\_name) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXInitTexObjData**](#function-gxinittexobjdata) ([**GXTexObj**](_g_x_struct_8h.md#typedef-gxtexobj) \* obj, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* image\_ptr) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXInitTexObjLOD**](#function-gxinittexobjlod) ([**GXTexObj**](_g_x_struct_8h.md#typedef-gxtexobj) \* obj, [**GXTexFilter**](_g_x_enum_8h.md#typedef-gxtexfilter) min\_filt, [**GXTexFilter**](_g_x_enum_8h.md#typedef-gxtexfilter) mag\_filt, [**f32**](types_8h.md#typedef-f32) min\_lod, [**f32**](types_8h.md#typedef-f32) max\_lod, [**f32**](types_8h.md#typedef-f32) lod\_bias, [**GXBool**](_g_x_enum_8h.md#typedef-gxbool) bias\_clamp, [**GXBool**](_g_x_enum_8h.md#typedef-gxbool) do\_edge\_lod, [**GXAnisotropy**](_g_x_enum_8h.md#typedef-gxanisotropy) max\_aniso) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXInitTexObjTlut**](#function-gxinittexobjtlut) ([**GXTexObj**](_g_x_struct_8h.md#typedef-gxtexobj) \* obj, [**u32**](types_8h.md#typedef-u32) tlut\_name) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXInitTexObjUserData**](#function-gxinittexobjuserdata) ([**GXTexObj**](_g_x_struct_8h.md#typedef-gxtexobj) \* obj, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* user\_data) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXInitTexObjWrapMode**](#function-gxinittexobjwrapmode) ([**GXTexObj**](_g_x_struct_8h.md#typedef-gxtexobj) \* obj, [**GXTexWrapMode**](_g_x_enum_8h.md#typedef-gxtexwrapmode) s, [**GXTexWrapMode**](_g_x_enum_8h.md#typedef-gxtexwrapmode) t) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXInitTexPreLoadRegion**](#function-gxinittexpreloadregion) ([**GXTexRegion**](_g_x_struct_8h.md#typedef-gxtexregion) \* region, [**u32**](types_8h.md#typedef-u32) tmem\_even, [**u32**](types_8h.md#typedef-u32) size\_even, [**u32**](types_8h.md#typedef-u32) tmem\_odd, [**u32**](types_8h.md#typedef-u32) size\_odd) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXInitTlutObj**](#function-gxinittlutobj) ([**GXTlutObj**](_g_x_struct_8h.md#typedef-gxtlutobj) \* tlut\_obj, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* lut, [**GXTlutFmt**](_g_x_enum_8h.md#typedef-gxtlutfmt) fmt, [**u16**](types_8h.md#typedef-u16) n\_entries) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXInitTlutRegion**](#function-gxinittlutregion) ([**GXTlutRegion**](_g_x_struct_8h.md#typedef-gxtlutregion) \* region, [**u32**](types_8h.md#typedef-u32) tmem\_addr, [**GXTlutSize**](_g_x_enum_8h.md#typedef-gxtlutsize) tlut\_size) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXInvalidateTexAll**](#function-gxinvalidatetexall) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXInvalidateTexRegion**](#function-gxinvalidatetexregion) ([**GXTexRegion**](_g_x_struct_8h.md#typedef-gxtexregion) \* region) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXLoadTexObj**](#function-gxloadtexobj) ([**GXTexObj**](_g_x_struct_8h.md#typedef-gxtexobj) \* obj, [**GXTexMapID**](_g_x_enum_8h.md#typedef-gxtexmapid) id) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXLoadTexObjPreLoaded**](#function-gxloadtexobjpreloaded) ([**GXTexObj**](_g_x_struct_8h.md#typedef-gxtexobj) \* obj, [**GXTexRegion**](_g_x_struct_8h.md#typedef-gxtexregion) \* region, [**GXTexMapID**](_g_x_enum_8h.md#typedef-gxtexmapid) id) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXLoadTlut**](#function-gxloadtlut) ([**GXTlutObj**](_g_x_struct_8h.md#typedef-gxtlutobj) \* tlut\_obj, [**u32**](types_8h.md#typedef-u32) tlut\_name) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXPreLoadEntireTexture**](#function-gxpreloadentiretexture) ([**GXTexObj**](_g_x_struct_8h.md#typedef-gxtexobj) \* tex\_obj, [**GXTexRegion**](_g_x_struct_8h.md#typedef-gxtexregion) \* region) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetTexCoordBias**](#function-gxsettexcoordbias) ([**GXTexCoordID**](_g_x_enum_8h.md#typedef-gxtexcoordid) coord, [**u8**](types_8h.md#typedef-u8) s\_enable, [**u8**](types_8h.md#typedef-u8) t\_enable) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetTexCoordCylWrap**](#function-gxsettexcoordcylwrap) ([**GXTexCoordID**](_g_x_enum_8h.md#typedef-gxtexcoordid) coord, [**u8**](types_8h.md#typedef-u8) s\_enable, [**u8**](types_8h.md#typedef-u8) t\_enable) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetTexCoordScaleManually**](#function-gxsettexcoordscalemanually) ([**GXTexCoordID**](_g_x_enum_8h.md#typedef-gxtexcoordid) coord, [**u8**](types_8h.md#typedef-u8) enable, [**u16**](types_8h.md#typedef-u16) ss, [**u16**](types_8h.md#typedef-u16) ts) <br> |
|  [**GXTexRegionCallback**](_g_x_texture_8h.md#typedef-gxtexregioncallback) | [**GXSetTexRegionCallback**](#function-gxsettexregioncallback) ([**GXTexRegionCallback**](_g_x_texture_8h.md#typedef-gxtexregioncallback) f) <br> |
|  [**GXTlutRegionCallback**](_g_x_texture_8h.md#typedef-gxtlutregioncallback) | [**GXSetTlutRegionCallback**](#function-gxsettlutregioncallback) ([**GXTlutRegionCallback**](_g_x_texture_8h.md#typedef-gxtlutregioncallback) f) <br> |




























## Public Types Documentation




### typedef GXTexRegionCallback 

```C++
typedef GXTexRegion *(* GXTexRegionCallback) (GXTexObj *t_obj, GXTexMapID id);
```




<hr>



### typedef GXTlutRegionCallback 

```C++
typedef GXTlutRegion *(* GXTlutRegionCallback) (u32 idx);
```




<hr>
## Public Functions Documentation




### function GXGetTexBufferSize 

```C++
u32 GXGetTexBufferSize (
    u16 width,
    u16 height,
    u32 format,
    u8 mipmap,
    u8 max_lod
) 
```




<hr>



### function GXGetTexObjUserData 

```C++
void * GXGetTexObjUserData (
    const  GXTexObj * obj
) 
```




<hr>



### function GXInitTexCacheRegion 

```C++
void GXInitTexCacheRegion (
    GXTexRegion * region,
    u8 is_32b_mipmap,
    u32 tmem_even,
    GXTexCacheSize size_even,
    u32 tmem_odd,
    GXTexCacheSize size_odd
) 
```




<hr>



### function GXInitTexObj 

```C++
void GXInitTexObj (
    GXTexObj * obj,
    void * image_ptr,
    u16 width,
    u16 height,
    GXTexFmt format,
    GXTexWrapMode wrap_s,
    GXTexWrapMode wrap_t,
    u8 mipmap
) 
```




<hr>



### function GXInitTexObjCI 

```C++
void GXInitTexObjCI (
    GXTexObj * obj,
    void * image_ptr,
    u16 width,
    u16 height,
    GXCITexFmt format,
    GXTexWrapMode wrap_s,
    GXTexWrapMode wrap_t,
    u8 mipmap,
    u32 tlut_name
) 
```




<hr>



### function GXInitTexObjData 

```C++
void GXInitTexObjData (
    GXTexObj * obj,
    void * image_ptr
) 
```




<hr>



### function GXInitTexObjLOD 

```C++
void GXInitTexObjLOD (
    GXTexObj * obj,
    GXTexFilter min_filt,
    GXTexFilter mag_filt,
    f32 min_lod,
    f32 max_lod,
    f32 lod_bias,
    GXBool bias_clamp,
    GXBool do_edge_lod,
    GXAnisotropy max_aniso
) 
```




<hr>



### function GXInitTexObjTlut 

```C++
void GXInitTexObjTlut (
    GXTexObj * obj,
    u32 tlut_name
) 
```




<hr>



### function GXInitTexObjUserData 

```C++
void GXInitTexObjUserData (
    GXTexObj * obj,
    void * user_data
) 
```




<hr>



### function GXInitTexObjWrapMode 

```C++
void GXInitTexObjWrapMode (
    GXTexObj * obj,
    GXTexWrapMode s,
    GXTexWrapMode t
) 
```




<hr>



### function GXInitTexPreLoadRegion 

```C++
void GXInitTexPreLoadRegion (
    GXTexRegion * region,
    u32 tmem_even,
    u32 size_even,
    u32 tmem_odd,
    u32 size_odd
) 
```




<hr>



### function GXInitTlutObj 

```C++
void GXInitTlutObj (
    GXTlutObj * tlut_obj,
    void * lut,
    GXTlutFmt fmt,
    u16 n_entries
) 
```




<hr>



### function GXInitTlutRegion 

```C++
void GXInitTlutRegion (
    GXTlutRegion * region,
    u32 tmem_addr,
    GXTlutSize tlut_size
) 
```




<hr>



### function GXInvalidateTexAll 

```C++
void GXInvalidateTexAll (
    void
) 
```




<hr>



### function GXInvalidateTexRegion 

```C++
void GXInvalidateTexRegion (
    GXTexRegion * region
) 
```




<hr>



### function GXLoadTexObj 

```C++
void GXLoadTexObj (
    GXTexObj * obj,
    GXTexMapID id
) 
```




<hr>



### function GXLoadTexObjPreLoaded 

```C++
void GXLoadTexObjPreLoaded (
    GXTexObj * obj,
    GXTexRegion * region,
    GXTexMapID id
) 
```




<hr>



### function GXLoadTlut 

```C++
void GXLoadTlut (
    GXTlutObj * tlut_obj,
    u32 tlut_name
) 
```




<hr>



### function GXPreLoadEntireTexture 

```C++
void GXPreLoadEntireTexture (
    GXTexObj * tex_obj,
    GXTexRegion * region
) 
```




<hr>



### function GXSetTexCoordBias 

```C++
void GXSetTexCoordBias (
    GXTexCoordID coord,
    u8 s_enable,
    u8 t_enable
) 
```




<hr>



### function GXSetTexCoordCylWrap 

```C++
void GXSetTexCoordCylWrap (
    GXTexCoordID coord,
    u8 s_enable,
    u8 t_enable
) 
```




<hr>



### function GXSetTexCoordScaleManually 

```C++
void GXSetTexCoordScaleManually (
    GXTexCoordID coord,
    u8 enable,
    u16 ss,
    u16 ts
) 
```




<hr>



### function GXSetTexRegionCallback 

```C++
GXTexRegionCallback GXSetTexRegionCallback (
    GXTexRegionCallback f
) 
```




<hr>



### function GXSetTlutRegionCallback 

```C++
GXTlutRegionCallback GXSetTlutRegionCallback (
    GXTlutRegionCallback f
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/gx/GXTexture.h`

