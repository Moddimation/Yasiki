

# File GXGeometry.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**gx**](dir_7aad653e595702d688ea3e342b8a405d.md) **>** [**GXGeometry.h**](_g_x_geometry_8h.md)

[Go to the source code of this file](_g_x_geometry_8h_source.md)



* `#include <dolphin/gx/GXEnum.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXBegin**](#function-gxbegin) ([**GXPrimitive**](_g_x_enum_8h.md#typedef-gxprimitive) type, [**GXVtxFmt**](_g_x_enum_8h.md#typedef-gxvtxfmt) vtxfmt, [**u16**](types_8h.md#typedef-u16) nverts) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXClearVtxDesc**](#function-gxclearvtxdesc) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXEnableTexOffsets**](#function-gxenabletexoffsets) ([**GXTexCoordID**](_g_x_enum_8h.md#typedef-gxtexcoordid) coord, [**u8**](types_8h.md#typedef-u8) line\_enable, [**u8**](types_8h.md#typedef-u8) point\_enable) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXInvalidateVtxCache**](#function-gxinvalidatevtxcache) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetArray**](#function-gxsetarray) ([**GXAttr**](_g_x_enum_8h.md#typedef-gxattr) attr, [**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* base\_ptr, [**u8**](types_8h.md#typedef-u8) stride) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetLineWidth**](#function-gxsetlinewidth) ([**u8**](types_8h.md#typedef-u8) width, [**GXTexOffset**](_g_x_enum_8h.md#typedef-gxtexoffset) texOffsets) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetNumTexGens**](#function-gxsetnumtexgens) ([**u8**](types_8h.md#typedef-u8) nTexGens) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetPointSize**](#function-gxsetpointsize) ([**u8**](types_8h.md#typedef-u8) pointSize, [**GXTexOffset**](_g_x_enum_8h.md#typedef-gxtexoffset) texOffsets) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetTexCoordGen2**](#function-gxsettexcoordgen2) ([**GXTexCoordID**](_g_x_enum_8h.md#typedef-gxtexcoordid) dst\_coord, [**GXTexGenType**](_g_x_enum_8h.md#typedef-gxtexgentype) func, [**GXTexGenSrc**](_g_x_enum_8h.md#typedef-gxtexgensrc) src\_param, [**u32**](types_8h.md#typedef-u32) mtx, [**GXBool**](_g_x_enum_8h.md#typedef-gxbool) normalize, [**u32**](types_8h.md#typedef-u32) pt\_texmtx) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetVtxAttrFmt**](#function-gxsetvtxattrfmt) ([**GXVtxFmt**](_g_x_enum_8h.md#typedef-gxvtxfmt) vtxfmt, [**GXAttr**](_g_x_enum_8h.md#typedef-gxattr) attr, [**GXCompCnt**](_g_x_enum_8h.md#typedef-gxcompcnt) cnt, [**GXCompType**](_g_x_enum_8h.md#typedef-gxcomptype) type, [**u8**](types_8h.md#typedef-u8) frac) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetVtxAttrFmtv**](#function-gxsetvtxattrfmtv) ([**GXVtxFmt**](_g_x_enum_8h.md#typedef-gxvtxfmt) vtxfmt, [**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**GXVtxAttrFmtList**](_g_x_struct_8h.md#typedef-gxvtxattrfmtlist) \* list) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetVtxDesc**](#function-gxsetvtxdesc) ([**GXAttr**](_g_x_enum_8h.md#typedef-gxattr) attr, [**GXAttrType**](_g_x_enum_8h.md#typedef-gxattrtype) type) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetVtxDescv**](#function-gxsetvtxdescv) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**GXVtxDescList**](_g_x_struct_8h.md#typedef-gxvtxdesclist) \* attrPtr) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXEnd**](#function-gxend) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetTexCoordGen**](#function-gxsettexcoordgen) ([**GXTexCoordID**](_g_x_enum_8h.md#typedef-gxtexcoordid) dst\_coord, [**GXTexGenType**](_g_x_enum_8h.md#typedef-gxtexgentype) func, [**GXTexGenSrc**](_g_x_enum_8h.md#typedef-gxtexgensrc) src\_param, [**u32**](types_8h.md#typedef-u32) mtx) <br> |


























## Public Functions Documentation




### function GXBegin 

```C++
void GXBegin (
    GXPrimitive type,
    GXVtxFmt vtxfmt,
    u16 nverts
) 
```




<hr>



### function GXClearVtxDesc 

```C++
void GXClearVtxDesc (
    void
) 
```




<hr>



### function GXEnableTexOffsets 

```C++
void GXEnableTexOffsets (
    GXTexCoordID coord,
    u8 line_enable,
    u8 point_enable
) 
```




<hr>



### function GXInvalidateVtxCache 

```C++
void GXInvalidateVtxCache (
    void
) 
```




<hr>



### function GXSetArray 

```C++
void GXSetArray (
    GXAttr attr,
    const  void * base_ptr,
    u8 stride
) 
```




<hr>



### function GXSetLineWidth 

```C++
void GXSetLineWidth (
    u8 width,
    GXTexOffset texOffsets
) 
```




<hr>



### function GXSetNumTexGens 

```C++
void GXSetNumTexGens (
    u8 nTexGens
) 
```




<hr>



### function GXSetPointSize 

```C++
void GXSetPointSize (
    u8 pointSize,
    GXTexOffset texOffsets
) 
```




<hr>



### function GXSetTexCoordGen2 

```C++
void GXSetTexCoordGen2 (
    GXTexCoordID dst_coord,
    GXTexGenType func,
    GXTexGenSrc src_param,
    u32 mtx,
    GXBool normalize,
    u32 pt_texmtx
) 
```




<hr>



### function GXSetVtxAttrFmt 

```C++
void GXSetVtxAttrFmt (
    GXVtxFmt vtxfmt,
    GXAttr attr,
    GXCompCnt cnt,
    GXCompType type,
    u8 frac
) 
```




<hr>



### function GXSetVtxAttrFmtv 

```C++
void GXSetVtxAttrFmtv (
    GXVtxFmt vtxfmt,
    const  GXVtxAttrFmtList * list
) 
```




<hr>



### function GXSetVtxDesc 

```C++
void GXSetVtxDesc (
    GXAttr attr,
    GXAttrType type
) 
```




<hr>



### function GXSetVtxDescv 

```C++
void GXSetVtxDescv (
    const  GXVtxDescList * attrPtr
) 
```




<hr>
## Public Static Functions Documentation




### function GXEnd 

```C++
static inline void GXEnd (
    void
) 
```




<hr>



### function GXSetTexCoordGen 

```C++
static inline void GXSetTexCoordGen (
    GXTexCoordID dst_coord,
    GXTexGenType func,
    GXTexGenSrc src_param,
    u32 mtx
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/gx/GXGeometry.h`

