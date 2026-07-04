

# File CARDPrivate.h

[**File List**](files.md) **>** [**card**](dir_2dfa3b55db09c289c0394a464581d568.md) **>** [**CARDPrivate.h**](_c_a_r_d_private_8h.md)

[Go to the documentation of this file](_c_a_r_d_private_8h.md)


```C++
#ifndef _DOLPHIN_CARD_INTERNAL_H_
#define _DOLPHIN_CARD_INTERNAL_H_

#include <dolphin/card.h>
#include <dolphin/exi.h>

typedef struct CARDID
{
    u8  serial[32];                 
    u16 deviceID;                   
    u16 size;                       
    u16 encode;                     
    u8  padding[470];               
    u16 checkSum;                   
    u16 checkSumInv;                
} CARDID;

typedef struct CARDDir
{
    u8  gameName[4];
    u8  company[2];
    u8  _padding0;
    u8  bannerFormat;
    u8  fileName[CARD_FILENAME_MAX];
    u32 time;                       // seconds since 01/01/2000 midnight

    u32 iconAddr;                   // 0xffffffff if not used
    u16 iconFormat;
    u16 iconSpeed;

    u8  permission;
    u8  copyTimes;
    u16 startBlock;
    u16 length;
    u8  _padding1[2];

    u32 commentAddr;                // 0xffffffff if not used
} CARDDir;                          // total size 64 bytes

typedef struct CARDControl
{
    BOOL          attached;         
    s32           result;           
    u16           size;             
    u16           pageSize;         
    s32           sectorSize;       
    u16           cBlock;           
    u16           vendorID;         
    s32           latency;          
    u8            id[12];           
    int           mountStep;        
    u32           scramble;         
    int           formatStep;       
    DSPTaskInfo   task;             
    void*         workArea;         
    CARDDir*      currentDir;       
    u16*          currentFat;       
    OSThreadQueue threadQueue;      
    u8            cmd[9];           
    u8            _pad9D[3];        
    s32           cmdlen;           
    vs32          mode;             
    int           retry;            
    int           repeat;           
    u32           addr;             
    void*         buffer;           
    s32           xferred;          
    u16           freeNo;           
    u16           startBlock;       
    CARDFileInfo* fileInfo;         
    CARDCallback  extCallback;      
    CARDCallback  txCallback;       
    CARDCallback  exiCallback;      
    CARDCallback  apiCallback;      
    CARDCallback  xferCallback;     
    CARDCallback  eraseCallback;    
    CARDCallback  unlockCallback;   
    OSAlarm       alarm;            
} CARDControl;

typedef struct CARDDecParam
{
    u8* inputAddr;                  
    u32 inputLength;                
    u32 aramAddr;                   
    u8* outputAddr;                 
} CARDDecParam;

typedef struct CARDDirCheck
{
    u8  padding0[64 - 2 * 4];
    u16 padding1;
    s16 checkCode;
    u16 checkSum;
    u16 checkSumInv;
} CARDDirCheck;                     // total 64 bytes

#define CARD_PAGE_SIZE         128u
#define CARD_SEG_SIZE          512u
#define CARD_MAX_SIZE          (16u * 1024u * 1024u)

#define CARD_NUM_SYSTEM_BLOCK  5
#define CARD_SYSTEM_BLOCK_SIZE (8 * 1024u)

#define CARD_MAX_MOUNT_STEP    (CARD_NUM_SYSTEM_BLOCK + 2)

#define CARD_CUSTOM_ID         0x00000000
#define CARD_CUSTOM_ID_MASK    0xffff0000

#define CARD_ID_SIZE           0x000000fc
#define CARD_ID_CHIPS          0x00000003
#define CARD_ID_LATENCY        0x00000700
#define CARD_ID_LATENCY_SHIFT  8
#define CARD_ID_SECTOR         0x00003800
#define CARD_ID_SECTOR_SHIFT   11

#define CARD_CMD_CUSTOM_ID     0x00000000
#define CARD_CMD_INT_ENABLE    0x81010000
#define CARD_CMD_INT_DISABLE   0x81000000
#define CARD_CMD_CLEAR_STATUS  0x89000000
#define CARD_CMD_READ_STATUS   0x83000000
#define CARD_CMD_VENDOR_ID     0x85000000
#define CARD_CMD_READ          0x52
#define CARD_CMD_WRITE         0xF2
#define CARD_CMD_ERASE         0xF4
#define CARD_CMD_ERASE_SECTOR  0xF1
#define CARD_CMD_WAKEUP        0x87000000
#define CARD_CMD_SLEEP         0x88000000

#define CARD_STS_COMPLETE      (1u << 7)
#define CARD_STS_SECURITY_PASS (1u << 6)
#define CARD_STS_SLEEPING      (1u << 5)
#define CARD_STS_ERASE_FAIL    (1u << 4)
#define CARD_STS_PROGRAM_FAIL  (1u << 3)
#define CARD_STS_NA_FAIL       (1u << 2)
#define CARD_STS_INT_ENABLE    (1u << 1)
#define CARD_STS_READY         (1u << 0)

#define CARD_FAT_AVAIL         0x0000u
#define CARD_FAT_VOID          0x0001u
#define CARD_FAT_EOF           0xFFFFu

#define CARD_FAT_CHECKSUM      0x0000u
#define CARD_FAT_CHECKSUMINV   0x0001u
#define CARD_FAT_CHECKCODE     0x0002u
#define CARD_FAT_FREEBLOCKS    0x0003u
#define CARD_FAT_LASTSLOT      0x0004u

#define CARD_VENDOR_SAMSUNG    0xEC // high byte

#define CARDIsValidBlockNo(card, iBlock)                                                       \
    (CARD_NUM_SYSTEM_BLOCK <= (iBlock) && (iBlock) < (card)->cBlock)

#define CARDGetDirCheck(dir) ((CARDDirCheck*)&(dir)[CARD_MAX_FILE])

// CARDStatEx.c
s32 __CARDGetStatusEx (long chan, long fileNo, struct CARDDir* dirent);
s32 __CARDSetStatusExAsync (long            chan,
                            long            fileNo,
                            struct CARDDir* dirent,
                            void            (*callback) (long, long));
s32 __CARDSetStatusEx (long chan, long fileNo, struct CARDDir* dirent);

// CARDUnlock.c
s32 __CARDUnlock (s32 chan, u8 flashID[12]);

// CARDRead.c
s32 __CARDSeek (CARDFileInfo* fileInfo, s32 length, s32 offset, CARDControl** pcard);

// CARDRdwr.c
s32 __CARDRead (long chan, u32 addr, long length, void* dst, void (*callback) (long, long));
s32 __CARDWrite (long chan, u32 addr, long length, void* dst, void (*callback) (long, long));

// CARDRaw.c
s32 __CARDRawReadAsync (long  chan,
                        void* buf,
                        long  length,
                        long  offset,
                        void  (*callback) (long, long));
s32 __CARDRawRead (long chan, void* buf, long length, long offset);

// CARDOpen.c
BOOL __CARDCompareFileName (CARDDir* ent, const char* fileName);
s32  __CARDAccess (CARDDir* ent);
s32  __CARDIsPublic (CARDDir* ent);
s32  __CARDGetFileNo (CARDControl* card, const char* fileName, s32* pfileNo);
BOOL __CARDIsOpened (CARDControl* card, s32 fileNo);

// CARDMount.c
void __CARDMountCallback (s32 chan, s32 result);

// CARDFormat.c
s32 CARDFormatAsync (s32 chan, CARDCallback callback);

// CARDDir.c
CARDDir* __CARDGetDirBlock (CARDControl* card);
s32      __CARDUpdateDir (s32 chan, CARDCallback callback);

// CARDCheck.c
void __CARDCheckSum (void* ptr, int length, u16* checksum, u16* checksumInv);
s32  __CARDVerify (CARDControl* card);

// CARDBlock.c
void* __CARDGetFatBlock (CARDControl* card);
s32   __CARDAllocBlock (s32 chan, u32 cBlock, CARDCallback callback);
s32   __CARDFreeBlock (s32 chan, u16 nBlock, CARDCallback callback);
s32   __CARDUpdateFatBlock (s32 chan, u16* fat, CARDCallback callback);

// CARDBios.c
extern struct CARDControl __CARDBlock[2];

extern DVDDiskID* __CARDDiskID;
extern DVDDiskID  __CARDDiskNone;

void __CARDDefaultApiCallback (s32 chan, s32 result);
void __CARDSyncCallback (s32 chan, s32 result);
void __CARDExtHandler (s32 chan, OSContext* context);
void __CARDExiHandler (s32 chan, OSContext* context);
void __CARDTxHandler (s32 chan, OSContext* context);
void __CARDUnlockedHandler (s32 chan, OSContext* context);
int  __CARDReadNintendoID (s32 chan, u32* id);
s32  __CARDEnableInterrupt (s32 chan, BOOL enable);
s32  __CARDReadStatus (s32 chan, u8* status);
s32  __CARDClearStatus (s32 chan);
s32  __CARDSleep (long chan);
s32  __CARDWakeup (long chan);
s32  __CARDReadSegment (s32 chan, CARDCallback callback);
s32  __CARDWritePage (s32 chan, CARDCallback callback);
s32  __CARDErase (long chan, void (*callback) (long, long));
s32  __CARDEraseSector (s32 chan, u32 addr, CARDCallback callback);
void __CARDSetDiskID (DVDDiskID* id);
s32  __CARDGetControlBlock (s32 chan, CARDControl** pcard);
s32  __CARDPutControlBlock (CARDControl* card, s32 result);
s32  __CARDSync (s32 chan);

#endif // _DOLPHIN_CARD_INTERNAL_H_
```


