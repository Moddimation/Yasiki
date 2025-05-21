

# File GXBump.c



[**FileList**](files.md) **>** [**dolphin**](dir_5daac82a3cf194997369e9388ff34711.md) **>** [**gx**](dir_58a4740725722629c39c924a9f4030b8.md) **>** [**GXBump.c**](_g_x_bump_8c.md)

[Go to the source code of this file](_g_x_bump_8c_source.md)



* `#include <dolphin/gx.h>`
* `#include <dolphin/os.h>`
* `#include <macros.h>`
* `#include "dolphin/gx/GXEnum.h"`
* `#include "GXPrivate.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetIndTexCoordScale**](#function-gxsetindtexcoordscale) ([**GXIndTexStageID**](_g_x_enum_8h.md#typedef-gxindtexstageid) ind\_state, [**GXIndTexScale**](_g_x_enum_8h.md#typedef-gxindtexscale) scale\_s, [**GXIndTexScale**](_g_x_enum_8h.md#typedef-gxindtexscale) scale\_t) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetIndTexMtx**](#function-gxsetindtexmtx) ([**GXIndTexMtxID**](_g_x_enum_8h.md#typedef-gxindtexmtxid) mtx\_id, [**f32**](types_8h.md#typedef-f32) offset, [**s8**](types_8h.md#typedef-s8) scale\_exp) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetIndTexOrder**](#function-gxsetindtexorder) ([**GXIndTexStageID**](_g_x_enum_8h.md#typedef-gxindtexstageid) ind\_stage, [**GXTexCoordID**](_g_x_enum_8h.md#typedef-gxtexcoordid) tex\_coord, [**GXTexMapID**](_g_x_enum_8h.md#typedef-gxtexmapid) tex\_map) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetNumIndStages**](#function-gxsetnumindstages) ([**u8**](types_8h.md#typedef-u8) nIndStages) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetTevDirect**](#function-gxsettevdirect) ([**GXTevStageID**](_g_x_enum_8h.md#typedef-gxtevstageid) tev\_stage) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetTevIndBumpST**](#function-gxsettevindbumpst) ([**GXTevStageID**](_g_x_enum_8h.md#typedef-gxtevstageid) tev\_stage, [**GXIndTexStageID**](_g_x_enum_8h.md#typedef-gxindtexstageid) ind\_stage, [**GXIndTexMtxID**](_g_x_enum_8h.md#typedef-gxindtexmtxid) matrix\_sel) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetTevIndBumpXYZ**](#function-gxsettevindbumpxyz) ([**GXTevStageID**](_g_x_enum_8h.md#typedef-gxtevstageid) tev\_stage, [**GXIndTexStageID**](_g_x_enum_8h.md#typedef-gxindtexstageid) ind\_stage, [**GXIndTexMtxID**](_g_x_enum_8h.md#typedef-gxindtexmtxid) matrix\_sel) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetTevIndRepeat**](#function-gxsettevindrepeat) ([**GXTevStageID**](_g_x_enum_8h.md#typedef-gxtevstageid) tev\_stage) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetTevIndTile**](#function-gxsettevindtile) ([**GXTevStageID**](_g_x_enum_8h.md#typedef-gxtevstageid) tev\_stage, [**GXIndTexStageID**](_g_x_enum_8h.md#typedef-gxindtexstageid) ind\_stage, [**u16**](types_8h.md#typedef-u16) tilesize\_s, [**u16**](types_8h.md#typedef-u16) tilesize\_t, [**u16**](types_8h.md#typedef-u16) tilespacing\_s, [**u16**](types_8h.md#typedef-u16) tilespacing\_t, [**GXIndTexFormat**](_g_x_enum_8h.md#typedef-gxindtexformat) format, [**GXIndTexMtxID**](_g_x_enum_8h.md#typedef-gxindtexmtxid) matrix\_sel, [**GXIndTexBiasSel**](_g_x_enum_8h.md#typedef-gxindtexbiassel) bias\_sel, [**GXIndTexAlphaSel**](_g_x_enum_8h.md#typedef-gxindtexalphasel) alpha\_sel) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetTevIndWarp**](#function-gxsettevindwarp) ([**GXTevStageID**](_g_x_enum_8h.md#typedef-gxtevstageid) tev\_stage, [**GXIndTexStageID**](_g_x_enum_8h.md#typedef-gxindtexstageid) ind\_stage, [**u8**](types_8h.md#typedef-u8) signed\_offset, [**u8**](types_8h.md#typedef-u8) replace\_mode, [**GXIndTexMtxID**](_g_x_enum_8h.md#typedef-gxindtexmtxid) matrix\_sel) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetTevIndirect**](#function-gxsettevindirect) ([**GXTevStageID**](_g_x_enum_8h.md#typedef-gxtevstageid) tev\_stage, [**GXIndTexStageID**](_g_x_enum_8h.md#typedef-gxindtexstageid) ind\_stage, [**GXIndTexFormat**](_g_x_enum_8h.md#typedef-gxindtexformat) format, [**GXIndTexBiasSel**](_g_x_enum_8h.md#typedef-gxindtexbiassel) bias\_sel, [**GXIndTexMtxID**](_g_x_enum_8h.md#typedef-gxindtexmtxid) matrix\_sel, [**GXIndTexWrap**](_g_x_enum_8h.md#typedef-gxindtexwrap) wrap\_s, [**GXIndTexWrap**](_g_x_enum_8h.md#typedef-gxindtexwrap) wrap\_t, [**GXBool**](_g_x_enum_8h.md#typedef-gxbool) add\_prev, [**GXBool**](_g_x_enum_8h.md#typedef-gxbool) utc\_lod, [**GXIndTexAlphaSel**](_g_x_enum_8h.md#typedef-gxindtexalphasel) alpha\_sel) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXFlushTextureState**](#function-__gxflushtexturestate) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXUpdateBPMask**](#function-__gxupdatebpmask) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**GX\_WRITE\_SOME\_REG5**](_g_x_bump_8c.md#define-gx_write_some_reg5) (a, b) `/* multi line expression */`<br> |

## Public Functions Documentation




### function GXSetIndTexCoordScale 

```C++
void GXSetIndTexCoordScale (
    GXIndTexStageID ind_state,
    GXIndTexScale scale_s,
    GXIndTexScale scale_t
) 
```




<hr>



### function GXSetIndTexMtx 

```C++
void GXSetIndTexMtx (
    GXIndTexMtxID mtx_id,
    f32 offset,
    s8 scale_exp
) 
```




<hr>



### function GXSetIndTexOrder 

```C++
void GXSetIndTexOrder (
    GXIndTexStageID ind_stage,
    GXTexCoordID tex_coord,
    GXTexMapID tex_map
) 
```




<hr>



### function GXSetNumIndStages 

```C++
void GXSetNumIndStages (
    u8 nIndStages
) 
```




<hr>



### function GXSetTevDirect 

```C++
void GXSetTevDirect (
    GXTevStageID tev_stage
) 
```




<hr>



### function GXSetTevIndBumpST 

```C++
void GXSetTevIndBumpST (
    GXTevStageID tev_stage,
    GXIndTexStageID ind_stage,
    GXIndTexMtxID matrix_sel
) 
```




<hr>



### function GXSetTevIndBumpXYZ 

```C++
void GXSetTevIndBumpXYZ (
    GXTevStageID tev_stage,
    GXIndTexStageID ind_stage,
    GXIndTexMtxID matrix_sel
) 
```




<hr>



### function GXSetTevIndRepeat 

```C++
void GXSetTevIndRepeat (
    GXTevStageID tev_stage
) 
```




<hr>



### function GXSetTevIndTile 

```C++
void GXSetTevIndTile (
    GXTevStageID tev_stage,
    GXIndTexStageID ind_stage,
    u16 tilesize_s,
    u16 tilesize_t,
    u16 tilespacing_s,
    u16 tilespacing_t,
    GXIndTexFormat format,
    GXIndTexMtxID matrix_sel,
    GXIndTexBiasSel bias_sel,
    GXIndTexAlphaSel alpha_sel
) 
```




<hr>



### function GXSetTevIndWarp 

```C++
void GXSetTevIndWarp (
    GXTevStageID tev_stage,
    GXIndTexStageID ind_stage,
    u8 signed_offset,
    u8 replace_mode,
    GXIndTexMtxID matrix_sel
) 
```




<hr>



### function GXSetTevIndirect 

```C++
void GXSetTevIndirect (
    GXTevStageID tev_stage,
    GXIndTexStageID ind_stage,
    GXIndTexFormat format,
    GXIndTexBiasSel bias_sel,
    GXIndTexMtxID matrix_sel,
    GXIndTexWrap wrap_s,
    GXIndTexWrap wrap_t,
    GXBool add_prev,
    GXBool utc_lod,
    GXIndTexAlphaSel alpha_sel
) 
```




<hr>



### function \_\_GXFlushTextureState 

```C++
void __GXFlushTextureState (
    void
) 
```




<hr>



### function \_\_GXUpdateBPMask 

```C++
void __GXUpdateBPMask (
    void
) 
```




<hr>
## Macro Definition Documentation





### define GX\_WRITE\_SOME\_REG5 

```C++
#define GX_WRITE_SOME_REG5 (
    a,
    b
) `/* multi line expression */`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `DolphinSDK/src/dolphin/gx/GXBump.c`

