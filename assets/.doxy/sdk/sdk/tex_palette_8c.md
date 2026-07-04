

# File texPalette.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**texPalette**](dir_a5d98ebfc7092a921306dc58156363e4.md) **>** [**texPalette.c**](tex_palette_8c.md)

[Go to the source code of this file](tex_palette_8c_source.md)



* `#include <macros.h>`
* `#include <dolphin/dvd.h>`
* `#include <dolphin/gx.h>`
* `#include <dolphin/os.h>`
* `#include <charPipeline/fileCache.h>`
* `#include <charPipeline/texPalette.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**TEXDescriptorPtr**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**TEXGet**](#function-texget) ([**TEXPalettePtr**](_c_a_r_d_private_8h.md#define-card_max_mount_step) pal, [**u32**](types_8h.md#typedef-u32) id) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**TEXGetGXTexObjFromPalette**](#function-texgetgxtexobjfrompalette) ([**TEXPalettePtr**](_c_a_r_d_private_8h.md#define-card_max_mount_step) pal, [**GXTexObj**](_g_x_struct_8h.md#typedef-gxtexobj) \* to, [**u32**](types_8h.md#typedef-u32) id) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**TEXGetGXTexObjFromPaletteCI**](#function-texgetgxtexobjfrompaletteci) ([**TEXPalettePtr**](_c_a_r_d_private_8h.md#define-card_max_mount_step) pal, [**GXTexObj**](_g_x_struct_8h.md#typedef-gxtexobj) \* to, [**GXTlutObj**](_g_x_struct_8h.md#typedef-gxtlutobj) \* tlo, [**GXTlut**](_g_x_enum_8h.md#typedef-gxtlut) tluts, [**u32**](types_8h.md#typedef-u32) id) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**TEXGetPalette**](#function-texgetpalette) ([**TEXPalettePtr**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* pal, [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* name) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**TEXReleasePalette**](#function-texreleasepalette) ([**TEXPalettePtr**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* pal) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**LoadTexPalette**](#function-loadtexpalette) ([**TEXPalettePtr**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* pal, [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* name) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**TexFreeFunc**](#function-texfreefunc) ([**TEXPalettePtr**](_c_a_r_d_private_8h.md#define-card_max_mount_step) pal) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**UnpackTexPalette**](#function-unpacktexpalette) ([**TEXPalettePtr**](_c_a_r_d_private_8h.md#define-card_max_mount_step) pal) <br> |

























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**PALETTE\_VERSION**](tex_palette_8c.md#define-palette_version)  `0x20AF30`<br> |

## Public Functions Documentation




### function TEXGet 

```C++
TEXDescriptorPtr TEXGet (
    TEXPalettePtr pal,
    u32 id
) 
```




<hr>



### function TEXGetGXTexObjFromPalette 

```C++
void TEXGetGXTexObjFromPalette (
    TEXPalettePtr pal,
    GXTexObj * to,
    u32 id
) 
```




<hr>



### function TEXGetGXTexObjFromPaletteCI 

```C++
void TEXGetGXTexObjFromPaletteCI (
    TEXPalettePtr pal,
    GXTexObj * to,
    GXTlutObj * tlo,
    GXTlut tluts,
    u32 id
) 
```




<hr>



### function TEXGetPalette 

```C++
void TEXGetPalette (
    TEXPalettePtr * pal,
    char * name
) 
```




<hr>



### function TEXReleasePalette 

```C++
void TEXReleasePalette (
    TEXPalettePtr * pal
) 
```




<hr>
## Public Static Functions Documentation




### function LoadTexPalette 

```C++
static void LoadTexPalette (
    TEXPalettePtr * pal,
    char * name
) 
```




<hr>



### function TexFreeFunc 

```C++
static void TexFreeFunc (
    TEXPalettePtr pal
) 
```




<hr>



### function UnpackTexPalette 

```C++
static void UnpackTexPalette (
    TEXPalettePtr pal
) 
```




<hr>
## Macro Definition Documentation





### define PALETTE\_VERSION 

```C++
#define PALETTE_VERSION `0x20AF30`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/texPalette/texPalette.c`

