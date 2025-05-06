

# File dvd.h



[**FileList**](files.md) **>** [**dolphin**](dir_8d73ddf10613ffd25a966cd68a313b8d.md) **>** [**dvd.h**](dvd_8h.md)

[Go to the source code of this file](dvd_8h_source.md)



* `#include <types.h>`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**DVDBB2**](struct_d_v_d_b_b2.md) <br> |
| struct | [**DVDCommandBlock**](struct_d_v_d_command_block.md) <br> |
| struct | [**DVDDir**](struct_d_v_d_dir.md) <br> |
| struct | [**DVDDirEntry**](struct_d_v_d_dir_entry.md) <br> |
| struct | [**DVDDiskID**](struct_d_v_d_disk_i_d.md) <br> |
| struct | [**DVDDriveInfo**](struct_d_v_d_drive_info.md) <br> |
| struct | [**DVDFileInfo**](struct_d_v_d_file_info.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDBB2**](struct_d_v_d_b_b2.md) | [**DVDBB2**](#typedef-dvdbb2)  <br> |
| typedef [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**DVDCBCallback**](#typedef-dvdcbcallback)  <br> |
| typedef [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**DVDCallback**](#typedef-dvdcallback)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) | [**DVDCommandBlock**](#typedef-dvdcommandblock)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDDiskID**](struct_d_v_d_disk_i_d.md) | [**DVDDiskID**](#typedef-dvddiskid)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDDriveInfo**](struct_d_v_d_drive_info.md) | [**DVDDriveInfo**](#typedef-dvddriveinfo)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDFileInfo**](struct_d_v_d_file_info.md) | [**DVDFileInfo**](#typedef-dvdfileinfo)  <br> |




## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**u32**](types_8h.md#typedef-u32)) | [**DVDLowClearCallback**](#variable-dvdlowclearcallback)  <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**u32**](types_8h.md#typedef-u32)) | [**DVDLowSetResetCoverCallback**](#variable-dvdlowsetresetcovercallback)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**s32**](types_8h.md#typedef-s32) | [**DVDCancel**](#function-dvdcancel) ([**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**DVDCancelAll**](#function-dvdcancelall) () <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDCancelAllAsync**](#function-dvdcancelallasync) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**s32**](types_8h.md#typedef-s32), [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \*) callback) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDCancelAsync**](#function-dvdcancelasync) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**s32**](types_8h.md#typedef-s32), [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \*) callback) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**DVDCancelStream**](#function-dvdcancelstream) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDCancelStreamAsync**](#function-dvdcancelstreamasync) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**s32**](types_8h.md#typedef-s32), [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \*) callback) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDChangeDir**](#function-dvdchangedir) ([**u8**](types_8h.md#typedef-u8) \* dirName) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**DVDChangeDisk**](#function-dvdchangedisk) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block, [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDDiskID**](struct_d_v_d_disk_i_d.md) \* id) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDChangeDiskAsync**](#function-dvdchangediskasync) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block, [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDDiskID**](struct_d_v_d_disk_i_d.md) \* id, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**s32**](types_8h.md#typedef-s32), [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \*) callback) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDChangeDiskAsyncForBS**](#function-dvdchangediskasyncforbs) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**s32**](types_8h.md#typedef-s32), [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \*) callback) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDCheckDisk**](#function-dvdcheckdisk) () <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDClose**](#function-dvdclose) ([**DVDFileInfo**](struct_d_v_d_file_info.md) \* fileInfo) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDCloseDir**](#function-dvdclosedir) ([**DVDDir**](struct_d_v_d_dir.md) \* dir) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**DVDConvertPathToEntrynum**](#function-dvdconvertpathtoentrynum) ([**u8**](types_8h.md#typedef-u8) \* pathPtr) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDDumpWaitingQueue**](#function-dvddumpwaitingqueue) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDFastOpen**](#function-dvdfastopen) ([**s32**](types_8h.md#typedef-s32) entrynum, [**DVDFileInfo**](struct_d_v_d_file_info.md) \* fileInfo) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**DVDGetCommandBlockStatus**](#function-dvdgetcommandblockstatus) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDGetCurrentDir**](#function-dvdgetcurrentdir) ([**u8**](types_8h.md#typedef-u8) \* path, [**u32**](types_8h.md#typedef-u32) maxlen) <br> |
|  [**DVDDiskID**](struct_d_v_d_disk_i_d.md) \* | [**DVDGetCurrentDiskID**](#function-dvdgetcurrentdiskid) () <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**DVDGetDriveStatus**](#function-dvdgetdrivestatus) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**DVDGetFSTLocation**](#function-dvdgetfstlocation) () <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**DVDGetFileInfoStatus**](#function-dvdgetfileinfostatus) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDFileInfo**](struct_d_v_d_file_info.md) \* fileInfo) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**DVDGetStreamErrorStatus**](#function-dvdgetstreamerrorstatus) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDGetStreamErrorStatusAsync**](#function-dvdgetstreamerrorstatusasync) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**s32**](types_8h.md#typedef-s32), [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \*) callback) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**DVDGetStreamLength**](#function-dvdgetstreamlength) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDGetStreamLengthAsync**](#function-dvdgetstreamlengthasync) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**s32**](types_8h.md#typedef-s32), [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \*) callback) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**DVDGetStreamPlayAddr**](#function-dvdgetstreamplayaddr) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDGetStreamPlayAddrAsync**](#function-dvdgetstreamplayaddrasync) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**s32**](types_8h.md#typedef-s32), [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \*) callback) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**DVDGetStreamStartAddr**](#function-dvdgetstreamstartaddr) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDGetStreamStartAddrAsync**](#function-dvdgetstreamstartaddrasync) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**s32**](types_8h.md#typedef-s32), [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \*) callback) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**DVDGetTransferredSize**](#function-dvdgettransferredsize) ([**DVDFileInfo**](struct_d_v_d_file_info.md) \* fileinfo) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDInit**](#function-dvdinit) () <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**DVDInquiry**](#function-dvdinquiry) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block, [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDDriveInfo**](struct_d_v_d_drive_info.md) \* info) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDInquiryAsync**](#function-dvdinquiryasync) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block, [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDDriveInfo**](struct_d_v_d_drive_info.md) \* info, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**s32**](types_8h.md#typedef-s32), [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \*) callback) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDLowAudioBufferConfig**](#function-dvdlowaudiobufferconfig) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) enable, [**u32**](types_8h.md#typedef-u32) size, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**u32**](types_8h.md#typedef-u32)) callback) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDLowAudioStream**](#function-dvdlowaudiostream) ([**u32**](types_8h.md#typedef-u32) subcmd, [**u32**](types_8h.md#typedef-u32) length, [**u32**](types_8h.md#typedef-u32) offset, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**u32**](types_8h.md#typedef-u32)) callback) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDLowBreak**](#function-dvdlowbreak) () <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**DVDLowGetCoverStatus**](#function-dvdlowgetcoverstatus) () <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDLowInquiry**](#function-dvdlowinquiry) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDDriveInfo**](struct_d_v_d_drive_info.md) \* info, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**u32**](types_8h.md#typedef-u32)) callback) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDLowRead**](#function-dvdlowread) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* addr, [**u32**](types_8h.md#typedef-u32) length, [**u32**](types_8h.md#typedef-u32) offset, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**u32**](types_8h.md#typedef-u32)) callback) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDLowReadDiskID**](#function-dvdlowreaddiskid) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDDiskID**](struct_d_v_d_disk_i_d.md) \* diskID, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**u32**](types_8h.md#typedef-u32)) callback) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDLowRequestAudioStatus**](#function-dvdlowrequestaudiostatus) ([**u32**](types_8h.md#typedef-u32) subcmd, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**u32**](types_8h.md#typedef-u32)) callback) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDLowRequestError**](#function-dvdlowrequesterror) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**u32**](types_8h.md#typedef-u32)) callback) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDLowReset**](#function-dvdlowreset) () <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDLowSeek**](#function-dvdlowseek) ([**u32**](types_8h.md#typedef-u32) offset, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**u32**](types_8h.md#typedef-u32)) callback) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDLowStopMotor**](#function-dvdlowstopmotor) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**u32**](types_8h.md#typedef-u32)) callback) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDLowWaitCoverClose**](#function-dvdlowwaitcoverclose) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**u32**](types_8h.md#typedef-u32)) callback) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDOpen**](#function-dvdopen) ([**u8**](types_8h.md#typedef-u8) \* fileName, [**DVDFileInfo**](struct_d_v_d_file_info.md) \* fileInfo) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDOpenDir**](#function-dvdopendir) ([**u8**](types_8h.md#typedef-u8) \* dirName, [**DVDDir**](struct_d_v_d_dir.md) \* dir) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDPause**](#function-dvdpause) () <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**DVDPrepareStream**](#function-dvdpreparestream) ([**DVDFileInfo**](struct_d_v_d_file_info.md) \* fileInfo, [**u32**](types_8h.md#typedef-u32) length, [**u32**](types_8h.md#typedef-u32) offset) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDPrepareStreamAbsAsync**](#function-dvdpreparestreamabsasync) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block, [**u32**](types_8h.md#typedef-u32) length, [**u32**](types_8h.md#typedef-u32) offset, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**s32**](types_8h.md#typedef-s32), [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \*) callback) <br>_0x14_  |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDPrepareStreamAsync**](#function-dvdpreparestreamasync) ([**DVDFileInfo**](struct_d_v_d_file_info.md) \* fileInfo, [**u32**](types_8h.md#typedef-u32) length, [**u32**](types_8h.md#typedef-u32) offset, [**DVDCallback**](dvd_8h.md#typedef-dvdcallback) callback) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDReadAbsAsyncForBS**](#function-dvdreadabsasyncforbs) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* addr, [**s32**](types_8h.md#typedef-s32) length, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) offset, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**s32**](types_8h.md#typedef-s32), [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \*) callback) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDReadAbsAsyncPrio**](#function-dvdreadabsasyncprio) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* addr, [**s32**](types_8h.md#typedef-s32) length, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) offset, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**s32**](types_8h.md#typedef-s32), [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \*) callback, [**s32**](types_8h.md#typedef-s32) prio) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDReadAsyncPrio**](#function-dvdreadasyncprio) ([**DVDFileInfo**](struct_d_v_d_file_info.md) \* fileInfo, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* addr, [**s32**](types_8h.md#typedef-s32) length, [**s32**](types_8h.md#typedef-s32) offset, [**DVDCallback**](dvd_8h.md#typedef-dvdcallback) callback, [**s32**](types_8h.md#typedef-s32) prio) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDReadDir**](#function-dvdreaddir) ([**DVDDir**](struct_d_v_d_dir.md) \* dir, [**DVDDirEntry**](struct_d_v_d_dir_entry.md) \* dirent) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDReadDiskID**](#function-dvdreaddiskid) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block, [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDDiskID**](struct_d_v_d_disk_i_d.md) \* diskID, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**s32**](types_8h.md#typedef-s32), [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \*) callback) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**DVDReadPrio**](#function-dvdreadprio) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDFileInfo**](struct_d_v_d_file_info.md) \* fileInfo, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* addr, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) length, [**s32**](types_8h.md#typedef-s32) offset, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) prio) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDReset**](#function-dvdreset) () <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDResetRequired**](#function-dvdresetrequired) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDResume**](#function-dvdresume) () <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDSeekAbsAsyncPrio**](#function-dvdseekabsasyncprio) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block, [**s32**](types_8h.md#typedef-s32) offset, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**s32**](types_8h.md#typedef-s32), [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \*) callback, [**s32**](types_8h.md#typedef-s32) prio) <br>_0x14_  |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDSeekAsyncPrio**](#function-dvdseekasyncprio) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDFileInfo**](struct_d_v_d_file_info.md) \* fileInfo, [**s32**](types_8h.md#typedef-s32) offset, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**s32**](types_8h.md#typedef-s32), [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDFileInfo**](struct_d_v_d_file_info.md) \*) callback, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) prio) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**DVDSeekPrio**](#function-dvdseekprio) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDFileInfo**](struct_d_v_d_file_info.md) \* fileInfo, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) offset, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) prio) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDSetAutoInvalidation**](#function-dvdsetautoinvalidation) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) autoInval) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**DVDStopStreamAtEnd**](#function-dvdstopstreamatend) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDStopStreamAtEndAsync**](#function-dvdstopstreamatendasync) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**s32**](types_8h.md#typedef-s32), [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \*) callback) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DVDPrepareResetAsync**](#function-__dvdprepareresetasync) ([**DVDCBCallback**](dvd_8h.md#typedef-dvdcbcallback) cb) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**DVDReadAsync**](dvd_8h.md#define-dvdreadasync) (fileInfo, addr, length, offset, callback) `[**DVDReadAsyncPrio**](dvd_8h.md#function-dvdreadasyncprio) ((fileInfo), (addr), (length), (offset), (callback), 2)`<br> |
| define  | [**DVD\_COMMAND\_AUDIO\_BUFFER\_CONFIG**](dvd_8h.md#define-dvd_command_audio_buffer_config)  `13`<br> |
| define  | [**DVD\_COMMAND\_BSREAD**](dvd_8h.md#define-dvd_command_bsread)  `4`<br> |
| define  | [**DVD\_COMMAND\_BS\_CHANGE\_DISK**](dvd_8h.md#define-dvd_command_bs_change_disk)  `15`<br> |
| define  | [**DVD\_COMMAND\_CANCELSTREAM**](dvd_8h.md#define-dvd_command_cancelstream)  `7`<br> |
| define  | [**DVD\_COMMAND\_CHANGE\_DISK**](dvd_8h.md#define-dvd_command_change_disk)  `3`<br> |
| define  | [**DVD\_COMMAND\_INITSTREAM**](dvd_8h.md#define-dvd_command_initstream)  `6`<br> |
| define  | [**DVD\_COMMAND\_INQUIRY**](dvd_8h.md#define-dvd_command_inquiry)  `14`<br> |
| define  | [**DVD\_COMMAND\_NONE**](dvd_8h.md#define-dvd_command_none)  `0`<br> |
| define  | [**DVD\_COMMAND\_READ**](dvd_8h.md#define-dvd_command_read)  `1`<br> |
| define  | [**DVD\_COMMAND\_READID**](dvd_8h.md#define-dvd_command_readid)  `5`<br> |
| define  | [**DVD\_COMMAND\_REQUEST\_AUDIO\_ERROR**](dvd_8h.md#define-dvd_command_request_audio_error)  `9`<br> |
| define  | [**DVD\_COMMAND\_REQUEST\_LENGTH**](dvd_8h.md#define-dvd_command_request_length)  `12`<br> |
| define  | [**DVD\_COMMAND\_REQUEST\_PLAY\_ADDR**](dvd_8h.md#define-dvd_command_request_play_addr)  `10`<br> |
| define  | [**DVD\_COMMAND\_REQUEST\_START\_ADDR**](dvd_8h.md#define-dvd_command_request_start_addr)  `11`<br> |
| define  | [**DVD\_COMMAND\_SEEK**](dvd_8h.md#define-dvd_command_seek)  `2`<br> |
| define  | [**DVD\_COMMAND\_STOP\_STREAM\_AT\_END**](dvd_8h.md#define-dvd_command_stop_stream_at_end)  `8`<br> |
| define  | [**DVD\_INTTYPE\_BRK**](dvd_8h.md#define-dvd_inttype_brk)  `0x00000008`<br> |
| define  | [**DVD\_INTTYPE\_CVR**](dvd_8h.md#define-dvd_inttype_cvr)  `0x00000004`<br> |
| define  | [**DVD\_INTTYPE\_DE**](dvd_8h.md#define-dvd_inttype_de)  `0x00000002`<br> |
| define  | [**DVD\_INTTYPE\_SECURITY\_ERROR**](dvd_8h.md#define-dvd_inttype_security_error)  `0x00000020`<br> |
| define  | [**DVD\_INTTYPE\_TC**](dvd_8h.md#define-dvd_inttype_tc)  `0x00000001`<br> |
| define  | [**DVD\_INTTYPE\_TIMEOUT**](dvd_8h.md#define-dvd_inttype_timeout)  `0x00000010`<br> |
| define  | [**DVD\_MIN\_TRANSFER\_SIZE**](dvd_8h.md#define-dvd_min_transfer_size)  `32`<br> |
| define  | [**DVD\_RESULT\_CANCELED**](dvd_8h.md#define-dvd_result_canceled)  `-6`<br> |
| define  | [**DVD\_RESULT\_COVER\_CLOSED**](dvd_8h.md#define-dvd_result_cover_closed)  `-2`<br> |
| define  | [**DVD\_RESULT\_COVER\_OPEN**](dvd_8h.md#define-dvd_result_cover_open)  `-3`<br> |
| define  | [**DVD\_RESULT\_FATAL\_ERROR**](dvd_8h.md#define-dvd_result_fatal_error)  `-1`<br> |
| define  | [**DVD\_RESULT\_IGNORED**](dvd_8h.md#define-dvd_result_ignored)  `-5`<br> |
| define  | [**DVD\_RESULT\_NO\_DISK**](dvd_8h.md#define-dvd_result_no_disk)  `-4`<br> |
| define  | [**DVD\_STATE\_BUSY**](dvd_8h.md#define-dvd_state_busy)  `1`<br> |
| define  | [**DVD\_STATE\_CANCELED**](dvd_8h.md#define-dvd_state_canceled)  `10`<br> |
| define  | [**DVD\_STATE\_COVER\_CLOSED**](dvd_8h.md#define-dvd_state_cover_closed)  `3`<br> |
| define  | [**DVD\_STATE\_COVER\_OPEN**](dvd_8h.md#define-dvd_state_cover_open)  `5`<br> |
| define  | [**DVD\_STATE\_END**](dvd_8h.md#define-dvd_state_end)  `0`<br> |
| define  | [**DVD\_STATE\_FATAL\_ERROR**](dvd_8h.md#define-dvd_state_fatal_error)  `-1`<br> |
| define  | [**DVD\_STATE\_IGNORED**](dvd_8h.md#define-dvd_state_ignored)  `9`<br> |
| define  | [**DVD\_STATE\_MOTOR\_STOPPED**](dvd_8h.md#define-dvd_state_motor_stopped)  `7`<br> |
| define  | [**DVD\_STATE\_NO\_DISK**](dvd_8h.md#define-dvd_state_no_disk)  `4`<br> |
| define  | [**DVD\_STATE\_PAUSING**](dvd_8h.md#define-dvd_state_pausing)  `8`<br> |
| define  | [**DVD\_STATE\_RETRY**](dvd_8h.md#define-dvd_state_retry)  `11`<br> |
| define  | [**DVD\_STATE\_WAITING**](dvd_8h.md#define-dvd_state_waiting)  `2`<br> |
| define  | [**DVD\_STATE\_WRONG\_DISK**](dvd_8h.md#define-dvd_state_wrong_disk)  `6`<br> |

## Public Types Documentation




### typedef DVDBB2 

```C++
typedef struct DVDBB2 DVDBB2;
```




<hr>



### typedef DVDCBCallback 

```C++
typedef void(* DVDCBCallback) (s32 result, DVDCommandBlock *block);
```




<hr>



### typedef DVDCallback 

```C++
typedef void(* DVDCallback) (s32 result, DVDFileInfo *fileInfo);
```




<hr>



### typedef DVDCommandBlock 

```C++
typedef struct DVDCommandBlock DVDCommandBlock;
```




<hr>



### typedef DVDDiskID 

```C++
typedef struct DVDDiskID DVDDiskID;
```




<hr>



### typedef DVDDriveInfo 

```C++
typedef struct DVDDriveInfo DVDDriveInfo;
```




<hr>



### typedef DVDFileInfo 

```C++
typedef struct DVDFileInfo DVDFileInfo;
```




<hr>
## Public Attributes Documentation




### variable DVDLowClearCallback 

```C++
void(*)(u32) DVDLowClearCallback();
```




<hr>



### variable DVDLowSetResetCoverCallback 

```C++
void(*)(u32) DVDLowSetResetCoverCallback(void(*callback)(u32));
```




<hr>
## Public Functions Documentation




### function DVDCancel 

```C++
s32 DVDCancel (
    volatile  struct  DVDCommandBlock * block
) 
```




<hr>



### function DVDCancelAll 

```C++
s32 DVDCancelAll () 
```




<hr>



### function DVDCancelAllAsync 

```C++
int DVDCancelAllAsync (
    void (*)( s32 , struct  DVDCommandBlock *) callback
) 
```




<hr>



### function DVDCancelAsync 

```C++
int DVDCancelAsync (
    struct  DVDCommandBlock * block,
    void (*)( s32 , struct  DVDCommandBlock *) callback
) 
```




<hr>



### function DVDCancelStream 

```C++
s32 DVDCancelStream (
    struct  DVDCommandBlock * block
) 
```




<hr>



### function DVDCancelStreamAsync 

```C++
int DVDCancelStreamAsync (
    struct  DVDCommandBlock * block,
    void (*)( s32 , struct  DVDCommandBlock *) callback
) 
```




<hr>



### function DVDChangeDir 

```C++
BOOL DVDChangeDir (
    u8 * dirName
) 
```




<hr>



### function DVDChangeDisk 

```C++
s32 DVDChangeDisk (
    struct  DVDCommandBlock * block,
    struct  DVDDiskID * id
) 
```




<hr>



### function DVDChangeDiskAsync 

```C++
int DVDChangeDiskAsync (
    struct  DVDCommandBlock * block,
    struct  DVDDiskID * id,
    void (*)( s32 , struct  DVDCommandBlock *) callback
) 
```




<hr>



### function DVDChangeDiskAsyncForBS 

```C++
int DVDChangeDiskAsyncForBS (
    struct  DVDCommandBlock * block,
    void (*)( s32 , struct  DVDCommandBlock *) callback
) 
```




<hr>



### function DVDCheckDisk 

```C++
BOOL DVDCheckDisk () 
```




<hr>



### function DVDClose 

```C++
BOOL DVDClose (
    DVDFileInfo * fileInfo
) 
```




<hr>



### function DVDCloseDir 

```C++
int DVDCloseDir (
    DVDDir * dir
) 
```




<hr>



### function DVDConvertPathToEntrynum 

```C++
s32 DVDConvertPathToEntrynum (
    u8 * pathPtr
) 
```




<hr>



### function DVDDumpWaitingQueue 

```C++
void DVDDumpWaitingQueue (
    void
) 
```




<hr>



### function DVDFastOpen 

```C++
BOOL DVDFastOpen (
    s32 entrynum,
    DVDFileInfo * fileInfo
) 
```




<hr>



### function DVDGetCommandBlockStatus 

```C++
s32 DVDGetCommandBlockStatus (
    struct  DVDCommandBlock * block
) 
```




<hr>



### function DVDGetCurrentDir 

```C++
BOOL DVDGetCurrentDir (
    u8 * path,
    u32 maxlen
) 
```




<hr>



### function DVDGetCurrentDiskID 

```C++
DVDDiskID * DVDGetCurrentDiskID () 
```




<hr>



### function DVDGetDriveStatus 

```C++
s32 DVDGetDriveStatus () 
```




<hr>



### function DVDGetFSTLocation 

```C++
void * DVDGetFSTLocation () 
```




<hr>



### function DVDGetFileInfoStatus 

```C++
s32 DVDGetFileInfoStatus (
    struct  DVDFileInfo * fileInfo
) 
```




<hr>



### function DVDGetStreamErrorStatus 

```C++
s32 DVDGetStreamErrorStatus (
    struct  DVDCommandBlock * block
) 
```




<hr>



### function DVDGetStreamErrorStatusAsync 

```C++
int DVDGetStreamErrorStatusAsync (
    struct  DVDCommandBlock * block,
    void (*)( s32 , struct  DVDCommandBlock *) callback
) 
```




<hr>



### function DVDGetStreamLength 

```C++
s32 DVDGetStreamLength (
    struct  DVDCommandBlock * block
) 
```




<hr>



### function DVDGetStreamLengthAsync 

```C++
int DVDGetStreamLengthAsync (
    struct  DVDCommandBlock * block,
    void (*)( s32 , struct  DVDCommandBlock *) callback
) 
```




<hr>



### function DVDGetStreamPlayAddr 

```C++
s32 DVDGetStreamPlayAddr (
    struct  DVDCommandBlock * block
) 
```




<hr>



### function DVDGetStreamPlayAddrAsync 

```C++
int DVDGetStreamPlayAddrAsync (
    struct  DVDCommandBlock * block,
    void (*)( s32 , struct  DVDCommandBlock *) callback
) 
```




<hr>



### function DVDGetStreamStartAddr 

```C++
s32 DVDGetStreamStartAddr (
    struct  DVDCommandBlock * block
) 
```




<hr>



### function DVDGetStreamStartAddrAsync 

```C++
int DVDGetStreamStartAddrAsync (
    struct  DVDCommandBlock * block,
    void (*)( s32 , struct  DVDCommandBlock *) callback
) 
```




<hr>



### function DVDGetTransferredSize 

```C++
s32 DVDGetTransferredSize (
    DVDFileInfo * fileinfo
) 
```




<hr>



### function DVDInit 

```C++
void DVDInit () 
```




<hr>



### function DVDInquiry 

```C++
s32 DVDInquiry (
    struct  DVDCommandBlock * block,
    struct  DVDDriveInfo * info
) 
```




<hr>



### function DVDInquiryAsync 

```C++
int DVDInquiryAsync (
    struct  DVDCommandBlock * block,
    struct  DVDDriveInfo * info,
    void (*)( s32 , struct  DVDCommandBlock *) callback
) 
```




<hr>



### function DVDLowAudioBufferConfig 

```C++
int DVDLowAudioBufferConfig (
    int enable,
    u32 size,
    void (*)( u32 ) callback
) 
```




<hr>



### function DVDLowAudioStream 

```C++
int DVDLowAudioStream (
    u32 subcmd,
    u32 length,
    u32 offset,
    void (*)( u32 ) callback
) 
```




<hr>



### function DVDLowBreak 

```C++
int DVDLowBreak () 
```




<hr>



### function DVDLowGetCoverStatus 

```C++
u32 DVDLowGetCoverStatus () 
```




<hr>



### function DVDLowInquiry 

```C++
int DVDLowInquiry (
    struct  DVDDriveInfo * info,
    void (*)( u32 ) callback
) 
```




<hr>



### function DVDLowRead 

```C++
int DVDLowRead (
    void * addr,
    u32 length,
    u32 offset,
    void (*)( u32 ) callback
) 
```




<hr>



### function DVDLowReadDiskID 

```C++
int DVDLowReadDiskID (
    struct  DVDDiskID * diskID,
    void (*)( u32 ) callback
) 
```




<hr>



### function DVDLowRequestAudioStatus 

```C++
int DVDLowRequestAudioStatus (
    u32 subcmd,
    void (*)( u32 ) callback
) 
```




<hr>



### function DVDLowRequestError 

```C++
int DVDLowRequestError (
    void (*)( u32 ) callback
) 
```




<hr>



### function DVDLowReset 

```C++
void DVDLowReset () 
```




<hr>



### function DVDLowSeek 

```C++
int DVDLowSeek (
    u32 offset,
    void (*)( u32 ) callback
) 
```




<hr>



### function DVDLowStopMotor 

```C++
int DVDLowStopMotor (
    void (*)( u32 ) callback
) 
```




<hr>



### function DVDLowWaitCoverClose 

```C++
int DVDLowWaitCoverClose (
    void (*)( u32 ) callback
) 
```




<hr>



### function DVDOpen 

```C++
BOOL DVDOpen (
    u8 * fileName,
    DVDFileInfo * fileInfo
) 
```




<hr>



### function DVDOpenDir 

```C++
int DVDOpenDir (
    u8 * dirName,
    DVDDir * dir
) 
```




<hr>



### function DVDPause 

```C++
void DVDPause () 
```




<hr>



### function DVDPrepareStream 

```C++
s32 DVDPrepareStream (
    DVDFileInfo * fileInfo,
    u32 length,
    u32 offset
) 
```




<hr>



### function DVDPrepareStreamAbsAsync 

_0x14_ 
```C++
int DVDPrepareStreamAbsAsync (
    struct  DVDCommandBlock * block,
    u32 length,
    u32 offset,
    void (*)( s32 , struct  DVDCommandBlock *) callback
) 
```




<hr>



### function DVDPrepareStreamAsync 

```C++
BOOL DVDPrepareStreamAsync (
    DVDFileInfo * fileInfo,
    u32 length,
    u32 offset,
    DVDCallback callback
) 
```




<hr>



### function DVDReadAbsAsyncForBS 

```C++
int DVDReadAbsAsyncForBS (
    struct  DVDCommandBlock * block,
    void * addr,
    s32 length,
    long offset,
    void (*)( s32 , struct  DVDCommandBlock *) callback
) 
```




<hr>



### function DVDReadAbsAsyncPrio 

```C++
int DVDReadAbsAsyncPrio (
    struct  DVDCommandBlock * block,
    void * addr,
    s32 length,
    long offset,
    void (*)( s32 , struct  DVDCommandBlock *) callback,
    s32 prio
) 
```




<hr>



### function DVDReadAsyncPrio 

```C++
BOOL DVDReadAsyncPrio (
    DVDFileInfo * fileInfo,
    void * addr,
    s32 length,
    s32 offset,
    DVDCallback callback,
    s32 prio
) 
```




<hr>



### function DVDReadDir 

```C++
int DVDReadDir (
    DVDDir * dir,
    DVDDirEntry * dirent
) 
```




<hr>



### function DVDReadDiskID 

```C++
int DVDReadDiskID (
    struct  DVDCommandBlock * block,
    struct  DVDDiskID * diskID,
    void (*)( s32 , struct  DVDCommandBlock *) callback
) 
```




<hr>



### function DVDReadPrio 

```C++
s32 DVDReadPrio (
    struct  DVDFileInfo * fileInfo,
    void * addr,
    long length,
    s32 offset,
    long prio
) 
```




<hr>



### function DVDReset 

```C++
void DVDReset () 
```




<hr>



### function DVDResetRequired 

```C++
int DVDResetRequired () 
```




<hr>



### function DVDResume 

```C++
void DVDResume () 
```




<hr>



### function DVDSeekAbsAsyncPrio 

_0x14_ 
```C++
int DVDSeekAbsAsyncPrio (
    struct  DVDCommandBlock * block,
    s32 offset,
    void (*)( s32 , struct  DVDCommandBlock *) callback,
    s32 prio
) 
```




<hr>



### function DVDSeekAsyncPrio 

```C++
int DVDSeekAsyncPrio (
    struct  DVDFileInfo * fileInfo,
    s32 offset,
    void (*)( s32 , struct  DVDFileInfo *) callback,
    long prio
) 
```




<hr>



### function DVDSeekPrio 

```C++
s32 DVDSeekPrio (
    struct  DVDFileInfo * fileInfo,
    long offset,
    long prio
) 
```




<hr>



### function DVDSetAutoInvalidation 

```C++
int DVDSetAutoInvalidation (
    int autoInval
) 
```




<hr>



### function DVDStopStreamAtEnd 

```C++
s32 DVDStopStreamAtEnd (
    struct  DVDCommandBlock * block
) 
```




<hr>



### function DVDStopStreamAtEndAsync 

```C++
int DVDStopStreamAtEndAsync (
    struct  DVDCommandBlock * block,
    void (*)( s32 , struct  DVDCommandBlock *) callback
) 
```




<hr>



### function \_\_DVDPrepareResetAsync 

```C++
void __DVDPrepareResetAsync (
    DVDCBCallback cb
) 
```




<hr>
## Macro Definition Documentation





### define DVDReadAsync 

```C++
#define DVDReadAsync (
    fileInfo,
    addr,
    length,
    offset,
    callback
) `DVDReadAsyncPrio ((fileInfo), (addr), (length), (offset), (callback), 2)`
```




<hr>



### define DVD\_COMMAND\_AUDIO\_BUFFER\_CONFIG 

```C++
#define DVD_COMMAND_AUDIO_BUFFER_CONFIG `13`
```




<hr>



### define DVD\_COMMAND\_BSREAD 

```C++
#define DVD_COMMAND_BSREAD `4`
```




<hr>



### define DVD\_COMMAND\_BS\_CHANGE\_DISK 

```C++
#define DVD_COMMAND_BS_CHANGE_DISK `15`
```




<hr>



### define DVD\_COMMAND\_CANCELSTREAM 

```C++
#define DVD_COMMAND_CANCELSTREAM `7`
```




<hr>



### define DVD\_COMMAND\_CHANGE\_DISK 

```C++
#define DVD_COMMAND_CHANGE_DISK `3`
```




<hr>



### define DVD\_COMMAND\_INITSTREAM 

```C++
#define DVD_COMMAND_INITSTREAM `6`
```




<hr>



### define DVD\_COMMAND\_INQUIRY 

```C++
#define DVD_COMMAND_INQUIRY `14`
```




<hr>



### define DVD\_COMMAND\_NONE 

```C++
#define DVD_COMMAND_NONE `0`
```




<hr>



### define DVD\_COMMAND\_READ 

```C++
#define DVD_COMMAND_READ `1`
```




<hr>



### define DVD\_COMMAND\_READID 

```C++
#define DVD_COMMAND_READID `5`
```




<hr>



### define DVD\_COMMAND\_REQUEST\_AUDIO\_ERROR 

```C++
#define DVD_COMMAND_REQUEST_AUDIO_ERROR `9`
```




<hr>



### define DVD\_COMMAND\_REQUEST\_LENGTH 

```C++
#define DVD_COMMAND_REQUEST_LENGTH `12`
```




<hr>



### define DVD\_COMMAND\_REQUEST\_PLAY\_ADDR 

```C++
#define DVD_COMMAND_REQUEST_PLAY_ADDR `10`
```




<hr>



### define DVD\_COMMAND\_REQUEST\_START\_ADDR 

```C++
#define DVD_COMMAND_REQUEST_START_ADDR `11`
```




<hr>



### define DVD\_COMMAND\_SEEK 

```C++
#define DVD_COMMAND_SEEK `2`
```




<hr>



### define DVD\_COMMAND\_STOP\_STREAM\_AT\_END 

```C++
#define DVD_COMMAND_STOP_STREAM_AT_END `8`
```




<hr>



### define DVD\_INTTYPE\_BRK 

```C++
#define DVD_INTTYPE_BRK `0x00000008`
```




<hr>



### define DVD\_INTTYPE\_CVR 

```C++
#define DVD_INTTYPE_CVR `0x00000004`
```




<hr>



### define DVD\_INTTYPE\_DE 

```C++
#define DVD_INTTYPE_DE `0x00000002`
```




<hr>



### define DVD\_INTTYPE\_SECURITY\_ERROR 

```C++
#define DVD_INTTYPE_SECURITY_ERROR `0x00000020`
```




<hr>



### define DVD\_INTTYPE\_TC 

```C++
#define DVD_INTTYPE_TC `0x00000001`
```




<hr>



### define DVD\_INTTYPE\_TIMEOUT 

```C++
#define DVD_INTTYPE_TIMEOUT `0x00000010`
```




<hr>



### define DVD\_MIN\_TRANSFER\_SIZE 

```C++
#define DVD_MIN_TRANSFER_SIZE `32`
```




<hr>



### define DVD\_RESULT\_CANCELED 

```C++
#define DVD_RESULT_CANCELED `-6`
```




<hr>



### define DVD\_RESULT\_COVER\_CLOSED 

```C++
#define DVD_RESULT_COVER_CLOSED `-2`
```




<hr>



### define DVD\_RESULT\_COVER\_OPEN 

```C++
#define DVD_RESULT_COVER_OPEN `-3`
```




<hr>



### define DVD\_RESULT\_FATAL\_ERROR 

```C++
#define DVD_RESULT_FATAL_ERROR `-1`
```




<hr>



### define DVD\_RESULT\_IGNORED 

```C++
#define DVD_RESULT_IGNORED `-5`
```




<hr>



### define DVD\_RESULT\_NO\_DISK 

```C++
#define DVD_RESULT_NO_DISK `-4`
```




<hr>



### define DVD\_STATE\_BUSY 

```C++
#define DVD_STATE_BUSY `1`
```




<hr>



### define DVD\_STATE\_CANCELED 

```C++
#define DVD_STATE_CANCELED `10`
```




<hr>



### define DVD\_STATE\_COVER\_CLOSED 

```C++
#define DVD_STATE_COVER_CLOSED `3`
```




<hr>



### define DVD\_STATE\_COVER\_OPEN 

```C++
#define DVD_STATE_COVER_OPEN `5`
```




<hr>



### define DVD\_STATE\_END 

```C++
#define DVD_STATE_END `0`
```




<hr>



### define DVD\_STATE\_FATAL\_ERROR 

```C++
#define DVD_STATE_FATAL_ERROR `-1`
```




<hr>



### define DVD\_STATE\_IGNORED 

```C++
#define DVD_STATE_IGNORED `9`
```




<hr>



### define DVD\_STATE\_MOTOR\_STOPPED 

```C++
#define DVD_STATE_MOTOR_STOPPED `7`
```




<hr>



### define DVD\_STATE\_NO\_DISK 

```C++
#define DVD_STATE_NO_DISK `4`
```




<hr>



### define DVD\_STATE\_PAUSING 

```C++
#define DVD_STATE_PAUSING `8`
```




<hr>



### define DVD\_STATE\_RETRY 

```C++
#define DVD_STATE_RETRY `11`
```




<hr>



### define DVD\_STATE\_WAITING 

```C++
#define DVD_STATE_WAITING `2`
```




<hr>



### define DVD\_STATE\_WRONG\_DISK 

```C++
#define DVD_STATE_WRONG_DISK `6`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `SDK/include/dolphin/dvd.h`

