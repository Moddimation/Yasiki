

# File GXGet.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**gx**](dir_7aad653e595702d688ea3e342b8a405d.md) **>** [**GXGet.h**](_g_x_get_8h.md)

[Go to the source code of this file](_g_x_get_8h_source.md)



* `#include <dolphin/gx/GXEnum.h>`
* `#include <dolphin/gx/GXStruct.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXGetCullMode**](#function-gxgetcullmode) ([**GXCullMode**](_g_x_enum_8h.md#typedef-gxcullmode) \* mode) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXGetLightAttnA**](#function-gxgetlightattna) ([**GXLightObj**](_g_x_struct_8h.md#typedef-gxlightobj) \* lt\_obj, [**f32**](types_8h.md#typedef-f32) \* a0, [**f32**](types_8h.md#typedef-f32) \* a1, [**f32**](types_8h.md#typedef-f32) \* a2) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXGetLightAttnK**](#function-gxgetlightattnk) ([**GXLightObj**](_g_x_struct_8h.md#typedef-gxlightobj) \* lt\_obj, [**f32**](types_8h.md#typedef-f32) \* k0, [**f32**](types_8h.md#typedef-f32) \* k1, [**f32**](types_8h.md#typedef-f32) \* k2) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXGetLightColor**](#function-gxgetlightcolor) ([**GXLightObj**](_g_x_struct_8h.md#typedef-gxlightobj) \* lt\_obj, [**GXColor**](_g_x_struct_8h.md#typedef-gxcolor) \* color) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXGetLightDir**](#function-gxgetlightdir) ([**GXLightObj**](_g_x_struct_8h.md#typedef-gxlightobj) \* lt\_obj, [**f32**](types_8h.md#typedef-f32) \* nx, [**f32**](types_8h.md#typedef-f32) \* ny, [**f32**](types_8h.md#typedef-f32) \* nz) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXGetLightPos**](#function-gxgetlightpos) ([**GXLightObj**](_g_x_struct_8h.md#typedef-gxlightobj) \* lt\_obj, [**f32**](types_8h.md#typedef-f32) \* x, [**f32**](types_8h.md#typedef-f32) \* y, [**f32**](types_8h.md#typedef-f32) \* z) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXGetLineWidth**](#function-gxgetlinewidth) ([**u8**](types_8h.md#typedef-u8) \* width, [**GXTexOffset**](_g_x_enum_8h.md#typedef-gxtexoffset) \* texOffsets) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXGetPointSize**](#function-gxgetpointsize) ([**u8**](types_8h.md#typedef-u8) \* pointSize, [**GXTexOffset**](_g_x_enum_8h.md#typedef-gxtexoffset) \* texOffsets) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXGetProjectionv**](#function-gxgetprojectionv) ([**f32**](types_8h.md#typedef-f32) \* ptr) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXGetScissor**](#function-gxgetscissor) ([**u32**](types_8h.md#typedef-u32) \* left, [**u32**](types_8h.md#typedef-u32) \* top, [**u32**](types_8h.md#typedef-u32) \* wd, [**u32**](types_8h.md#typedef-u32) \* ht) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXGetTexObjAll**](#function-gxgettexobjall) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**GXTexObj**](_g_x_struct_8h.md#typedef-gxtexobj) \* obj, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \*\* image\_ptr, [**u16**](types_8h.md#typedef-u16) \* width, [**u16**](types_8h.md#typedef-u16) \* height, [**GXTexFmt**](_g_x_enum_8h.md#typedef-gxtexfmt) \* format, [**GXTexWrapMode**](_g_x_enum_8h.md#typedef-gxtexwrapmode) \* wrap\_s, [**GXTexWrapMode**](_g_x_enum_8h.md#typedef-gxtexwrapmode) \* wrap\_t, [**u8**](types_8h.md#typedef-u8) \* mipmap) <br> |
|  [**GXBool**](_g_x_enum_8h.md#typedef-gxbool) | [**GXGetTexObjBiasClamp**](#function-gxgettexobjbiasclamp) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**GXTexObj**](_g_x_struct_8h.md#typedef-gxtexobj) \* tex\_obj) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**GXGetTexObjData**](#function-gxgettexobjdata) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**GXTexObj**](_g_x_struct_8h.md#typedef-gxtexobj) \* to) <br> |
|  [**GXBool**](_g_x_enum_8h.md#typedef-gxbool) | [**GXGetTexObjEdgeLOD**](#function-gxgettexobjedgelod) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**GXTexObj**](_g_x_struct_8h.md#typedef-gxtexobj) \* tex\_obj) <br> |
|  [**GXTexFmt**](_g_x_enum_8h.md#typedef-gxtexfmt) | [**GXGetTexObjFmt**](#function-gxgettexobjfmt) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**GXTexObj**](_g_x_struct_8h.md#typedef-gxtexobj) \* to) <br> |
|  [**u16**](types_8h.md#typedef-u16) | [**GXGetTexObjHeight**](#function-gxgettexobjheight) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**GXTexObj**](_g_x_struct_8h.md#typedef-gxtexobj) \* to) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXGetTexObjLODAll**](#function-gxgettexobjlodall) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**GXTexObj**](_g_x_struct_8h.md#typedef-gxtexobj) \* tex\_obj, [**GXTexFilter**](_g_x_enum_8h.md#typedef-gxtexfilter) \* min\_filt, [**GXTexFilter**](_g_x_enum_8h.md#typedef-gxtexfilter) \* mag\_filt, [**f32**](types_8h.md#typedef-f32) \* min\_lod, [**f32**](types_8h.md#typedef-f32) \* max\_lod, [**f32**](types_8h.md#typedef-f32) \* lod\_bias, [**u8**](types_8h.md#typedef-u8) \* bias\_clamp, [**u8**](types_8h.md#typedef-u8) \* do\_edge\_lod, [**GXAnisotropy**](_g_x_enum_8h.md#typedef-gxanisotropy) \* max\_aniso) <br> |
|  [**f32**](types_8h.md#typedef-f32) | [**GXGetTexObjLODBias**](#function-gxgettexobjlodbias) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**GXTexObj**](_g_x_struct_8h.md#typedef-gxtexobj) \* tex\_obj) <br> |
|  [**GXTexFilter**](_g_x_enum_8h.md#typedef-gxtexfilter) | [**GXGetTexObjMagFilt**](#function-gxgettexobjmagfilt) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**GXTexObj**](_g_x_struct_8h.md#typedef-gxtexobj) \* tex\_obj) <br> |
|  [**GXAnisotropy**](_g_x_enum_8h.md#typedef-gxanisotropy) | [**GXGetTexObjMaxAniso**](#function-gxgettexobjmaxaniso) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**GXTexObj**](_g_x_struct_8h.md#typedef-gxtexobj) \* tex\_obj) <br> |
|  [**f32**](types_8h.md#typedef-f32) | [**GXGetTexObjMaxLOD**](#function-gxgettexobjmaxlod) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**GXTexObj**](_g_x_struct_8h.md#typedef-gxtexobj) \* tex\_obj) <br> |
|  [**GXTexFilter**](_g_x_enum_8h.md#typedef-gxtexfilter) | [**GXGetTexObjMinFilt**](#function-gxgettexobjminfilt) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**GXTexObj**](_g_x_struct_8h.md#typedef-gxtexobj) \* tex\_obj) <br> |
|  [**f32**](types_8h.md#typedef-f32) | [**GXGetTexObjMinLOD**](#function-gxgettexobjminlod) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**GXTexObj**](_g_x_struct_8h.md#typedef-gxtexobj) \* tex\_obj) <br> |
|  [**GXBool**](_g_x_enum_8h.md#typedef-gxbool) | [**GXGetTexObjMipMap**](#function-gxgettexobjmipmap) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**GXTexObj**](_g_x_struct_8h.md#typedef-gxtexobj) \* to) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**GXGetTexObjTlut**](#function-gxgettexobjtlut) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**GXTexObj**](_g_x_struct_8h.md#typedef-gxtexobj) \* tex\_obj) <br> |
|  [**u16**](types_8h.md#typedef-u16) | [**GXGetTexObjWidth**](#function-gxgettexobjwidth) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**GXTexObj**](_g_x_struct_8h.md#typedef-gxtexobj) \* to) <br> |
|  [**GXTexWrapMode**](_g_x_enum_8h.md#typedef-gxtexwrapmode) | [**GXGetTexObjWrapS**](#function-gxgettexobjwraps) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**GXTexObj**](_g_x_struct_8h.md#typedef-gxtexobj) \* to) <br> |
|  [**GXTexWrapMode**](_g_x_enum_8h.md#typedef-gxtexwrapmode) | [**GXGetTexObjWrapT**](#function-gxgettexobjwrapt) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**GXTexObj**](_g_x_struct_8h.md#typedef-gxtexobj) \* to) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXGetTexRegionAll**](#function-gxgettexregionall) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**GXTexRegion**](_g_x_struct_8h.md#typedef-gxtexregion) \* region, [**u8**](types_8h.md#typedef-u8) \* is\_cached, [**u8**](types_8h.md#typedef-u8) \* is\_32b\_mipmap, [**u32**](types_8h.md#typedef-u32) \* tmem\_even, [**u32**](types_8h.md#typedef-u32) \* size\_even, [**u32**](types_8h.md#typedef-u32) \* tmem\_odd, [**u32**](types_8h.md#typedef-u32) \* size\_odd) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXGetTlutObjAll**](#function-gxgettlutobjall) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**GXTlutObj**](_g_x_struct_8h.md#typedef-gxtlutobj) \* tlut\_obj, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \*\* data, [**GXTlutFmt**](_g_x_enum_8h.md#typedef-gxtlutfmt) \* format, [**u16**](types_8h.md#typedef-u16) \* numEntries) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**GXGetTlutObjData**](#function-gxgettlutobjdata) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**GXTlutObj**](_g_x_struct_8h.md#typedef-gxtlutobj) \* tlut\_obj) <br> |
|  [**GXTlutFmt**](_g_x_enum_8h.md#typedef-gxtlutfmt) | [**GXGetTlutObjFmt**](#function-gxgettlutobjfmt) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**GXTlutObj**](_g_x_struct_8h.md#typedef-gxtlutobj) \* tlut\_obj) <br> |
|  [**u16**](types_8h.md#typedef-u16) | [**GXGetTlutObjNumEntries**](#function-gxgettlutobjnumentries) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**GXTlutObj**](_g_x_struct_8h.md#typedef-gxtlutobj) \* tlut\_obj) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXGetTlutRegionAll**](#function-gxgettlutregionall) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**GXTlutRegion**](_g_x_struct_8h.md#typedef-gxtlutregion) \* region, [**u32**](types_8h.md#typedef-u32) \* tmem\_addr, [**GXTlutSize**](_g_x_enum_8h.md#typedef-gxtlutsize) \* tlut\_size) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXGetViewportv**](#function-gxgetviewportv) ([**f32**](types_8h.md#typedef-f32) \* vp) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXGetVtxAttrFmt**](#function-gxgetvtxattrfmt) ([**GXVtxFmt**](_g_x_enum_8h.md#typedef-gxvtxfmt) fmt, [**GXAttr**](_g_x_enum_8h.md#typedef-gxattr) attr, [**GXCompCnt**](_g_x_enum_8h.md#typedef-gxcompcnt) \* cnt, [**GXCompType**](_g_x_enum_8h.md#typedef-gxcomptype) \* type, [**u8**](types_8h.md#typedef-u8) \* frac) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXGetVtxAttrFmtv**](#function-gxgetvtxattrfmtv) ([**GXVtxFmt**](_g_x_enum_8h.md#typedef-gxvtxfmt) fmt, [**GXVtxAttrFmtList**](_g_x_struct_8h.md#typedef-gxvtxattrfmtlist) \* vat) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXGetVtxDesc**](#function-gxgetvtxdesc) ([**GXAttr**](_g_x_enum_8h.md#typedef-gxattr) attr, [**GXAttrType**](_g_x_enum_8h.md#typedef-gxattrtype) \* type) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXGetVtxDescv**](#function-gxgetvtxdescv) ([**GXVtxDescList**](_g_x_struct_8h.md#typedef-gxvtxdesclist) \* vcd) <br> |




























## Public Functions Documentation




### function GXGetCullMode 

```C++
void GXGetCullMode (
    GXCullMode * mode
) 
```




<hr>



### function GXGetLightAttnA 

```C++
void GXGetLightAttnA (
    GXLightObj * lt_obj,
    f32 * a0,
    f32 * a1,
    f32 * a2
) 
```




<hr>



### function GXGetLightAttnK 

```C++
void GXGetLightAttnK (
    GXLightObj * lt_obj,
    f32 * k0,
    f32 * k1,
    f32 * k2
) 
```




<hr>



### function GXGetLightColor 

```C++
void GXGetLightColor (
    GXLightObj * lt_obj,
    GXColor * color
) 
```




<hr>



### function GXGetLightDir 

```C++
void GXGetLightDir (
    GXLightObj * lt_obj,
    f32 * nx,
    f32 * ny,
    f32 * nz
) 
```




<hr>



### function GXGetLightPos 

```C++
void GXGetLightPos (
    GXLightObj * lt_obj,
    f32 * x,
    f32 * y,
    f32 * z
) 
```




<hr>



### function GXGetLineWidth 

```C++
void GXGetLineWidth (
    u8 * width,
    GXTexOffset * texOffsets
) 
```




<hr>



### function GXGetPointSize 

```C++
void GXGetPointSize (
    u8 * pointSize,
    GXTexOffset * texOffsets
) 
```




<hr>



### function GXGetProjectionv 

```C++
void GXGetProjectionv (
    f32 * ptr
) 
```




<hr>



### function GXGetScissor 

```C++
void GXGetScissor (
    u32 * left,
    u32 * top,
    u32 * wd,
    u32 * ht
) 
```




<hr>



### function GXGetTexObjAll 

```C++
void GXGetTexObjAll (
    const  GXTexObj * obj,
    void ** image_ptr,
    u16 * width,
    u16 * height,
    GXTexFmt * format,
    GXTexWrapMode * wrap_s,
    GXTexWrapMode * wrap_t,
    u8 * mipmap
) 
```




<hr>



### function GXGetTexObjBiasClamp 

```C++
GXBool GXGetTexObjBiasClamp (
    const  GXTexObj * tex_obj
) 
```




<hr>



### function GXGetTexObjData 

```C++
void * GXGetTexObjData (
    const  GXTexObj * to
) 
```




<hr>



### function GXGetTexObjEdgeLOD 

```C++
GXBool GXGetTexObjEdgeLOD (
    const  GXTexObj * tex_obj
) 
```




<hr>



### function GXGetTexObjFmt 

```C++
GXTexFmt GXGetTexObjFmt (
    const  GXTexObj * to
) 
```




<hr>



### function GXGetTexObjHeight 

```C++
u16 GXGetTexObjHeight (
    const  GXTexObj * to
) 
```




<hr>



### function GXGetTexObjLODAll 

```C++
void GXGetTexObjLODAll (
    const  GXTexObj * tex_obj,
    GXTexFilter * min_filt,
    GXTexFilter * mag_filt,
    f32 * min_lod,
    f32 * max_lod,
    f32 * lod_bias,
    u8 * bias_clamp,
    u8 * do_edge_lod,
    GXAnisotropy * max_aniso
) 
```




<hr>



### function GXGetTexObjLODBias 

```C++
f32 GXGetTexObjLODBias (
    const  GXTexObj * tex_obj
) 
```




<hr>



### function GXGetTexObjMagFilt 

```C++
GXTexFilter GXGetTexObjMagFilt (
    const  GXTexObj * tex_obj
) 
```




<hr>



### function GXGetTexObjMaxAniso 

```C++
GXAnisotropy GXGetTexObjMaxAniso (
    const  GXTexObj * tex_obj
) 
```




<hr>



### function GXGetTexObjMaxLOD 

```C++
f32 GXGetTexObjMaxLOD (
    const  GXTexObj * tex_obj
) 
```




<hr>



### function GXGetTexObjMinFilt 

```C++
GXTexFilter GXGetTexObjMinFilt (
    const  GXTexObj * tex_obj
) 
```




<hr>



### function GXGetTexObjMinLOD 

```C++
f32 GXGetTexObjMinLOD (
    const  GXTexObj * tex_obj
) 
```




<hr>



### function GXGetTexObjMipMap 

```C++
GXBool GXGetTexObjMipMap (
    const  GXTexObj * to
) 
```




<hr>



### function GXGetTexObjTlut 

```C++
u32 GXGetTexObjTlut (
    const  GXTexObj * tex_obj
) 
```




<hr>



### function GXGetTexObjWidth 

```C++
u16 GXGetTexObjWidth (
    const  GXTexObj * to
) 
```




<hr>



### function GXGetTexObjWrapS 

```C++
GXTexWrapMode GXGetTexObjWrapS (
    const  GXTexObj * to
) 
```




<hr>



### function GXGetTexObjWrapT 

```C++
GXTexWrapMode GXGetTexObjWrapT (
    const  GXTexObj * to
) 
```




<hr>



### function GXGetTexRegionAll 

```C++
void GXGetTexRegionAll (
    const  GXTexRegion * region,
    u8 * is_cached,
    u8 * is_32b_mipmap,
    u32 * tmem_even,
    u32 * size_even,
    u32 * tmem_odd,
    u32 * size_odd
) 
```




<hr>



### function GXGetTlutObjAll 

```C++
void GXGetTlutObjAll (
    const  GXTlutObj * tlut_obj,
    void ** data,
    GXTlutFmt * format,
    u16 * numEntries
) 
```




<hr>



### function GXGetTlutObjData 

```C++
void * GXGetTlutObjData (
    const  GXTlutObj * tlut_obj
) 
```




<hr>



### function GXGetTlutObjFmt 

```C++
GXTlutFmt GXGetTlutObjFmt (
    const  GXTlutObj * tlut_obj
) 
```




<hr>



### function GXGetTlutObjNumEntries 

```C++
u16 GXGetTlutObjNumEntries (
    const  GXTlutObj * tlut_obj
) 
```




<hr>



### function GXGetTlutRegionAll 

```C++
void GXGetTlutRegionAll (
    const  GXTlutRegion * region,
    u32 * tmem_addr,
    GXTlutSize * tlut_size
) 
```




<hr>



### function GXGetViewportv 

```C++
void GXGetViewportv (
    f32 * vp
) 
```




<hr>



### function GXGetVtxAttrFmt 

```C++
void GXGetVtxAttrFmt (
    GXVtxFmt fmt,
    GXAttr attr,
    GXCompCnt * cnt,
    GXCompType * type,
    u8 * frac
) 
```




<hr>



### function GXGetVtxAttrFmtv 

```C++
void GXGetVtxAttrFmtv (
    GXVtxFmt fmt,
    GXVtxAttrFmtList * vat
) 
```




<hr>



### function GXGetVtxDesc 

```C++
void GXGetVtxDesc (
    GXAttr attr,
    GXAttrType * type
) 
```




<hr>



### function GXGetVtxDescv 

```C++
void GXGetVtxDescv (
    GXVtxDescList * vcd
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/gx/GXGet.h`

