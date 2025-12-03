

# File OSFont.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**os**](dir_c85f9e83f0f4b4374578811cecebda65.md) **>** [**OSFont.c**](_o_s_font_8c.md)

[Go to the source code of this file](_o_s_font_8c_source.md)



* `#include <dolphin/os.h>`
* `#include <dolphin/vi.h>`
* `#include "OSPrivate.h"`























## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**CharsInSheet**](#variable-charsinsheet)  <br> |
|  [**OSFontHeader**](struct_o_s_font_header.md) \* | [**FontData**](#variable-fontdata)  <br> |
|  [**u16**](types_8h.md#typedef-u16) | [**HankakuToCode**](#variable-hankakutocode)   = `/* multi line expression */`<br> |
|  [**u8**](types_8h.md#typedef-u8) \* | [**SheetImage**](#variable-sheetimage)  <br> |
|  [**u8**](types_8h.md#typedef-u8) \* | [**WidthTable**](#variable-widthtable)  <br> |
|  [**u16**](types_8h.md#typedef-u16) | [**Zenkaku2Code**](#variable-zenkaku2code)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**u16**](types_8h.md#typedef-u16) | [**OSGetFontEncode**](#function-osgetfontencode) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**OSGetFontTexel**](#function-osgetfonttexel) ([**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* string, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* image, [**s32**](types_8h.md#typedef-s32) pos, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) stride, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* width) <br> |
|  [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**OSGetFontTexture**](#function-osgetfonttexture) ([**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* string, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \*\* image, [**s32**](types_8h.md#typedef-s32) \* x, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* y, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* width) <br> |
|  [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**OSGetFontWidth**](#function-osgetfontwidth) ([**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* string, [**s32**](types_8h.md#typedef-s32) \* width) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSInitFont**](#function-osinitfont) ([**OSFontHeader**](struct_o_s_font_header.md) \* fontData) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**OSLoadFont**](#function-osloadfont) ([**OSFontHeader**](struct_o_s_font_header.md) \* fontData, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* temp) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**Decode**](#function-decode) ([**u16**](types_8h.md#typedef-u16) \* s, [**u16**](types_8h.md#typedef-u16) \* d) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ExpandFontSheet**](#function-expandfontsheet) ([**u8**](types_8h.md#typedef-u8) \* src, [**u8**](types_8h.md#typedef-u8) \* dst) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**GetFontCode**](#function-getfontcode) ([**u16**](types_8h.md#typedef-u16) code) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**GetFontSize**](#function-getfontsize) ([**u8**](types_8h.md#typedef-u8) \* buf) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**ReadFont**](#function-readfont) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* img) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ReadROM**](#function-readrom) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* buf, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) length, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) offset) <br> |


























## Public Static Attributes Documentation




### variable CharsInSheet 

```C++
int CharsInSheet;
```




<hr>



### variable FontData 

```C++
OSFontHeader* FontData;
```




<hr>



### variable HankakuToCode 

```C++
u16 HankakuToCode[];
```




<hr>



### variable SheetImage 

```C++
u8* SheetImage;
```




<hr>



### variable WidthTable 

```C++
u8* WidthTable;
```




<hr>



### variable Zenkaku2Code 

```C++
u16 Zenkaku2Code[];
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
    long stride,
    long * width
) 
```




<hr>



### function OSGetFontTexture 

```C++
char * OSGetFontTexture (
    char * string,
    void ** image,
    s32 * x,
    long * y,
    long * width
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
int OSInitFont (
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
## Public Static Functions Documentation




### function Decode 

```C++
static void Decode (
    u16 * s,
    u16 * d
) 
```




<hr>



### function ExpandFontSheet 

```C++
static void ExpandFontSheet (
    u8 * src,
    u8 * dst
) 
```




<hr>



### function GetFontCode 

```C++
static int GetFontCode (
    u16 code
) 
```




<hr>



### function GetFontSize 

```C++
static u32 GetFontSize (
    u8 * buf
) 
```




<hr>



### function ReadFont 

```C++
static u32 ReadFont (
    void * img
) 
```




<hr>



### function ReadROM 

```C++
static void ReadROM (
    void * buf,
    int length,
    int offset
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/os/OSFont.c`

