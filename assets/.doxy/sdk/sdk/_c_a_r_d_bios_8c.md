

# File CARDBios.c



[**FileList**](files.md) **>** [**card**](dir_2dfa3b55db09c289c0394a464581d568.md) **>** [**CARDBios.c**](_c_a_r_d_bios_8c.md)

[Go to the source code of this file](_c_a_r_d_bios_8c_source.md)



* `#include <dolphin/card.h>`
* `#include <dolphin/os.h>`
* `#include "CARDPrivate.h"`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**CARDControl**](struct_c_a_r_d_control.md) | [**\_\_CARDBlock**](#variable-__cardblock)  <br> |
|  [**DVDDiskID**](struct_d_v_d_disk_i_d.md) \* | [**\_\_CARDDiskID**](#variable-__carddiskid)  <br> |
|  [**DVDDiskID**](struct_d_v_d_disk_i_d.md) | [**\_\_CARDDiskNone**](#variable-__carddisknone)  <br> |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**OSResetFunctionInfo**](struct_o_s_reset_function_info.md) | [**ResetFunctionInfo**](#variable-resetfunctioninfo)   = `{ [**OnReset**](_c_a_r_d_bios_8c.md#function-onreset), 127 }`<br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDFreeBlocks**](#function-cardfreeblocks) ([**s32**](types_8h.md#typedef-s32) chan, [**s32**](types_8h.md#typedef-s32) \* byteNotUsed, [**s32**](types_8h.md#typedef-s32) \* filesNotUsed) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDGetEncoding**](#function-cardgetencoding) ([**s32**](types_8h.md#typedef-s32) chan, [**u16**](types_8h.md#typedef-u16) \* encode) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDGetMemSize**](#function-cardgetmemsize) ([**s32**](types_8h.md#typedef-s32) chan, [**u16**](types_8h.md#typedef-u16) \* size) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDGetResultCode**](#function-cardgetresultcode) ([**s32**](types_8h.md#typedef-s32) chan) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**CARDGetSectorSize**](#function-cardgetsectorsize) ([**s32**](types_8h.md#typedef-s32) chan, [**u32**](types_8h.md#typedef-u32) \* size) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**CARDInit**](#function-cardinit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDClearStatus**](#function-__cardclearstatus) ([**s32**](types_8h.md#typedef-s32) chan) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_CARDDefaultApiCallback**](#function-__carddefaultapicallback) ([**s32**](types_8h.md#typedef-s32) chan, [**s32**](types_8h.md#typedef-s32) result) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDEnableInterrupt**](#function-__cardenableinterrupt) ([**s32**](types_8h.md#typedef-s32) chan, [**BOOL**](types_8h.md#typedef-bool) enable) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDErase**](#function-__carderase) ([**s32**](types_8h.md#typedef-s32) chan, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*)([**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step), [**long**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) callback) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDEraseSector**](#function-__carderasesector) ([**s32**](types_8h.md#typedef-s32) chan, [**u32**](types_8h.md#typedef-u32) addr, [**CARDCallback**](card_8h.md#typedef-cardcallback) callback) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_CARDExiHandler**](#function-__cardexihandler) ([**s32**](types_8h.md#typedef-s32) chan, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_CARDExtHandler**](#function-__cardexthandler) ([**s32**](types_8h.md#typedef-s32) chan, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDGetControlBlock**](#function-__cardgetcontrolblock) ([**s32**](types_8h.md#typedef-s32) chan, [**CARDControl**](struct_c_a_r_d_control.md) \*\* pcard) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDPutControlBlock**](#function-__cardputcontrolblock) ([**CARDControl**](struct_c_a_r_d_control.md) \* card, [**s32**](types_8h.md#typedef-s32) result) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_CARDReadNintendoID**](#function-__cardreadnintendoid) ([**s32**](types_8h.md#typedef-s32) chan, [**u32**](types_8h.md#typedef-u32) \* id) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDReadSegment**](#function-__cardreadsegment) ([**s32**](types_8h.md#typedef-s32) chan, [**CARDCallback**](card_8h.md#typedef-cardcallback) callback) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDReadStatus**](#function-__cardreadstatus) ([**s32**](types_8h.md#typedef-s32) chan, [**u8**](types_8h.md#typedef-u8) \* status) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_CARDSetDiskID**](#function-__cardsetdiskid) ([**DVDDiskID**](struct_d_v_d_disk_i_d.md) \* id) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDSleep**](#function-__cardsleep) ([**s32**](types_8h.md#typedef-s32) chan) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDSync**](#function-__cardsync) ([**s32**](types_8h.md#typedef-s32) chan) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_CARDSyncCallback**](#function-__cardsynccallback) ([**s32**](types_8h.md#typedef-s32) chan, [**s32**](types_8h.md#typedef-s32) result) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_CARDTxHandler**](#function-__cardtxhandler) ([**s32**](types_8h.md#typedef-s32) chan, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**\_\_CARDUnlockedHandler**](#function-__cardunlockedhandler) ([**s32**](types_8h.md#typedef-s32) chan, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDWakeup**](#function-__cardwakeup) ([**s32**](types_8h.md#typedef-s32) chan) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDWritePage**](#function-__cardwritepage) ([**s32**](types_8h.md#typedef-s32) chan, [**CARDCallback**](card_8h.md#typedef-cardcallback) callback) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**BOOL**](types_8h.md#typedef-bool) | [**OnReset**](#function-onreset) ([**BOOL**](types_8h.md#typedef-bool) f) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**Retry**](#function-retry) ([**s32**](types_8h.md#typedef-s32) chan) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SetupTimeoutAlarm**](#function-setuptimeoutalarm) ([**CARDControl**](struct_c_a_r_d_control.md) \* card) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**TimeoutHandler**](#function-timeouthandler) ([**OSAlarm**](struct_o_s_alarm.md) \* alarm, [**OSContext**](struct_o_s_context.md) \* context) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**UnlockedCallback**](#function-unlockedcallback) ([**s32**](types_8h.md#typedef-s32) chan, [**s32**](types_8h.md#typedef-s32) result) <br> |
|  [**s32**](types_8h.md#typedef-s32) | [**\_\_CARDStart**](#function-__cardstart) ([**s32**](types_8h.md#typedef-s32) chan, [**CARDCallback**](card_8h.md#typedef-cardcallback) txCallback, [**CARDCallback**](card_8h.md#typedef-cardcallback) exiCallback) <br> |

























## Macros

| Type | Name |
| ---: | :--- |
| define  | [**AD1**](_c_a_r_d_bios_8c.md#define-ad1) (x) `(([**u8**](types_8h.md#typedef-u8))(((x) &gt;&gt; 17) & 0x7f))`<br> |
| define  | [**AD1EX**](_c_a_r_d_bios_8c.md#define-ad1ex) (x) `(([**u8**](types_8h.md#typedef-u8))([**AD1**](_c_a_r_d_bios_8c.md#define-ad1) (x) \| 0x80));`<br> |
| define  | [**AD2**](_c_a_r_d_bios_8c.md#define-ad2) (x) `(([**u8**](types_8h.md#typedef-u8))(((x) &gt;&gt; 9) & 0xff))`<br> |
| define  | [**AD3**](_c_a_r_d_bios_8c.md#define-ad3) (x) `(([**u8**](types_8h.md#typedef-u8))(((x) &gt;&gt; 7) & 0x03))`<br> |
| define  | [**BA**](_c_a_r_d_bios_8c.md#define-ba) (x) `(([**u8**](types_8h.md#typedef-u8))((x) & 0x7f))`<br> |

## Public Attributes Documentation




### variable \_\_CARDBlock 

```C++
CARDControl __CARDBlock[2];
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
## Public Static Attributes Documentation




### variable ResetFunctionInfo 

```C++
OSResetFunctionInfo ResetFunctionInfo;
```




<hr>
## Public Functions Documentation




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



### function CARDInit 

```C++
void CARDInit (
    void
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
    s32 chan,
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



### function \_\_CARDGetControlBlock 

```C++
s32 __CARDGetControlBlock (
    s32 chan,
    CARDControl ** pcard
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



### function \_\_CARDSetDiskID 

```C++
void __CARDSetDiskID (
    DVDDiskID * id
) 
```




<hr>



### function \_\_CARDSleep 

```C++
s32 __CARDSleep (
    s32 chan
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



### function \_\_CARDUnlockedHandler 

```C++
void __CARDUnlockedHandler (
    s32 chan,
    OSContext * context
) 
```




<hr>



### function \_\_CARDWakeup 

```C++
s32 __CARDWakeup (
    s32 chan
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
## Public Static Functions Documentation




### function OnReset 

```C++
static BOOL OnReset (
    BOOL f
) 
```




<hr>



### function Retry 

```C++
static s32 Retry (
    s32 chan
) 
```




<hr>



### function SetupTimeoutAlarm 

```C++
static void SetupTimeoutAlarm (
    CARDControl * card
) 
```




<hr>



### function TimeoutHandler 

```C++
static void TimeoutHandler (
    OSAlarm * alarm,
    OSContext * context
) 
```




<hr>



### function UnlockedCallback 

```C++
static void UnlockedCallback (
    s32 chan,
    s32 result
) 
```




<hr>



### function \_\_CARDStart 

```C++
static s32 __CARDStart (
    s32 chan,
    CARDCallback txCallback,
    CARDCallback exiCallback
) 
```




<hr>
## Macro Definition Documentation





### define AD1 

```C++
#define AD1 (
    x
) `(( u8 )(((x) >> 17) & 0x7f))`
```




<hr>



### define AD1EX 

```C++
#define AD1EX (
    x
) `(( u8 )( AD1 (x) | 0x80));`
```




<hr>



### define AD2 

```C++
#define AD2 (
    x
) `(( u8 )(((x) >> 9) & 0xff))`
```




<hr>



### define AD3 

```C++
#define AD3 (
    x
) `(( u8 )(((x) >> 7) & 0x03))`
```




<hr>



### define BA 

```C++
#define BA (
    x
) `(( u8 )((x) & 0x7f))`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/card/CARDBios.c`

