

# File dvd.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**dvd**](dir_6809de60dbef2d995cf7d874d1fa5b65.md) **>** [**dvd.c**](dvd_8c.md)

[Go to the source code of this file](dvd_8c_source.md)



* `#include <string.h>`
* `#include "../os/OSPrivate.h"`
* `#include "dvd_private.h"`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**LastState**](#variable-laststate)  <br> |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**BOOL**](types_8h.md#typedef-bool) | [**AutoFinishing**](#variable-autofinishing)  <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**CancelAllSyncComplete**](#variable-cancelallsynccomplete)  <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**CancelCallback**](#variable-cancelcallback)  <br> |
|  [**vu32**](types_8h.md#typedef-vu32) | [**CancelLastError**](#variable-cancellasterror)  <br> |
|  [**vu32**](types_8h.md#typedef-vu32) | [**Canceling**](#variable-canceling)  <br> |
|  [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* | [**CancelingCommandBlock**](#variable-cancelingcommandblock)  <br> |
|  [**vu32**](types_8h.md#typedef-vu32) | [**CurrCommand**](#variable-currcommand)  <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDInitialized**](#variable-dvdinitialized)  <br> |
|  [**DVDCommandBlock**](struct_d_v_d_command_block.md) | [**DummyCommandBlock**](#variable-dummycommandblock)  <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**BOOL**](types_8h.md#typedef-bool) | [**FatalErrorFlag**](#variable-fatalerrorflag)  <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**FirstTimeInBootrom**](#variable-firsttimeinbootrom)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**LastError**](#variable-lasterror)  <br> |
|  [**vs32**](types_8h.md#typedef-vs32) | [**NumInternalRetry**](#variable-numinternalretry)  <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**BOOL**](types_8h.md#typedef-bool) | [**PauseFlag**](#variable-pauseflag)  <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**BOOL**](types_8h.md#typedef-bool) | [**PausingFlag**](#variable-pausingflag)  <br> |
|  [**OSAlarm**](struct_o_s_alarm.md) | [**ResetAlarm**](#variable-resetalarm)  <br> |
|  [**vu32**](types_8h.md#typedef-vu32) | [**ResetCount**](#variable-resetcount)  <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**ResetRequired**](#variable-resetrequired)  <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**ResultForSyncCommand**](#variable-resultforsynccommand)  <br> |
|  [**vu32**](types_8h.md#typedef-vu32) | [**ResumeFromHere**](#variable-resumefromhere)  <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**autoInvalidation**](#variable-autoinvalidation)   = `1`<br> |
|  [**OSBootInfo**](_o_s_boot_info_8h.md#typedef-osbootinfo) \* | [**bootInfo**](#variable-bootinfo)  <br> |
|  [**DVDDiskID**](struct_d_v_d_disk_i_d.md) \* | [**currID**](#variable-currid)  <br> |
|  [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* | [**executing**](#variable-executing)  <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**tmp**](#variable-tmp)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**s32**](types_8h.md#typedef-s32) | [**DVDCancel**](#function-dvdcancel) ([**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**DVDCancelAll**](#function-dvdcancelall) () <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDCancelAllAsync**](#function-dvdcancelallasync) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**s32**](types_8h.md#typedef-s32), [**DVDCommandBlock**](struct_d_v_d_command_block.md) \*) callback) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDCancelAsync**](#function-dvdcancelasync) ([**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**s32**](types_8h.md#typedef-s32), [**DVDCommandBlock**](struct_d_v_d_command_block.md) \*) callback) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**DVDCancelStream**](#function-dvdcancelstream) ([**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDCancelStreamAsync**](#function-dvdcancelstreamasync) ([**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**s32**](types_8h.md#typedef-s32), [**DVDCommandBlock**](struct_d_v_d_command_block.md) \*) callback) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**DVDChangeDisk**](#function-dvdchangedisk) ([**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block, [**DVDDiskID**](struct_d_v_d_disk_i_d.md) \* id) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDChangeDiskAsync**](#function-dvdchangediskasync) ([**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block, [**DVDDiskID**](struct_d_v_d_disk_i_d.md) \* id, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**s32**](types_8h.md#typedef-s32), [**DVDCommandBlock**](struct_d_v_d_command_block.md) \*) callback) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDChangeDiskAsyncForBS**](#function-dvdchangediskasyncforbs) ([**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**s32**](types_8h.md#typedef-s32), [**DVDCommandBlock**](struct_d_v_d_command_block.md) \*) callback) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDCheckDisk**](#function-dvdcheckdisk) () <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**DVDGetCommandBlockStatus**](#function-dvdgetcommandblockstatus) ([**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**DVDDiskID**](struct_d_v_d_disk_i_d.md) \* | [**DVDGetCurrentDiskID**](#function-dvdgetcurrentdiskid) () <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**DVDGetDriveStatus**](#function-dvdgetdrivestatus) () <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**DVDGetStreamErrorStatus**](#function-dvdgetstreamerrorstatus) ([**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDGetStreamErrorStatusAsync**](#function-dvdgetstreamerrorstatusasync) ([**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**s32**](types_8h.md#typedef-s32), [**DVDCommandBlock**](struct_d_v_d_command_block.md) \*) callback) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**DVDGetStreamLength**](#function-dvdgetstreamlength) ([**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDGetStreamLengthAsync**](#function-dvdgetstreamlengthasync) ([**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**s32**](types_8h.md#typedef-s32), [**DVDCommandBlock**](struct_d_v_d_command_block.md) \*) callback) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**DVDGetStreamPlayAddr**](#function-dvdgetstreamplayaddr) ([**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDGetStreamPlayAddrAsync**](#function-dvdgetstreamplayaddrasync) ([**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**s32**](types_8h.md#typedef-s32), [**DVDCommandBlock**](struct_d_v_d_command_block.md) \*) callback) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**DVDGetStreamStartAddr**](#function-dvdgetstreamstartaddr) ([**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDGetStreamStartAddrAsync**](#function-dvdgetstreamstartaddrasync) ([**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**s32**](types_8h.md#typedef-s32), [**DVDCommandBlock**](struct_d_v_d_command_block.md) \*) callback) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDInit**](#function-dvdinit) () <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**DVDInquiry**](#function-dvdinquiry) ([**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block, [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDDriveInfo**](struct_d_v_d_drive_info.md) \* info) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDInquiryAsync**](#function-dvdinquiryasync) ([**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block, [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**DVDDriveInfo**](struct_d_v_d_drive_info.md) \* info, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**s32**](types_8h.md#typedef-s32), [**DVDCommandBlock**](struct_d_v_d_command_block.md) \*) callback) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDPause**](#function-dvdpause) () <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDPrepareStreamAbsAsync**](#function-dvdpreparestreamabsasync) ([**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block, [**u32**](types_8h.md#typedef-u32) length, [**u32**](types_8h.md#typedef-u32) offset, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**s32**](types_8h.md#typedef-s32), [**DVDCommandBlock**](struct_d_v_d_command_block.md) \*) callback) <br>_0x14_  |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDReadAbsAsyncForBS**](#function-dvdreadabsasyncforbs) ([**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* addr, [**s32**](types_8h.md#typedef-s32) length, [**s32**](types_8h.md#typedef-s32) offset, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**s32**](types_8h.md#typedef-s32), [**DVDCommandBlock**](struct_d_v_d_command_block.md) \*) callback) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDReadAbsAsyncPrio**](#function-dvdreadabsasyncprio) ([**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* addr, [**s32**](types_8h.md#typedef-s32) length, [**s32**](types_8h.md#typedef-s32) offset, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**s32**](types_8h.md#typedef-s32), [**DVDCommandBlock**](struct_d_v_d_command_block.md) \*) callback, [**s32**](types_8h.md#typedef-s32) prio) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDReadDiskID**](#function-dvdreaddiskid) ([**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block, [**DVDDiskID**](struct_d_v_d_disk_i_d.md) \* diskID, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**s32**](types_8h.md#typedef-s32), [**DVDCommandBlock**](struct_d_v_d_command_block.md) \*) callback) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDReset**](#function-dvdreset) () <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDResetRequired**](#function-dvdresetrequired) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDResume**](#function-dvdresume) () <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDSeekAbsAsyncPrio**](#function-dvdseekabsasyncprio) ([**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block, [**s32**](types_8h.md#typedef-s32) offset, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step), [**DVDCommandBlock**](struct_d_v_d_command_block.md) \*) callback, [**s32**](types_8h.md#typedef-s32) prio) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**DVDSetAutoInvalidation**](#function-dvdsetautoinvalidation) ([**BOOL**](types_8h.md#typedef-bool) autoInval) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**DVDStopStreamAtEnd**](#function-dvdstopstreamatend) ([**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**DVDStopStreamAtEndAsync**](#function-dvdstopstreamatendasync) ([**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**s32**](types_8h.md#typedef-s32), [**DVDCommandBlock**](struct_d_v_d_command_block.md) \*) callback) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DVDAudioBufferConfig**](#function-__dvdaudiobufferconfig) ([**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block, [**u32**](types_8h.md#typedef-u32) enable, [**u32**](types_8h.md#typedef-u32) size, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**s32**](types_8h.md#typedef-s32), [**DVDCommandBlock**](struct_d_v_d_command_block.md) \*) callback) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_DVDPrepareResetAsync**](#function-__dvdprepareresetasync) ([**DVDCBCallback**](dvd_8h.md#typedef-dvdcbcallback) cb) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**u16**](types_8h.md#typedef-u16) \*[**tmpBuffer**](_c_a_r_d_private_8h.md#define-card_max_mount_step)[32] | [**ALIGN**](#function-align) (32) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AlarmHandler**](#function-alarmhandler) () <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**CategorizeError**](#function-categorizeerror) ([**u32**](types_8h.md#typedef-u32) error) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**CheckCancel**](#function-checkcancel) ([**u32**](types_8h.md#typedef-u32) resume) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**cbForCancelAllSync**](#function-cbforcancelallsync) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**cbForCancelStreamSync**](#function-cbforcancelstreamsync) ([**s32**](types_8h.md#typedef-s32) result, [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**cbForCancelSync**](#function-cbforcancelsync) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**cbForChangeDiskSync**](#function-cbforchangedisksync) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**cbForGetStreamErrorStatusSync**](#function-cbforgetstreamerrorstatussync) ([**s32**](types_8h.md#typedef-s32) result, [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**cbForGetStreamLengthSync**](#function-cbforgetstreamlengthsync) ([**s32**](types_8h.md#typedef-s32) result, [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**cbForGetStreamPlayAddrSync**](#function-cbforgetstreamplayaddrsync) ([**s32**](types_8h.md#typedef-s32) result, [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**cbForGetStreamStartAddrSync**](#function-cbforgetstreamstartaddrsync) ([**s32**](types_8h.md#typedef-s32) result, [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**cbForInquirySync**](#function-cbforinquirysync) ([**s32**](types_8h.md#typedef-s32) result, [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**cbForStateBusy**](#function-cbforstatebusy) ([**u32**](types_8h.md#typedef-u32) intType) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**cbForStateCheckID1**](#function-cbforstatecheckid1) ([**u32**](types_8h.md#typedef-u32) intType) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**cbForStateCheckID2**](#function-cbforstatecheckid2) ([**u32**](types_8h.md#typedef-u32) intType) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**cbForStateCheckID3**](#function-cbforstatecheckid3) ([**u32**](types_8h.md#typedef-u32) intType) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**cbForStateCoverClosed**](#function-cbforstatecoverclosed) ([**u32**](types_8h.md#typedef-u32) intType) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**cbForStateError**](#function-cbforstateerror) ([**u32**](types_8h.md#typedef-u32) intType) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**cbForStateGettingError**](#function-cbforstategettingerror) ([**u32**](types_8h.md#typedef-u32) intType) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**cbForStateGoToRetry**](#function-cbforstategotoretry) ([**u32**](types_8h.md#typedef-u32) intType) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**cbForStateMotorStopped**](#function-cbforstatemotorstopped) ([**u32**](types_8h.md#typedef-u32) intType) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**cbForStateReadingFST**](#function-cbforstatereadingfst) ([**u32**](types_8h.md#typedef-u32) intType) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**cbForStopStreamAtEndSync**](#function-cbforstopstreamatendsync) ([**s32**](types_8h.md#typedef-s32) result, [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**cbForUnrecoveredError**](#function-cbforunrecoverederror) ([**u32**](types_8h.md#typedef-u32) intType) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**cbForUnrecoveredErrorRetry**](#function-cbforunrecoverederrorretry) ([**u32**](types_8h.md#typedef-u32) intType) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**issueCommand**](#function-issuecommand) ([**s32**](types_8h.md#typedef-s32) prio, [**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**stateBusy**](#function-statebusy) ([**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**stateCheckID**](#function-statecheckid) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**stateCheckID2**](#function-statecheckid2) ([**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**stateCheckID3**](#function-statecheckid3) ([**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**stateCoverClosed**](#function-statecoverclosed) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**stateCoverClosed\_CMD**](#function-statecoverclosed_cmd) ([**DVDCommandBlock**](struct_d_v_d_command_block.md) \* block) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**stateError**](#function-stateerror) ([**u32**](types_8h.md#typedef-u32) error) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**stateGettingError**](#function-stategettingerror) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**stateGoToRetry**](#function-stategotoretry) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**stateMotorStopped**](#function-statemotorstopped) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**stateReadingFST**](#function-statereadingfst) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**stateReady**](#function-stateready) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**stateTimeout**](#function-statetimeout) () <br> |

























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**ERROR\_FATAL**](dvd_8c.md#define-error_fatal)  `1`<br> |
| define  | [**ERROR\_RETRY**](dvd_8c.md#define-error_retry)  `2`<br> |
| define  | [**ERROR\_RETRY\_INTERNALLY**](dvd_8c.md#define-error_retry_internally)  `3`<br> |

## Public Attributes Documentation




### variable LastState 

```C++
void(* LastState) (DVDCommandBlock *);
```




<hr>
## Public Static Attributes Documentation




### variable AutoFinishing 

```C++
BOOL AutoFinishing;
```




<hr>



### variable CancelAllSyncComplete 

```C++
BOOL CancelAllSyncComplete;
```




<hr>



### variable CancelCallback 

```C++
void(* CancelCallback) (s32, DVDCommandBlock *);
```




<hr>



### variable CancelLastError 

```C++
vu32 CancelLastError;
```




<hr>



### variable Canceling 

```C++
vu32 Canceling;
```




<hr>



### variable CancelingCommandBlock 

```C++
DVDCommandBlock* CancelingCommandBlock;
```




<hr>



### variable CurrCommand 

```C++
vu32 CurrCommand;
```




<hr>



### variable DVDInitialized 

```C++
BOOL DVDInitialized;
```




<hr>



### variable DummyCommandBlock 

```C++
DVDCommandBlock DummyCommandBlock;
```




<hr>



### variable FatalErrorFlag 

```C++
volatile BOOL FatalErrorFlag;
```




<hr>



### variable FirstTimeInBootrom 

```C++
BOOL FirstTimeInBootrom;
```




<hr>



### variable LastError 

```C++
u32 LastError;
```




<hr>



### variable NumInternalRetry 

```C++
vs32 NumInternalRetry;
```




<hr>



### variable PauseFlag 

```C++
volatile BOOL PauseFlag;
```




<hr>



### variable PausingFlag 

```C++
volatile BOOL PausingFlag;
```




<hr>



### variable ResetAlarm 

```C++
OSAlarm ResetAlarm;
```




<hr>



### variable ResetCount 

```C++
vu32 ResetCount;
```




<hr>



### variable ResetRequired 

```C++
BOOL ResetRequired;
```




<hr>



### variable ResultForSyncCommand 

```C++
s32 ResultForSyncCommand;
```




<hr>



### variable ResumeFromHere 

```C++
vu32 ResumeFromHere;
```




<hr>



### variable autoInvalidation 

```C++
BOOL autoInvalidation;
```




<hr>



### variable bootInfo 

```C++
OSBootInfo* bootInfo;
```




<hr>



### variable currID 

```C++
DVDDiskID* currID;
```




<hr>



### variable executing 

```C++
DVDCommandBlock* executing;
```




<hr>



### variable tmp 

```C++
void* tmp;
```




<hr>
## Public Functions Documentation




### function DVDCancel 

```C++
s32 DVDCancel (
    volatile  DVDCommandBlock * block
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
    void (*)( s32 , DVDCommandBlock *) callback
) 
```




<hr>



### function DVDCancelAsync 

```C++
BOOL DVDCancelAsync (
    DVDCommandBlock * block,
    void (*)( s32 , DVDCommandBlock *) callback
) 
```




<hr>



### function DVDCancelStream 

```C++
s32 DVDCancelStream (
    DVDCommandBlock * block
) 
```




<hr>



### function DVDCancelStreamAsync 

```C++
BOOL DVDCancelStreamAsync (
    DVDCommandBlock * block,
    void (*)( s32 , DVDCommandBlock *) callback
) 
```




<hr>



### function DVDChangeDisk 

```C++
s32 DVDChangeDisk (
    DVDCommandBlock * block,
    DVDDiskID * id
) 
```




<hr>



### function DVDChangeDiskAsync 

```C++
BOOL DVDChangeDiskAsync (
    DVDCommandBlock * block,
    DVDDiskID * id,
    void (*)( s32 , DVDCommandBlock *) callback
) 
```




<hr>



### function DVDChangeDiskAsyncForBS 

```C++
BOOL DVDChangeDiskAsyncForBS (
    DVDCommandBlock * block,
    void (*)( s32 , DVDCommandBlock *) callback
) 
```




<hr>



### function DVDCheckDisk 

```C++
BOOL DVDCheckDisk () 
```




<hr>



### function DVDGetCommandBlockStatus 

```C++
s32 DVDGetCommandBlockStatus (
    DVDCommandBlock * block
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



### function DVDGetStreamErrorStatus 

```C++
s32 DVDGetStreamErrorStatus (
    DVDCommandBlock * block
) 
```




<hr>



### function DVDGetStreamErrorStatusAsync 

```C++
BOOL DVDGetStreamErrorStatusAsync (
    DVDCommandBlock * block,
    void (*)( s32 , DVDCommandBlock *) callback
) 
```




<hr>



### function DVDGetStreamLength 

```C++
s32 DVDGetStreamLength (
    DVDCommandBlock * block
) 
```




<hr>



### function DVDGetStreamLengthAsync 

```C++
BOOL DVDGetStreamLengthAsync (
    DVDCommandBlock * block,
    void (*)( s32 , DVDCommandBlock *) callback
) 
```




<hr>



### function DVDGetStreamPlayAddr 

```C++
s32 DVDGetStreamPlayAddr (
    DVDCommandBlock * block
) 
```




<hr>



### function DVDGetStreamPlayAddrAsync 

```C++
BOOL DVDGetStreamPlayAddrAsync (
    DVDCommandBlock * block,
    void (*)( s32 , DVDCommandBlock *) callback
) 
```




<hr>



### function DVDGetStreamStartAddr 

```C++
s32 DVDGetStreamStartAddr (
    DVDCommandBlock * block
) 
```




<hr>



### function DVDGetStreamStartAddrAsync 

```C++
BOOL DVDGetStreamStartAddrAsync (
    DVDCommandBlock * block,
    void (*)( s32 , DVDCommandBlock *) callback
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
    DVDCommandBlock * block,
    struct  DVDDriveInfo * info
) 
```




<hr>



### function DVDInquiryAsync 

```C++
BOOL DVDInquiryAsync (
    DVDCommandBlock * block,
    struct  DVDDriveInfo * info,
    void (*)( s32 , DVDCommandBlock *) callback
) 
```




<hr>



### function DVDPause 

```C++
void DVDPause () 
```




<hr>



### function DVDPrepareStreamAbsAsync 

_0x14_ 
```C++
BOOL DVDPrepareStreamAbsAsync (
    DVDCommandBlock * block,
    u32 length,
    u32 offset,
    void (*)( s32 , DVDCommandBlock *) callback
) 
```




<hr>



### function DVDReadAbsAsyncForBS 

```C++
BOOL DVDReadAbsAsyncForBS (
    DVDCommandBlock * block,
    void * addr,
    s32 length,
    s32 offset,
    void (*)( s32 , DVDCommandBlock *) callback
) 
```




<hr>



### function DVDReadAbsAsyncPrio 

```C++
BOOL DVDReadAbsAsyncPrio (
    DVDCommandBlock * block,
    void * addr,
    s32 length,
    s32 offset,
    void (*)( s32 , DVDCommandBlock *) callback,
    s32 prio
) 
```




<hr>



### function DVDReadDiskID 

```C++
BOOL DVDReadDiskID (
    DVDCommandBlock * block,
    DVDDiskID * diskID,
    void (*)( s32 , DVDCommandBlock *) callback
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
BOOL DVDResetRequired () 
```




<hr>



### function DVDResume 

```C++
void DVDResume () 
```




<hr>



### function DVDSeekAbsAsyncPrio 

```C++
BOOL DVDSeekAbsAsyncPrio (
    DVDCommandBlock * block,
    s32 offset,
    void (*)( long , DVDCommandBlock *) callback,
    s32 prio
) 
```




<hr>



### function DVDSetAutoInvalidation 

```C++
int DVDSetAutoInvalidation (
    BOOL autoInval
) 
```




<hr>



### function DVDStopStreamAtEnd 

```C++
s32 DVDStopStreamAtEnd (
    DVDCommandBlock * block
) 
```




<hr>



### function DVDStopStreamAtEndAsync 

```C++
BOOL DVDStopStreamAtEndAsync (
    DVDCommandBlock * block,
    void (*)( s32 , DVDCommandBlock *) callback
) 
```




<hr>



### function \_\_DVDAudioBufferConfig 

```C++
void __DVDAudioBufferConfig (
    DVDCommandBlock * block,
    u32 enable,
    u32 size,
    void (*)( s32 , DVDCommandBlock *) callback
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
## Public Static Functions Documentation




### function ALIGN 

```C++
static u16 * tmpBuffer [32] ALIGN (
    32
) 
```




<hr>



### function AlarmHandler 

```C++
static void AlarmHandler () 
```




<hr>



### function CategorizeError 

```C++
static u32 CategorizeError (
    u32 error
) 
```




<hr>



### function CheckCancel 

```C++
static BOOL CheckCancel (
    u32 resume
) 
```




<hr>



### function cbForCancelAllSync 

```C++
static void cbForCancelAllSync () 
```




<hr>



### function cbForCancelStreamSync 

```C++
static void cbForCancelStreamSync (
    s32 result,
    DVDCommandBlock * block
) 
```




<hr>



### function cbForCancelSync 

```C++
static void cbForCancelSync () 
```




<hr>



### function cbForChangeDiskSync 

```C++
static void cbForChangeDiskSync () 
```




<hr>



### function cbForGetStreamErrorStatusSync 

```C++
static void cbForGetStreamErrorStatusSync (
    s32 result,
    DVDCommandBlock * block
) 
```




<hr>



### function cbForGetStreamLengthSync 

```C++
static void cbForGetStreamLengthSync (
    s32 result,
    DVDCommandBlock * block
) 
```




<hr>



### function cbForGetStreamPlayAddrSync 

```C++
static void cbForGetStreamPlayAddrSync (
    s32 result,
    DVDCommandBlock * block
) 
```




<hr>



### function cbForGetStreamStartAddrSync 

```C++
static void cbForGetStreamStartAddrSync (
    s32 result,
    DVDCommandBlock * block
) 
```




<hr>



### function cbForInquirySync 

```C++
static void cbForInquirySync (
    s32 result,
    DVDCommandBlock * block
) 
```




<hr>



### function cbForStateBusy 

```C++
static void cbForStateBusy (
    u32 intType
) 
```




<hr>



### function cbForStateCheckID1 

```C++
static void cbForStateCheckID1 (
    u32 intType
) 
```




<hr>



### function cbForStateCheckID2 

```C++
static void cbForStateCheckID2 (
    u32 intType
) 
```




<hr>



### function cbForStateCheckID3 

```C++
static void cbForStateCheckID3 (
    u32 intType
) 
```




<hr>



### function cbForStateCoverClosed 

```C++
static void cbForStateCoverClosed (
    u32 intType
) 
```




<hr>



### function cbForStateError 

```C++
static void cbForStateError (
    u32 intType
) 
```




<hr>



### function cbForStateGettingError 

```C++
static void cbForStateGettingError (
    u32 intType
) 
```




<hr>



### function cbForStateGoToRetry 

```C++
static void cbForStateGoToRetry (
    u32 intType
) 
```




<hr>



### function cbForStateMotorStopped 

```C++
static void cbForStateMotorStopped (
    u32 intType
) 
```




<hr>



### function cbForStateReadingFST 

```C++
static void cbForStateReadingFST (
    u32 intType
) 
```




<hr>



### function cbForStopStreamAtEndSync 

```C++
static void cbForStopStreamAtEndSync (
    s32 result,
    DVDCommandBlock * block
) 
```




<hr>



### function cbForUnrecoveredError 

```C++
static void cbForUnrecoveredError (
    u32 intType
) 
```




<hr>



### function cbForUnrecoveredErrorRetry 

```C++
static void cbForUnrecoveredErrorRetry (
    u32 intType
) 
```




<hr>



### function issueCommand 

```C++
static BOOL issueCommand (
    s32 prio,
    DVDCommandBlock * block
) 
```




<hr>



### function stateBusy 

```C++
static void stateBusy (
    DVDCommandBlock * block
) 
```




<hr>



### function stateCheckID 

```C++
static void stateCheckID () 
```




<hr>



### function stateCheckID2 

```C++
static void stateCheckID2 (
    DVDCommandBlock * block
) 
```




<hr>



### function stateCheckID3 

```C++
static void stateCheckID3 (
    DVDCommandBlock * block
) 
```




<hr>



### function stateCoverClosed 

```C++
static void stateCoverClosed () 
```




<hr>



### function stateCoverClosed\_CMD 

```C++
static void stateCoverClosed_CMD (
    DVDCommandBlock * block
) 
```




<hr>



### function stateError 

```C++
static void stateError (
    u32 error
) 
```




<hr>



### function stateGettingError 

```C++
static void stateGettingError () 
```




<hr>



### function stateGoToRetry 

```C++
static void stateGoToRetry () 
```




<hr>



### function stateMotorStopped 

```C++
static void stateMotorStopped () 
```




<hr>



### function stateReadingFST 

```C++
static void stateReadingFST () 
```




<hr>



### function stateReady 

```C++
static void stateReady () 
```




<hr>



### function stateTimeout 

```C++
static void stateTimeout () 
```




<hr>
## Macro Definition Documentation





### define ERROR\_FATAL 

```C++
#define ERROR_FATAL `1`
```




<hr>



### define ERROR\_RETRY 

```C++
#define ERROR_RETRY `2`
```




<hr>



### define ERROR\_RETRY\_INTERNALLY 

```C++
#define ERROR_RETRY_INTERNALLY `3`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/dvd/dvd.c`

