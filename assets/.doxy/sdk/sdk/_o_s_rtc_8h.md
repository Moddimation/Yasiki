

# File OSRtc.h



[**FileList**](files.md) **>** [**dolphin**](dir_8d73ddf10613ffd25a966cd68a313b8d.md) **>** [**os**](dir_ec7c732b679442ba7b10ef1b15f4b60e.md) **>** [**OSRtc.h**](_o_s_rtc_8h.md)

[Go to the source code of this file](_o_s_rtc_8h_source.md)



* `#include <types.h>`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**OSSram**](struct_o_s_sram.md) <br> |
| struct | [**OSSramEx**](struct_o_s_sram_ex.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSSram**](struct_o_s_sram.md) | [**OSSram**](#typedef-ossram)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**OSSramEx**](struct_o_s_sram_ex.md) | [**OSSramEx**](#typedef-ossramex)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**u16**](types_8h.md#typedef-u16) | [**OSGetLanguage**](#function-osgetlanguage) () <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**OSGetSoundMode**](#function-osgetsoundmode) () <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**OSGetVideoMode**](#function-osgetvideomode) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSSetLanguage**](#function-ossetlanguage) ([**u16**](types_8h.md#typedef-u16) language) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSSetSoundMode**](#function-ossetsoundmode) ([**u32**](types_8h.md#typedef-u32) mode) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**OSSetVideoMode**](#function-ossetvideomode) ([**u32**](types_8h.md#typedef-u32) mode) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**OS\_SOUND\_MODE\_MONO**](_o_s_rtc_8h.md#define-os_sound_mode_mono)  `0`<br> |
| define  | [**OS\_SOUND\_MODE\_STEREO**](_o_s_rtc_8h.md#define-os_sound_mode_stereo)  `1`<br> |
| define  | [**OS\_VIDEO\_MODE\_MPAL**](_o_s_rtc_8h.md#define-os_video_mode_mpal)  `2`<br> |
| define  | [**OS\_VIDEO\_MODE\_NTSC**](_o_s_rtc_8h.md#define-os_video_mode_ntsc)  `0`<br> |

## Public Types Documentation




### typedef OSSram 

```C++
typedef struct OSSram OSSram;
```




<hr>



### typedef OSSramEx 

```C++
typedef struct OSSramEx OSSramEx;
```




<hr>
## Public Functions Documentation




### function OSGetLanguage 

```C++
u16 OSGetLanguage () 
```




<hr>



### function OSGetSoundMode 

```C++
u32 OSGetSoundMode () 
```




<hr>



### function OSGetVideoMode 

```C++
u32 OSGetVideoMode () 
```




<hr>



### function OSSetLanguage 

```C++
void OSSetLanguage (
    u16 language
) 
```




<hr>



### function OSSetSoundMode 

```C++
void OSSetSoundMode (
    u32 mode
) 
```




<hr>



### function OSSetVideoMode 

```C++
void OSSetVideoMode (
    u32 mode
) 
```




<hr>
## Macro Definition Documentation





### define OS\_SOUND\_MODE\_MONO 

```C++
#define OS_SOUND_MODE_MONO `0`
```




<hr>



### define OS\_SOUND\_MODE\_STEREO 

```C++
#define OS_SOUND_MODE_STEREO `1`
```




<hr>



### define OS\_VIDEO\_MODE\_MPAL 

```C++
#define OS_VIDEO_MODE_MPAL `2`
```




<hr>



### define OS\_VIDEO\_MODE\_NTSC 

```C++
#define OS_VIDEO_MODE_NTSC `0`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `SDK/include/dolphin/os/OSRtc.h`

