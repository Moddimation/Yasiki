

# File GXTexture.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**gx**](dir_b80c028b3e970eff7f2a07684ffcf104.md) **>** [**GXTexture.c**](_g_x_texture_8c.md)

[Go to the source code of this file](_g_x_texture_8c_source.md)



* `#include <dolphin/gx.h>`
* `#include <dolphin/os.h>`
* `#include <macros.h>`
* `#include <string.h>`
* `#include "dolphin/gx/GXEnum.h"`
* `#include "GXPrivate.h"`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**\_\_GXTexObjInt\_struct**](struct_____g_x_tex_obj_int__struct.md) <br> |
| struct | [**\_\_GXTexRegionInt\_struct**](struct_____g_x_tex_region_int__struct.md) <br> |
| struct | [**\_\_GXTlutObjInt\_struct**](struct_____g_x_tlut_obj_int__struct.md) <br> |
| struct | [**\_\_GXTlutRegionInt\_struct**](struct_____g_x_tlut_region_int__struct.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**\_\_GXTexObjInt\_struct**](struct_____g_x_tex_obj_int__struct.md) | [**\_\_GXTexObjInt**](#typedef-__gxtexobjint)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**\_\_GXTexRegionInt\_struct**](struct_____g_x_tex_region_int__struct.md) | [**\_\_GXTexRegionInt**](#typedef-__gxtexregionint)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**\_\_GXTlutObjInt\_struct**](struct_____g_x_tlut_obj_int__struct.md) | [**\_\_GXTlutObjInt**](#typedef-__gxtlutobjint)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**\_\_GXTlutRegionInt\_struct**](struct_____g_x_tlut_region_int__struct.md) | [**\_\_GXTlutRegionInt**](#typedef-__gxtlutregionint)  <br> |




## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**u8**](types_8h.md#typedef-u8) | [**GXTexImage0Ids**](#variable-gxteximage0ids)   = `{ 0x88, 0x89, 0x8A, 0x8B, 0xA8, 0xA9, 0xAA, 0xAB }`<br> |
|  [**u8**](types_8h.md#typedef-u8) | [**GXTexImage1Ids**](#variable-gxteximage1ids)   = `{ 0x8C, 0x8D, 0x8E, 0x8F, 0xAC, 0xAD, 0xAE, 0xAF }`<br> |
|  [**u8**](types_8h.md#typedef-u8) | [**GXTexImage2Ids**](#variable-gxteximage2ids)   = `{ 0x90, 0x91, 0x92, 0x93, 0xB0, 0xB1, 0xB2, 0xB3 }`<br> |
|  [**u8**](types_8h.md#typedef-u8) | [**GXTexImage3Ids**](#variable-gxteximage3ids)   = `{ 0x94, 0x95, 0x96, 0x97, 0xB4, 0xB5, 0xB6, 0xB7 }`<br> |
|  [**u8**](types_8h.md#typedef-u8) | [**GXTexMode0Ids**](#variable-gxtexmode0ids)   = `{ 0x80, 0x81, 0x82, 0x83, 0xA0, 0xA1, 0xA2, 0xA3 }`<br> |
|  [**u8**](types_8h.md#typedef-u8) | [**GXTexMode1Ids**](#variable-gxtexmode1ids)   = `{ 0x84, 0x85, 0x86, 0x87, 0xA4, 0xA5, 0xA6, 0xA7 }`<br> |
|  [**u8**](types_8h.md#typedef-u8) | [**GXTexTlutIds**](#variable-gxtextlutids)   = `{ 0x98, 0x99, 0x9A, 0x9B, 0xB8, 0xB9, 0xBA, 0xBB }`<br> |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**u8**](types_8h.md#typedef-u8) | [**GX2HWFiltConv**](#variable-gx2hwfiltconv)   = `{ 0x00, 0x04, 0x01, 0x05, 0x02, 0x06 }`<br> |
|  [**u8**](types_8h.md#typedef-u8) | [**HW2GXFiltConv**](#variable-hw2gxfiltconv)   = `{ 0x00, 0x02, 0x04, 0x00, 0x01, 0x03, 0x05, 0x00 }`<br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**u32**](types_8h.md#typedef-u32) | [**GXGetTexBufferSize**](#function-gxgettexbuffersize) ([**u16**](types_8h.md#typedef-u16) width, [**u16**](types_8h.md#typedef-u16) height, [**u32**](types_8h.md#typedef-u32) format, [**u8**](types_8h.md#typedef-u8) mipmap, [**u8**](types_8h.md#typedef-u8) max\_lod) <br> |
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
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**GXGetTexObjUserData**](#function-gxgettexobjuserdata) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**GXTexObj**](_g_x_struct_8h.md#typedef-gxtexobj) \* obj) <br> |
|  [**u16**](types_8h.md#typedef-u16) | [**GXGetTexObjWidth**](#function-gxgettexobjwidth) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**GXTexObj**](_g_x_struct_8h.md#typedef-gxtexobj) \* to) <br> |
|  [**GXTexWrapMode**](_g_x_enum_8h.md#typedef-gxtexwrapmode) | [**GXGetTexObjWrapS**](#function-gxgettexobjwraps) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**GXTexObj**](_g_x_struct_8h.md#typedef-gxtexobj) \* to) <br> |
|  [**GXTexWrapMode**](_g_x_enum_8h.md#typedef-gxtexwrapmode) | [**GXGetTexObjWrapT**](#function-gxgettexobjwrapt) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**GXTexObj**](_g_x_struct_8h.md#typedef-gxtexobj) \* to) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXGetTexRegionAll**](#function-gxgettexregionall) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**GXTexRegion**](_g_x_struct_8h.md#typedef-gxtexregion) \* region, [**u8**](types_8h.md#typedef-u8) \* is\_cached, [**u8**](types_8h.md#typedef-u8) \* is\_32b\_mipmap, [**u32**](types_8h.md#typedef-u32) \* tmem\_even, [**u32**](types_8h.md#typedef-u32) \* size\_even, [**u32**](types_8h.md#typedef-u32) \* tmem\_odd, [**u32**](types_8h.md#typedef-u32) \* size\_odd) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXGetTlutObjAll**](#function-gxgettlutobjall) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**GXTlutObj**](_g_x_struct_8h.md#typedef-gxtlutobj) \* tlut\_obj, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \*\* data, [**GXTlutFmt**](_g_x_enum_8h.md#typedef-gxtlutfmt) \* format, [**u16**](types_8h.md#typedef-u16) \* numEntries) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**GXGetTlutObjData**](#function-gxgettlutobjdata) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**GXTlutObj**](_g_x_struct_8h.md#typedef-gxtlutobj) \* tlut\_obj) <br> |
|  [**GXTlutFmt**](_g_x_enum_8h.md#typedef-gxtlutfmt) | [**GXGetTlutObjFmt**](#function-gxgettlutobjfmt) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**GXTlutObj**](_g_x_struct_8h.md#typedef-gxtlutobj) \* tlut\_obj) <br> |
|  [**u16**](types_8h.md#typedef-u16) | [**GXGetTlutObjNumEntries**](#function-gxgettlutobjnumentries) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**GXTlutObj**](_g_x_struct_8h.md#typedef-gxtlutobj) \* tlut\_obj) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXGetTlutRegionAll**](#function-gxgettlutregionall) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**GXTlutRegion**](_g_x_struct_8h.md#typedef-gxtlutregion) \* region, [**u32**](types_8h.md#typedef-u32) \* tmem\_addr, [**GXTlutSize**](_g_x_enum_8h.md#typedef-gxtlutsize) \* tlut\_size) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXInitTexCacheRegion**](#function-gxinittexcacheregion) ([**GXTexRegion**](_g_x_struct_8h.md#typedef-gxtexregion) \* region, [**u8**](types_8h.md#typedef-u8) is\_32b\_mipmap, [**u32**](types_8h.md#typedef-u32) tmem\_even, [**GXTexCacheSize**](_g_x_enum_8h.md#typedef-gxtexcachesize) size\_even, [**u32**](types_8h.md#typedef-u32) tmem\_odd, [**GXTexCacheSize**](_g_x_enum_8h.md#typedef-gxtexcachesize) size\_odd) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXInitTexObj**](#function-gxinittexobj) ([**GXTexObj**](_g_x_struct_8h.md#typedef-gxtexobj) \* obj, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* image\_ptr, [**u16**](types_8h.md#typedef-u16) width, [**u16**](types_8h.md#typedef-u16) height, [**GXTexFmt**](_g_x_enum_8h.md#typedef-gxtexfmt) format, [**GXTexWrapMode**](_g_x_enum_8h.md#typedef-gxtexwrapmode) wrap\_s, [**GXTexWrapMode**](_g_x_enum_8h.md#typedef-gxtexwrapmode) wrap\_t, [**u8**](types_8h.md#typedef-u8) mipmap) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXInitTexObjCI**](#function-gxinittexobjci) ([**GXTexObj**](_g_x_struct_8h.md#typedef-gxtexobj) \* obj, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* image\_ptr, [**u16**](types_8h.md#typedef-u16) width, [**u16**](types_8h.md#typedef-u16) height, [**GXCITexFmt**](_g_x_enum_8h.md#typedef-gxcitexfmt) format, [**GXTexWrapMode**](_g_x_enum_8h.md#typedef-gxtexwrapmode) wrap\_s, [**GXTexWrapMode**](_g_x_enum_8h.md#typedef-gxtexwrapmode) wrap\_t, [**u8**](types_8h.md#typedef-u8) mipmap, [**u32**](types_8h.md#typedef-u32) tlut\_name) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXInitTexObjData**](#function-gxinittexobjdata) ([**GXTexObj**](_g_x_struct_8h.md#typedef-gxtexobj) \* obj, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* image\_ptr) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXInitTexObjLOD**](#function-gxinittexobjlod) ([**GXTexObj**](_g_x_struct_8h.md#typedef-gxtexobj) \* obj, [**GXTexFilter**](_g_x_enum_8h.md#typedef-gxtexfilter) min\_filt, [**GXTexFilter**](_g_x_enum_8h.md#typedef-gxtexfilter) mag\_filt, [**f32**](types_8h.md#typedef-f32) min\_lod, [**f32**](types_8h.md#typedef-f32) max\_lod, [**f32**](types_8h.md#typedef-f32) lod\_bias, [**u8**](types_8h.md#typedef-u8) bias\_clamp, [**u8**](types_8h.md#typedef-u8) do\_edge\_lod, [**GXAnisotropy**](_g_x_enum_8h.md#typedef-gxanisotropy) max\_aniso) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXInitTexObjTlut**](#function-gxinittexobjtlut) ([**GXTexObj**](_g_x_struct_8h.md#typedef-gxtexobj) \* obj, [**u32**](types_8h.md#typedef-u32) tlut\_name) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXInitTexObjUserData**](#function-gxinittexobjuserdata) ([**GXTexObj**](_g_x_struct_8h.md#typedef-gxtexobj) \* obj, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* user\_data) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXInitTexObjWrapMode**](#function-gxinittexobjwrapmode) ([**GXTexObj**](_g_x_struct_8h.md#typedef-gxtexobj) \* obj, [**GXTexWrapMode**](_g_x_enum_8h.md#typedef-gxtexwrapmode) sm, [**GXTexWrapMode**](_g_x_enum_8h.md#typedef-gxtexwrapmode) tm) <br> |
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
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXGetSUTexSize**](#function-__gxgetsutexsize) ([**GXTexCoordID**](_g_x_enum_8h.md#typedef-gxtexcoordid) coord, [**u16**](types_8h.md#typedef-u16) \* width, [**u16**](types_8h.md#typedef-u16) \* height) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXSetSUTexRegs**](#function-__gxsetsutexregs) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GetImageTileCount**](#function-__getimagetilecount) ([**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**\_GXTexFmt**](_g_x_enum_8h.md#enum-_gxtexfmt) fmt, [**u16**](types_8h.md#typedef-u16) wd, [**u16**](types_8h.md#typedef-u16) ht, [**u32**](types_8h.md#typedef-u32) \* rowTiles, [**u32**](types_8h.md#typedef-u32) \* colTiles, [**u32**](types_8h.md#typedef-u32) \* cmpTiles) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXGetTexTileShift**](#function-__gxgettextileshift) ([**GXTexFmt**](_g_x_enum_8h.md#typedef-gxtexfmt) fmt, [**u32**](types_8h.md#typedef-u32) \* rowTileS, [**u32**](types_8h.md#typedef-u32) \* colTileS) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_SetSURegs**](#function-__setsuregs) ([**u32**](types_8h.md#typedef-u32) tmap, [**u32**](types_8h.md#typedef-u32) tcoord) <br> |


























## Public Types Documentation




### typedef \_\_GXTexObjInt 

```C++
typedef struct __GXTexObjInt_struct __GXTexObjInt;
```




<hr>



### typedef \_\_GXTexRegionInt 

```C++
typedef struct __GXTexRegionInt_struct __GXTexRegionInt;
```




<hr>



### typedef \_\_GXTlutObjInt 

```C++
typedef struct __GXTlutObjInt_struct __GXTlutObjInt;
```




<hr>



### typedef \_\_GXTlutRegionInt 

```C++
typedef struct __GXTlutRegionInt_struct __GXTlutRegionInt;
```




<hr>
## Public Attributes Documentation




### variable GXTexImage0Ids 

```C++
u8 GXTexImage0Ids[8];
```




<hr>



### variable GXTexImage1Ids 

```C++
u8 GXTexImage1Ids[8];
```




<hr>



### variable GXTexImage2Ids 

```C++
u8 GXTexImage2Ids[8];
```




<hr>



### variable GXTexImage3Ids 

```C++
u8 GXTexImage3Ids[8];
```




<hr>



### variable GXTexMode0Ids 

```C++
u8 GXTexMode0Ids[8];
```




<hr>



### variable GXTexMode1Ids 

```C++
u8 GXTexMode1Ids[8];
```




<hr>



### variable GXTexTlutIds 

```C++
u8 GXTexTlutIds[8];
```




<hr>
## Public Static Attributes Documentation




### variable GX2HWFiltConv 

```C++
u8 GX2HWFiltConv[6];
```




<hr>



### variable HW2GXFiltConv 

```C++
u8 HW2GXFiltConv[8];
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



### function GXGetTexObjUserData 

```C++
void * GXGetTexObjUserData (
    const  GXTexObj * obj
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
    u8 bias_clamp,
    u8 do_edge_lod,
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
    GXTexWrapMode sm,
    GXTexWrapMode tm
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



### function \_\_GXGetSUTexSize 

```C++
void __GXGetSUTexSize (
    GXTexCoordID coord,
    u16 * width,
    u16 * height
) 
```




<hr>



### function \_\_GXSetSUTexRegs 

```C++
void __GXSetSUTexRegs (
    void
) 
```




<hr>



### function \_\_GetImageTileCount 

```C++
void __GetImageTileCount (
    enum  _GXTexFmt fmt,
    u16 wd,
    u16 ht,
    u32 * rowTiles,
    u32 * colTiles,
    u32 * cmpTiles
) 
```




<hr>
## Public Static Functions Documentation




### function \_\_GXGetTexTileShift 

```C++
static void __GXGetTexTileShift (
    GXTexFmt fmt,
    u32 * rowTileS,
    u32 * colTileS
) 
```




<hr>



### function \_\_SetSURegs 

```C++
static void __SetSURegs (
    u32 tmap,
    u32 tcoord
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/gx/GXTexture.c`

