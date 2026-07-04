

# File mcc.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**mcc**](dir_09af956a0e77733960814cc502aa891a.md) **>** [**mcc.c**](mcc_8c.md)

[Go to the source code of this file](mcc_8c_source.md)



* `#include <dolphin/mcc.h>`
* `#include <dolphin.h>`























## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u16**](types_8h.md#typedef-u16) | [**gAsyncResourceStatus**](#variable-gasyncresourcestatus)  <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\*[**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**gCallbackSysEvent**](#variable-gcallbacksysevent)  <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**gIsChannelinfoDirty**](#variable-gischannelinfodirty)   = `1`<br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u16**](types_8h.md#typedef-u16) | [**gLastError**](#variable-glasterror)  <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**gMccInitialized**](#variable-gmccinitialized)  <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**gMccSession**](#variable-gmccsession)  <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**gOtherSideInitDone**](#variable-gothersideinitdone)  <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**gPingFlag**](#variable-gpingflag)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MCCCheckAsyncDone**](#function-mcccheckasyncdone) () <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MCCClose**](#function-mccclose) ([**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**MCC\_CHANNEL**](mcc_8h.md#enum-mcc_channel) chID) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MCCEnumDevices**](#function-mccenumdevices) ([**MCC\_CBEnumDevices**](mcc_8h.md#typedef-mcc_cbenumdevices) callbackEnumDevices) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MCCExit**](#function-mccexit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MCCGetChannelInfo**](#function-mccgetchannelinfo) ([**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**MCC\_CHANNEL**](mcc_8h.md#enum-mcc_channel) chID, [**MCC\_Info**](struct_m_c_c___info.md) \* info) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MCCGetConnectionStatus**](#function-mccgetconnectionstatus) ([**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**MCC\_CHANNEL**](mcc_8h.md#enum-mcc_channel) chID, [**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**MCC\_CONNECT**](mcc_8h.md#enum-mcc_connect) \* connect) <br> |
|  [**u8**](types_8h.md#typedef-u8) | [**MCCGetFreeBlocks**](#function-mccgetfreeblocks) ([**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**MCC\_MODE**](mcc_8h.md#enum-mcc_mode) mode) <br> |
|  [**u8**](types_8h.md#typedef-u8) | [**MCCGetLastError**](#function-mccgetlasterror) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MCCInit**](#function-mccinit) ([**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**MCC\_EXI**](mcc_8h.md#enum-mcc_exi) exiChannel, [**u8**](types_8h.md#typedef-u8) timeout, [**MCC\_CBSysEvent**](mcc_8h.md#typedef-mcc_cbsysevent) callbackSysEvent) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MCCLock**](#function-mcclock) ([**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**MCC\_CHANNEL**](mcc_8h.md#enum-mcc_channel) chID) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MCCNotify**](#function-mccnotify) ([**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**MCC\_CHANNEL**](mcc_8h.md#enum-mcc_channel) chID, [**u32**](types_8h.md#typedef-u32) notify) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MCCOpen**](#function-mccopen) ([**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**MCC\_CHANNEL**](mcc_8h.md#enum-mcc_channel) chID, [**u8**](types_8h.md#typedef-u8) blockSize, [**MCC\_CBEvent**](mcc_8h.md#typedef-mcc_cbevent) callbackEvent) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MCCPing**](#function-mccping) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MCCRead**](#function-mccread) ([**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**MCC\_CHANNEL**](mcc_8h.md#enum-mcc_channel) chID, [**u32**](types_8h.md#typedef-u32) offset, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* data, [**s32**](types_8h.md#typedef-s32) size, [**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**MCC\_SYNC\_STATE**](mcc_8h.md#enum-mcc_sync_state) async) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**MCCSetChannelEventMask**](#function-mccsetchanneleventmask) ([**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**MCC\_CHANNEL**](mcc_8h.md#enum-mcc_channel) chID, [**u32**](types_8h.md#typedef-u32) event) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MCCStreamClose**](#function-mccstreamclose) ([**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**MCC\_CHANNEL**](mcc_8h.md#enum-mcc_channel) chID) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MCCStreamOpen**](#function-mccstreamopen) ([**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**MCC\_CHANNEL**](mcc_8h.md#enum-mcc_channel) chID, [**u8**](types_8h.md#typedef-u8) blockSize) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**MCCStreamRead**](#function-mccstreamread) ([**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**MCC\_CHANNEL**](mcc_8h.md#enum-mcc_channel) chID, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* data) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MCCStreamWrite**](#function-mccstreamwrite) ([**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**MCC\_CHANNEL**](mcc_8h.md#enum-mcc_channel) chID, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* data, [**u32**](types_8h.md#typedef-u32) dataBlockSize) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MCCUnlock**](#function-mccunlock) ([**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**MCC\_CHANNEL**](mcc_8h.md#enum-mcc_channel) chID) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MCCWrite**](#function-mccwrite) ([**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**MCC\_CHANNEL**](mcc_8h.md#enum-mcc_channel) chID, [**u32**](types_8h.md#typedef-u32) offset, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* data, [**s32**](types_8h.md#typedef-s32) size, [**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**MCC\_SYNC\_STATE**](mcc_8h.md#enum-mcc_sync_state) async) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**MCC\_ChannelInfo**](struct_m_c_c___channel_info.md) [**gChannelInfo**](_c_a_r_d_private_8h.md#define-card_max_mount_step)[16] | [**ALIGN**](#function-align) (32) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AsyncResourceClearState**](#function-asyncresourceclearstate) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u8**](types_8h.md#typedef-u8) | [**AsyncResourceGetChannel**](#function-asyncresourcegetchannel) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u16**](types_8h.md#typedef-u16) | [**AsyncResourceGetMode**](#function-asyncresourcegetmode) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u16**](types_8h.md#typedef-u16) | [**AsyncResourceGetStat**](#function-asyncresourcegetstat) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AsyncResourceIsBusy**](#function-asyncresourceisbusy) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AsyncResourceSetState**](#function-asyncresourcesetstate) ([**u16**](types_8h.md#typedef-u16) state) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AsyncResourceStateBusy**](#function-asyncresourcestatebusy) ([**u8**](types_8h.md#typedef-u8) channel, [**u16**](types_8h.md#typedef-u16) mode) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**AsyncResourceStateDone**](#function-asyncresourcestatedone) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ClearChannelInfo**](#function-clearchannelinfo) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) i) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**FlushChannelInfo**](#function-flushchannelinfo) ([**MCC\_ChannelInfo**](struct_m_c_c___channel_info.md) \* info) <br> |
|  [**u8**](types_8h.md#typedef-u8) | [**GetUsbAdapterMode**](#function-getusbadaptermode) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**InitializeCodeCheck**](#function-initializecodecheck) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**InitializeCodeClear**](#function-initializecodeclear) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**InitializeCodeSet**](#function-initializecodeset) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**IsChannelOpened**](#function-ischannelopened) ([**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**MCC\_CHANNEL**](mcc_8h.md#enum-mcc_channel) chID) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**LoadChannelInfo**](#function-loadchannelinfo) ([**MCC\_ChannelInfo**](struct_m_c_c___channel_info.md) \* info) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MCCExiCallback**](#function-mccexicallback) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MCCRxCallback**](#function-mccrxcallback) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MCCTxCallback**](#function-mcctxcallback) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MailboxCheck**](#function-mailboxcheck) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MakeMemoryMap**](#function-makememorymap) ([**u8**](types_8h.md#typedef-u8) \* map) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**NotifyChannelEvent**](#function-notifychannelevent) ([**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**MCC\_CHANNEL**](mcc_8h.md#enum-mcc_channel) chID, [**u32**](types_8h.md#typedef-u32) notify) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**NotifyCompulsorily**](#function-notifycompulsorily) ([**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**MCC\_CHANNEL**](mcc_8h.md#enum-mcc_channel) chID, [**u32**](types_8h.md#typedef-u32) notify, [**u32**](types_8h.md#typedef-u32) timeout) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**NotifyInit**](#function-notifyinit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**NotifyInitDone**](#function-notifyinitdone) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u8**](types_8h.md#typedef-u8) | [**SearchFreeBlocks**](#function-searchfreeblocks) ([**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**MCC\_MODE**](mcc_8h.md#enum-mcc_mode) mode, [**u8**](types_8h.md#typedef-u8) \* index) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SetChannelInfoDirty**](#function-setchannelinfodirty) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) dirty) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**SetUsbAdapterMode**](#function-setusbadaptermode) ([**u8**](types_8h.md#typedef-u8) mode) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**WaitAMinute**](#function-waitaminute) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) timeout, [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* flag, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) value) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**callbackEventStream**](#function-callbackeventstream) ([**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**MCC\_CHANNEL**](mcc_8h.md#enum-mcc_channel) chID, [**u32**](types_8h.md#typedef-u32) event, [**u32**](types_8h.md#typedef-u32) value) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**mccDebugPrint**](#function-mccdebugprint) ([**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* str) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**mccInitializeCheck**](#function-mccinitializecheck) ([**u8**](types_8h.md#typedef-u8) timeout) <br> |


























## Public Static Attributes Documentation




### variable gAsyncResourceStatus 

```C++
volatile u16 gAsyncResourceStatus;
```




<hr>



### variable gCallbackSysEvent 

```C++
void(*volatile gCallbackSysEvent) (enum MCC_SYSEVENT);
```




<hr>



### variable gIsChannelinfoDirty 

```C++
volatile int gIsChannelinfoDirty;
```




<hr>



### variable gLastError 

```C++
volatile u16 gLastError;
```




<hr>



### variable gMccInitialized 

```C++
int gMccInitialized;
```




<hr>



### variable gMccSession 

```C++
int gMccSession;
```




<hr>



### variable gOtherSideInitDone 

```C++
int gOtherSideInitDone;
```




<hr>



### variable gPingFlag 

```C++
volatile int gPingFlag;
```




<hr>
## Public Functions Documentation




### function MCCCheckAsyncDone 

```C++
int MCCCheckAsyncDone () 
```




<hr>



### function MCCClose 

```C++
int MCCClose (
    enum  MCC_CHANNEL chID
) 
```




<hr>



### function MCCEnumDevices 

```C++
int MCCEnumDevices (
    MCC_CBEnumDevices callbackEnumDevices
) 
```




<hr>



### function MCCExit 

```C++
void MCCExit (
    void
) 
```




<hr>



### function MCCGetChannelInfo 

```C++
int MCCGetChannelInfo (
    enum  MCC_CHANNEL chID,
    MCC_Info * info
) 
```




<hr>



### function MCCGetConnectionStatus 

```C++
int MCCGetConnectionStatus (
    enum  MCC_CHANNEL chID,
    enum  MCC_CONNECT * connect
) 
```




<hr>



### function MCCGetFreeBlocks 

```C++
u8 MCCGetFreeBlocks (
    enum  MCC_MODE mode
) 
```




<hr>



### function MCCGetLastError 

```C++
u8 MCCGetLastError (
    void
) 
```




<hr>



### function MCCInit 

```C++
int MCCInit (
    enum  MCC_EXI exiChannel,
    u8 timeout,
    MCC_CBSysEvent callbackSysEvent
) 
```




<hr>



### function MCCLock 

```C++
int MCCLock (
    enum  MCC_CHANNEL chID
) 
```




<hr>



### function MCCNotify 

```C++
int MCCNotify (
    enum  MCC_CHANNEL chID,
    u32 notify
) 
```




<hr>



### function MCCOpen 

```C++
int MCCOpen (
    enum  MCC_CHANNEL chID,
    u8 blockSize,
    MCC_CBEvent callbackEvent
) 
```




<hr>



### function MCCPing 

```C++
int MCCPing (
    void
) 
```




<hr>



### function MCCRead 

```C++
int MCCRead (
    enum  MCC_CHANNEL chID,
    u32 offset,
    void * data,
    s32 size,
    enum  MCC_SYNC_STATE async
) 
```




<hr>



### function MCCSetChannelEventMask 

```C++
u32 MCCSetChannelEventMask (
    enum  MCC_CHANNEL chID,
    u32 event
) 
```




<hr>



### function MCCStreamClose 

```C++
int MCCStreamClose (
    enum  MCC_CHANNEL chID
) 
```




<hr>



### function MCCStreamOpen 

```C++
int MCCStreamOpen (
    enum  MCC_CHANNEL chID,
    u8 blockSize
) 
```




<hr>



### function MCCStreamRead 

```C++
u32 MCCStreamRead (
    enum  MCC_CHANNEL chID,
    void * data
) 
```




<hr>



### function MCCStreamWrite 

```C++
int MCCStreamWrite (
    enum  MCC_CHANNEL chID,
    void * data,
    u32 dataBlockSize
) 
```




<hr>



### function MCCUnlock 

```C++
int MCCUnlock (
    enum  MCC_CHANNEL chID
) 
```




<hr>



### function MCCWrite 

```C++
int MCCWrite (
    enum  MCC_CHANNEL chID,
    u32 offset,
    void * data,
    s32 size,
    enum  MCC_SYNC_STATE async
) 
```




<hr>
## Public Static Functions Documentation




### function ALIGN 

```C++
static MCC_ChannelInfo  gChannelInfo [16] ALIGN (
    32
) 
```




<hr>



### function AsyncResourceClearState 

```C++
static void AsyncResourceClearState (
    void
) 
```




<hr>



### function AsyncResourceGetChannel 

```C++
static u8 AsyncResourceGetChannel (
    void
) 
```




<hr>



### function AsyncResourceGetMode 

```C++
static u16 AsyncResourceGetMode (
    void
) 
```




<hr>



### function AsyncResourceGetStat 

```C++
static u16 AsyncResourceGetStat (
    void
) 
```




<hr>



### function AsyncResourceIsBusy 

```C++
static int AsyncResourceIsBusy (
    void
) 
```




<hr>



### function AsyncResourceSetState 

```C++
static void AsyncResourceSetState (
    u16 state
) 
```




<hr>



### function AsyncResourceStateBusy 

```C++
static void AsyncResourceStateBusy (
    u8 channel,
    u16 mode
) 
```




<hr>



### function AsyncResourceStateDone 

```C++
static void AsyncResourceStateDone (
    void
) 
```




<hr>



### function ClearChannelInfo 

```C++
static void ClearChannelInfo (
    int i
) 
```




<hr>



### function FlushChannelInfo 

```C++
static int FlushChannelInfo (
    MCC_ChannelInfo * info
) 
```




<hr>



### function GetUsbAdapterMode 

```C++
static u8 GetUsbAdapterMode (
    void
) 
```




<hr>



### function InitializeCodeCheck 

```C++
static int InitializeCodeCheck (
    void
) 
```




<hr>



### function InitializeCodeClear 

```C++
static int InitializeCodeClear (
    void
) 
```




<hr>



### function InitializeCodeSet 

```C++
static int InitializeCodeSet (
    void
) 
```




<hr>



### function IsChannelOpened 

```C++
static int IsChannelOpened (
    enum  MCC_CHANNEL chID
) 
```




<hr>



### function LoadChannelInfo 

```C++
static int LoadChannelInfo (
    MCC_ChannelInfo * info
) 
```




<hr>



### function MCCExiCallback 

```C++
static void MCCExiCallback (
    void
) 
```




<hr>



### function MCCRxCallback 

```C++
static void MCCRxCallback (
    void
) 
```




<hr>



### function MCCTxCallback 

```C++
static void MCCTxCallback (
    void
) 
```




<hr>



### function MailboxCheck 

```C++
static void MailboxCheck (
    void
) 
```




<hr>



### function MakeMemoryMap 

```C++
static void MakeMemoryMap (
    u8 * map
) 
```




<hr>



### function NotifyChannelEvent 

```C++
static int NotifyChannelEvent (
    enum  MCC_CHANNEL chID,
    u32 notify
) 
```




<hr>



### function NotifyCompulsorily 

```C++
static int NotifyCompulsorily (
    enum  MCC_CHANNEL chID,
    u32 notify,
    u32 timeout
) 
```




<hr>



### function NotifyInit 

```C++
static int NotifyInit (
    void
) 
```




<hr>



### function NotifyInitDone 

```C++
static int NotifyInitDone (
    void
) 
```




<hr>



### function SearchFreeBlocks 

```C++
static u8 SearchFreeBlocks (
    enum  MCC_MODE mode,
    u8 * index
) 
```




<hr>



### function SetChannelInfoDirty 

```C++
static void SetChannelInfoDirty (
    int dirty
) 
```




<hr>



### function SetUsbAdapterMode 

```C++
static int SetUsbAdapterMode (
    u8 mode
) 
```




<hr>



### function WaitAMinute 

```C++
static int WaitAMinute (
    int timeout,
    volatile  int * flag,
    int value
) 
```




<hr>



### function callbackEventStream 

```C++
static void callbackEventStream (
    enum  MCC_CHANNEL chID,
    u32 event,
    u32 value
) 
```




<hr>



### function mccDebugPrint 

```C++
static void mccDebugPrint (
    char * str
) 
```




<hr>



### function mccInitializeCheck 

```C++
static int mccInitializeCheck (
    u8 timeout
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/mcc/mcc.c`

