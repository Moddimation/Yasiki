

# File vi\_private.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**vi**](dir_6e608df437d91df3e0aaf7178791d22d.md) **>** [**vi\_private.h**](vi__private_8h.md)

[Go to the documentation of this file](vi__private_8h.md)


```C++
#include <types.h>

#include <dolphin/os.h>
#include <dolphin/vi.h>

typedef struct
{
    u8  equ;                     
    u16 acv;                     
    u16 prbOdd;                  
    u16 prbEven;                 
    u16 psbOdd;                  
    u16 psbEven;                 
    u8  bs1;                     
    u8  bs2;                     
    u8  bs3;                     
    u8  bs4;                     
    u16 be1;                     
    u16 be2;                     
    u16 be3;                     
    u16 be4;                     
    u16 nhlines;                 
    u16 hlw;                     
    u8  hsy;                     
    u8  hcs;                     
    u8  hce;                     
    u8  hbe640;                  
    u16 hbs640;                  
    u8  hbeCCIR656;              
    u16 hbsCCIR656;              
    /*0x24*/                     // total size = 0x24
} VITiming;

typedef struct
{
    u16       DispPosX;          
    u16       DispPosY;          
    u16       DispSizeX;         
    u16       DispSizeY;         
    u16       AdjustedDispPosX;  
    u16       AdjustedDispPosY;  
    u16       AdjustedDispSizeY; 
    u16       AdjustedPanPosY;   
    u16       AdjustedPanSizeY;  
    u16       FBSizeX;           
    u16       FBSizeY;           
    u16       PanPosX;           
    u16       PanPosY;           
    u16       PanSizeX;          
    u16       PanSizeY;          
    VIXFBMode FBMode;            
    u32       nonInter;          
    u32       tv;                
    u8        wordPerLine;       
    u8        std;               
    u8        wpl;               
    u32       bufAddr;           
    u32       tfbb;              
    u32       bfbb;              
    u8        xof;               
    BOOL      black;             
    BOOL      threeD;            
    u32       rbufAddr;          
    u32       rtfbb;             
    u32       rbfbb;             
    VITiming* timing;            
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
```


