

# File GXAttr.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**gx**](dir_b80c028b3e970eff7f2a07684ffcf104.md) **>** [**GXAttr.c**](_g_x_attr_8c.md)

[Go to the source code of this file](_g_x_attr_8c_source.md)



* `#include <dolphin/gx.h>`
* `#include <dolphin/os.h>`
* `#include "GXPrivate.h"`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXClearVtxDesc**](#function-gxclearvtxdesc) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXGetVtxAttrFmt**](#function-gxgetvtxattrfmt) ([**GXVtxFmt**](_g_x_enum_8h.md#typedef-gxvtxfmt) fmt, [**GXAttr**](_g_x_enum_8h.md#typedef-gxattr) attr, [**GXCompCnt**](_g_x_enum_8h.md#typedef-gxcompcnt) \* cnt, [**GXCompType**](_g_x_enum_8h.md#typedef-gxcomptype) \* type, [**u8**](types_8h.md#typedef-u8) \* frac) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXGetVtxAttrFmtv**](#function-gxgetvtxattrfmtv) ([**GXVtxFmt**](_g_x_enum_8h.md#typedef-gxvtxfmt) fmt, [**GXVtxAttrFmtList**](_g_x_struct_8h.md#typedef-gxvtxattrfmtlist) \* vat) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXGetVtxDesc**](#function-gxgetvtxdesc) ([**GXAttr**](_g_x_enum_8h.md#typedef-gxattr) attr, [**GXAttrType**](_g_x_enum_8h.md#typedef-gxattrtype) \* type) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXGetVtxDescv**](#function-gxgetvtxdescv) ([**GXVtxDescList**](_g_x_struct_8h.md#typedef-gxvtxdesclist) \* vcd) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXInvalidateVtxCache**](#function-gxinvalidatevtxcache) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetArray**](#function-gxsetarray) ([**GXAttr**](_g_x_enum_8h.md#typedef-gxattr) attr, [**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* base\_ptr, [**u8**](types_8h.md#typedef-u8) stride) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetNumTexGens**](#function-gxsetnumtexgens) ([**u8**](types_8h.md#typedef-u8) nTexGens) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetTexCoordGen2**](#function-gxsettexcoordgen2) ([**GXTexCoordID**](_g_x_enum_8h.md#typedef-gxtexcoordid) dst\_coord, [**GXTexGenType**](_g_x_enum_8h.md#typedef-gxtexgentype) func, [**GXTexGenSrc**](_g_x_enum_8h.md#typedef-gxtexgensrc) src\_param, [**u32**](types_8h.md#typedef-u32) mtx, [**GXBool**](_g_x_enum_8h.md#typedef-gxbool) normalize, [**u32**](types_8h.md#typedef-u32) pt\_texmtx) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetVtxAttrFmt**](#function-gxsetvtxattrfmt) ([**GXVtxFmt**](_g_x_enum_8h.md#typedef-gxvtxfmt) vtxfmt, [**GXAttr**](_g_x_enum_8h.md#typedef-gxattr) attr, [**GXCompCnt**](_g_x_enum_8h.md#typedef-gxcompcnt) cnt, [**GXCompType**](_g_x_enum_8h.md#typedef-gxcomptype) type, [**u8**](types_8h.md#typedef-u8) frac) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetVtxAttrFmtv**](#function-gxsetvtxattrfmtv) ([**GXVtxFmt**](_g_x_enum_8h.md#typedef-gxvtxfmt) vtxfmt, [**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**GXVtxAttrFmtList**](_g_x_struct_8h.md#typedef-gxvtxattrfmtlist) \* list) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetVtxDesc**](#function-gxsetvtxdesc) ([**GXAttr**](_g_x_enum_8h.md#typedef-gxattr) attr, [**GXAttrType**](_g_x_enum_8h.md#typedef-gxattrtype) type) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GXSetVtxDescv**](#function-gxsetvtxdescv) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**GXVtxDescList**](_g_x_struct_8h.md#typedef-gxvtxdesclist) \* attrPtr) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXSetVAT**](#function-__gxsetvat) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXSetVCD**](#function-__gxsetvcd) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SETVAT**](#function-setvat) ([**u32**](types_8h.md#typedef-u32) \* va, [**u32**](types_8h.md#typedef-u32) \* vb, [**u32**](types_8h.md#typedef-u32) \* vc, [**GXAttr**](_g_x_enum_8h.md#typedef-gxattr) attr, [**GXCompCnt**](_g_x_enum_8h.md#typedef-gxcompcnt) cnt, [**GXCompType**](_g_x_enum_8h.md#typedef-gxcomptype) type, [**u8**](types_8h.md#typedef-u8) shft) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SETVCDATTR**](#function-setvcdattr) ([**GXAttr**](_g_x_enum_8h.md#typedef-gxattr) Attr, [**GXAttrType**](_g_x_enum_8h.md#typedef-gxattrtype) Type) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_GXXfVtxSpecs**](#function-__gxxfvtxspecs) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |

























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**CHECK\_ATTRNAME**](_g_x_attr_8c.md#define-check_attrname) (line, attr) `/* multi line expression */`<br> |
| define  | [**CHECK\_ATTRNAME2**](_g_x_attr_8c.md#define-check_attrname2) (line, attr) `/* multi line expression */`<br> |
| define  | [**CHECK\_ATTRNAME3**](_g_x_attr_8c.md#define-check_attrname3) (line, attr) `/* multi line expression */`<br> |
| define  | [**CHECK\_ATTRPTR**](_g_x_attr_8c.md#define-check_attrptr) (line, attrPtr) `[**ASSERTMSGLINE**](_c_a_r_d_private_8h.md#define-card_max_mount_step) (line, ([**attrPtr**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) != [**NULL**](types_8h.md#define-null), "GXSetVtxDescv: [**attrPtr**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**is**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**NULL"**](_c_a_r_d_private_8h.md#define-card_max_mount_step))`<br> |
| define  | [**CHECK\_ATTRTYPE**](_g_x_attr_8c.md#define-check_attrtype) (line, type) `/* multi line expression */`<br> |
| define  | [**CHECK\_FRAC**](_g_x_attr_8c.md#define-check_frac) (line, frac) `[**ASSERTMSGLINE**](_c_a_r_d_private_8h.md#define-card_max_mount_step) (line, (frac) &lt; 32, "GXSetVtxAttrFmt: [**Frac**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**value**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**is**](_c_a_r_d_private_8h.md#define-card_max_mount_step) &gt;= 32")`<br> |
| define  | [**CHECK\_LISTPTR**](_g_x_attr_8c.md#define-check_listptr) (line, list) `[**ASSERTMSGLINE**](_c_a_r_d_private_8h.md#define-card_max_mount_step) (line, ([**list**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) != [**NULL**](types_8h.md#define-null), "GXSetVtxAttrFmt: [**list**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**pointer**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**is**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**NULL"**](_c_a_r_d_private_8h.md#define-card_max_mount_step))`<br> |
| define  | [**CHECK\_VTXFMT**](_g_x_attr_8c.md#define-check_vtxfmt) (line, vtxfmt) `/* multi line expression */`<br> |

## Public Functions Documentation




### function GXClearVtxDesc 

```C++
void GXClearVtxDesc (
    void
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



### function GXSetNumTexGens 

```C++
void GXSetNumTexGens (
    u8 nTexGens
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



### function \_\_GXSetVAT 

```C++
void __GXSetVAT (
    void
) 
```




<hr>



### function \_\_GXSetVCD 

```C++
void __GXSetVCD (
    void
) 
```




<hr>
## Public Static Functions Documentation




### function SETVAT 

```C++
static inline void SETVAT (
    u32 * va,
    u32 * vb,
    u32 * vc,
    GXAttr attr,
    GXCompCnt cnt,
    GXCompType type,
    u8 shft
) 
```




<hr>



### function SETVCDATTR 

```C++
static inline void SETVCDATTR (
    GXAttr Attr,
    GXAttrType Type
) 
```




<hr>



### function \_\_GXXfVtxSpecs 

```C++
static void __GXXfVtxSpecs (
    void
) 
```




<hr>
## Macro Definition Documentation





### define CHECK\_ATTRNAME 

```C++
#define CHECK_ATTRNAME (
    line,
    attr
) `/* multi line expression */`
```




<hr>



### define CHECK\_ATTRNAME2 

```C++
#define CHECK_ATTRNAME2 (
    line,
    attr
) `/* multi line expression */`
```




<hr>



### define CHECK\_ATTRNAME3 

```C++
#define CHECK_ATTRNAME3 (
    line,
    attr
) `/* multi line expression */`
```




<hr>



### define CHECK\_ATTRPTR 

```C++
#define CHECK_ATTRPTR (
    line,
    attrPtr
) `ASSERTMSGLINE (line, ( attrPtr ) != NULL , "GXSetVtxDescv: attrPtr  is  NULL" )`
```




<hr>



### define CHECK\_ATTRTYPE 

```C++
#define CHECK_ATTRTYPE (
    line,
    type
) `/* multi line expression */`
```




<hr>



### define CHECK\_FRAC 

```C++
#define CHECK_FRAC (
    line,
    frac
) `ASSERTMSGLINE (line, (frac) < 32, "GXSetVtxAttrFmt: Frac  value  is >= 32")`
```




<hr>



### define CHECK\_LISTPTR 

```C++
#define CHECK_LISTPTR (
    line,
    list
) `ASSERTMSGLINE (line, ( list ) != NULL , "GXSetVtxAttrFmt: list  pointer  is  NULL" )`
```




<hr>



### define CHECK\_VTXFMT 

```C++
#define CHECK_VTXFMT (
    line,
    vtxfmt
) `/* multi line expression */`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/gx/GXAttr.c`

