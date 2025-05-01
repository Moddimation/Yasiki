#include "Dolphin/ai.h"
#include "Dolphin/os.h"

static volatile BOOL Prepared;

extern void* BOOT_REGION_START AT_ADDRESS(0x812FDFF0);
extern void* BOOT_REGION_END   AT_ADDRESS(0x812FDFEC);
extern u32 OS_RESET_CODE       AT_ADDRESS(0x800030F0);
// unknown function, set to true by __OSReboot
extern u8 OS_REBOOT_BOOL       AT_ADDRESS(0x800030E2);
extern u32 OS_UNK_CODE         AT_ADDRESS(0x817FFFF8);
extern u32 OS_HOT_RESET_CODE   AT_ADDRESS(0x817FFFFC);

extern void* __OSSavedRegionStart;
extern void* __OSSavedRegionEnd;
// Struct for Apploader header (size 0x20).
typedef struct _ApploaderHeader
{
    char date[16];   ///< 0x00
    u32  entry;      ///< 0x10
    u32  size;       ///< 0x14
    u32  rebootSize; ///< 0x18
    u32  reserved2;  ///< 0x1C
} ApploaderHeader;
static ApploaderHeader Header ATTRIBUTE_ALIGN(32);
static ASM void
Run(register u32 addr)
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
static ASM void
ReadApploader()
{
#ifdef __MWERKS__
    lwz  r0, 0x1c(r1);
    lwz  r31, 0x14(r1);
    addi r1, r1, 0x18;
    mtlr r0;
    blr;
#endif
}
static void
Callback(s32 result, DVDCommandBlock* block)
{
    Prepared = TRUE;
}
void
__OSReboot(u32 resetCode, u32 bootDol)
{
    OSContext       exceptionContext;
    DVDCommandBlock dvdCmd;
    DVDCommandBlock dvdCmd2;
    u32             numBytes;
    u32             offset;

    OSDisableInterrupts();

    OS_HOT_RESET_CODE = resetCode;
    OS_UNK_CODE = 0;
    OS_REBOOT_BOOL = TRUE;
    OSClearContext(&exceptionContext);
    OSSetCurrentContext(&exceptionContext);
    DVDInit();

    __DVDPrepareResetAsync(Callback);

    if (!DVDCheckDisk())
    {
        __OSDoHotReset(OS_HOT_RESET_CODE);
    }

    __OSMaskInterrupts(0xffffffe0);
    __OSUnmaskInterrupts(0x400);

    OSEnableInterrupts();

    offset = 0;
    numBytes = 32;
    ReadApploader(&dvdCmd, (void*)&Header, offset, numBytes);

    offset = Header.size + 0x20;
    numBytes = OSRoundUp32B(Header.rebootSize);
    ReadApploader(&dvdCmd2, (void*)OS_BOOTROM_ADDR, offset, numBytes);

    ICInvalidateRange((void*)OS_BOOTROM_ADDR, numBytes);
    Run(OS_BOOTROM_ADDR);
}

