#include <types.h>

#include <dolphin/os.h>
#include <dolphin/vi.h>

typedef struct
{
    u8  equ;                     ///< 0x00
    u16 acv;                     ///< 0x01
    u16 prbOdd;                  ///< 0x03
    u16 prbEven;                 ///< 0x05
    u16 psbOdd;                  ///< 0x07
    u16 psbEven;                 ///< 0x09
    u8  bs1;                     ///< 0x0B
    u8  bs2;                     ///< 0x0C
    u8  bs3;                     ///< 0x0D
    u8  bs4;                     ///< 0x0E
    u16 be1;                     ///< 0x0F
    u16 be2;                     ///< 0x11
    u16 be3;                     ///< 0x13
    u16 be4;                     ///< 0x15
    u16 nhlines;                 ///< 0x17
    u16 hlw;                     ///< 0x19
    u8  hsy;                     ///< 0x1B
    u8  hcs;                     ///< 0x1C
    u8  hce;                     ///< 0x1D
    u8  hbe640;                  ///< 0x1E
    u16 hbs640;                  ///< 0x1F
    u8  hbeCCIR656;              ///< 0x21
    u16 hbsCCIR656;              ///< 0x22
    /*0x24*/                     // total size = 0x24
} VITiming;

typedef struct
{
    u16       DispPosX;          ///< 0x00
    u16       DispPosY;          ///< 0x02
    u16       DispSizeX;         ///< 0x04
    u16       DispSizeY;         ///< 0x06
    u16       AdjustedDispPosX;  ///< 0x08
    u16       AdjustedDispPosY;  ///< 0x0A
    u16       AdjustedDispSizeY; ///< 0x0C
    u16       AdjustedPanPosY;   ///< 0x0E
    u16       AdjustedPanSizeY;  ///< 0x10
    u16       FBSizeX;           ///< 0x12
    u16       FBSizeY;           ///< 0x14
    u16       PanPosX;           ///< 0x16
    u16       PanPosY;           ///< 0x18
    u16       PanSizeX;          ///< 0x1A
    u16       PanSizeY;          ///< 0x1C
    VIXFBMode FBMode;            ///< 0x1E
    u32       nonInter;          ///< 0x22
    u32       tv;                ///< 0x26
    u8        wordPerLine;       ///< 0x2A
    u8        std;               ///< 0x2B
    u8        wpl;               ///< 0x2C
    u32       bufAddr;           ///< 0x2E
    u32       tfbb;              ///< 0x32
    u32       bfbb;              ///< 0x36
    u8        xof;               ///< 0x3A
    BOOL      black;             ///< 0x3B
    BOOL      threeD;            ///< 0x3C
    u32       rbufAddr;          ///< 0x40
    u32       rtfbb;             ///< 0x44
    u32       rbfbb;             ///< 0x48
    VITiming* timing;            ///< 0x4C
    /*0x50*/                     // total size = 0x50
} SomeVIStruct;

static volatile u32  retraceCount;
static u32           changeMode;
static volatile u32  flushFlag;
static OSThreadQueue retraceQueue;
static void          (*PreCB) (u32);
static void          (*PostCB) (u32);
static u32           encoderType;
static s16           displayOffsetH;
static s16           displayOffsetV;
static volatile u64  changed;
static u16           regs[59];
static volatile u64  shdwChanged;
static u16           shdwRegs[59];

#define MARK_CHANGED(index) (changed |= 1LL << (63 - (index)))
#define VI_BITMASK(index)   (1ull << (63 - (index)))

// clang-format off
static VITiming timing[7] = {
    {  6, 240, 24, 25, 3, 2, 12, 13, 12, 13,  520,  519,  520,  519,  525, 429, 64, 71, 105, 162, 373, 122, 412 },
    {  6, 240, 24, 24, 4, 4, 12, 12, 12, 12,  520,  520,  520,  520,  526, 429, 64, 71, 105, 162, 373, 122, 412 },
    {  5, 287, 35, 36, 1, 0, 13, 12, 11, 10,  619,  618,  617,  620,  625, 432, 64, 75, 106, 172, 380, 133, 420 },
    {  5, 287, 35, 35, 2, 2, 13, 11, 13, 11,  619,  621,  619,  621,  626, 432, 64, 75, 106, 172, 380, 133, 420 },
    {  6, 240, 24, 25, 3, 2, 16, 15, 14, 13,  518,  517,  516,  519,  525, 429, 64, 78, 112, 162, 373, 122, 412 },
    {  6, 240, 24, 24, 4, 4, 16, 14, 16, 14,  518,  520,  518,  520,  526, 429, 64, 78, 112, 162, 373, 122, 412 },
    { 12, 480, 48, 48, 6, 6, 24, 24, 24, 24, 1038, 1038, 1038, 1038, 1050, 429, 64, 71, 105, 162, 373, 122, 412 },
};
// clang-format on
static u16 taps[25] = { 0x01F0, 0x01DC, 0x01AE, 0x0174, 0x0129, 0x00DB, 0x008E, 0x0046, 0x000C,
                        0x00E2, 0x00CB, 0x00C0, 0x00C4, 0x00CF, 0x00DE, 0x00EC, 0x00FC, 0x0008,
                        0x000F, 0x0013, 0x0013, 0x000F, 0x000C, 0x0008, 0x0001 };

static SomeVIStruct HorVer;
static u32          FBSet;

static u32 getCurrentFieldEvenOdd (void);

void __VIInitI2C (void);
void __VISetSCL (int value);
int  __VIGetSCL (void);
void __VISetSDA (int value);
int  __VIGetSDA (void);

/* i2c.c */

int __VISendI2CData (u8 slaveAddr, u8* pData, int nBytes);

/* initphilips.c */

void __VIInitPhilips (void);

/* vi.c */

void __VIInit (VITVMode mode);
void __VISetAdjustingValues (s16 x, s16 y);
void __VIGetAdjustingValues (s16* x, s16* y);
