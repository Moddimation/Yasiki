

# File mcc.h



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**mcc.h**](mcc_8h.md)

[Go to the source code of this file](mcc_8h_source.md)


















## Classes

| Type | Name |
| ---: | :--- |
| struct | [**FIO\_Date**](struct_f_i_o___date.md) <br> |
| struct | [**FIO\_Daytime**](struct_f_i_o___daytime.md) <br> |
| struct | [**FIO\_Finddata**](struct_f_i_o___finddata.md) <br> |
| struct | [**FIO\_Stat**](struct_f_i_o___stat.md) <br> |
| struct | [**FIO\_Timestamp**](struct_f_i_o___timestamp.md) <br> |
| struct | [**MCC\_ChannelInfo**](struct_m_c_c___channel_info.md) <br> |
| struct | [**MCC\_Hdr**](struct_m_c_c___hdr.md) <br> |
| struct | [**MCC\_HdrFio**](struct_m_c_c___hdr_fio.md) <br> |
| struct | [**MCC\_Info**](struct_m_c_c___info.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| enum  | [**FIO\_ASYNC\_STATE**](#enum-fio_async_state)  <br> |
| typedef [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**MCC\_CBEnumDevices**](#typedef-mcc_cbenumdevices)  <br> |
| typedef [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**MCC\_CBEvent**](#typedef-mcc_cbevent)  <br> |
| typedef [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)(\* | [**MCC\_CBSysEvent**](#typedef-mcc_cbsysevent)  <br> |
| enum  | [**MCC\_CHANNEL**](#enum-mcc_channel)  <br> |
| enum  | [**MCC\_CONNECT**](#enum-mcc_connect)  <br> |
| enum  | [**MCC\_EXI**](#enum-mcc_exi)  <br> |
| enum  | [**MCC\_MODE**](#enum-mcc_mode)  <br> |
| enum  | [**MCC\_SYNC\_STATE**](#enum-mcc_sync_state)  <br> |
| enum  | [**MCC\_SYSEVENT**](#enum-mcc_sysevent)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**FIOCheckAsyncDone**](#function-fiocheckasyncdone) ([**u32**](types_8h.md#typedef-u32) \* result) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**FIOExit**](#function-fioexit) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**FIOFclose**](#function-fiofclose) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) handle) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**FIOFerror**](#function-fioferror) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) handle) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**FIOFflush**](#function-fiofflush) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) handle) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**FIOFindFirst**](#function-fiofindfirst) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* filename, [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**FIO\_Finddata**](struct_f_i_o___finddata.md) \* finddata) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**FIOFindNext**](#function-fiofindnext) ([**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**FIO\_Finddata**](struct_f_i_o___finddata.md) \* finddata) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**FIOFopen**](#function-fiofopen) ([**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* filename, [**u32**](types_8h.md#typedef-u32) mode) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**FIOFprintf**](#function-fiofprintf) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) handle, [**const**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* format, ...) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**FIOFread**](#function-fiofread) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) handle, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* data, [**u32**](types_8h.md#typedef-u32) size) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**FIOFreadAsync**](#function-fiofreadasync) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) handle, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* data, [**u32**](types_8h.md#typedef-u32) size) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**FIOFseek**](#function-fiofseek) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) handle, [**s32**](types_8h.md#typedef-s32) offset, [**u32**](types_8h.md#typedef-u32) mode) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**FIOFstat**](#function-fiofstat) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) handle, [**struct**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**FIO\_Stat**](struct_f_i_o___stat.md) \* stat) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**FIOFwrite**](#function-fiofwrite) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) handle, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* data, [**u32**](types_8h.md#typedef-u32) size) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**FIOFwriteAsync**](#function-fiofwriteasync) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) handle, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* data, [**u32**](types_8h.md#typedef-u32) size) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**FIOGetAsyncBufferSize**](#function-fiogetasyncbuffersize) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**u8**](types_8h.md#typedef-u8) | [**FIOGetLastError**](#function-fiogetlasterror) () <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**FIOInit**](#function-fioinit) ([**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**MCC\_EXI**](mcc_8h.md#enum-mcc_exi) exiChannel, [**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**MCC\_CHANNEL**](mcc_8h.md#enum-mcc_channel) chID, [**u8**](types_8h.md#typedef-u8) blockSize) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**FIOQuery**](#function-fioquery) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
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




























## Public Types Documentation




### enum FIO\_ASYNC\_STATE 

```C++
enum FIO_ASYNC_STATE {
    FIO_ASYNC_STATE_IDOL = 0,
    FIO_ASYNC_STATE_BUSY = 1,
    FIO_ASYNC_STATE_DONE = 2
};
```




<hr>



### typedef MCC\_CBEnumDevices 

```C++
typedef int(* MCC_CBEnumDevices) (s32);
```




<hr>



### typedef MCC\_CBEvent 

```C++
typedef void(* MCC_CBEvent) (enum MCC_CHANNEL channel, u32, u32);
```




<hr>



### typedef MCC\_CBSysEvent 

```C++
typedef void(* MCC_CBSysEvent) (enum MCC_SYSEVENT sysEvent);
```




<hr>



### enum MCC\_CHANNEL 

```C++
enum MCC_CHANNEL {
    MCC_CHANNEL_SYSTEM = 0,
    MCC_CHANNEL_1 = 1,
    MCC_CHANNEL_2 = 2,
    MCC_CHANNEL_3 = 3,
    MCC_CHANNEL_4 = 4,
    MCC_CHANNEL_5 = 5,
    MCC_CHANNEL_6 = 6,
    MCC_CHANNEL_7 = 7,
    MCC_CHANNEL_8 = 8,
    MCC_CHANNEL_9 = 9,
    MCC_CHANNEL_10 = 10,
    MCC_CHANNEL_11 = 11,
    MCC_CHANNEL_12 = 12,
    MCC_CHANNEL_13 = 13,
    MCC_CHANNEL_14 = 14,
    MCC_CHANNEL_15 = 15
};
```




<hr>



### enum MCC\_CONNECT 

```C++
enum MCC_CONNECT {
    MCC_CONNECT_DISCONNECT = 0,
    MCC_CONNECT_HOST_OPEN = 1,
    MCC_CONNECT_TARGET_OPEN = 2,
    MCC_CONNECT_CONNECTED = 3
};
```




<hr>



### enum MCC\_EXI 

```C++
enum MCC_EXI {
    MCC_EXI_0 = 0,
    MCC_EXI_1 = 1,
    MCC_EXI_2 = 2
};
```




<hr>



### enum MCC\_MODE 

```C++
enum MCC_MODE {
    MCC_MODE_MIN = 0,
    MCC_MODE_MAX = 1,
    MCC_MODE_ALL = 2
};
```




<hr>



### enum MCC\_SYNC\_STATE 

```C++
enum MCC_SYNC_STATE {
    MCC_SYNC = 0,
    MCC_ASYNC = 1
};
```




<hr>



### enum MCC\_SYSEVENT 

```C++
enum MCC_SYSEVENT {
    MCC_SYSEVENT_UNKNOWN = 0,
    MCC_SYSEVENT_REBOOT = 1,
    MCC_SYSEVENT_INITIALIZED = 2,
    MCC_SYSEVENT_PING = 3,
    MCC_SYSEVENT_PING_RESULT = 4,
    MCC_SYSEVENT_FLUSH = 5
};
```




<hr>
## Public Functions Documentation




### function FIOCheckAsyncDone 

```C++
int FIOCheckAsyncDone (
    u32 * result
) 
```




<hr>



### function FIOExit 

```C++
void FIOExit (
    void
) 
```




<hr>



### function FIOFclose 

```C++
int FIOFclose (
    int handle
) 
```




<hr>



### function FIOFerror 

```C++
int FIOFerror (
    int handle
) 
```




<hr>



### function FIOFflush 

```C++
int FIOFflush (
    int handle
) 
```




<hr>



### function FIOFindFirst 

```C++
int FIOFindFirst (
    const  char * filename,
    struct  FIO_Finddata * finddata
) 
```




<hr>



### function FIOFindNext 

```C++
int FIOFindNext (
    struct  FIO_Finddata * finddata
) 
```




<hr>



### function FIOFopen 

```C++
int FIOFopen (
    const  char * filename,
    u32 mode
) 
```




<hr>



### function FIOFprintf 

```C++
int FIOFprintf (
    int handle,
    const  char * format,
    ...
) 
```




<hr>



### function FIOFread 

```C++
u32 FIOFread (
    int handle,
    void * data,
    u32 size
) 
```




<hr>



### function FIOFreadAsync 

```C++
int FIOFreadAsync (
    int handle,
    void * data,
    u32 size
) 
```




<hr>



### function FIOFseek 

```C++
u32 FIOFseek (
    int handle,
    s32 offset,
    u32 mode
) 
```




<hr>



### function FIOFstat 

```C++
int FIOFstat (
    int handle,
    struct  FIO_Stat * stat
) 
```




<hr>



### function FIOFwrite 

```C++
u32 FIOFwrite (
    int handle,
    void * data,
    u32 size
) 
```




<hr>



### function FIOFwriteAsync 

```C++
int FIOFwriteAsync (
    int handle,
    void * data,
    u32 size
) 
```




<hr>



### function FIOGetAsyncBufferSize 

```C++
u32 FIOGetAsyncBufferSize (
    void
) 
```




<hr>



### function FIOGetLastError 

```C++
u8 FIOGetLastError () 
```




<hr>



### function FIOInit 

```C++
int FIOInit (
    enum  MCC_EXI exiChannel,
    enum  MCC_CHANNEL chID,
    u8 blockSize
) 
```




<hr>



### function FIOQuery 

```C++
int FIOQuery (
    void
) 
```




<hr>



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

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/include/dolphin/mcc.h`

