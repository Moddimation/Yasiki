

# File DEMOPuts.h



[**FileList**](files.md) **>** [**demo**](dir_5983b1906ef8e2e82d96c775d5089d03.md) **>** [**DEMOPuts.h**](_d_e_m_o_puts_8h.md)

[Go to the source code of this file](_d_e_m_o_puts_8h_source.md)




















## Public Types

| Type | Name |
| ---: | :--- |
| enum  | [**DMFontType**](#enum-dmfonttype)  <br> |
| enum  | [**DMTexFlt**](#enum-dmtexflt)  <br> |




















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




























## Public Types Documentation




### enum DMFontType 

```C++
enum DMFontType {
    DM_FT_OPQ,
    DM_FT_RVS,
    DM_FT_XLU
};
```




<hr>



### enum DMTexFlt 

```C++
enum DMTexFlt {
    DMTF_POINTSAMPLE,
    DMTF_BILERP
};
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

------------------------------
The documentation for this class was generated from the following file `SDK/include/dolphin/demo/DEMOPuts.h`

