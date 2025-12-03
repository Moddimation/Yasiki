

# File card.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**card.h**](card_8h.md)

[Go to the source code of this file](card_8h_source.md)



* `#include <dolphin/dsp.h>`
* `#include <dolphin/dvd.h>`
* `#include <dolphin/os.h>`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**CARDFileInfo**](struct_c_a_r_d_file_info.md) <br> |
| struct | [**CARDStat**](struct_c_a_r_d_stat.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**CARDCallback**](#typedef-cardcallback)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**CARDFileInfo**](struct_c_a_r_d_file_info.md) | [**CARDFileInfo**](#typedef-cardfileinfo)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**CARDStat**](struct_c_a_r_d_stat.md) | [**CARDStat**](#typedef-cardstat)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDCancel**](#function-cardcancel) ([**CARDFileInfo**](struct_c_a_r_d_file_info.md) \* fileInfo) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDCheck**](#function-cardcheck) ([**s32**](types_8h.md#typedef-s32) chan) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDCheckAsync**](#function-cardcheckasync) ([**s32**](types_8h.md#typedef-s32) chan, [**CARDCallback**](card_8h.md#typedef-cardcallback) callback) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDCheckEx**](#function-cardcheckex) ([**s32**](types_8h.md#typedef-s32) chan, [**s32**](types_8h.md#typedef-s32) \* xferBytes) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDCheckExAsync**](#function-cardcheckexasync) ([**s32**](types_8h.md#typedef-s32) chan, [**s32**](types_8h.md#typedef-s32) \* xferBytes, [**CARDCallback**](card_8h.md#typedef-cardcallback) callback) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDClose**](#function-cardclose) ([**CARDFileInfo**](struct_c_a_r_d_file_info.md) \* fileInfo) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDCreate**](#function-cardcreate) ([**s32**](types_8h.md#typedef-s32) chan, [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* fileName, [**u32**](types_8h.md#typedef-u32) size, [**CARDFileInfo**](struct_c_a_r_d_file_info.md) \* fileInfo) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDCreateAsync**](#function-cardcreateasync) ([**s32**](types_8h.md#typedef-s32) chan, [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* fileName, [**u32**](types_8h.md#typedef-u32) size, [**CARDFileInfo**](struct_c_a_r_d_file_info.md) \* fileInfo, [**CARDCallback**](card_8h.md#typedef-cardcallback) callback) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDDelete**](#function-carddelete) ([**s32**](types_8h.md#typedef-s32) chan, [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* fileName) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDDeleteAsync**](#function-carddeleteasync) ([**s32**](types_8h.md#typedef-s32) chan, [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* fileName, [**CARDCallback**](card_8h.md#typedef-cardcallback) callback) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDFastDelete**](#function-cardfastdelete) ([**s32**](types_8h.md#typedef-s32) chan, [**s32**](types_8h.md#typedef-s32) fileNo) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDFastDeleteAsync**](#function-cardfastdeleteasync) ([**s32**](types_8h.md#typedef-s32) chan, [**s32**](types_8h.md#typedef-s32) fileNo, [**CARDCallback**](card_8h.md#typedef-cardcallback) callback) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDFastOpen**](#function-cardfastopen) ([**s32**](types_8h.md#typedef-s32) chan, [**s32**](types_8h.md#typedef-s32) fileNo, [**CARDFileInfo**](struct_c_a_r_d_file_info.md) \* fileInfo) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDFormat**](#function-cardformat) ([**s32**](types_8h.md#typedef-s32) chan) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDFormatAsync**](#function-cardformatasync) ([**s32**](types_8h.md#typedef-s32) chan, [**CARDCallback**](card_8h.md#typedef-cardcallback) callback) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDFreeBlocks**](#function-cardfreeblocks) ([**s32**](types_8h.md#typedef-s32) chan, [**s32**](types_8h.md#typedef-s32) \* byteNotUsed, [**s32**](types_8h.md#typedef-s32) \* filesNotUsed) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDGetEncoding**](#function-cardgetencoding) ([**s32**](types_8h.md#typedef-s32) chan, [**u16**](types_8h.md#typedef-u16) \* encode) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDGetMemSize**](#function-cardgetmemsize) ([**s32**](types_8h.md#typedef-s32) chan, [**u16**](types_8h.md#typedef-u16) \* size) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDGetResultCode**](#function-cardgetresultcode) ([**s32**](types_8h.md#typedef-s32) chan) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDGetSectorSize**](#function-cardgetsectorsize) ([**s32**](types_8h.md#typedef-s32) chan, [**u32**](types_8h.md#typedef-u32) \* size) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDGetStatus**](#function-cardgetstatus) ([**s32**](types_8h.md#typedef-s32) chan, [**s32**](types_8h.md#typedef-s32) fileNo, [**CARDStat**](struct_c_a_r_d_stat.md) \* stat) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDGetXferredBytes**](#function-cardgetxferredbytes) ([**s32**](types_8h.md#typedef-s32) chan) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**CARDInit**](#function-cardinit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDMount**](#function-cardmount) ([**s32**](types_8h.md#typedef-s32) chan, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* workArea, [**CARDCallback**](card_8h.md#typedef-cardcallback) detachCallback) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDMountAsync**](#function-cardmountasync) ([**s32**](types_8h.md#typedef-s32) chan, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* workArea, [**CARDCallback**](card_8h.md#typedef-cardcallback) detachCallback, [**CARDCallback**](card_8h.md#typedef-cardcallback) attachCallback) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDOpen**](#function-cardopen) ([**s32**](types_8h.md#typedef-s32) chan, [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* fileName, [**CARDFileInfo**](struct_c_a_r_d_file_info.md) \* fileInfo) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**CARDProbe**](#function-cardprobe) ([**s32**](types_8h.md#typedef-s32) chan) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDProbeEx**](#function-cardprobeex) ([**s32**](types_8h.md#typedef-s32) chan, [**s32**](types_8h.md#typedef-s32) \* memSize, [**s32**](types_8h.md#typedef-s32) \* sectorSize) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDRead**](#function-cardread) ([**CARDFileInfo**](struct_c_a_r_d_file_info.md) \* fileInfo, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* addr, [**s32**](types_8h.md#typedef-s32) length, [**s32**](types_8h.md#typedef-s32) offset) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDReadAsync**](#function-cardreadasync) ([**CARDFileInfo**](struct_c_a_r_d_file_info.md) \* fileInfo, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* addr, [**s32**](types_8h.md#typedef-s32) length, [**s32**](types_8h.md#typedef-s32) offset, [**CARDCallback**](card_8h.md#typedef-cardcallback) callback) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDRename**](#function-cardrename) ([**s32**](types_8h.md#typedef-s32) chan, [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* oldName, [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* newName) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDRenameAsync**](#function-cardrenameasync) ([**s32**](types_8h.md#typedef-s32) chan, [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* oldName, [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* newName, [**CARDCallback**](card_8h.md#typedef-cardcallback) callback) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDSetStatus**](#function-cardsetstatus) ([**s32**](types_8h.md#typedef-s32) chan, [**s32**](types_8h.md#typedef-s32) fileNo, [**CARDStat**](struct_c_a_r_d_stat.md) \* stat) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDSetStatusAsync**](#function-cardsetstatusasync) ([**s32**](types_8h.md#typedef-s32) chan, [**s32**](types_8h.md#typedef-s32) fileNo, [**CARDStat**](struct_c_a_r_d_stat.md) \* stat, [**CARDCallback**](card_8h.md#typedef-cardcallback) callback) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDUnmount**](#function-cardunmount) ([**s32**](types_8h.md#typedef-s32) chan) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDWrite**](#function-cardwrite) ([**CARDFileInfo**](struct_c_a_r_d_file_info.md) \* fileInfo, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* addr, [**s32**](types_8h.md#typedef-s32) length, [**s32**](types_8h.md#typedef-s32) offset) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDWriteAsync**](#function-cardwriteasync) ([**CARDFileInfo**](struct_c_a_r_d_file_info.md) \* fileInfo, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* addr, [**s32**](types_8h.md#typedef-s32) length, [**s32**](types_8h.md#typedef-s32) offset, [**CARDCallback**](card_8h.md#typedef-cardcallback) callback) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**CARDGetBannerFormat**](card_8h.md#define-cardgetbannerformat) (stat) `(((stat)-&gt;bannerFormat) & [**CARD\_STAT\_BANNER\_MASK**](card_8h.md#define-card_stat_banner_mask))`<br> |
| define  | [**CARDGetFileNo**](card_8h.md#define-cardgetfileno) (fileInfo) `((fileInfo)-&gt;fileNo)`<br> |
| define  | [**CARDGetIconAnim**](card_8h.md#define-cardgeticonanim) (stat) `(((stat)-&gt;bannerFormat) & [**CARD\_STAT\_ANIM\_MASK**](card_8h.md#define-card_stat_anim_mask))`<br> |
| define  | [**CARDGetIconFormat**](card_8h.md#define-cardgeticonformat) (stat, n) `(((stat)-&gt;iconFormat &gt;&gt; (2 \* ([**n**](_c_a_r_d_private_8h.md#define-card_max_mount_step)))) & [**CARD\_STAT\_ICON\_MASK**](card_8h.md#define-card_stat_icon_mask))`<br> |
| define  | [**CARDGetIconSpeed**](card_8h.md#define-cardgeticonspeed) (stat, n) `(((stat)-&gt;iconSpeed &gt;&gt; (2 \* ([**n**](_c_a_r_d_private_8h.md#define-card_max_mount_step)))) & [**CARD\_STAT\_SPEED\_MASK**](card_8h.md#define-card_stat_speed_mask))`<br> |
| define  | [**CARDSetIconFormat**](card_8h.md#define-cardseticonformat) (stat, n, f) `/* multi line expression */`<br> |
| define  | [**CARDSetIconSpeed**](card_8h.md#define-cardseticonspeed) (stat, n, f) `/* multi line expression */`<br> |
| define  | [**CARD\_ATTR\_COMPANY**](card_8h.md#define-card_attr_company)  `0x40u`<br> |
| define  | [**CARD\_ATTR\_GLOBAL**](card_8h.md#define-card_attr_global)  `0x20u`<br> |
| define  | [**CARD\_ATTR\_NO\_COPY**](card_8h.md#define-card_attr_no_copy)  `0x08u`<br> |
| define  | [**CARD\_ATTR\_NO\_MOVE**](card_8h.md#define-card_attr_no_move)  `0x10u`<br> |
| define  | [**CARD\_ATTR\_PUBLIC**](card_8h.md#define-card_attr_public)  `0x04u`<br> |
| define  | [**CARD\_ATTR\_UNK0**](card_8h.md#define-card_attr_unk0)  `0x01u`<br> |
| define  | [**CARD\_ATTR\_UNK1**](card_8h.md#define-card_attr_unk1)  `0x02u`<br> |
| define  | [**CARD\_BANNER\_HEIGHT**](card_8h.md#define-card_banner_height)  `32`<br> |
| define  | [**CARD\_BANNER\_WIDTH**](card_8h.md#define-card_banner_width)  `96`<br> |
| define  | [**CARD\_COMMENT\_SIZE**](card_8h.md#define-card_comment_size)  `64`<br> |
| define  | [**CARD\_ENCODE\_ANSI**](card_8h.md#define-card_encode_ansi)  `[**OS\_FONT\_ENCODE\_ANSI**](_o_s_font_8h.md#define-os_font_encode_ansi)`<br> |
| define  | [**CARD\_ENCODE\_SJIS**](card_8h.md#define-card_encode_sjis)  `[**OS\_FONT\_ENCODE\_SJIS**](_o_s_font_8h.md#define-os_font_encode_sjis)`<br> |
| define  | [**CARD\_FILENAME\_MAX**](card_8h.md#define-card_filename_max)  `32`<br> |
| define  | [**CARD\_ICON\_HEIGHT**](card_8h.md#define-card_icon_height)  `32`<br> |
| define  | [**CARD\_ICON\_MAX**](card_8h.md#define-card_icon_max)  `8`<br> |
| define  | [**CARD\_ICON\_WIDTH**](card_8h.md#define-card_icon_width)  `32`<br> |
| define  | [**CARD\_MAX\_FILE**](card_8h.md#define-card_max_file)  `127`<br> |
| define  | [**CARD\_READ\_SIZE**](card_8h.md#define-card_read_size)  `512`<br> |
| define  | [**CARD\_RESULT\_BROKEN**](card_8h.md#define-card_result_broken)  `-6`<br> |
| define  | [**CARD\_RESULT\_BUSY**](card_8h.md#define-card_result_busy)  `-1`<br> |
| define  | [**CARD\_RESULT\_CANCELED**](card_8h.md#define-card_result_canceled)  `-14`<br> |
| define  | [**CARD\_RESULT\_ENCODING**](card_8h.md#define-card_result_encoding)  `-13`<br> |
| define  | [**CARD\_RESULT\_EXIST**](card_8h.md#define-card_result_exist)  `-7`<br> |
| define  | [**CARD\_RESULT\_FATAL\_ERROR**](card_8h.md#define-card_result_fatal_error)  `-128`<br> |
| define  | [**CARD\_RESULT\_INSSPACE**](card_8h.md#define-card_result_insspace)  `-9`<br> |
| define  | [**CARD\_RESULT\_IOERROR**](card_8h.md#define-card_result_ioerror)  `-5`<br> |
| define  | [**CARD\_RESULT\_LIMIT**](card_8h.md#define-card_result_limit)  `-11`<br> |
| define  | [**CARD\_RESULT\_NAMETOOLONG**](card_8h.md#define-card_result_nametoolong)  `-12`<br> |
| define  | [**CARD\_RESULT\_NOCARD**](card_8h.md#define-card_result_nocard)  `-3`<br> |
| define  | [**CARD\_RESULT\_NOENT**](card_8h.md#define-card_result_noent)  `-8`<br> |
| define  | [**CARD\_RESULT\_NOFILE**](card_8h.md#define-card_result_nofile)  `-4`<br> |
| define  | [**CARD\_RESULT\_NOPERM**](card_8h.md#define-card_result_noperm)  `-10`<br> |
| define  | [**CARD\_RESULT\_READY**](card_8h.md#define-card_result_ready)  `0`<br> |
| define  | [**CARD\_RESULT\_UNLOCKED**](card_8h.md#define-card_result_unlocked)  `1`<br> |
| define  | [**CARD\_RESULT\_WRONGDEVICE**](card_8h.md#define-card_result_wrongdevice)  `-2`<br> |
| define  | [**CARD\_STAT\_ANIM\_BOUNCE**](card_8h.md#define-card_stat_anim_bounce)  `0x04`<br> |
| define  | [**CARD\_STAT\_ANIM\_LOOP**](card_8h.md#define-card_stat_anim_loop)  `0x00`<br> |
| define  | [**CARD\_STAT\_ANIM\_MASK**](card_8h.md#define-card_stat_anim_mask)  `0x04`<br> |
| define  | [**CARD\_STAT\_BANNER\_C8**](card_8h.md#define-card_stat_banner_c8)  `1`<br> |
| define  | [**CARD\_STAT\_BANNER\_MASK**](card_8h.md#define-card_stat_banner_mask)  `3`<br> |
| define  | [**CARD\_STAT\_BANNER\_NONE**](card_8h.md#define-card_stat_banner_none)  `0`<br> |
| define  | [**CARD\_STAT\_BANNER\_RGB5A3**](card_8h.md#define-card_stat_banner_rgb5a3)  `2`<br> |
| define  | [**CARD\_STAT\_ICON\_C8**](card_8h.md#define-card_stat_icon_c8)  `1`<br> |
| define  | [**CARD\_STAT\_ICON\_MASK**](card_8h.md#define-card_stat_icon_mask)  `3`<br> |
| define  | [**CARD\_STAT\_ICON\_NONE**](card_8h.md#define-card_stat_icon_none)  `0`<br> |
| define  | [**CARD\_STAT\_ICON\_RGB5A3**](card_8h.md#define-card_stat_icon_rgb5a3)  `2`<br> |
| define  | [**CARD\_STAT\_SPEED\_END**](card_8h.md#define-card_stat_speed_end)  `0`<br> |
| define  | [**CARD\_STAT\_SPEED\_FAST**](card_8h.md#define-card_stat_speed_fast)  `1`<br> |
| define  | [**CARD\_STAT\_SPEED\_MASK**](card_8h.md#define-card_stat_speed_mask)  `3`<br> |
| define  | [**CARD\_STAT\_SPEED\_MIDDLE**](card_8h.md#define-card_stat_speed_middle)  `2`<br> |
| define  | [**CARD\_STAT\_SPEED\_SLOW**](card_8h.md#define-card_stat_speed_slow)  `3`<br> |
| define  | [**CARD\_WORKAREA\_SIZE**](card_8h.md#define-card_workarea_size)  `(5 \* 8 \* 1024)`<br> |
| define  | [**CARD\_XFER\_CREATE**](card_8h.md#define-card_xfer_create)  `(2 \* 8 \* 1024)`<br> |
| define  | [**CARD\_XFER\_DELETE**](card_8h.md#define-card_xfer_delete)  `(2 \* 8 \* 1024)`<br> |
| define  | [**CARD\_XFER\_FORMAT**](card_8h.md#define-card_xfer_format)  `(5 \* 8 \* 1024)`<br> |
| define  | [**CARD\_XFER\_MOUNT**](card_8h.md#define-card_xfer_mount)  `(5 \* 8 \* 1024)`<br> |
| define  | [**CARD\_XFER\_RENAME**](card_8h.md#define-card_xfer_rename)  `(1 \* 8 \* 1024)`<br> |
| define  | [**CARD\_XFER\_SETSTATUS**](card_8h.md#define-card_xfer_setstatus)  `(1 \* 8 \* 1024)`<br> |

## Public Types Documentation




### typedef CARDCallback 

```C++
typedef void(* CARDCallback) (s32 chan, s32 result);
```




<hr>



### typedef CARDFileInfo 

```C++
typedef struct CARDFileInfo CARDFileInfo;
```




<hr>



### typedef CARDStat 

```C++
typedef struct CARDStat CARDStat;
```




<hr>
## Public Functions Documentation




### function CARDCancel 

```C++
s32 CARDCancel (
    CARDFileInfo * fileInfo
) 
```




<hr>



### function CARDCheck 

```C++
s32 CARDCheck (
    s32 chan
) 
```




<hr>



### function CARDCheckAsync 

```C++
s32 CARDCheckAsync (
    s32 chan,
    CARDCallback callback
) 
```




<hr>



### function CARDCheckEx 

```C++
s32 CARDCheckEx (
    s32 chan,
    s32 * xferBytes
) 
```




<hr>



### function CARDCheckExAsync 

```C++
s32 CARDCheckExAsync (
    s32 chan,
    s32 * xferBytes,
    CARDCallback callback
) 
```




<hr>



### function CARDClose 

```C++
s32 CARDClose (
    CARDFileInfo * fileInfo
) 
```




<hr>



### function CARDCreate 

```C++
s32 CARDCreate (
    s32 chan,
    char * fileName,
    u32 size,
    CARDFileInfo * fileInfo
) 
```




<hr>



### function CARDCreateAsync 

```C++
s32 CARDCreateAsync (
    s32 chan,
    char * fileName,
    u32 size,
    CARDFileInfo * fileInfo,
    CARDCallback callback
) 
```




<hr>



### function CARDDelete 

```C++
s32 CARDDelete (
    s32 chan,
    char * fileName
) 
```




<hr>



### function CARDDeleteAsync 

```C++
s32 CARDDeleteAsync (
    s32 chan,
    char * fileName,
    CARDCallback callback
) 
```




<hr>



### function CARDFastDelete 

```C++
s32 CARDFastDelete (
    s32 chan,
    s32 fileNo
) 
```




<hr>



### function CARDFastDeleteAsync 

```C++
s32 CARDFastDeleteAsync (
    s32 chan,
    s32 fileNo,
    CARDCallback callback
) 
```




<hr>



### function CARDFastOpen 

```C++
s32 CARDFastOpen (
    s32 chan,
    s32 fileNo,
    CARDFileInfo * fileInfo
) 
```




<hr>



### function CARDFormat 

```C++
s32 CARDFormat (
    s32 chan
) 
```




<hr>



### function CARDFormatAsync 

```C++
s32 CARDFormatAsync (
    s32 chan,
    CARDCallback callback
) 
```




<hr>



### function CARDFreeBlocks 

```C++
s32 CARDFreeBlocks (
    s32 chan,
    s32 * byteNotUsed,
    s32 * filesNotUsed
) 
```




<hr>



### function CARDGetEncoding 

```C++
s32 CARDGetEncoding (
    s32 chan,
    u16 * encode
) 
```




<hr>



### function CARDGetMemSize 

```C++
s32 CARDGetMemSize (
    s32 chan,
    u16 * size
) 
```




<hr>



### function CARDGetResultCode 

```C++
s32 CARDGetResultCode (
    s32 chan
) 
```




<hr>



### function CARDGetSectorSize 

```C++
s32 CARDGetSectorSize (
    s32 chan,
    u32 * size
) 
```




<hr>



### function CARDGetStatus 

```C++
s32 CARDGetStatus (
    s32 chan,
    s32 fileNo,
    CARDStat * stat
) 
```




<hr>



### function CARDGetXferredBytes 

```C++
s32 CARDGetXferredBytes (
    s32 chan
) 
```




<hr>



### function CARDInit 

```C++
void CARDInit (
    void
) 
```




<hr>



### function CARDMount 

```C++
s32 CARDMount (
    s32 chan,
    void * workArea,
    CARDCallback detachCallback
) 
```




<hr>



### function CARDMountAsync 

```C++
s32 CARDMountAsync (
    s32 chan,
    void * workArea,
    CARDCallback detachCallback,
    CARDCallback attachCallback
) 
```




<hr>



### function CARDOpen 

```C++
s32 CARDOpen (
    s32 chan,
    char * fileName,
    CARDFileInfo * fileInfo
) 
```




<hr>



### function CARDProbe 

```C++
BOOL CARDProbe (
    s32 chan
) 
```




<hr>



### function CARDProbeEx 

```C++
s32 CARDProbeEx (
    s32 chan,
    s32 * memSize,
    s32 * sectorSize
) 
```




<hr>



### function CARDRead 

```C++
s32 CARDRead (
    CARDFileInfo * fileInfo,
    void * addr,
    s32 length,
    s32 offset
) 
```




<hr>



### function CARDReadAsync 

```C++
s32 CARDReadAsync (
    CARDFileInfo * fileInfo,
    void * addr,
    s32 length,
    s32 offset,
    CARDCallback callback
) 
```




<hr>



### function CARDRename 

```C++
s32 CARDRename (
    s32 chan,
    char * oldName,
    char * newName
) 
```




<hr>



### function CARDRenameAsync 

```C++
s32 CARDRenameAsync (
    s32 chan,
    char * oldName,
    char * newName,
    CARDCallback callback
) 
```




<hr>



### function CARDSetStatus 

```C++
s32 CARDSetStatus (
    s32 chan,
    s32 fileNo,
    CARDStat * stat
) 
```




<hr>



### function CARDSetStatusAsync 

```C++
s32 CARDSetStatusAsync (
    s32 chan,
    s32 fileNo,
    CARDStat * stat,
    CARDCallback callback
) 
```




<hr>



### function CARDUnmount 

```C++
s32 CARDUnmount (
    s32 chan
) 
```




<hr>



### function CARDWrite 

```C++
s32 CARDWrite (
    CARDFileInfo * fileInfo,
    void * addr,
    s32 length,
    s32 offset
) 
```




<hr>



### function CARDWriteAsync 

```C++
s32 CARDWriteAsync (
    CARDFileInfo * fileInfo,
    void * addr,
    s32 length,
    s32 offset,
    CARDCallback callback
) 
```




<hr>
## Macro Definition Documentation





### define CARDGetBannerFormat 

```C++
#define CARDGetBannerFormat (
    stat
) `(((stat)->bannerFormat) & CARD_STAT_BANNER_MASK )`
```




<hr>



### define CARDGetFileNo 

```C++
#define CARDGetFileNo (
    fileInfo
) `((fileInfo)->fileNo)`
```




<hr>



### define CARDGetIconAnim 

```C++
#define CARDGetIconAnim (
    stat
) `(((stat)->bannerFormat) & CARD_STAT_ANIM_MASK )`
```




<hr>



### define CARDGetIconFormat 

```C++
#define CARDGetIconFormat (
    stat,
    n
) `(((stat)->iconFormat >> (2 * ( n ))) & CARD_STAT_ICON_MASK )`
```




<hr>



### define CARDGetIconSpeed 

```C++
#define CARDGetIconSpeed (
    stat,
    n
) `(((stat)->iconSpeed >> (2 * ( n ))) & CARD_STAT_SPEED_MASK )`
```




<hr>



### define CARDSetIconFormat 

```C++
#define CARDSetIconFormat (
    stat,
    n,
    f
) `/* multi line expression */`
```




<hr>



### define CARDSetIconSpeed 

```C++
#define CARDSetIconSpeed (
    stat,
    n,
    f
) `/* multi line expression */`
```




<hr>



### define CARD\_ATTR\_COMPANY 

```C++
#define CARD_ATTR_COMPANY `0x40u`
```




<hr>



### define CARD\_ATTR\_GLOBAL 

```C++
#define CARD_ATTR_GLOBAL `0x20u`
```




<hr>



### define CARD\_ATTR\_NO\_COPY 

```C++
#define CARD_ATTR_NO_COPY `0x08u`
```




<hr>



### define CARD\_ATTR\_NO\_MOVE 

```C++
#define CARD_ATTR_NO_MOVE `0x10u`
```




<hr>



### define CARD\_ATTR\_PUBLIC 

```C++
#define CARD_ATTR_PUBLIC `0x04u`
```




<hr>



### define CARD\_ATTR\_UNK0 

```C++
#define CARD_ATTR_UNK0 `0x01u`
```




<hr>



### define CARD\_ATTR\_UNK1 

```C++
#define CARD_ATTR_UNK1 `0x02u`
```




<hr>



### define CARD\_BANNER\_HEIGHT 

```C++
#define CARD_BANNER_HEIGHT `32`
```




<hr>



### define CARD\_BANNER\_WIDTH 

```C++
#define CARD_BANNER_WIDTH `96`
```




<hr>



### define CARD\_COMMENT\_SIZE 

```C++
#define CARD_COMMENT_SIZE `64`
```




<hr>



### define CARD\_ENCODE\_ANSI 

```C++
#define CARD_ENCODE_ANSI `OS_FONT_ENCODE_ANSI`
```




<hr>



### define CARD\_ENCODE\_SJIS 

```C++
#define CARD_ENCODE_SJIS `OS_FONT_ENCODE_SJIS`
```




<hr>



### define CARD\_FILENAME\_MAX 

```C++
#define CARD_FILENAME_MAX `32`
```




<hr>



### define CARD\_ICON\_HEIGHT 

```C++
#define CARD_ICON_HEIGHT `32`
```




<hr>



### define CARD\_ICON\_MAX 

```C++
#define CARD_ICON_MAX `8`
```




<hr>



### define CARD\_ICON\_WIDTH 

```C++
#define CARD_ICON_WIDTH `32`
```




<hr>



### define CARD\_MAX\_FILE 

```C++
#define CARD_MAX_FILE `127`
```




<hr>



### define CARD\_READ\_SIZE 

```C++
#define CARD_READ_SIZE `512`
```




<hr>



### define CARD\_RESULT\_BROKEN 

```C++
#define CARD_RESULT_BROKEN `-6`
```




<hr>



### define CARD\_RESULT\_BUSY 

```C++
#define CARD_RESULT_BUSY `-1`
```




<hr>



### define CARD\_RESULT\_CANCELED 

```C++
#define CARD_RESULT_CANCELED `-14`
```




<hr>



### define CARD\_RESULT\_ENCODING 

```C++
#define CARD_RESULT_ENCODING `-13`
```




<hr>



### define CARD\_RESULT\_EXIST 

```C++
#define CARD_RESULT_EXIST `-7`
```




<hr>



### define CARD\_RESULT\_FATAL\_ERROR 

```C++
#define CARD_RESULT_FATAL_ERROR `-128`
```




<hr>



### define CARD\_RESULT\_INSSPACE 

```C++
#define CARD_RESULT_INSSPACE `-9`
```




<hr>



### define CARD\_RESULT\_IOERROR 

```C++
#define CARD_RESULT_IOERROR `-5`
```




<hr>



### define CARD\_RESULT\_LIMIT 

```C++
#define CARD_RESULT_LIMIT `-11`
```




<hr>



### define CARD\_RESULT\_NAMETOOLONG 

```C++
#define CARD_RESULT_NAMETOOLONG `-12`
```




<hr>



### define CARD\_RESULT\_NOCARD 

```C++
#define CARD_RESULT_NOCARD `-3`
```




<hr>



### define CARD\_RESULT\_NOENT 

```C++
#define CARD_RESULT_NOENT `-8`
```




<hr>



### define CARD\_RESULT\_NOFILE 

```C++
#define CARD_RESULT_NOFILE `-4`
```




<hr>



### define CARD\_RESULT\_NOPERM 

```C++
#define CARD_RESULT_NOPERM `-10`
```




<hr>



### define CARD\_RESULT\_READY 

```C++
#define CARD_RESULT_READY `0`
```




<hr>



### define CARD\_RESULT\_UNLOCKED 

```C++
#define CARD_RESULT_UNLOCKED `1`
```




<hr>



### define CARD\_RESULT\_WRONGDEVICE 

```C++
#define CARD_RESULT_WRONGDEVICE `-2`
```




<hr>



### define CARD\_STAT\_ANIM\_BOUNCE 

```C++
#define CARD_STAT_ANIM_BOUNCE `0x04`
```




<hr>



### define CARD\_STAT\_ANIM\_LOOP 

```C++
#define CARD_STAT_ANIM_LOOP `0x00`
```




<hr>



### define CARD\_STAT\_ANIM\_MASK 

```C++
#define CARD_STAT_ANIM_MASK `0x04`
```




<hr>



### define CARD\_STAT\_BANNER\_C8 

```C++
#define CARD_STAT_BANNER_C8 `1`
```




<hr>



### define CARD\_STAT\_BANNER\_MASK 

```C++
#define CARD_STAT_BANNER_MASK `3`
```




<hr>



### define CARD\_STAT\_BANNER\_NONE 

```C++
#define CARD_STAT_BANNER_NONE `0`
```




<hr>



### define CARD\_STAT\_BANNER\_RGB5A3 

```C++
#define CARD_STAT_BANNER_RGB5A3 `2`
```




<hr>



### define CARD\_STAT\_ICON\_C8 

```C++
#define CARD_STAT_ICON_C8 `1`
```




<hr>



### define CARD\_STAT\_ICON\_MASK 

```C++
#define CARD_STAT_ICON_MASK `3`
```




<hr>



### define CARD\_STAT\_ICON\_NONE 

```C++
#define CARD_STAT_ICON_NONE `0`
```




<hr>



### define CARD\_STAT\_ICON\_RGB5A3 

```C++
#define CARD_STAT_ICON_RGB5A3 `2`
```




<hr>



### define CARD\_STAT\_SPEED\_END 

```C++
#define CARD_STAT_SPEED_END `0`
```




<hr>



### define CARD\_STAT\_SPEED\_FAST 

```C++
#define CARD_STAT_SPEED_FAST `1`
```




<hr>



### define CARD\_STAT\_SPEED\_MASK 

```C++
#define CARD_STAT_SPEED_MASK `3`
```




<hr>



### define CARD\_STAT\_SPEED\_MIDDLE 

```C++
#define CARD_STAT_SPEED_MIDDLE `2`
```




<hr>



### define CARD\_STAT\_SPEED\_SLOW 

```C++
#define CARD_STAT_SPEED_SLOW `3`
```




<hr>



### define CARD\_WORKAREA\_SIZE 

```C++
#define CARD_WORKAREA_SIZE `(5 * 8 * 1024)`
```




<hr>



### define CARD\_XFER\_CREATE 

```C++
#define CARD_XFER_CREATE `(2 * 8 * 1024)`
```




<hr>



### define CARD\_XFER\_DELETE 

```C++
#define CARD_XFER_DELETE `(2 * 8 * 1024)`
```




<hr>



### define CARD\_XFER\_FORMAT 

```C++
#define CARD_XFER_FORMAT `(5 * 8 * 1024)`
```




<hr>



### define CARD\_XFER\_MOUNT 

```C++
#define CARD_XFER_MOUNT `(5 * 8 * 1024)`
```




<hr>



### define CARD\_XFER\_RENAME 

```C++
#define CARD_XFER_RENAME `(1 * 8 * 1024)`
```




<hr>



### define CARD\_XFER\_SETSTATUS 

```C++
#define CARD_XFER_SETSTATUS `(1 * 8 * 1024)`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/card.h`

