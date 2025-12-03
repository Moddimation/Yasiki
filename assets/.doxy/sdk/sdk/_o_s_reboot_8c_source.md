

# File OSReboot.c

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**os**](dir_c85f9e83f0f4b4374578811cecebda65.md) **>** [**OSReboot.c**](_o_s_reboot_8c.md)

[Go to the documentation of this file](_o_s_reboot_8c.md)


```C++
#include <dolphin/ai.h>
#include <dolphin/os.h>

static volatile BOOL Prepared;

extern void* BOOT_REGION_START AT_ADDRESS (0x812FDFF0);
extern void* BOOT_REGION_END   AT_ADDRESS (0x812FDFEC);
extern u32 OS_RESET_CODE       AT_ADDRESS (0x800030F0);
extern u8 OS_REBOOT_BOOL       AT_ADDRESS (0x800030E2);
extern u32 OS_UNK_CODE         AT_ADDRESS (0x817FFFF8);
extern u32 OS_HOT_RESET_CODE   AT_ADDRESS (0x817FFFFC);

#include "OSPrivate.h"

extern void* __OSSavedRegionStart;
extern void* __OSSavedRegionEnd;

// Struct for Apploader header (size 0x20).
typedef struct _ApploaderHeader
{
    char date[16];   
    u32  entry;      
    u32  size;       
    u32  rebootSize; 
    u32  reserved2;  
} ApploaderHeader;

static ApploaderHeader Header ALIGN (32);

static asm void
Run (register u32 addr)
{
#ifdef __MWERKS__
    fralloc;
    bl OSDisableInterrupts;
    bl ICFlashInvalidate;
    sync;
    isync;
    mtlr addr;
    blr;
    frfree;
    blr;
#endif
}

static void
ReadApploader (DVDCommandBlock* dvdCmd, void* addr, u32 offset, u32 numBytes)
{
    while (Prepared == FALSE) {}
    DVDReadAbsAsyncForBS (dvdCmd, addr, (s32)numBytes, (s32)(offset + 0x2440), NULL);

    while (TRUE)
    {
        switch (dvdCmd->state)
        {
            case 0:
                break;
            case 1:
            default:
                continue;
            case -1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
                __OSDoHotReset ((s32)OS_HOT_RESET_CODE);
                continue;
        }
        break;
    }
}

static void
Callback (s32 result, DVDCommandBlock* block)
{
#pragma unused(result)
#pragma unused(block)

    Prepared = TRUE;
}

void
__OSReboot (u32 resetCode, BOOL forceMenu)
{
#pragma unused(forceMenu)

    OSContext       exceptionContext;
    DVDCommandBlock dvdCmd;
    DVDCommandBlock dvdCmd2;
    u32             numBytes;
    u32             offset;

    OSDisableInterrupts();

    OS_UNK_CODE = 0;
    OS_REBOOT_BOOL = TRUE;
    OS_HOT_RESET_CODE = resetCode;
    OSClearContext (&exceptionContext);
    OSSetCurrentContext (&exceptionContext);
    DVDInit();

    __DVDPrepareResetAsync (Callback);

    if (!DVDCheckDisk())
    {
        __OSDoHotReset ((s32)OS_HOT_RESET_CODE);
    }

    __OSMaskInterrupts (0xffffffe0);
    __OSUnmaskInterrupts (0x400);

    OSEnableInterrupts();

    offset = 0;
    numBytes = 32;
    ReadApploader (&dvdCmd, (void*)&Header, offset, numBytes);

    offset = Header.size + 0x20;
    numBytes = OSRoundUp32B (Header.rebootSize);
    ReadApploader (&dvdCmd2, (void*)OS_BOOTROM_ADDR, offset, numBytes);

    ICInvalidateRange ((void*)OS_BOOTROM_ADDR, numBytes);
    Run (OS_BOOTROM_ADDR);
}
```


