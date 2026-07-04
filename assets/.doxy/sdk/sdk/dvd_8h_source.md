

# File dvd.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**dvd.h**](dvd_8h.md)

[Go to the documentation of this file](dvd_8h.md)


```C++
#ifndef _DOLPHIN_DVD_H_
#define _DOLPHIN_DVD_H_

#include <types.h>

typedef struct DVDDiskID
{
    u8 gameName[4];
    u8 company[2];
    u8 diskNumber;
    u8 gameVersion;
    u8 streaming;
    u8 streamingBufSize;
    u8 padding[22];
} DVDDiskID;

typedef struct DVDCommandBlock DVDCommandBlock;
typedef void                   (*DVDCBCallback) (s32 result, DVDCommandBlock* block);

struct DVDCommandBlock
{
    DVDCommandBlock* next;             
    DVDCommandBlock* prev;             
    u32              command;          
    s32              state;            
    u32              offset;           
    u32              length;           
    void*            addr;             
    u32              currTransferSize; 
    u32              transferredSize;  
    DVDDiskID*       id;               
    DVDCBCallback    callback;         
    void*            userData;         
};

typedef struct DVDFileInfo DVDFileInfo;

typedef void (*DVDCallback) (s32 result, DVDFileInfo* fileInfo);

struct DVDFileInfo
{
    DVDCommandBlock cb;                
    u32             startAddr;         
    u32             length;            
    DVDCallback     callback;          
};

typedef struct
{
    u32 entryNum;
    u32 location;
    u32 next;
} DVDDir;

typedef struct
{
    u32  entryNum;
    BOOL isDir;
    u8*  name;
} DVDDirEntry;

typedef struct DVDBB2
{
    u32   bootFilePosition;            
    u32   FSTPosition;                 
    u32   FSTLength;                   
    u32   FSTMaxLength;                
    void* FSTAddress;                  
    u32   userPosition;                
    u32   userLength;                  
    u32   padding0;                    
} DVDBB2;

typedef struct DVDDriveInfo
{
    u16 revisionLevel;                 
    u16 deviceCode;                    
    u32 releaseDate;                   
    u8  padding[24];                   
} DVDDriveInfo;

typedef void (*DVDLowCallback) (u32);

void DVDDumpWaitingQueue (void);
BOOL DVDLowRead (void* addr, u32 length, u32 offset, DVDLowCallback callback);
BOOL DVDLowSeek (u32 offset, DVDLowCallback callback);
BOOL DVDLowWaitCoverClose (DVDLowCallback callback);
BOOL DVDLowReadDiskID (DVDDiskID* diskID, DVDLowCallback callback);
BOOL DVDLowStopMotor (DVDLowCallback callback);
BOOL DVDLowRequestError (DVDLowCallback callback);
BOOL DVDLowInquiry (struct DVDDriveInfo* info, DVDLowCallback callback);
BOOL DVDLowAudioStream (u32 subcmd, u32 length, u32 offset, DVDLowCallback callback);
BOOL DVDLowRequestAudioStatus (u32 subcmd, DVDLowCallback callback);
BOOL DVDLowAudioBufferConfig (int enable, u32 size, DVDLowCallback callback);
void DVDLowReset ();
void (*DVDLowSetResetCoverCallback (DVDLowCallback callback)) (u32);
BOOL DVDLowBreak ();
void (*DVDLowClearCallback()) (u32);
u32  DVDLowGetCoverStatus ();

// dvd.c
void DVDInit ();
BOOL DVDReadAbsAsyncPrio (DVDCommandBlock* block,
                          void*            addr,
                          s32              length,
                          s32              offset,
                          DVDCBCallback    callback,
                          s32              prio);
BOOL DVDSeekAbsAsyncPrio (DVDCommandBlock* block, s32 offset, DVDCBCallback callback, s32 prio);
BOOL DVDReadAbsAsyncForBS (DVDCommandBlock* block,
                           void*            addr,
                           s32              length,
                           s32              offset,
                           DVDCBCallback    callback);
BOOL DVDReadDiskID (DVDCommandBlock* block, DVDDiskID* diskID, DVDCBCallback callback);
BOOL DVDPrepareStreamAbsAsync (DVDCommandBlock* block,
                               u32              length,
                               u32              offset,
                               DVDCBCallback    callback);
BOOL DVDCancelStreamAsync (DVDCommandBlock* block, DVDCBCallback callback);
s32  DVDCancelStream (DVDCommandBlock* block);
BOOL DVDStopStreamAtEndAsync (DVDCommandBlock* block, DVDCBCallback callback);
s32  DVDStopStreamAtEnd (DVDCommandBlock* block);
BOOL DVDGetStreamErrorStatusAsync (DVDCommandBlock* block, DVDCBCallback callback);
s32  DVDGetStreamErrorStatus (DVDCommandBlock* block);
BOOL DVDGetStreamPlayAddrAsync (DVDCommandBlock* block, DVDCBCallback callback);
s32  DVDGetStreamPlayAddr (DVDCommandBlock* block);
BOOL DVDGetStreamStartAddrAsync (DVDCommandBlock* block, DVDCBCallback callback);
s32  DVDGetStreamStartAddr (DVDCommandBlock* block);
BOOL DVDGetStreamLengthAsync (DVDCommandBlock* block, DVDCBCallback callback);
s32  DVDGetStreamLength (DVDCommandBlock* block);
BOOL DVDChangeDiskAsyncForBS (DVDCommandBlock* block, DVDCBCallback callback);
BOOL DVDChangeDiskAsync (DVDCommandBlock* block, DVDDiskID* id, DVDCBCallback callback);
s32  DVDChangeDisk (DVDCommandBlock* block, DVDDiskID* id);
int DVDInquiryAsync (DVDCommandBlock* block, struct DVDDriveInfo* info, DVDCBCallback callback);
s32 DVDInquiry (DVDCommandBlock* block, struct DVDDriveInfo* info);
void       DVDReset ();
BOOL       DVDResetRequired ();
s32        DVDGetCommandBlockStatus (DVDCommandBlock* block);
s32        DVDGetDriveStatus ();
BOOL       DVDSetAutoInvalidation (int autoInval);
void       DVDPause ();
void       DVDResume ();
BOOL       DVDCancelAsync (DVDCommandBlock* block, DVDCBCallback callback);
s32        DVDCancel (volatile DVDCommandBlock* block);
BOOL       DVDCancelAllAsync (DVDCBCallback callback);
s32        DVDCancelAll ();
DVDDiskID* DVDGetCurrentDiskID ();

BOOL DVDCheckDisk ();
void __DVDPrepareResetAsync (DVDCBCallback cb);

// dvdfs.c
s32   DVDConvertPathToEntrynum (u8* pathPtr);
BOOL  DVDFastOpen (s32 entrynum, DVDFileInfo* fileInfo);
BOOL  DVDOpen (u8* fileName, DVDFileInfo* fileInfo);
BOOL  DVDClose (DVDFileInfo* fileInfo);
BOOL  DVDGetCurrentDir (u8* path, u32 maxlen);
BOOL  DVDChangeDir (u8* dirName);
BOOL  DVDReadAsyncPrio (DVDFileInfo* fileInfo,
                        void*        addr,
                        s32          length,
                        s32          offset,
                        DVDCallback  callback,
                        s32          prio);
s32   DVDReadPrio (DVDFileInfo* fileInfo, void* addr, s32 length, s32 offset, s32 prio);
BOOL  DVDSeekAsyncPrio (DVDFileInfo* fileInfo,
                        s32          offset,
                        void         (*callback) (s32, DVDFileInfo*),
                        s32          prio);
s32   DVDSeekPrio (DVDFileInfo* fileInfo, s32 offset, s32 prio);
s32   DVDGetFileInfoStatus (DVDFileInfo* fileInfo);
BOOL  DVDOpenDir (u8* dirName, DVDDir* dir);
BOOL  DVDReadDir (DVDDir* dir, DVDDirEntry* dirent);
BOOL  DVDCloseDir (DVDDir* dir);
void* DVDGetFSTLocation ();
BOOL  DVDPrepareStreamAsync (DVDFileInfo* fileInfo,
                             u32          length,
                             u32          offset,
                             DVDCallback  callback);
s32   DVDPrepareStream (DVDFileInfo* fileInfo, u32 length, u32 offset);
s32   DVDGetTransferredSize (DVDFileInfo* fileinfo);

#define DVDReadAsync(fileInfo, addr, length, offset, callback)                                 \
    DVDReadAsyncPrio ((fileInfo), (addr), (length), (offset), (callback), 2)

#define DVD_MIN_TRANSFER_SIZE           32

#define DVD_STATE_FATAL_ERROR           -1
#define DVD_STATE_END                   0
#define DVD_STATE_BUSY                  1
#define DVD_STATE_WAITING               2
#define DVD_STATE_COVER_CLOSED          3
#define DVD_STATE_NO_DISK               4
#define DVD_STATE_COVER_OPEN            5
#define DVD_STATE_WRONG_DISK            6
#define DVD_STATE_MOTOR_STOPPED         7
#define DVD_STATE_PAUSING               8
#define DVD_STATE_IGNORED               9
#define DVD_STATE_CANCELED              10
#define DVD_STATE_RETRY                 11

#define DVD_RESULT_FATAL_ERROR          -1
#define DVD_RESULT_COVER_CLOSED         -2
#define DVD_RESULT_COVER_OPEN           -3
#define DVD_RESULT_NO_DISK              -4
#define DVD_RESULT_IGNORED              -5
#define DVD_RESULT_CANCELED             -6

#define DVD_INTTYPE_TC                  0x00000001
#define DVD_INTTYPE_DE                  0x00000002
#define DVD_INTTYPE_CVR                 0x00000004
#define DVD_INTTYPE_BRK                 0x00000008
#define DVD_INTTYPE_TIMEOUT             0x00000010
#define DVD_INTTYPE_SECURITY_ERROR      0x00000020

// DVD Commands

#define DVD_COMMAND_NONE                0
#define DVD_COMMAND_READ                1
#define DVD_COMMAND_SEEK                2
#define DVD_COMMAND_CHANGE_DISK         3
#define DVD_COMMAND_BSREAD              4
#define DVD_COMMAND_READID              5
#define DVD_COMMAND_INITSTREAM          6
#define DVD_COMMAND_CANCELSTREAM        7
#define DVD_COMMAND_STOP_STREAM_AT_END  8
#define DVD_COMMAND_REQUEST_AUDIO_ERROR 9
#define DVD_COMMAND_REQUEST_PLAY_ADDR   10
#define DVD_COMMAND_REQUEST_START_ADDR  11
#define DVD_COMMAND_REQUEST_LENGTH      12
#define DVD_COMMAND_AUDIO_BUFFER_CONFIG 13
#define DVD_COMMAND_INQUIRY             14
#define DVD_COMMAND_BS_CHANGE_DISK      15

// unidentified externs
extern BOOL DVDReadAbsAsyncForBS (DVDCommandBlock* block,
                                  void*            addr,
                                  s32              length,
                                  s32              offset,
                                  DVDCBCallback    callback);
extern BOOL DVDReadDiskID (DVDCommandBlock* block, DVDDiskID* diskID, DVDCBCallback callback);
extern void DVDReset (void);

int DVDReadAbsAsyncPrio (DVDCommandBlock* block /* r29 */,
                         void*            addr /* r1+0xC */,
                         s32              length /* r1+0x10 */,
                         s32              offset /* r1+0x14 */,
                         DVDCBCallback    callback /* r1+0x18 */,
                         s32              prio /* r31 */);
int DVDSeekAbsAsyncPrio (DVDCommandBlock* block /* r31 */,
                         s32              offset /* r28 */,
                         DVDCBCallback    callback /* r1+0x10 */,
                         s32              prio);                                 
int DVDPrepareStreamAbsAsync (DVDCommandBlock* block /* r31 */,
                              u32              length /* r1+0xC */,
                              u32              offset /* r1+0x10 */,
                              void             (*callback) (s32,
                                                DVDCommandBlock*)); 

#endif
```


