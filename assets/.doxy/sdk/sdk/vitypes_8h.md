

# File vitypes.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**vi**](dir_c06ed8b441bec63d463886439e7a1449.md) **>** [**vitypes.h**](vitypes_8h.md)

[Go to the source code of this file](vitypes_8h_source.md)



* `#include <types.h>`

















## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**u8**](types_8h.md#typedef-u8) | [**VIBool**](#typedef-vibool)  <br> |
| typedef [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**VIRetraceCallback**](#typedef-viretracecallback)  <br> |
| enum  | [**VIScanMode**](#enum-viscanmode)  <br> |
| typedef [**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**VIScanMode**](vitypes_8h.md#enum-viscanmode) | [**VIScanMode**](#typedef-viscanmode)  <br> |
| enum  | [**VITVMode**](#enum-vitvmode)  <br> |
| enum  | [**VITvFormat**](#enum-vitvformat)  <br> |
| enum  | [**VIXFBMode**](#enum-vixfbmode)  <br> |
| typedef [**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**VIXFBMode**](vitypes_8h.md#enum-vixfbmode) | [**VIXFBMode**](#typedef-vixfbmode)  <br> |















































## Macros

| Type | Name |
| ---: | :--- |
| define  | [**VI\_3D**](vitypes_8h.md#define-vi_3d)  `3`<br> |
| define  | [**VI\_3D**](vitypes_8h.md#define-vi_3d)  `3`<br> |
| define  | [**VI\_DEBUG**](vitypes_8h.md#define-vi_debug)  `3`<br> |
| define  | [**VI\_DEBUG\_PAL**](vitypes_8h.md#define-vi_debug_pal)  `4`<br> |
| define  | [**VI\_DISABLE**](vitypes_8h.md#define-vi_disable)  `(([**VIBool**](vitypes_8h.md#typedef-vibool))0)`<br> |
| define  | [**VI\_ENABLE**](vitypes_8h.md#define-vi_enable)  `(([**VIBool**](vitypes_8h.md#typedef-vibool))1)`<br> |
| define  | [**VI\_EURGB60**](vitypes_8h.md#define-vi_eurgb60)  `5`<br> |
| define  | [**VI\_EXTRA**](vitypes_8h.md#define-vi_extra)  `7`<br> |
| define  | [**VI\_FALSE**](vitypes_8h.md#define-vi_false)  `(([**VIBool**](vitypes_8h.md#typedef-vibool))0)`<br> |
| define  | [**VI\_GCA**](vitypes_8h.md#define-vi_gca)  `6`<br> |
| define  | [**VI\_GCA**](vitypes_8h.md#define-vi_gca)  `6`<br> |
| define  | [**VI\_HD720**](vitypes_8h.md#define-vi_hd720)  `8`<br> |
| define  | [**VI\_INTERLACE**](vitypes_8h.md#define-vi_interlace)  `0`<br> |
| define  | [**VI\_MPAL**](vitypes_8h.md#define-vi_mpal)  `2`<br> |
| define  | [**VI\_NON\_INTERLACE**](vitypes_8h.md#define-vi_non_interlace)  `1`<br> |
| define  | [**VI\_NTSC**](vitypes_8h.md#define-vi_ntsc)  `0`<br> |
| define  | [**VI\_PAL**](vitypes_8h.md#define-vi_pal)  `1`<br> |
| define  | [**VI\_PROGRESSIVE**](vitypes_8h.md#define-vi_progressive)  `2`<br> |
| define  | [**VI\_TRUE**](vitypes_8h.md#define-vi_true)  `(([**VIBool**](vitypes_8h.md#typedef-vibool))1)`<br> |
| define  | [**VI\_TVMODE**](vitypes_8h.md#define-vi_tvmode) (FMT, INT) `((([**FMT**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) &lt;&lt; 2) + ([**INT**](_c_a_r_d_private_8h.md#define-card_max_mount_step)))`<br> |
| define  | [**VI\_TVMODE\_EXTRA\_DS**](vitypes_8h.md#define-vi_tvmode_extra_ds)  `(([**VITVMode**](vitypes_8h.md#enum-vitvmode))[**VI\_TVMODE**](vitypes_8h.md#define-vi_tvmode) ([**VI\_EXTRA**](vitypes_8h.md#define-vi_extra), [**VI\_NON\_INTERLACE**](vitypes_8h.md#define-vi_non_interlace)))`<br> |
| define  | [**VI\_TVMODE\_EXTRA\_INT**](vitypes_8h.md#define-vi_tvmode_extra_int)  `(([**VITVMode**](vitypes_8h.md#enum-vitvmode))[**VI\_TVMODE**](vitypes_8h.md#define-vi_tvmode) ([**VI\_EXTRA**](vitypes_8h.md#define-vi_extra), [**VI\_INTERLACE**](vitypes_8h.md#define-vi_interlace)))`<br> |
| define  | [**VI\_TVMODE\_EXTRA\_PROG**](vitypes_8h.md#define-vi_tvmode_extra_prog)  `(([**VITVMode**](vitypes_8h.md#enum-vitvmode))[**VI\_TVMODE**](vitypes_8h.md#define-vi_tvmode) ([**VI\_EXTRA**](vitypes_8h.md#define-vi_extra), [**VI\_PROGRESSIVE**](vitypes_8h.md#define-vi_progressive)))`<br> |
| define  | [**VI\_TVMODE\_GCA\_INT**](vitypes_8h.md#define-vi_tvmode_gca_int)  `([**VITVMode**](vitypes_8h.md#enum-vitvmode)) [**VI\_TVMODE**](vitypes_8h.md#define-vi_tvmode) ([**VI\_GCA**](vitypes_8h.md#define-vi_gca), [**VI\_INTERLACE**](vitypes_8h.md#define-vi_interlace))`<br> |
| define  | [**VI\_TVMODE\_GCA\_PROG**](vitypes_8h.md#define-vi_tvmode_gca_prog)  `([**VITVMode**](vitypes_8h.md#enum-vitvmode)) [**VI\_TVMODE**](vitypes_8h.md#define-vi_tvmode) ([**VI\_GCA**](vitypes_8h.md#define-vi_gca), [**VI\_PROGRESSIVE**](vitypes_8h.md#define-vi_progressive))`<br> |
| define  | [**VI\_TVMODE\_HD720\_PROG**](vitypes_8h.md#define-vi_tvmode_hd720_prog)  `(([**VITVMode**](vitypes_8h.md#enum-vitvmode))[**VI\_TVMODE**](vitypes_8h.md#define-vi_tvmode) ([**VI\_HD720**](vitypes_8h.md#define-vi_hd720), [**VI\_PROGRESSIVE**](vitypes_8h.md#define-vi_progressive)))`<br> |
| define  | [**VI\_TVMODE\_NTSC\_3D**](vitypes_8h.md#define-vi_tvmode_ntsc_3d)  `(([**VITVMode**](vitypes_8h.md#enum-vitvmode))[**VI\_TVMODE**](vitypes_8h.md#define-vi_tvmode) ([**VI\_NTSC**](vitypes_8h.md#define-vi_ntsc), [**VI\_3D**](vitypes_8h.md#define-vi_3d)))`<br> |
| define  | [**VI\_TVMODE\_PAL\_PROG**](vitypes_8h.md#define-vi_tvmode_pal_prog)  `([**VITVMode**](vitypes_8h.md#enum-vitvmode))6`<br> |
| define  | [**VI\_TV\_INFO**](vitypes_8h.md#define-vi_tv_info) (format, mode) `(((format) &lt;&lt; 2) + (mode))`<br> |
| define  | [**VI\_TV\_INFO\_FMT**](vitypes_8h.md#define-vi_tv_info_fmt) (info) `((info) &gt;&gt; 2)`<br> |
| define  | [**VI\_TV\_INFO\_MODE**](vitypes_8h.md#define-vi_tv_info_mode) (info) `((info) & 0b00000011)`<br> |

## Public Types Documentation




### typedef VIBool 

```C++
typedef u8 VIBool;
```




<hr>



### typedef VIRetraceCallback 

```C++
typedef void(* VIRetraceCallback) (u32 retraceCount);
```




<hr>



### enum VIScanMode 

```C++
enum VIScanMode {
    VI_SCAN_MODE_INT,
    VI_SCAN_MODE_DS,
    VI_SCAN_MODE_PROG
};
```




<hr>



### typedef VIScanMode 

```C++
typedef enum VIScanMode VIScanMode;
```




<hr>



### enum VITVMode 

```C++
enum VITVMode {
    VI_TVMODE_NTSC_INT = 0,
    VI_TVMODE_NTSC_DS = 1,
    VI_TVMODE_NTSC_PROG = 2,
    VI_TVMODE_PAL_INT = 4,
    VI_TVMODE_PAL_DS = 5,
    VI_TVMODE_EURGB60_INT = 20,
    VI_TVMODE_EURGB60_DS = 21,
    VI_TVMODE_EURGB60_PROG = 22,
    VI_TVMODE_MPAL_INT = 8,
    VI_TVMODE_MPAL_DS = 9,
    VI_TVMODE_MPAL_PROG = 10,
    VI_TVMODE_DEBUG_INT = 12,
    VI_TVMODE_DEBUG_PAL_INT = 16,
    VI_TVMODE_DEBUG_PAL_DS = 17
};
```




<hr>



### enum VITvFormat 

```C++
enum VITvFormat {
    VI_TV_FMT_NTSC,
    VI_TV_FMT_PAL,
    VI_TV_FMT_MPAL,
    VI_TV_FMT_DEBUG,
    VI_TV_FMT_DEBUG_PAL,
    VI_TV_FMT_EURGB60,
    VI_TV_FMT_6,
    VI_TV_FMT_7,
    VI_TV_FMT_8
};
```




<hr>



### enum VIXFBMode 

```C++
enum VIXFBMode {
    VI_XFB_MODE_SF,
    VI_XFB_MODE_DF
};
```




<hr>



### typedef VIXFBMode 

```C++
typedef enum VIXFBMode VIXFBMode;
```




<hr>
## Macro Definition Documentation





### define VI\_3D 

```C++
#define VI_3D `3`
```




<hr>



### define VI\_3D 

```C++
#define VI_3D `3`
```




<hr>



### define VI\_DEBUG 

```C++
#define VI_DEBUG `3`
```




<hr>



### define VI\_DEBUG\_PAL 

```C++
#define VI_DEBUG_PAL `4`
```




<hr>



### define VI\_DISABLE 

```C++
#define VI_DISABLE `(( VIBool )0)`
```




<hr>



### define VI\_ENABLE 

```C++
#define VI_ENABLE `(( VIBool )1)`
```




<hr>



### define VI\_EURGB60 

```C++
#define VI_EURGB60 `5`
```




<hr>



### define VI\_EXTRA 

```C++
#define VI_EXTRA `7`
```




<hr>



### define VI\_FALSE 

```C++
#define VI_FALSE `(( VIBool )0)`
```




<hr>



### define VI\_GCA 

```C++
#define VI_GCA `6`
```




<hr>



### define VI\_GCA 

```C++
#define VI_GCA `6`
```




<hr>



### define VI\_HD720 

```C++
#define VI_HD720 `8`
```




<hr>



### define VI\_INTERLACE 

```C++
#define VI_INTERLACE `0`
```




<hr>



### define VI\_MPAL 

```C++
#define VI_MPAL `2`
```




<hr>



### define VI\_NON\_INTERLACE 

```C++
#define VI_NON_INTERLACE `1`
```




<hr>



### define VI\_NTSC 

```C++
#define VI_NTSC `0`
```




<hr>



### define VI\_PAL 

```C++
#define VI_PAL `1`
```




<hr>



### define VI\_PROGRESSIVE 

```C++
#define VI_PROGRESSIVE `2`
```




<hr>



### define VI\_TRUE 

```C++
#define VI_TRUE `(( VIBool )1)`
```




<hr>



### define VI\_TVMODE 

```C++
#define VI_TVMODE (
    FMT,
    INT
) `((( FMT ) << 2) + ( INT ))`
```




<hr>



### define VI\_TVMODE\_EXTRA\_DS 

```C++
#define VI_TVMODE_EXTRA_DS `(( VITVMode ) VI_TVMODE ( VI_EXTRA , VI_NON_INTERLACE ))`
```




<hr>



### define VI\_TVMODE\_EXTRA\_INT 

```C++
#define VI_TVMODE_EXTRA_INT `(( VITVMode ) VI_TVMODE ( VI_EXTRA , VI_INTERLACE ))`
```




<hr>



### define VI\_TVMODE\_EXTRA\_PROG 

```C++
#define VI_TVMODE_EXTRA_PROG `(( VITVMode ) VI_TVMODE ( VI_EXTRA , VI_PROGRESSIVE ))`
```




<hr>



### define VI\_TVMODE\_GCA\_INT 

```C++
#define VI_TVMODE_GCA_INT `( VITVMode ) VI_TVMODE ( VI_GCA , VI_INTERLACE )`
```




<hr>



### define VI\_TVMODE\_GCA\_PROG 

```C++
#define VI_TVMODE_GCA_PROG `( VITVMode ) VI_TVMODE ( VI_GCA , VI_PROGRESSIVE )`
```




<hr>



### define VI\_TVMODE\_HD720\_PROG 

```C++
#define VI_TVMODE_HD720_PROG `(( VITVMode ) VI_TVMODE ( VI_HD720 , VI_PROGRESSIVE ))`
```




<hr>



### define VI\_TVMODE\_NTSC\_3D 

```C++
#define VI_TVMODE_NTSC_3D `(( VITVMode ) VI_TVMODE ( VI_NTSC , VI_3D ))`
```




<hr>



### define VI\_TVMODE\_PAL\_PROG 

```C++
#define VI_TVMODE_PAL_PROG `( VITVMode )6`
```




<hr>



### define VI\_TV\_INFO 

```C++
#define VI_TV_INFO (
    format,
    mode
) `(((format) << 2) + (mode))`
```




<hr>



### define VI\_TV\_INFO\_FMT 

```C++
#define VI_TV_INFO_FMT (
    info
) `((info) >> 2)`
```




<hr>



### define VI\_TV\_INFO\_MODE 

```C++
#define VI_TV_INFO_MODE (
    info
) `((info) & 0b00000011)`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/vi/vitypes.h`

