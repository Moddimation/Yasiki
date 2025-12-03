

# File DEMOPuts.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**demo**](dir_12b9b9f3614a19f67fa121459aa56b48.md) **>** [**DEMOPuts.c**](_d_e_m_o_puts_8c.md)

[Go to the source code of this file](_d_e_m_o_puts_8c_source.md)



* `#include <dolphin/demo.h>`
* `#include <dolphin/gx.h>`
* `#include <dolphin/mtx.h>`
* `#include <dolphin.h>`
* `#include "DEMOPrivate.h"`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**u32**](types_8h.md#typedef-u32) | [**DEMOFontBitmap**](#variable-demofontbitmap)  <br> |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSFontHeader**](struct_o_s_font_header.md) \* | [**FontData**](#variable-fontdata)  <br> |
|  [**s16**](types_8h.md#typedef-s16) | [**FontSize**](#variable-fontsize)  <br> |
|  [**s16**](types_8h.md#typedef-s16) | [**FontSpace**](#variable-fontspace)  <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**LastSheet**](#variable-lastsheet)  <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**fontShift**](#variable-fontshift)  <br> |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**\_GXTexObj**](struct___g_x_tex_obj.md) | [**fontTexObj**](#variable-fonttexobj)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**DEMODumpROMFont**](#function-demodumpromfont) ([**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* string) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOGetRFTextWidth**](#function-demogetrftextwidth) ([**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* string) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOInitCaption**](#function-demoinitcaption) ([**s32**](types_8h.md#typedef-s32) font\_type, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) width, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) height) <br> |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSFontHeader**](struct_o_s_font_header.md) \* | [**DEMOInitROMFont**](#function-demoinitromfont) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOLoadFont**](#function-demoloadfont) ([**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**\_GXTexMapID**](_g_x_enum_8h.md#enum-_gxtexmapid) texMap, [**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**\_GXTexMtx**](_g_x_enum_8h.md#enum-_gxtexmtx) texMtx, [**DMTexFlt**](_d_e_m_o_puts_8h.md#enum-dmtexflt) texFlt) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOPrintf**](#function-demoprintf) ([**s16**](types_8h.md#typedef-s16) x, [**s16**](types_8h.md#typedef-s16) y, [**s16**](types_8h.md#typedef-s16) z, [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* fmt, ...) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOPuts**](#function-demoputs) ([**s16**](types_8h.md#typedef-s16) x, [**s16**](types_8h.md#typedef-s16) y, [**s16**](types_8h.md#typedef-s16) z, [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* string) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMORFPrintf**](#function-demorfprintf) ([**s16**](types_8h.md#typedef-s16) x, [**s16**](types_8h.md#typedef-s16) y, [**s16**](types_8h.md#typedef-s16) z, [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* fmt, ...) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMORFPuts**](#function-demorfputs) ([**s16**](types_8h.md#typedef-s16) x, [**s16**](types_8h.md#typedef-s16) y, [**s16**](types_8h.md#typedef-s16) z, [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* string) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMORFPutsEx**](#function-demorfputsex) ([**s16**](types_8h.md#typedef-s16) x, [**s16**](types_8h.md#typedef-s16) y, [**s16**](types_8h.md#typedef-s16) z, [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* string, [**s16**](types_8h.md#typedef-s16) maxWidth, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) length) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOSetFontType**](#function-demosetfonttype) ([**DMFontType**](_d_e_m_o_puts_8h.md#enum-dmfonttype) attr) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOSetROMFontSize**](#function-demosetromfontsize) ([**s16**](types_8h.md#typedef-s16) size, [**s16**](types_8h.md#typedef-s16) space) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DEMOSetupScrnSpc**](#function-demosetupscrnspc) ([**s32**](types_8h.md#typedef-s32) width, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) height, [**float**](_c_a_r_d_private_8h.md#define-card_max_mount_step) depth) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DrawFontChar**](#function-drawfontchar) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) x, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) y, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) z, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) xChar, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) yChar) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**LoadSheet**](#function-loadsheet) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* image, [**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**\_GXTexMapID**](_g_x_enum_8h.md#enum-_gxtexmapid) texMapID) <br> |


























## Public Attributes Documentation




### variable DEMOFontBitmap 

```C++
u32 DEMOFontBitmap[];
```




<hr>
## Public Static Attributes Documentation




### variable FontData 

```C++
struct OSFontHeader* FontData;
```




<hr>



### variable FontSize 

```C++
s16 FontSize;
```




<hr>



### variable FontSpace 

```C++
s16 FontSpace;
```




<hr>



### variable LastSheet 

```C++
void* LastSheet;
```




<hr>



### variable fontShift 

```C++
s32 fontShift;
```




<hr>



### variable fontTexObj 

```C++
struct _GXTexObj fontTexObj;
```




<hr>
## Public Functions Documentation




### function DEMODumpROMFont 

```C++
char * DEMODumpROMFont (
    char * string
) 
```




<hr>



### function DEMOGetRFTextWidth 

```C++
int DEMOGetRFTextWidth (
    char * string
) 
```




<hr>



### function DEMOInitCaption 

```C++
void DEMOInitCaption (
    s32 font_type,
    long width,
    long height
) 
```




<hr>



### function DEMOInitROMFont 

```C++
struct  OSFontHeader * DEMOInitROMFont () 
```




<hr>



### function DEMOLoadFont 

```C++
void DEMOLoadFont (
    enum  _GXTexMapID texMap,
    enum  _GXTexMtx texMtx,
    DMTexFlt texFlt
) 
```




<hr>



### function DEMOPrintf 

```C++
void DEMOPrintf (
    s16 x,
    s16 y,
    s16 z,
    char * fmt,
    ...
) 
```




<hr>



### function DEMOPuts 

```C++
void DEMOPuts (
    s16 x,
    s16 y,
    s16 z,
    char * string
) 
```




<hr>



### function DEMORFPrintf 

```C++
int DEMORFPrintf (
    s16 x,
    s16 y,
    s16 z,
    char * fmt,
    ...
) 
```




<hr>



### function DEMORFPuts 

```C++
int DEMORFPuts (
    s16 x,
    s16 y,
    s16 z,
    char * string
) 
```




<hr>



### function DEMORFPutsEx 

```C++
int DEMORFPutsEx (
    s16 x,
    s16 y,
    s16 z,
    char * string,
    s16 maxWidth,
    int length
) 
```




<hr>



### function DEMOSetFontType 

```C++
void DEMOSetFontType (
    DMFontType attr
) 
```




<hr>



### function DEMOSetROMFontSize 

```C++
void DEMOSetROMFontSize (
    s16 size,
    s16 space
) 
```




<hr>



### function DEMOSetupScrnSpc 

```C++
void DEMOSetupScrnSpc (
    s32 width,
    long height,
    float depth
) 
```




<hr>
## Public Static Functions Documentation




### function DrawFontChar 

```C++
static void DrawFontChar (
    int x,
    int y,
    int z,
    int xChar,
    int yChar
) 
```




<hr>



### function LoadSheet 

```C++
static void LoadSheet (
    void * image,
    enum  _GXTexMapID texMapID
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/demo/DEMOPuts.c`

