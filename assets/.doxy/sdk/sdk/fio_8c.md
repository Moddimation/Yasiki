

# File fio.c



[**FileList**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**mcc**](dir_09af956a0e77733960814cc502aa891a.md) **>** [**fio.c**](fio_8c.md)

[Go to the source code of this file](fio_8c_source.md)



* `#include <dolphin/mcc.h>`
* `#include <dolphin.h>`























## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**bAsyncBuffer**](#variable-basyncbuffer)  <br> |
|  [**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**FIO\_ASYNC\_STATE**](mcc_8h.md#enum-fio_async_state) | [**bAsyncBusy**](#variable-basyncbusy)  <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**bAsyncIsRead**](#variable-basyncisread)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**gAsyncDataSize**](#variable-gasyncdatasize)  <br> |
|  [**u8**](types_8h.md#typedef-u8) | [**gBuf**](#variable-gbuf)  <br> |
|  [**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**MCC\_CHANNEL**](mcc_8h.md#enum-mcc_channel) | [**gChID**](#variable-gchid)  <br> |
|  [**u8**](types_8h.md#typedef-u8) | [**gLastErr**](#variable-glasterr)  <br> |
|  [**u8**](types_8h.md#typedef-u8) | [**gPrintBuf**](#variable-gprintbuf)  <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**gProcBusy**](#variable-gprocbusy)  <br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**gProcDone**](#variable-gprocdone)   = `1`<br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**gQuery**](#variable-gquery)  <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**gRequestSequenceNumber**](#variable-grequestsequencenumber)  <br> |
|  [**u8**](types_8h.md#typedef-u8) | [**gSizeOfBlocks**](#variable-gsizeofblocks)   = `1`<br> |
|  [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**u32**](types_8h.md#typedef-u32) | [**gStreamReady**](#variable-gstreamready)  <br> |
|  [**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**MCC\_CHANNEL**](mcc_8h.md#enum-mcc_channel) | [**gmChID**](#variable-gmchid)  <br> |
|  [**u8**](types_8h.md#typedef-u8) | [**gmSizeOfBlocks**](#variable-gmsizeofblocks)   = `1`<br> |














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


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**u16**](types_8h.md#typedef-u16) | [**EndianConvert16**](#function-endianconvert16) ([**u16**](types_8h.md#typedef-u16) n) <br> |
|  [**u32**](types_8h.md#typedef-u32) | [**EndianConvert32**](#function-endianconvert32) ([**u32**](types_8h.md#typedef-u32) n) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**MPDWaiting**](#function-mpdwaiting) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) timeout, [**volatile**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* flag, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) value) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**ShowChannelInfo**](#function-showchannelinfo) ([**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**MCC\_CHANNEL**](mcc_8h.md#enum-mcc_channel) chID) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**fioErrorReport**](#function-fioerrorreport) ([**char**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* msg) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**fioIsInitialized**](#function-fioisinitialized) () <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**fioMccChannelEvent**](#function-fiomccchannelevent) ([**enum**](_c_a_r_d_private_8h.md#define-card_max_mount_step) [**MCC\_CHANNEL**](mcc_8h.md#enum-mcc_channel) chID, [**u32**](types_8h.md#typedef-u32) event, [**u32**](types_8h.md#typedef-u32) value) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**fioPacketMakeHeader**](#function-fiopacketmakeheader) ([**u32**](types_8h.md#typedef-u32) fioCode, [**u32**](types_8h.md#typedef-u32) dataSize, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) bEndianConvert) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**fioPacketRead**](#function-fiopacketread) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) fd, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* buffer, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) size, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) async) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**fioPacketReceiveDone**](#function-fiopacketreceivedone) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step)) <br> |
|  [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* | [**fioPacketReceiveResult**](#function-fiopacketreceiveresult) ([**u32**](types_8h.md#typedef-u32) fioCode, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) bDone) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**fioPacketResultRead**](#function-fiopacketresultread) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* buffer, [**u32**](types_8h.md#typedef-u32) dataSize) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**fioPacketResultWrite**](#function-fiopacketresultwrite) ([**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* buffer, [**u32**](types_8h.md#typedef-u32) dataSize) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**fioPacketSendPacket**](#function-fiopacketsendpacket) ([**u8**](types_8h.md#typedef-u8) sizeOfBlocks, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* pTopOfSecondBlockData) <br> |
|  [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) | [**fioPacketWrite**](#function-fiopacketwrite) ([**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) fd, [**void**](_c_a_r_d_private_8h.md#define-card_max_mount_step) \* buffer, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) size, [**int**](_c_a_r_d_private_8h.md#define-card_max_mount_step) async) <br> |


























## Public Static Attributes Documentation




### variable bAsyncBuffer 

```C++
void* bAsyncBuffer;
```




<hr>



### variable bAsyncBusy 

```C++
enum FIO_ASYNC_STATE bAsyncBusy;
```




<hr>



### variable bAsyncIsRead 

```C++
int bAsyncIsRead;
```




<hr>



### variable gAsyncDataSize 

```C++
u32 gAsyncDataSize;
```




<hr>



### variable gBuf 

```C++
u8 gBuf[8192];
```




<hr>



### variable gChID 

```C++
enum MCC_CHANNEL gChID;
```




<hr>



### variable gLastErr 

```C++
u8 gLastErr;
```




<hr>



### variable gPrintBuf 

```C++
u8 gPrintBuf[1024];
```




<hr>



### variable gProcBusy 

```C++
volatile int gProcBusy;
```




<hr>



### variable gProcDone 

```C++
volatile int gProcDone;
```




<hr>



### variable gQuery 

```C++
int gQuery;
```




<hr>



### variable gRequestSequenceNumber 

```C++
u32 gRequestSequenceNumber;
```




<hr>



### variable gSizeOfBlocks 

```C++
u8 gSizeOfBlocks;
```




<hr>



### variable gStreamReady 

```C++
volatile u32 gStreamReady;
```




<hr>



### variable gmChID 

```C++
enum MCC_CHANNEL gmChID;
```




<hr>



### variable gmSizeOfBlocks 

```C++
u8 gmSizeOfBlocks;
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
## Public Static Functions Documentation




### function EndianConvert16 

```C++
static u16 EndianConvert16 (
    u16 n
) 
```




<hr>



### function EndianConvert32 

```C++
static u32 EndianConvert32 (
    u32 n
) 
```




<hr>



### function MPDWaiting 

```C++
static int MPDWaiting (
    int timeout,
    volatile  int * flag,
    int value
) 
```




<hr>



### function ShowChannelInfo 

```C++
static void ShowChannelInfo (
    enum  MCC_CHANNEL chID
) 
```




<hr>



### function fioErrorReport 

```C++
static void fioErrorReport (
    char * msg
) 
```




<hr>



### function fioIsInitialized 

```C++
static int fioIsInitialized () 
```




<hr>



### function fioMccChannelEvent 

```C++
static void fioMccChannelEvent (
    enum  MCC_CHANNEL chID,
    u32 event,
    u32 value
) 
```




<hr>



### function fioPacketMakeHeader 

```C++
static void * fioPacketMakeHeader (
    u32 fioCode,
    u32 dataSize,
    int bEndianConvert
) 
```




<hr>



### function fioPacketRead 

```C++
static int fioPacketRead (
    int fd,
    void * buffer,
    int size,
    int async
) 
```




<hr>



### function fioPacketReceiveDone 

```C++
static void fioPacketReceiveDone (
    void
) 
```




<hr>



### function fioPacketReceiveResult 

```C++
static void * fioPacketReceiveResult (
    u32 fioCode,
    int bDone
) 
```




<hr>



### function fioPacketResultRead 

```C++
static int fioPacketResultRead (
    void * buffer,
    u32 dataSize
) 
```




<hr>



### function fioPacketResultWrite 

```C++
static int fioPacketResultWrite (
    void * buffer,
    u32 dataSize
) 
```




<hr>



### function fioPacketSendPacket 

```C++
static int fioPacketSendPacket (
    u8 sizeOfBlocks,
    void * pTopOfSecondBlockData
) 
```




<hr>



### function fioPacketWrite 

```C++
static int fioPacketWrite (
    int fd,
    void * buffer,
    int size,
    int async
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `decomp/DolphinSDK/src/dolphin/mcc/fio.c`

