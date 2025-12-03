

# File OSFont.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**os**](dir_2e13e6cf1d2e2aa91cbc210fef9f68a3.md) **>** [**OSFont.h**](_o_s_font_8h.md)

[Go to the source code of this file](_o_s_font_8h_source.md)



* `#include <types.h>`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**OSFontHeader**](struct_o_s_font_header.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSFontHeader**](struct_o_s_font_header.md) | [**OSFontHeader**](#typedef-osfontheader)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**u16**](types_8h.md#typedef-u16) | [**OSGetFontEncode**](#function-osgetfontencode) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**OSGetFontTexel**](#function-osgetfonttexel) ([**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* string, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* image, [**s32**](types_8h.md#typedef-s32) pos, [**s32**](types_8h.md#typedef-s32) stride, [**s32**](types_8h.md#typedef-s32) \* width) <br> |
|  [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**OSGetFontTexture**](#function-osgetfonttexture) ([**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* string, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \*\* image, [**s32**](types_8h.md#typedef-s32) \* x, [**s32**](types_8h.md#typedef-s32) \* y, [**s32**](types_8h.md#typedef-s32) \* width) <br> |
|  [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**OSGetFontWidth**](#function-osgetfontwidth) ([**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* string, [**s32**](types_8h.md#typedef-s32) \* width) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**OSInitFont**](#function-osinitfont) ([**OSFontHeader**](struct_o_s_font_header.md) \* fontData) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**OSLoadFont**](#function-osloadfont) ([**OSFontHeader**](struct_o_s_font_header.md) \* fontData, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* temp) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**OS\_FONT\_ENCODE\_ANSI**](_o_s_font_8h.md#define-os_font_encode_ansi)  `0u`<br> |
| define  | [**OS\_FONT\_ENCODE\_SJIS**](_o_s_font_8h.md#define-os_font_encode_sjis)  `1[**u**](_c_a_r_d_private_8h.md#define-card_max_mount_step)`<br> |
| define  | [**OS\_FONT\_ROM\_SIZE\_ANSI**](_o_s_font_8h.md#define-os_font_rom_size_ansi)  `0x03000`<br> |
| define  | [**OS\_FONT\_ROM\_SIZE\_SJIS**](_o_s_font_8h.md#define-os_font_rom_size_sjis)  `0x4D000`<br> |
| define  | [**OS\_FONT\_SIZE\_ANSI**](_o_s_font_8h.md#define-os_font_size_ansi)  `(288 + 131072)`<br> |
| define  | [**OS\_FONT\_SIZE\_SJIS**](_o_s_font_8h.md#define-os_font_size_sjis)  `(3840 + 1179648)`<br> |

## Public Types Documentation




### typedef OSFontHeader 

```C++
typedef struct OSFontHeader OSFontHeader;
```




<hr>
## Public Functions Documentation




### function OSGetFontEncode 

```C++
u16 OSGetFontEncode (
    void
) 
```




<hr>



### function OSGetFontTexel 

```C++
char * OSGetFontTexel (
    char * string,
    void * image,
    s32 pos,
    s32 stride,
    s32 * width
) 
```




<hr>



### function OSGetFontTexture 

```C++
char * OSGetFontTexture (
    char * string,
    void ** image,
    s32 * x,
    s32 * y,
    s32 * width
) 
```




<hr>



### function OSGetFontWidth 

```C++
char * OSGetFontWidth (
    char * string,
    s32 * width
) 
```




<hr>



### function OSInitFont 

```C++
BOOL OSInitFont (
    OSFontHeader * fontData
) 
```




<hr>



### function OSLoadFont 

```C++
u32 OSLoadFont (
    OSFontHeader * fontData,
    void * temp
) 
```




<hr>
## Macro Definition Documentation





### define OS\_FONT\_ENCODE\_ANSI 

```C++
#define OS_FONT_ENCODE_ANSI `0u`
```




<hr>



### define OS\_FONT\_ENCODE\_SJIS 

```C++
#define OS_FONT_ENCODE_SJIS `1 u`
```




<hr>



### define OS\_FONT\_ROM\_SIZE\_ANSI 

```C++
#define OS_FONT_ROM_SIZE_ANSI `0x03000`
```




<hr>



### define OS\_FONT\_ROM\_SIZE\_SJIS 

```C++
#define OS_FONT_ROM_SIZE_SJIS `0x4D000`
```




<hr>



### define OS\_FONT\_SIZE\_ANSI 

```C++
#define OS_FONT_SIZE_ANSI `(288 + 131072)`
```




<hr>



### define OS\_FONT\_SIZE\_SJIS 

```C++
#define OS_FONT_SIZE_SJIS `(3840 + 1179648)`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/os/OSFont.h`

