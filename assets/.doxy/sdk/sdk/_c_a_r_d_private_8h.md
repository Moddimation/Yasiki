

# File CARDPrivate.h



[**FileList**](files.md) **>** [**card**](dir_2dfa3b55db09c289c0394a464581d568.md) **>** [**CARDPrivate.h**](_c_a_r_d_private_8h.md)

[Go to the source code of this file](_c_a_r_d_private_8h_source.md)



* `#include <dolphin/card.h>`
* `#include <dolphin/exi.h>`















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**CARDControl**](struct_c_a_r_d_control.md) <br> |
| struct | [**CARDDecParam**](struct_c_a_r_d_dec_param.md) <br> |
| struct | [**CARDDir**](struct_c_a_r_d_dir.md) <br> |
| struct | [**CARDDirCheck**](struct_c_a_r_d_dir_check.md) <br> |
| struct | [**CARDID**](struct_c_a_r_d_i_d.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**CARDControl**](struct_c_a_r_d_control.md) | [**CARDControl**](#typedef-cardcontrol)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**CARDDecParam**](struct_c_a_r_d_dec_param.md) | [**CARDDecParam**](#typedef-carddecparam)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**CARDDir**](struct_c_a_r_d_dir.md) | [**CARDDir**](#typedef-carddir)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**CARDDirCheck**](struct_c_a_r_d_dir_check.md) | [**CARDDirCheck**](#typedef-carddircheck)  <br> |
| typedef [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**CARDID**](struct_c_a_r_d_i_d.md) | [**CARDID**](#typedef-cardid)  <br> |




## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**CARDControl**](struct_c_a_r_d_control.md) | [**\_\_CARDBlock**](#variable-__cardblock)  <br> |
|  [**DVDDiskID**](struct_d_v_d_disk_i_d.md) \* | [**\_\_CARDDiskID**](#variable-__carddiskid)  <br> |
|  [**DVDDiskID**](struct_d_v_d_disk_i_d.md) | [**\_\_CARDDiskNone**](#variable-__carddisknone)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDFormatAsync**](#function-cardformatasync) ([**s32**](types_8h.md#typedef-s32) chan, [**CARDCallback**](card_8h.md#typedef-cardcallback) callback) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDAccess**](#function-__cardaccess) ([**CARDDir**](struct_c_a_r_d_dir.md) \* ent) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDAllocBlock**](#function-__cardallocblock) ([**s32**](types_8h.md#typedef-s32) chan, [**u32**](types_8h.md#typedef-u32) cBlock, [**CARDCallback**](card_8h.md#typedef-cardcallback) callback) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_CARDCheckSum**](#function-__cardchecksum) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* ptr, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) length, [**u16**](types_8h.md#typedef-u16) \* checksum, [**u16**](types_8h.md#typedef-u16) \* checksumInv) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDClearStatus**](#function-__cardclearstatus) ([**s32**](types_8h.md#typedef-s32) chan) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**\_\_CARDCompareFileName**](#function-__cardcomparefilename) ([**CARDDir**](struct_c_a_r_d_dir.md) \* ent, [**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* fileName) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_CARDDefaultApiCallback**](#function-__carddefaultapicallback) ([**s32**](types_8h.md#typedef-s32) chan, [**s32**](types_8h.md#typedef-s32) result) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDEnableInterrupt**](#function-__cardenableinterrupt) ([**s32**](types_8h.md#typedef-s32) chan, [**BOOL**](types_8h.md#typedef-bool) enable) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDErase**](#function-__carderase) ([**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) chan, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step), [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) callback) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDEraseSector**](#function-__carderasesector) ([**s32**](types_8h.md#typedef-s32) chan, [**u32**](types_8h.md#typedef-u32) addr, [**CARDCallback**](card_8h.md#typedef-cardcallback) callback) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_CARDExiHandler**](#function-__cardexihandler) ([**s32**](types_8h.md#typedef-s32) chan, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_CARDExtHandler**](#function-__cardexthandler) ([**s32**](types_8h.md#typedef-s32) chan, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDFreeBlock**](#function-__cardfreeblock) ([**s32**](types_8h.md#typedef-s32) chan, [**u16**](types_8h.md#typedef-u16) nBlock, [**CARDCallback**](card_8h.md#typedef-cardcallback) callback) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDGetControlBlock**](#function-__cardgetcontrolblock) ([**s32**](types_8h.md#typedef-s32) chan, [**CARDControl**](struct_c_a_r_d_control.md) \*\* pcard) <br> |
|  [**CARDDir**](struct_c_a_r_d_dir.md) \* | [**\_\_CARDGetDirBlock**](#function-__cardgetdirblock) ([**CARDControl**](struct_c_a_r_d_control.md) \* card) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**\_\_CARDGetFatBlock**](#function-__cardgetfatblock) ([**CARDControl**](struct_c_a_r_d_control.md) \* card) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDGetFileNo**](#function-__cardgetfileno) ([**CARDControl**](struct_c_a_r_d_control.md) \* card, [**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* fileName, [**s32**](types_8h.md#typedef-s32) \* pfileNo) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDGetStatusEx**](#function-__cardgetstatusex) ([**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) chan, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) fileNo, [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**CARDDir**](struct_c_a_r_d_dir.md) \* dirent) <br> |
|  [**BOOL**](types_8h.md#typedef-bool) | [**\_\_CARDIsOpened**](#function-__cardisopened) ([**CARDControl**](struct_c_a_r_d_control.md) \* card, [**s32**](types_8h.md#typedef-s32) fileNo) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDIsPublic**](#function-__cardispublic) ([**CARDDir**](struct_c_a_r_d_dir.md) \* ent) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_CARDMountCallback**](#function-__cardmountcallback) ([**s32**](types_8h.md#typedef-s32) chan, [**s32**](types_8h.md#typedef-s32) result) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDPutControlBlock**](#function-__cardputcontrolblock) ([**CARDControl**](struct_c_a_r_d_control.md) \* card, [**s32**](types_8h.md#typedef-s32) result) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDRawRead**](#function-__cardrawread) ([**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) chan, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* buf, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) length, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) offset) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDRawReadAsync**](#function-__cardrawreadasync) ([**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) chan, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* buf, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) length, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) offset, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step), [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) callback) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDRead**](#function-__cardread) ([**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) chan, [**u32**](types_8h.md#typedef-u32) addr, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) length, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* dst, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step), [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) callback) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_CARDReadNintendoID**](#function-__cardreadnintendoid) ([**s32**](types_8h.md#typedef-s32) chan, [**u32**](types_8h.md#typedef-u32) \* id) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDReadSegment**](#function-__cardreadsegment) ([**s32**](types_8h.md#typedef-s32) chan, [**CARDCallback**](card_8h.md#typedef-cardcallback) callback) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDReadStatus**](#function-__cardreadstatus) ([**s32**](types_8h.md#typedef-s32) chan, [**u8**](types_8h.md#typedef-u8) \* status) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDSeek**](#function-__cardseek) ([**CARDFileInfo**](struct_c_a_r_d_file_info.md) \* fileInfo, [**s32**](types_8h.md#typedef-s32) length, [**s32**](types_8h.md#typedef-s32) offset, [**CARDControl**](struct_c_a_r_d_control.md) \*\* pcard) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_CARDSetDiskID**](#function-__cardsetdiskid) ([**DVDDiskID**](struct_d_v_d_disk_i_d.md) \* id) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDSetStatusEx**](#function-__cardsetstatusex) ([**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) chan, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) fileNo, [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**CARDDir**](struct_c_a_r_d_dir.md) \* dirent) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDSetStatusExAsync**](#function-__cardsetstatusexasync) ([**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) chan, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) fileNo, [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**CARDDir**](struct_c_a_r_d_dir.md) \* dirent, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step), [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) callback) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDSleep**](#function-__cardsleep) ([**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) chan) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDSync**](#function-__cardsync) ([**s32**](types_8h.md#typedef-s32) chan) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_CARDSyncCallback**](#function-__cardsynccallback) ([**s32**](types_8h.md#typedef-s32) chan, [**s32**](types_8h.md#typedef-s32) result) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_CARDTxHandler**](#function-__cardtxhandler) ([**s32**](types_8h.md#typedef-s32) chan, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDUnlock**](#function-__cardunlock) ([**s32**](types_8h.md#typedef-s32) chan, [**u8**](types_8h.md#typedef-u8) flashID) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_CARDUnlockedHandler**](#function-__cardunlockedhandler) ([**s32**](types_8h.md#typedef-s32) chan, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDUpdateDir**](#function-__cardupdatedir) ([**s32**](types_8h.md#typedef-s32) chan, [**CARDCallback**](card_8h.md#typedef-cardcallback) callback) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDUpdateFatBlock**](#function-__cardupdatefatblock) ([**s32**](types_8h.md#typedef-s32) chan, [**u16**](types_8h.md#typedef-u16) \* fat, [**CARDCallback**](card_8h.md#typedef-cardcallback) callback) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDVerify**](#function-__cardverify) ([**CARDControl**](struct_c_a_r_d_control.md) \* card) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDWakeup**](#function-__cardwakeup) ([**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) chan) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDWrite**](#function-__cardwrite) ([**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) chan, [**u32**](types_8h.md#typedef-u32) addr, [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step) length, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* dst, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step), [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) callback) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDWritePage**](#function-__cardwritepage) ([**s32**](types_8h.md#typedef-s32) chan, [**CARDCallback**](card_8h.md#typedef-cardcallback) callback) <br> |



























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**CARDGetDirCheck**](_c_a_r_d_private_8h.md#define-cardgetdircheck) (dir) `(([**CARDDirCheck**](struct_c_a_r_d_dir_check.md)\*)&([**dir**](_c_a_r_d_private_8h.md#define-card_max_mount_step))[[**CARD\_MAX\_FILE**](card_8h.md#define-card_max_file)])`<br> |
| define  | [**CARDIsValidBlockNo**](_c_a_r_d_private_8h.md#define-cardisvalidblockno) (card, iBlock) `([**CARD\_NUM\_SYSTEM\_BLOCK**](_c_a_r_d_private_8h.md#define-card_num_system_block) &lt;= (iBlock) && (iBlock) &lt; ([**card**](_c_a_r_d_private_8h.md#define-card_max_mount_step))-&gt;cBlock)`<br> |
| define  | [**CARD\_CMD\_CLEAR\_STATUS**](_c_a_r_d_private_8h.md#define-card_cmd_clear_status)  `0x89000000`<br> |
| define  | [**CARD\_CMD\_CUSTOM\_ID**](_c_a_r_d_private_8h.md#define-card_cmd_custom_id)  `0x00000000`<br> |
| define  | [**CARD\_CMD\_ERASE**](_c_a_r_d_private_8h.md#define-card_cmd_erase)  `0xF4`<br> |
| define  | [**CARD\_CMD\_ERASE\_SECTOR**](_c_a_r_d_private_8h.md#define-card_cmd_erase_sector)  `0xF1`<br> |
| define  | [**CARD\_CMD\_INT\_DISABLE**](_c_a_r_d_private_8h.md#define-card_cmd_int_disable)  `0x81000000`<br> |
| define  | [**CARD\_CMD\_INT\_ENABLE**](_c_a_r_d_private_8h.md#define-card_cmd_int_enable)  `0x81010000`<br> |
| define  | [**CARD\_CMD\_READ**](_c_a_r_d_private_8h.md#define-card_cmd_read)  `0x52`<br> |
| define  | [**CARD\_CMD\_READ\_STATUS**](_c_a_r_d_private_8h.md#define-card_cmd_read_status)  `0x83000000`<br> |
| define  | [**CARD\_CMD\_SLEEP**](_c_a_r_d_private_8h.md#define-card_cmd_sleep)  `0x88000000`<br> |
| define  | [**CARD\_CMD\_VENDOR\_ID**](_c_a_r_d_private_8h.md#define-card_cmd_vendor_id)  `0x85000000`<br> |
| define  | [**CARD\_CMD\_WAKEUP**](_c_a_r_d_private_8h.md#define-card_cmd_wakeup)  `0x87000000`<br> |
| define  | [**CARD\_CMD\_WRITE**](_c_a_r_d_private_8h.md#define-card_cmd_write)  `0xF2`<br> |
| define  | [**CARD\_CUSTOM\_ID**](_c_a_r_d_private_8h.md#define-card_custom_id)  `0x00000000`<br> |
| define  | [**CARD\_CUSTOM\_ID\_MASK**](_c_a_r_d_private_8h.md#define-card_custom_id_mask)  `0xffff0000`<br> |
| define  | [**CARD\_FAT\_AVAIL**](_c_a_r_d_private_8h.md#define-card_fat_avail)  `0x0000u`<br> |
| define  | [**CARD\_FAT\_CHECKCODE**](_c_a_r_d_private_8h.md#define-card_fat_checkcode)  `0x0002u`<br> |
| define  | [**CARD\_FAT\_CHECKSUM**](_c_a_r_d_private_8h.md#define-card_fat_checksum)  `0x0000u`<br> |
| define  | [**CARD\_FAT\_CHECKSUMINV**](_c_a_r_d_private_8h.md#define-card_fat_checksuminv)  `0x0001u`<br> |
| define  | [**CARD\_FAT\_EOF**](_c_a_r_d_private_8h.md#define-card_fat_eof)  `0xFFFFu`<br> |
| define  | [**CARD\_FAT\_FREEBLOCKS**](_c_a_r_d_private_8h.md#define-card_fat_freeblocks)  `0x0003u`<br> |
| define  | [**CARD\_FAT\_LASTSLOT**](_c_a_r_d_private_8h.md#define-card_fat_lastslot)  `0x0004u`<br> |
| define  | [**CARD\_FAT\_VOID**](_c_a_r_d_private_8h.md#define-card_fat_void)  `0x0001u`<br> |
| define  | [**CARD\_ID\_CHIPS**](_c_a_r_d_private_8h.md#define-card_id_chips)  `0x00000003`<br> |
| define  | [**CARD\_ID\_LATENCY**](_c_a_r_d_private_8h.md#define-card_id_latency)  `0x00000700`<br> |
| define  | [**CARD\_ID\_LATENCY\_SHIFT**](_c_a_r_d_private_8h.md#define-card_id_latency_shift)  `8`<br> |
| define  | [**CARD\_ID\_SECTOR**](_c_a_r_d_private_8h.md#define-card_id_sector)  `0x00003800`<br> |
| define  | [**CARD\_ID\_SECTOR\_SHIFT**](_c_a_r_d_private_8h.md#define-card_id_sector_shift)  `11`<br> |
| define  | [**CARD\_ID\_SIZE**](_c_a_r_d_private_8h.md#define-card_id_size)  `0x000000fc`<br> |
| define  | [**CARD\_MAX\_MOUNT\_STEP**](_c_a_r_d_private_8h.md#define-card_max_mount_step)  `([**CARD\_NUM\_SYSTEM\_BLOCK**](_c_a_r_d_private_8h.md#define-card_num_system_block) + 2)`<br> |
| define  | [**CARD\_MAX\_SIZE**](_c_a_r_d_private_8h.md#define-card_max_size)  `(16[**u**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* 1024[**u**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* 1024[**u**](_c_a_r_d_private_8h.md#define-card_max_mount_step))`<br> |
| define  | [**CARD\_NUM\_SYSTEM\_BLOCK**](_c_a_r_d_private_8h.md#define-card_num_system_block)  `5`<br> |
| define  | [**CARD\_PAGE\_SIZE**](_c_a_r_d_private_8h.md#define-card_page_size)  `128[**u**](_c_a_r_d_private_8h.md#define-card_max_mount_step)`<br> |
| define  | [**CARD\_SEG\_SIZE**](_c_a_r_d_private_8h.md#define-card_seg_size)  `512[**u**](_c_a_r_d_private_8h.md#define-card_max_mount_step)`<br> |
| define  | [**CARD\_STS\_COMPLETE**](_c_a_r_d_private_8h.md#define-card_sts_complete)  `(1[**u**](_c_a_r_d_private_8h.md#define-card_max_mount_step) &lt;&lt; 7)`<br> |
| define  | [**CARD\_STS\_ERASE\_FAIL**](_c_a_r_d_private_8h.md#define-card_sts_erase_fail)  `(1[**u**](_c_a_r_d_private_8h.md#define-card_max_mount_step) &lt;&lt; 4)`<br> |
| define  | [**CARD\_STS\_INT\_ENABLE**](_c_a_r_d_private_8h.md#define-card_sts_int_enable)  `(1[**u**](_c_a_r_d_private_8h.md#define-card_max_mount_step) &lt;&lt; 1)`<br> |
| define  | [**CARD\_STS\_NA\_FAIL**](_c_a_r_d_private_8h.md#define-card_sts_na_fail)  `(1[**u**](_c_a_r_d_private_8h.md#define-card_max_mount_step) &lt;&lt; 2)`<br> |
| define  | [**CARD\_STS\_PROGRAM\_FAIL**](_c_a_r_d_private_8h.md#define-card_sts_program_fail)  `(1[**u**](_c_a_r_d_private_8h.md#define-card_max_mount_step) &lt;&lt; 3)`<br> |
| define  | [**CARD\_STS\_READY**](_c_a_r_d_private_8h.md#define-card_sts_ready)  `(1[**u**](_c_a_r_d_private_8h.md#define-card_max_mount_step) &lt;&lt; 0)`<br> |
| define  | [**CARD\_STS\_SECURITY\_PASS**](_c_a_r_d_private_8h.md#define-card_sts_security_pass)  `(1[**u**](_c_a_r_d_private_8h.md#define-card_max_mount_step) &lt;&lt; 6)`<br> |
| define  | [**CARD\_STS\_SLEEPING**](_c_a_r_d_private_8h.md#define-card_sts_sleeping)  `(1[**u**](_c_a_r_d_private_8h.md#define-card_max_mount_step) &lt;&lt; 5)`<br> |
| define  | [**CARD\_SYSTEM\_BLOCK\_SIZE**](_c_a_r_d_private_8h.md#define-card_system_block_size)  `(8 \* 1024[**u**](_c_a_r_d_private_8h.md#define-card_max_mount_step))`<br> |
| define  | [**CARD\_VENDOR\_SAMSUNG**](_c_a_r_d_private_8h.md#define-card_vendor_samsung)  `0xEC`<br> |

## Public Types Documentation




### typedef CARDControl 

```C++
typedef struct CARDControl CARDControl;
```




<hr>



### typedef CARDDecParam 

```C++
typedef struct CARDDecParam CARDDecParam;
```




<hr>



### typedef CARDDir 

```C++
typedef struct CARDDir CARDDir;
```




<hr>



### typedef CARDDirCheck 

```C++
typedef struct CARDDirCheck CARDDirCheck;
```




<hr>



### typedef CARDID 

```C++
typedef struct CARDID CARDID;
```




<hr>
## Public Attributes Documentation




### variable \_\_CARDBlock 

```C++
struct CARDControl __CARDBlock[2];
```




<hr>



### variable \_\_CARDDiskID 

```C++
DVDDiskID* __CARDDiskID;
```




<hr>



### variable \_\_CARDDiskNone 

```C++
DVDDiskID __CARDDiskNone;
```




<hr>
## Public Functions Documentation




### function CARDFormatAsync 

```C++
s32 CARDFormatAsync (
    s32 chan,
    CARDCallback callback
) 
```




<hr>



### function \_\_CARDAccess 

```C++
s32 __CARDAccess (
    CARDDir * ent
) 
```




<hr>



### function \_\_CARDAllocBlock 

```C++
s32 __CARDAllocBlock (
    s32 chan,
    u32 cBlock,
    CARDCallback callback
) 
```




<hr>



### function \_\_CARDCheckSum 

```C++
void __CARDCheckSum (
    void * ptr,
    int length,
    u16 * checksum,
    u16 * checksumInv
) 
```




<hr>



### function \_\_CARDClearStatus 

```C++
s32 __CARDClearStatus (
    s32 chan
) 
```




<hr>



### function \_\_CARDCompareFileName 

```C++
BOOL __CARDCompareFileName (
    CARDDir * ent,
    const  char * fileName
) 
```




<hr>



### function \_\_CARDDefaultApiCallback 

```C++
void __CARDDefaultApiCallback (
    s32 chan,
    s32 result
) 
```




<hr>



### function \_\_CARDEnableInterrupt 

```C++
s32 __CARDEnableInterrupt (
    s32 chan,
    BOOL enable
) 
```




<hr>



### function \_\_CARDErase 

```C++
s32 __CARDErase (
    long chan,
    void (*)( long , long ) callback
) 
```




<hr>



### function \_\_CARDEraseSector 

```C++
s32 __CARDEraseSector (
    s32 chan,
    u32 addr,
    CARDCallback callback
) 
```




<hr>



### function \_\_CARDExiHandler 

```C++
void __CARDExiHandler (
    s32 chan,
    OSContext * context
) 
```




<hr>



### function \_\_CARDExtHandler 

```C++
void __CARDExtHandler (
    s32 chan,
    OSContext * context
) 
```




<hr>



### function \_\_CARDFreeBlock 

```C++
s32 __CARDFreeBlock (
    s32 chan,
    u16 nBlock,
    CARDCallback callback
) 
```




<hr>



### function \_\_CARDGetControlBlock 

```C++
s32 __CARDGetControlBlock (
    s32 chan,
    CARDControl ** pcard
) 
```




<hr>



### function \_\_CARDGetDirBlock 

```C++
CARDDir * __CARDGetDirBlock (
    CARDControl * card
) 
```




<hr>



### function \_\_CARDGetFatBlock 

```C++
void * __CARDGetFatBlock (
    CARDControl * card
) 
```




<hr>



### function \_\_CARDGetFileNo 

```C++
s32 __CARDGetFileNo (
    CARDControl * card,
    const  char * fileName,
    s32 * pfileNo
) 
```




<hr>



### function \_\_CARDGetStatusEx 

```C++
s32 __CARDGetStatusEx (
    long chan,
    long fileNo,
    struct  CARDDir * dirent
) 
```




<hr>



### function \_\_CARDIsOpened 

```C++
BOOL __CARDIsOpened (
    CARDControl * card,
    s32 fileNo
) 
```




<hr>



### function \_\_CARDIsPublic 

```C++
s32 __CARDIsPublic (
    CARDDir * ent
) 
```




<hr>



### function \_\_CARDMountCallback 

```C++
void __CARDMountCallback (
    s32 chan,
    s32 result
) 
```




<hr>



### function \_\_CARDPutControlBlock 

```C++
s32 __CARDPutControlBlock (
    CARDControl * card,
    s32 result
) 
```




<hr>



### function \_\_CARDRawRead 

```C++
s32 __CARDRawRead (
    long chan,
    void * buf,
    long length,
    long offset
) 
```




<hr>



### function \_\_CARDRawReadAsync 

```C++
s32 __CARDRawReadAsync (
    long chan,
    void * buf,
    long length,
    long offset,
    void (*)( long , long ) callback
) 
```




<hr>



### function \_\_CARDRead 

```C++
s32 __CARDRead (
    long chan,
    u32 addr,
    long length,
    void * dst,
    void (*)( long , long ) callback
) 
```




<hr>



### function \_\_CARDReadNintendoID 

```C++
int __CARDReadNintendoID (
    s32 chan,
    u32 * id
) 
```




<hr>



### function \_\_CARDReadSegment 

```C++
s32 __CARDReadSegment (
    s32 chan,
    CARDCallback callback
) 
```




<hr>



### function \_\_CARDReadStatus 

```C++
s32 __CARDReadStatus (
    s32 chan,
    u8 * status
) 
```




<hr>



### function \_\_CARDSeek 

```C++
s32 __CARDSeek (
    CARDFileInfo * fileInfo,
    s32 length,
    s32 offset,
    CARDControl ** pcard
) 
```




<hr>



### function \_\_CARDSetDiskID 

```C++
void __CARDSetDiskID (
    DVDDiskID * id
) 
```




<hr>



### function \_\_CARDSetStatusEx 

```C++
s32 __CARDSetStatusEx (
    long chan,
    long fileNo,
    struct  CARDDir * dirent
) 
```




<hr>



### function \_\_CARDSetStatusExAsync 

```C++
s32 __CARDSetStatusExAsync (
    long chan,
    long fileNo,
    struct  CARDDir * dirent,
    void (*)( long , long ) callback
) 
```




<hr>



### function \_\_CARDSleep 

```C++
s32 __CARDSleep (
    long chan
) 
```




<hr>



### function \_\_CARDSync 

```C++
s32 __CARDSync (
    s32 chan
) 
```




<hr>



### function \_\_CARDSyncCallback 

```C++
void __CARDSyncCallback (
    s32 chan,
    s32 result
) 
```




<hr>



### function \_\_CARDTxHandler 

```C++
void __CARDTxHandler (
    s32 chan,
    OSContext * context
) 
```




<hr>



### function \_\_CARDUnlock 

```C++
s32 __CARDUnlock (
    s32 chan,
    u8 flashID
) 
```




<hr>



### function \_\_CARDUnlockedHandler 

```C++
void __CARDUnlockedHandler (
    s32 chan,
    OSContext * context
) 
```




<hr>



### function \_\_CARDUpdateDir 

```C++
s32 __CARDUpdateDir (
    s32 chan,
    CARDCallback callback
) 
```




<hr>



### function \_\_CARDUpdateFatBlock 

```C++
s32 __CARDUpdateFatBlock (
    s32 chan,
    u16 * fat,
    CARDCallback callback
) 
```




<hr>



### function \_\_CARDVerify 

```C++
s32 __CARDVerify (
    CARDControl * card
) 
```




<hr>



### function \_\_CARDWakeup 

```C++
s32 __CARDWakeup (
    long chan
) 
```




<hr>



### function \_\_CARDWrite 

```C++
s32 __CARDWrite (
    long chan,
    u32 addr,
    long length,
    void * dst,
    void (*)( long , long ) callback
) 
```




<hr>



### function \_\_CARDWritePage 

```C++
s32 __CARDWritePage (
    s32 chan,
    CARDCallback callback
) 
```




<hr>
## Macro Definition Documentation





### define CARDGetDirCheck 

```C++
#define CARDGetDirCheck (
    dir
) `(( CARDDirCheck *)&( dir )[ CARD_MAX_FILE ])`
```




<hr>



### define CARDIsValidBlockNo 

```C++
#define CARDIsValidBlockNo (
    card,
    iBlock
) `( CARD_NUM_SYSTEM_BLOCK <= (iBlock) && (iBlock) < ( card )->cBlock)`
```




<hr>



### define CARD\_CMD\_CLEAR\_STATUS 

```C++
#define CARD_CMD_CLEAR_STATUS `0x89000000`
```




<hr>



### define CARD\_CMD\_CUSTOM\_ID 

```C++
#define CARD_CMD_CUSTOM_ID `0x00000000`
```




<hr>



### define CARD\_CMD\_ERASE 

```C++
#define CARD_CMD_ERASE `0xF4`
```




<hr>



### define CARD\_CMD\_ERASE\_SECTOR 

```C++
#define CARD_CMD_ERASE_SECTOR `0xF1`
```




<hr>



### define CARD\_CMD\_INT\_DISABLE 

```C++
#define CARD_CMD_INT_DISABLE `0x81000000`
```




<hr>



### define CARD\_CMD\_INT\_ENABLE 

```C++
#define CARD_CMD_INT_ENABLE `0x81010000`
```




<hr>



### define CARD\_CMD\_READ 

```C++
#define CARD_CMD_READ `0x52`
```




<hr>



### define CARD\_CMD\_READ\_STATUS 

```C++
#define CARD_CMD_READ_STATUS `0x83000000`
```




<hr>



### define CARD\_CMD\_SLEEP 

```C++
#define CARD_CMD_SLEEP `0x88000000`
```




<hr>



### define CARD\_CMD\_VENDOR\_ID 

```C++
#define CARD_CMD_VENDOR_ID `0x85000000`
```




<hr>



### define CARD\_CMD\_WAKEUP 

```C++
#define CARD_CMD_WAKEUP `0x87000000`
```




<hr>



### define CARD\_CMD\_WRITE 

```C++
#define CARD_CMD_WRITE `0xF2`
```




<hr>



### define CARD\_CUSTOM\_ID 

```C++
#define CARD_CUSTOM_ID `0x00000000`
```




<hr>



### define CARD\_CUSTOM\_ID\_MASK 

```C++
#define CARD_CUSTOM_ID_MASK `0xffff0000`
```




<hr>



### define CARD\_FAT\_AVAIL 

```C++
#define CARD_FAT_AVAIL `0x0000u`
```




<hr>



### define CARD\_FAT\_CHECKCODE 

```C++
#define CARD_FAT_CHECKCODE `0x0002u`
```




<hr>



### define CARD\_FAT\_CHECKSUM 

```C++
#define CARD_FAT_CHECKSUM `0x0000u`
```




<hr>



### define CARD\_FAT\_CHECKSUMINV 

```C++
#define CARD_FAT_CHECKSUMINV `0x0001u`
```




<hr>



### define CARD\_FAT\_EOF 

```C++
#define CARD_FAT_EOF `0xFFFFu`
```




<hr>



### define CARD\_FAT\_FREEBLOCKS 

```C++
#define CARD_FAT_FREEBLOCKS `0x0003u`
```




<hr>



### define CARD\_FAT\_LASTSLOT 

```C++
#define CARD_FAT_LASTSLOT `0x0004u`
```




<hr>



### define CARD\_FAT\_VOID 

```C++
#define CARD_FAT_VOID `0x0001u`
```




<hr>



### define CARD\_ID\_CHIPS 

```C++
#define CARD_ID_CHIPS `0x00000003`
```




<hr>



### define CARD\_ID\_LATENCY 

```C++
#define CARD_ID_LATENCY `0x00000700`
```




<hr>



### define CARD\_ID\_LATENCY\_SHIFT 

```C++
#define CARD_ID_LATENCY_SHIFT `8`
```




<hr>



### define CARD\_ID\_SECTOR 

```C++
#define CARD_ID_SECTOR `0x00003800`
```




<hr>



### define CARD\_ID\_SECTOR\_SHIFT 

```C++
#define CARD_ID_SECTOR_SHIFT `11`
```




<hr>



### define CARD\_ID\_SIZE 

```C++
#define CARD_ID_SIZE `0x000000fc`
```




<hr>



### define CARD\_MAX\_MOUNT\_STEP 

```C++
#define CARD_MAX_MOUNT_STEP `( CARD_NUM_SYSTEM_BLOCK + 2)`
```




<hr>



### define CARD\_MAX\_SIZE 

```C++
#define CARD_MAX_SIZE `(16 u * 1024 u * 1024 u )`
```




<hr>



### define CARD\_NUM\_SYSTEM\_BLOCK 

```C++
#define CARD_NUM_SYSTEM_BLOCK `5`
```




<hr>



### define CARD\_PAGE\_SIZE 

```C++
#define CARD_PAGE_SIZE `128 u`
```




<hr>



### define CARD\_SEG\_SIZE 

```C++
#define CARD_SEG_SIZE `512 u`
```




<hr>



### define CARD\_STS\_COMPLETE 

```C++
#define CARD_STS_COMPLETE `(1 u << 7)`
```




<hr>



### define CARD\_STS\_ERASE\_FAIL 

```C++
#define CARD_STS_ERASE_FAIL `(1 u << 4)`
```




<hr>



### define CARD\_STS\_INT\_ENABLE 

```C++
#define CARD_STS_INT_ENABLE `(1 u << 1)`
```




<hr>



### define CARD\_STS\_NA\_FAIL 

```C++
#define CARD_STS_NA_FAIL `(1 u << 2)`
```




<hr>



### define CARD\_STS\_PROGRAM\_FAIL 

```C++
#define CARD_STS_PROGRAM_FAIL `(1 u << 3)`
```




<hr>



### define CARD\_STS\_READY 

```C++
#define CARD_STS_READY `(1 u << 0)`
```




<hr>



### define CARD\_STS\_SECURITY\_PASS 

```C++
#define CARD_STS_SECURITY_PASS `(1 u << 6)`
```




<hr>



### define CARD\_STS\_SLEEPING 

```C++
#define CARD_STS_SLEEPING `(1 u << 5)`
```




<hr>



### define CARD\_SYSTEM\_BLOCK\_SIZE 

```C++
#define CARD_SYSTEM_BLOCK_SIZE `(8 * 1024 u )`
```




<hr>



### define CARD\_VENDOR\_SAMSUNG 

```C++
#define CARD_VENDOR_SAMSUNG `0xEC`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/card/CARDPrivate.h`

