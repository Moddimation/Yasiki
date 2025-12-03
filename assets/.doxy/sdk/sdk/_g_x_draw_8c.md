

# File GXDraw.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**gx**](dir_b80c028b3e970eff7f2a07684ffcf104.md) **>** [**GXDraw.c**](_g_x_draw_8c.md)

[Go to the source code of this file](_g_x_draw_8c_source.md)



* `#include <dolphin/gx.h>`
* `#include <dolphin/os.h>`
* `#include <math.h>`
* `#include "GXPrivate.h"`























## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**f32**](types_8h.md#typedef-f32) | [**idata**](#variable-idata)   = `/* multi line expression */`<br> |
|  [**u8**](types_8h.md#typedef-u8) | [**index**](#variable-index)   = `/* multi line expression */`<br> |
|  [**u32**](types_8h.md#typedef-u32) | [**nrm\_cnt**](#variable-nrm_cnt)  <br> |
|  [**f32**](types_8h.md#typedef-f32) \* | [**nrm\_tab**](#variable-nrm_tab)  <br> |
|  [**f32**](types_8h.md#typedef-f32) | [**odata**](#variable-odata)   = `/* multi line expression */`<br> |
|  [**u8**](types_8h.md#typedef-u8) | [**ondex**](#variable-ondex)   = `/* multi line expression */`<br> |
|  [**u32**](types_8h.md#typedef-u32) | [**polygons**](#variable-polygons)   = `/* multi line expression */`<br> |
|  [**GXVtxAttrFmtList**](_g_x_struct_8h.md#typedef-gxvtxattrfmtlist) | [**vat**](#variable-vat)  <br> |
|  [**GXVtxDescList**](_g_x_struct_8h.md#typedef-gxvtxdesclist) | [**vcd**](#variable-vcd)  <br> |
|  [**f32**](types_8h.md#typedef-f32) | [**verts**](#variable-verts)   = `/* multi line expression */`<br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXDrawCube**](#function-gxdrawcube) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXDrawCylinder**](#function-gxdrawcylinder) ([**u8**](types_8h.md#typedef-u8) numEdges) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXDrawDodeca**](#function-gxdrawdodeca) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXDrawIcosahedron**](#function-gxdrawicosahedron) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXDrawOctahedron**](#function-gxdrawoctahedron) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXDrawSphere**](#function-gxdrawsphere) ([**u8**](types_8h.md#typedef-u8) numMajor, [**u8**](types_8h.md#typedef-u8) numMinor) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXDrawSphere1**](#function-gxdrawsphere1) ([**u8**](types_8h.md#typedef-u8) depth) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXDrawTorus**](#function-gxdrawtorus) ([**f32**](types_8h.md#typedef-f32) rc, [**u8**](types_8h.md#typedef-u8) numc, [**u8**](types_8h.md#typedef-u8) numt) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**GXGenNormalTable**](#function-gxgennormaltable) ([**u8**](types_8h.md#typedef-u8) depth, [**f32**](types_8h.md#typedef-f32) \* table) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AddNormal**](#function-addnormal) ([**f32**](types_8h.md#typedef-f32) n) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**CmpNormal32**](#function-cmpnormal32) ([**f32**](types_8h.md#typedef-f32) n1, [**f32**](types_8h.md#typedef-f32) n2) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DumpTriangle**](#function-dumptriangle) ([**f32**](types_8h.md#typedef-f32) v0, [**f32**](types_8h.md#typedef-f32) v1, [**f32**](types_8h.md#typedef-f32) v2) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXDrawCubeFace**](#function-gxdrawcubeface) ([**f32**](types_8h.md#typedef-f32) nx, [**f32**](types_8h.md#typedef-f32) ny, [**f32**](types_8h.md#typedef-f32) nz, [**f32**](types_8h.md#typedef-f32) tx, [**f32**](types_8h.md#typedef-f32) ty, [**f32**](types_8h.md#typedef-f32) tz, [**f32**](types_8h.md#typedef-f32) bx, [**f32**](types_8h.md#typedef-f32) by, [**f32**](types_8h.md#typedef-f32) bz, [**GXAttrType**](_g_x_enum_8h.md#typedef-gxattrtype) binormal, [**GXAttrType**](_g_x_enum_8h.md#typedef-gxattrtype) texture) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GetVertState**](#function-getvertstate) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**RestoreVertState**](#function-restorevertstate) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SubDivNrm**](#function-subdivnrm) ([**u8**](types_8h.md#typedef-u8) depth, [**u8**](types_8h.md#typedef-u8) i, [**f32**](types_8h.md#typedef-f32)(\*) data, [**u8**](types_8h.md#typedef-u8)(\*) ndx) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SubDivTriangle**](#function-subdivtriangle) ([**u8**](types_8h.md#typedef-u8) depth, [**u8**](types_8h.md#typedef-u8) i, [**f32**](types_8h.md#typedef-f32)(\*) data, [**u8**](types_8h.md#typedef-u8)(\*) ndx) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**Subdivide**](#function-subdivide) ([**u8**](types_8h.md#typedef-u8) depth, [**f32**](types_8h.md#typedef-f32) v0, [**f32**](types_8h.md#typedef-f32) v1, [**f32**](types_8h.md#typedef-f32) v2) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SubdivideNrm**](#function-subdividenrm) ([**u8**](types_8h.md#typedef-u8) depth, [**f32**](types_8h.md#typedef-f32) v0, [**f32**](types_8h.md#typedef-f32) v1, [**f32**](types_8h.md#typedef-f32) v2) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**myvertex**](#function-myvertex) ([**f32**](types_8h.md#typedef-f32) v, [**f32**](types_8h.md#typedef-f32) n) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**normalize**](#function-normalize) ([**f32**](types_8h.md#typedef-f32) v) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**vcross**](#function-vcross) ([**f32**](types_8h.md#typedef-f32) u, [**f32**](types_8h.md#typedef-f32) v, [**f32**](types_8h.md#typedef-f32) n) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**vsub**](#function-vsub) ([**f32**](types_8h.md#typedef-f32) p1, [**f32**](types_8h.md#typedef-f32) p2, [**f32**](types_8h.md#typedef-f32) u) <br> |


























## Public Static Attributes Documentation




### variable idata 

```C++
f32 idata[12][3];
```




<hr>



### variable index 

```C++
u8 index[20][3];
```




<hr>



### variable nrm\_cnt 

```C++
u32 nrm_cnt;
```




<hr>



### variable nrm\_tab 

```C++
f32* nrm_tab;
```




<hr>



### variable odata 

```C++
f32 odata[6][3];
```




<hr>



### variable ondex 

```C++
u8 ondex[8][3];
```




<hr>



### variable polygons 

```C++
u32 polygons[12][5];
```




<hr>



### variable vat 

```C++
GXVtxAttrFmtList vat[27];
```




<hr>



### variable vcd 

```C++
GXVtxDescList vcd[27];
```




<hr>



### variable verts 

```C++
f32 verts[20][3];
```




<hr>
## Public Functions Documentation




### function GXDrawCube 

```C++
void GXDrawCube (
    void
) 
```




<hr>



### function GXDrawCylinder 

```C++
void GXDrawCylinder (
    u8 numEdges
) 
```




<hr>



### function GXDrawDodeca 

```C++
void GXDrawDodeca (
    void
) 
```




<hr>



### function GXDrawIcosahedron 

```C++
void GXDrawIcosahedron (
    void
) 
```




<hr>



### function GXDrawOctahedron 

```C++
void GXDrawOctahedron (
    void
) 
```




<hr>



### function GXDrawSphere 

```C++
void GXDrawSphere (
    u8 numMajor,
    u8 numMinor
) 
```




<hr>



### function GXDrawSphere1 

```C++
void GXDrawSphere1 (
    u8 depth
) 
```




<hr>



### function GXDrawTorus 

```C++
void GXDrawTorus (
    f32 rc,
    u8 numc,
    u8 numt
) 
```




<hr>



### function GXGenNormalTable 

```C++
u32 GXGenNormalTable (
    u8 depth,
    f32 * table
) 
```




<hr>
## Public Static Functions Documentation




### function AddNormal 

```C++
static void AddNormal (
    f32 n
) 
```




<hr>



### function CmpNormal32 

```C++
static u32 CmpNormal32 (
    f32 n1,
    f32 n2
) 
```




<hr>



### function DumpTriangle 

```C++
static void DumpTriangle (
    f32 v0,
    f32 v1,
    f32 v2
) 
```




<hr>



### function GXDrawCubeFace 

```C++
static void GXDrawCubeFace (
    f32 nx,
    f32 ny,
    f32 nz,
    f32 tx,
    f32 ty,
    f32 tz,
    f32 bx,
    f32 by,
    f32 bz,
    GXAttrType binormal,
    GXAttrType texture
) 
```




<hr>



### function GetVertState 

```C++
static void GetVertState (
    void
) 
```




<hr>



### function RestoreVertState 

```C++
static void RestoreVertState (
    void
) 
```




<hr>



### function SubDivNrm 

```C++
static void SubDivNrm (
    u8 depth,
    u8 i,
    f32 (*) data,
    u8 (*) ndx
) 
```




<hr>



### function SubDivTriangle 

```C++
static void SubDivTriangle (
    u8 depth,
    u8 i,
    f32 (*) data,
    u8 (*) ndx
) 
```




<hr>



### function Subdivide 

```C++
static void Subdivide (
    u8 depth,
    f32 v0,
    f32 v1,
    f32 v2
) 
```




<hr>



### function SubdivideNrm 

```C++
static void SubdivideNrm (
    u8 depth,
    f32 v0,
    f32 v1,
    f32 v2
) 
```




<hr>



### function myvertex 

```C++
static inline void myvertex (
    f32 v,
    f32 n
) 
```




<hr>



### function normalize 

```C++
static inline void normalize (
    f32 v
) 
```




<hr>



### function vcross 

```C++
static inline void vcross (
    f32 u,
    f32 v,
    f32 n
) 
```




<hr>



### function vsub 

```C++
static inline void vsub (
    f32 p1,
    f32 p2,
    f32 u
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/gx/GXDraw.c`

