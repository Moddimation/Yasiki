

# File mcc.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**mcc.h**](mcc_8h.md)

[Go to the documentation of this file](mcc_8h.md)


```C++
#ifndef _DOLPHIN_MCC_H_
#define _DOLPHIN_MCC_H_

enum MCC_CHANNEL
{
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
    MCC_CHANNEL_15 = 15,
};

typedef struct
{
    u8 firstBlock;                       
    u8 blockLength;                      
    u8 connect;                          
    u8 isLocked;                         
} MCC_Info;

enum MCC_EXI
{
    MCC_EXI_0 = 0,
    MCC_EXI_1 = 1,
    MCC_EXI_2 = 2,
};

enum MCC_SYSEVENT
{
    MCC_SYSEVENT_UNKNOWN = 0,
    MCC_SYSEVENT_REBOOT = 1,
    MCC_SYSEVENT_INITIALIZED = 2,
    MCC_SYSEVENT_PING = 3,
    MCC_SYSEVENT_PING_RESULT = 4,
    MCC_SYSEVENT_FLUSH = 5,
};

typedef void (*MCC_CBEvent) (enum MCC_CHANNEL channel, u32, u32);
typedef void (*MCC_CBSysEvent) (enum MCC_SYSEVENT sysEvent);
typedef int  (*MCC_CBEnumDevices) (s32);

typedef struct
{
    u32 length;                          
    u16 rsvd;                            
    u16 protocol;                        
} MCC_Hdr;

typedef struct
{
    u32 code;                            
    u32 number;                          
} MCC_HdrFio;

typedef struct
{
    MCC_Info    info;                    
    MCC_CBEvent callbackEvent;           
    u32         eventMask;               
    int         isStreamDone;            
    int         isStreamConnection;      
} MCC_ChannelInfo;

enum MCC_MODE
{
    MCC_MODE_MIN = 0,
    MCC_MODE_MAX = 1,
    MCC_MODE_ALL = 2,
};

enum MCC_CONNECT
{
    MCC_CONNECT_DISCONNECT = 0,
    MCC_CONNECT_HOST_OPEN = 1,
    MCC_CONNECT_TARGET_OPEN = 2,
    MCC_CONNECT_CONNECTED = 3,
};

enum MCC_SYNC_STATE
{
    MCC_SYNC = 0,
    MCC_ASYNC = 1,
};

enum FIO_ASYNC_STATE
{
    FIO_ASYNC_STATE_IDOL = 0,
    FIO_ASYNC_STATE_BUSY = 1,
    FIO_ASYNC_STATE_DONE = 2,
};

struct FIO_Date
{
    u16 year;                            
    u8  month;                           
    u8  day;                             
};

struct FIO_Daytime
{
    u8 hour;                             
    u8 minute;                           
    u8 second;                           
    u8 reserved;                         
};

struct FIO_Timestamp
{
    struct FIO_Date    date;             
    struct FIO_Daytime time;             
};

struct FIO_Stat
{
    u32                  fileAttributes; 
    struct FIO_Timestamp creationTime;   
    struct FIO_Timestamp lastAccessTime; 
    struct FIO_Timestamp lastWriteTime;  
    u32                  fileSizeHigh;   
    u32                  fileSizeLow;    
};

struct FIO_Finddata
{
    struct FIO_Stat stat;                
    s8              filename[256];       
};

// fio.c
int  FIOInit (enum MCC_EXI exiChannel, enum MCC_CHANNEL chID, u8 blockSize);
void FIOExit (void);
int  FIOQuery (void);
u8   FIOGetLastError ();
int  FIOFopen (const char* filename, u32 mode);
int  FIOFclose (int handle);
u32  FIOFread (int handle, void* data, u32 size);
u32  FIOFwrite (int handle, void* data, u32 size);
u32  FIOFseek (int handle, s32 offset, u32 mode);
int  FIOFprintf (int handle, const char* format, ...);
int  FIOFflush (int handle);
int  FIOFstat (int handle, struct FIO_Stat* stat);
int  FIOFerror (int handle);
int  FIOFindFirst (const char* filename, struct FIO_Finddata* finddata);
int  FIOFindNext (struct FIO_Finddata* finddata);
u32  FIOGetAsyncBufferSize (void);
int  FIOFreadAsync (int handle, void* data, u32 size);
int  FIOFwriteAsync (int handle, void* data, u32 size);
int  FIOCheckAsyncDone (u32* result);

// mcc.c
int  MCCStreamOpen (enum MCC_CHANNEL chID, u8 blockSize);
int  MCCStreamClose (enum MCC_CHANNEL chID);
int  MCCStreamWrite (enum MCC_CHANNEL chID, void* data, u32 dataBlockSize);
u32  MCCStreamRead (enum MCC_CHANNEL chID, void* data);
int  MCCInit (enum MCC_EXI exiChannel, u8 timeout, MCC_CBSysEvent callbackSysEvent);
void MCCExit (void);
int  MCCPing (void);
int  MCCEnumDevices (MCC_CBEnumDevices callbackEnumDevices);
u8   MCCGetFreeBlocks (enum MCC_MODE mode);
u8   MCCGetLastError (void);
int  MCCGetChannelInfo (enum MCC_CHANNEL chID, MCC_Info* info);
int  MCCGetConnectionStatus (enum MCC_CHANNEL chID, enum MCC_CONNECT* connect);
int  MCCNotify (enum MCC_CHANNEL chID, u32 notify);
u32  MCCSetChannelEventMask (enum MCC_CHANNEL chID, u32 event);
int  MCCOpen (enum MCC_CHANNEL chID, u8 blockSize, MCC_CBEvent callbackEvent);
int  MCCClose (enum MCC_CHANNEL chID);
int  MCCLock (enum MCC_CHANNEL chID);
int  MCCUnlock (enum MCC_CHANNEL chID);
int  MCCRead (enum MCC_CHANNEL chID, u32 offset, void* data, s32 size, enum MCC_SYNC_STATE async);
int  MCCWrite (enum MCC_CHANNEL chID, u32 offset, void* data, s32 size, enum MCC_SYNC_STATE async);
int  MCCCheckAsyncDone ();

#endif // _DOLPHIN_MCC_H_
```


