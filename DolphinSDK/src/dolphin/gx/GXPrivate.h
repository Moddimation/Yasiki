#ifndef _DOLPHIN_GX_INTERNAL_H_
#define _DOLPHIN_GX_INTERNAL_H_

#include <dolphin/gx.h>

#ifdef __cplusplus
extern "C"
{
#endif

// REG VERIF

#if DEBUG
#define VERIF_XF_REG(addr, value)                                                              \
    do {                                                                                       \
        s32 regAddr = (addr);                                                                  \
        if (regAddr >= 0 && regAddr < 0x50)                                                    \
        {                                                                                      \
            __gxVerif->xfRegs[regAddr]      = (value);                                         \
            __gxVerif->xfRegsDirty[regAddr] = 1;                                               \
        }                                                                                      \
    }                                                                                          \
    while (0)

#define VERIF_XF_REG_alt(addr, value)                                                          \
    do {                                                                                       \
        s32 xfAddr = (addr);                                                                   \
        if (xfAddr >= 0 && xfAddr < 0x50)                                                      \
        {                                                                                      \
            __gxVerif->xfRegs[xfAddr]      = (value);                                          \
            __gxVerif->xfRegsDirty[xfAddr] = 1;                                                \
        }                                                                                      \
    }                                                                                          \
    while (0)

#define VERIF_RAS_REG(value) (__gxVerif->rasRegs[((value) & 0xFF000000) >> 24] = value)

#define VERIF_MTXLIGHT(addr, data)                                                             \
    do {                                                                                       \
        s32 xfAddr;                                                                            \
        if (addr < 0x400U)                                                                     \
        {                                                                                      \
            __gxVerif->xfMtx[addr]      = data;                                                \
            __gxVerif->xfMtxDirty[addr] = 1;                                                   \
        }                                                                                      \
        else if (addr < 0x500U)                                                                \
        {                                                                                      \
            xfAddr                        = addr - 0x400;                                      \
            __gxVerif->xfNrm[xfAddr]      = data;                                              \
            __gxVerif->xfNrmDirty[xfAddr] = 1;                                                 \
        }                                                                                      \
        else if (addr < 0x600U)                                                                \
        {                                                                                      \
            xfAddr                         = addr - 0x500;                                     \
            __gxVerif->xfDMtx[xfAddr]      = data;                                             \
            __gxVerif->xfDMtxDirty[xfAddr] = 1;                                                \
        }                                                                                      \
        else if (addr < 0x680U)                                                                \
        {                                                                                      \
            xfAddr                          = addr - 0x600;                                    \
            __gxVerif->xfLight[xfAddr]      = data;                                            \
            __gxVerif->xfLightDirty[xfAddr] = 1;                                               \
        }                                                                                      \
        else                                                                                   \
        {                                                                                      \
            xfAddr = addr - 0x1000;                                                            \
            if ((xfAddr >= 0) && (xfAddr < 0x50))                                              \
            {                                                                                  \
                __gxVerif->xfRegs[xfAddr]      = data;                                         \
                __gxVerif->xfRegsDirty[xfAddr] = 1;                                            \
            }                                                                                  \
        }                                                                                      \
    }                                                                                          \
    while (0)
#else
#define VERIF_XF_REG(addr, value)     ((void)0)
#define VERIF_XF_REG_alt(addr, value) ((void)0)
#define VERIF_RAS_REG(value)          ((void)0)
#endif

#define GX_WRITE_XF_REG(addr, value)                                                           \
    do {                                                                                       \
        GX_WRITE_U8 (0x10);                                                                    \
        GX_WRITE_U32 (0x1000 + (addr));                                                        \
        GX_WRITE_U32 (value);                                                                  \
        VERIF_XF_REG (addr, value);                                                            \
    }                                                                                          \
    while (0)

#if DEBUG
#define GX_WRITE_XF_REG_2(addr, value)                                                         \
    do {                                                                                       \
        u32 xfData = (value);                                                                  \
        &xfData;                                                                               \
        GX_WRITE_U32 (value);                                                                  \
        VERIF_XF_REG_alt (addr, xfData);                                                       \
    }                                                                                          \
    while (0)
#define GX_WRITE_XF_REG_F(addr, value)                                                         \
    do {                                                                                       \
        f32 xfData = (value);                                                                  \
        GX_WRITE_F32 (value);                                                                  \
        VERIF_XF_REG_alt (addr, *(u32*)&xfData);                                               \
    }                                                                                          \
    while (0)
#else
#define GX_WRITE_XF_REG_2(addr, value)                                                         \
    do {                                                                                       \
        GX_WRITE_U32 (value);                                                                  \
    }                                                                                          \
    while (0)
#define GX_WRITE_XF_REG_F(addr, value)                                                         \
    do {                                                                                       \
        GX_WRITE_F32 (value);                                                                  \
    }                                                                                          \
    while (0)
#endif

#define GX_WRITE_RAS_REG(value)                                                                \
    do {                                                                                       \
        GX_WRITE_U8 (0x61);                                                                    \
        GX_WRITE_U32 (value);                                                                  \
        VERIF_RAS_REG (value);                                                                 \
    }                                                                                          \
    while (0)

#define GX_WRITE_SOME_REG2(a, b, c, addr)                                                      \
    do {                                                                                       \
        s32 regAddr;                                                                           \
        GX_WRITE_U8 (a);                                                                       \
        GX_WRITE_U8 (b);                                                                       \
        GX_WRITE_U32 (c);                                                                      \
        regAddr = addr;                                                                        \
        if (regAddr >= 0 && regAddr < 4)                                                       \
        {                                                                                      \
            __GXData->indexBase[regAddr] = c;                                                  \
        }                                                                                      \
    }                                                                                          \
    while (0)
#define GX_WRITE_SOME_REG3(a, b, c, addr)                                                      \
    do {                                                                                       \
        s32 regAddr;                                                                           \
        GX_WRITE_U8 (a);                                                                       \
        GX_WRITE_U8 (b);                                                                       \
        GX_WRITE_U32 (c);                                                                      \
        regAddr = addr;                                                                        \
        if (regAddr >= 0 && regAddr < 4)                                                       \
        {                                                                                      \
            __GXData->indexStride[regAddr] = c;                                                \
        }                                                                                      \
    }                                                                                          \
    while (0)
#define GX_WRITE_SOME_REG4(a, b, c, addr)                                                      \
    do {                                                                                       \
        s32 regAddr;                                                                           \
        GX_WRITE_U8 (a);                                                                       \
        GX_WRITE_U8 (b);                                                                       \
        GX_WRITE_U32 (c);                                                                      \
        regAddr = addr;                                                                        \
    }                                                                                          \
    while (0)

#define GET_REG_FIELD(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))

#define SET_REG_FIELD(line, reg, size, shift, val)                                             \
    do {                                                                                       \
        ASSERTMSGLINE (line,                                                                   \
                       ((u32)(val) & ~((1 << (size)) - 1)) == 0,                               \
                       "GX Internal: Register field out of range");                            \
        (reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift));    \
    }                                                                                          \
    while (0)

#define CHECK_GXBEGIN(line, name)                                                              \
    ASSERTMSGLINE (line, !__GXinBegin, "'" name "' is not allowed between GXBegin/GXEnd")
#define CHECK_IN_BEGIN(line, f)                                                                \
    ASSERTMSGLINE (line, !__GXinBegin, "'" #f "' is not allowed between GXBegin/GXEnd")

/* GXAttr */
void __GXSetVCD (void);
void __GXSetVAT (void);

/* GXBump */
void __GXUpdateBPMask (void);
void __GXFlushTextureState (void);

/* GXFifo */
// GXFifoObj private data
typedef struct __GXFifoObj
{
    u8*   base;
    u8*   top;
    u32   size;
    u32   hiWatermark;
    u32   loWatermark;
    void* rdPtr;
    void* wrPtr;
    s32   count;
    u8    bind_cpu;
    u8    bind_gp;
} __GXFifoObj;

void __GXSaveCPUFifoAux (__GXFifoObj* realFifo);
void __GXFifoInit (void);
void __GXInsaneWatermark (void);
void __GXCleanGPFifo (void);

/* GXGeometry */
void __GXSetDirtyState (void);
void __GXSendFlushPrim (void);
void __GXSetGenMode (void);

typedef struct __GXData_struct
{
    u16           vNum;                              // offset 0x0, size 0x2
    u16           bpSent;                            // offset 0x2, size 0x2
    u32           vLim;                              // offset 0x4, size 0x4
    u32           cpEnable;                          // offset 0x8, size 0x4
    u32           cpStatus;                          // offset 0xC, size 0x4
    u32           cpClr;                             // offset 0x10, size 0x4
    u32           vcdLo;                             // offset 0x14, size 0x4
    u32           vcdHi;                             // offset 0x18, size 0x4
    u32           vatA[8];                           // offset 0x1C, size 0x20
    u32           vatB[8];                           // offset 0x3C, size 0x20
    u32           vatC[8];                           // offset 0x5C, size 0x20
    u32           lpSize;                            // offset 0x7C, size 0x4
    u32           matIdxA;                           // offset 0x80, size 0x4
    u32           matIdxB;                           // offset 0x84, size 0x4
    u32           indexBase[4];                      // offset 0x88, size 0x10
    u32           indexStride[4];                    // offset 0x98, size 0x10
    u32           ambColor[2];                       // offset 0xA8, size 0x8
    u32           matColor[2];                       // offset 0xB0, size 0x8
    u32           suTs0[8];                          // offset 0xB8, size 0x20
    u32           suTs1[8];                          // offset 0xD8, size 0x20
    u32           suScis0;                           // offset 0xF8, size 0x4
    u32           suScis1;                           // offset 0xFC, size 0x4
    u32           tref[8];                           // offset 0x100, size 0x20
    u32           iref;                              // offset 0x120, size 0x4
    u32           bpMask;                            // offset 0x124, size 0x4
    u32           IndTexScale0;                      // offset 0x128, size 0x4
    u32           IndTexScale1;                      // offset 0x12C, size 0x4
    u32           tevc[16];                          // offset 0x130, size 0x40
    u32           teva[16];                          // offset 0x170, size 0x40
    u32           tevKsel[8];                        // offset 0x1B0, size 0x20
    u32           cmode0;                            // offset 0x1D0, size 0x4
    u32           cmode1;                            // offset 0x1D4, size 0x4
    u32           zmode;                             // offset 0x1D8, size 0x4
    u32           peCtrl;                            // offset 0x1DC, size 0x4
    u32           cpDispSrc;                         // offset 0x1E0, size 0x4
    u32           cpDispSize;                        // offset 0x1E4, size 0x4
    u32           cpDispStride;                      // offset 0x1E8, size 0x4
    u32           cpDisp;                            // offset 0x1EC, size 0x4
    u32           cpTexSrc;                          // offset 0x1F0, size 0x4
    u32           cpTexSize;                         // offset 0x1F4, size 0x4
    u32           cpTexStride;                       // offset 0x1F8, size 0x4
    u32           cpTex;                             // offset 0x1FC, size 0x4
    u8            cpTexZ;                            // offset 0x200, size 0x1
    u32           genMode;                           // offset 0x204, size 0x4
    GXTexRegion   TexRegions[8];                     // offset 0x208, size 0x80
    GXTexRegion   TexRegionsCI[4];                   // offset 0x288, size 0x40
    u32           nextTexRgn;                        // offset 0x2C8, size 0x4
    u32           nextTexRgnCI;                      // offset 0x2CC, size 0x4
    GXTlutRegion  TlutRegions[20];                   // offset 0x2D0, size 0x140
    GXTexRegion*  (*texRegionCallback) (GXTexObj*,
                                       GXTexMapID); // offset 0x410, size 0x4
    GXTlutRegion* (*tlutRegionCallback) (u32);       // offset 0x414, size 0x4
    GXAttrType    nrmType;                           // offset 0x418, size 0x4
    u8            hasNrms;                           // offset 0x41C, size 0x1
    u8            hasBiNrms;                         // offset 0x41D, size 0x1
    u32           projType;                          // offset 0x420, size 0x4
    f32           projMtx[6];                        // offset 0x424, size 0x18
    f32           vpLeft;                            // offset 0x43C, size 0x4
    f32           vpTop;                             // offset 0x440, size 0x4
    f32           vpWd;                              // offset 0x444, size 0x4
    f32           vpHt;                              // offset 0x448, size 0x4
    f32           vpNearz;                           // offset 0x44C, size 0x4
    f32           vpFarz;                            // offset 0x450, size 0x4
    u8            fgRange;                           // offset 0x454, size 0x1
    f32           fgSideX;                           // offset 0x458, size 0x4
    u32           tImage0[8];                        // offset 0x45C, size 0x20
    u32           tMode0[8];                         // offset 0x47C, size 0x20
    u32           texmapId[16];                      // offset 0x49C, size 0x40
    u32           tcsManEnab;                        // offset 0x4DC, size 0x4
    GXPerf0       perf0;                             // offset 0x4E0, size 0x4
    GXPerf1       perf1;                             // offset 0x4E4, size 0x4
    u32           perfSel;                           // offset 0x4E8, size 0x4
    u8            inDispList;                        // offset 0x4EC, size 0x1
    u8            dlSaveContext;                     // offset 0x4ED, size 0x1
    u8            dirtyVAT;                          // offset 0x4EE, size 0x1
    u32           dirtyState;                        // offset 0x4F0, size 0x4
} GXData;

extern GXData* __GXData;
extern void*   __memReg;
extern void*   __peReg;
extern void*   __cpReg;
extern void*   __piReg;

#if DEBUG
extern GXBool __GXinBegin;
#endif

#define GX_GET_MEM_REG(offset) (u16) (*(vu16*)((vu16*)(__memReg) + (offset)))
#define GX_GET_CP_REG(offset)  (u16) (*(vu16*)((vu16*)(__cpReg) + (offset)))
#define GX_GET_PE_REG(offset)  (u16) (*(vu16*)((vu16*)(__peReg) + (offset)))
#define GX_GET_PI_REG(offset)  (u32) (*(vu32*)((vu32*)(__piReg) + (offset)))

#define GX_SET_MEM_REG(offset, val) (*(vu16*)((vu16*)(__memReg) + (offset)) = (u16)(val)
#define GX_SET_CP_REG(offset, val) (*(vu16*)((vu16*)(__cpReg) + (offset)) = (u16)(val))
#define GX_SET_PE_REG(offset, val) (*(vu16*)((vu16*)(__peReg) + (offset)) = (u16)(val))
#define GX_SET_PI_REG(offset, val) (*(vu32*)((vu32*)(__piReg) + (offset)) = (u32)(val))

/* GXMisc */
void __GXBypass (u32 reg);
u16  __GXReadPEReg (u32 reg);
void __GXPEInit (void);
void __GXAbort ();

/* GXPerf */
void __GXSetBWDials (u16 cpDial, u16 tcDial, u16 peDial, u16 cpuRdDial, u16 cpuWrDial);

static inline u32
__GXReadCPCounterU32 (u32 regAddrL, u32 regAddrH)
{
    u32 ctrH0;
    u32 ctrH1;
    u32 ctrL;

    ctrH0 = GX_GET_CP_REG (regAddrH);

    do {
        ctrH1 = ctrH0;
        ctrL  = GX_GET_CP_REG (regAddrL);
        ctrH0 = GX_GET_CP_REG (regAddrH);
    }
    while (ctrH0 != ctrH1);

    return (ctrH0 << 0x10) | ctrL;
}

static inline u32
__GXReadMEMCounterU32 (u32 regAddrL, u32 regAddrH)
{
    u32 ctrH0;
    u32 ctrH1;
    u32 ctrL;

    ctrH0 = GX_GET_MEM_REG (regAddrH);

    do {
        ctrH1 = ctrH0;
        ctrL  = GX_GET_MEM_REG (regAddrL);
        ctrH0 = GX_GET_MEM_REG (regAddrH);
    }
    while (ctrH0 != ctrH1);

    return (ctrH0 << 0x10) | ctrL;
}

static inline u32
__GXReadPECounterU32 (u32 regAddrL, u32 regAddrH)
{
    u32 ctrH0;
    u32 ctrH1;
    u32 ctrL;

    ctrH0 = GX_GET_PE_REG (regAddrH);

    do {
        ctrH1 = ctrH0;
        ctrL  = GX_GET_PE_REG (regAddrL);
        ctrH0 = GX_GET_PE_REG (regAddrH);
    }
    while (ctrH0 != ctrH1);

    return (ctrH0 << 0x10) | ctrL;
}

/* GXSave */
void __GXShadowDispList (void* list, u32 nbytes);
void __GXShadowIndexState (u32 idx_reg, u32 reg_data);
void __GXPrintShadowState (void);

/* GXStubs */
void __GXSetRange (f32 nearz, f32 fgSideX);

/* GXTexture */
void __GetImageTileCount (GXTexFmt fmt,
                          u16      wd,
                          u16      ht,
                          u32*     rowTiles,
                          u32*     colTiles,
                          u32*     cmpTiles);
void __GXSetSUTexRegs (void);
void __GXGetSUTexSize (GXTexCoordID coord, u16* width, u16* height);
void __GXSetTmemConfig (u32 config);

/* GXTransform */
void __GXSetMatrixIndex (GXAttr matIdxAttr);
void __GXSetProjection (void);
void __GXSetViewport ();

/* GXVerifRAS */
void __GXVerifySU (void);
void __GXVerifyBUMP (void);
void __GXVerifyTEX (void);
void __GXVerifyTEV (void);
void __GXVerifyPE (void);

/* GXVerif */
typedef enum
{
    GXWARN_INVALID_VTX_FMT    = 0,
    GXWARN_TEX_SIZE_INIT      = 1,
    GXWARN_SCISSOR_RECT_LEFT  = 2,
    GXWARN_SCISSOR_RECT_TOP   = 3,
    GXWARN_SCISSOR_RECT_RIGHT = 4,
    GXWARN_SCISSOR_RECT_BOT   = 5,
    GXWARN_SAMPLE_VALUE       = 6,
    GXWARN_BUMP_CMD           = 7,
    GXWARN_INVALID_INDIRECT   = 8,
    GXWARN_INDIRECT_MTX       = 9,
    GXWARN_IND_TEX_NO_INIT    = 10,
    GXWARN_IND_TEX_NO_SCALE   = 11,
    GXWARN_IND_TEX_BUMP       = 12,
    GXWARN_BUMP_ACCUMULATION  = 13,
    GXWARN_BUMP_ALPHA_EN      = 14,
    GXWARN_IND_DIR_MASK       = 15,
    GXWARN_TEV_TEX_REF        = 16,
    GXWARN_TEV_INV_TEX_COORD  = 17,
    GXWARN_IND_DIR_BOTH       = 18,
    GXWARN_TEX_CONFIG         = 19,
    GXWARN_TEX_BASE           = 20,
    GXWARN_TLUT_CONFIG        = 21,
    GXWARN_TEX_POW2           = 22,
    GXWARN_TEX_CLAMP          = 23,
    GXWARN_TEX_MIN_FILT       = 24,
    GXWARN_MIN_LOD            = 25,
    GXWARN_MAX_LOD            = 26,
    GXWARN_DIAG_LOD           = 27,
    GXWARN_TEX_ANISO          = 28,
    GXWARN_TEX_FIELD          = 29,
    GXWARN_TEX_MPEG           = 30,
    GXWARN_RND_CLR_INDX       = 31,
    GXWARN_TEV_ENV            = 32,
    GXWARN_TEV_INV_CHAN       = 33,
    GXWARN_TEV_NULL_TEX       = 34,
    GXWARN_TEV_NULL_TEX_A     = 35,
    GXWARN_TEV_DIRTY_REG      = 36,
    GXWARN_TEV_DIRTY_REG_A    = 37,
    GXWARN_TEV_CLR_CLAMP      = 38,
    GXWARN_TEV_A_CLAMP        = 39,
    GXWARN_ZTEX_OFFSET        = 40,
    GXWARN_ZTEX_INVALID       = 41,
    GXWARN_TEV_LAST_CLR       = 42,
    GXWARN_TEV_LAST_A         = 43,
    GXWARN_TEV_LAST_CLR_WRAP  = 44,
    GXWARN_TEV_LAST_A_WRAP    = 45,
    GXWARN_Z_BEFORE_T_A       = 46,
    GXWARN_BLEND_LOGICOP      = 47,
    GXWARN_DITHER_MODE        = 48,
    GXWARN_MULTISAMP0         = 49,
    GXWARN_MULTISAMP1         = 50,
    GXWARN_SAMP_ORDER         = 51,
    GXWARN_INVALID_TG_TYPE    = 52,
    GXWARN_XF_CTRL_UNINIT     = 53,
    GXWARN_XF_CTRL_INIT       = 54,
    GXWARN_INV_COLOR_TG_COMB  = 55,
    GXWARN_INV_NUM_COLORS     = 56,
    GXWARN_VTX_NO_GEOM        = 57,
    GXWARN_CLR_XF0_CP1        = 58,
    GXWARN_CLR_XF1_CP0        = 59,
    GXWARN_CLR_XF1_CP2        = 60,
    GXWARN_CLR_XF2_CPN1       = 61,
    GXWARN_CLR_XF2_CPN2       = 62,
    GXWARN_INV_IVS_CLR        = 63,
    GXWARN_NRM_XF0_CP1        = 64,
    GXWARN_NRM_XF0_CP3        = 65,
    GXWARN_NRM_XF1_CP0        = 66,
    GXWARN_NRM_XF1_CP3        = 67,
    GXWARN_NRM_XF3_CP1        = 68,
    GXWARN_NRM_XF3_CP0        = 69,
    GXWARN_INV_IVS_NRM        = 70,
    GXWARN_TEX_XFN_CPM        = 71,
    GXWARN_TEX_SRC_NPOS       = 72,
    GXWARN_TEX_SRC_NNRM       = 73,
    GXWARN_TEX_SRC_NCLR0      = 74,
    GXWARN_TEX_SRC_NCLR1      = 75,
    GXWARN_TEX_SRC_NNBT       = 76,
    GXWARN_TEX_SRC_NTEX       = 77,
    GXWARN_INV_TEX_SRC        = 78,
    GXWARN_INV_TG_ORDER       = 79,
    GXWARN_BM_INV_MTX_NDX     = 80,
    GXWARN_BM_INV_TEX         = 81,
    GXWARN_BM_INV_LIT_POS     = 82,
    GXWARN_BM_NO_NBT          = 83,
    GXWARN_INV_TEX_NUM        = 84,
    GXWARN_INV_TG_SRC         = 85,
    GXWARN_CLR_ADDR_UNINIT    = 86,
    GXWARN_CLR_MAT_UNINIT     = 87,
    GXWARN_CLR_AMB_UNINIT     = 88,
    GXWARN_CLR_INV_SPEC       = 89,
    GXWARN_CLR_NO_NRM         = 90,
    GXWARN_CLR_INV_MTX_NDX    = 91,
    GXWARN_VAL_INFINITY       = 92,
    GXWARN_VAL_NAN            = 93,
    GXWARN_VAL_SMALL          = 94,
    GXWARN_VAL_LARGE          = 95,
    GXWARN_MTX1_UNINIT        = 96,
    GXWARN_GM_UNINIT          = 97,
    GXWARN_TEX_XFN_SUM        = 98,
    GXWARN_CLR_XFN_SUM        = 99,
    GXWARN_INV_NUM_ANY_TEX    = 100,
    GXWARN_INV_NUM_REG_TEX    = 101,
    GXWARN_INV_NUM_BM_TEX     = 102,
    GXWARN_INV_NUM_CLR_TEX    = 103,
    GXWARN_INV_CLR_TEX        = 104,
    GXWARN_DUP_CLR_TEX        = 105,
    GXWARN_BM_INV_MTX_VAL     = 106,
    GXWARN_TEX_INV_MTX_VAL    = 107,
    GXWARN_LIT_INV_REG        = 108,
    GXWARN_CLR_INV_MTX_VAL    = 109,
    GXWARN_INV_MTX_VAL        = 110,
    GXWARN_ADDR_UNINIT        = 111,
    GXWARN_REG_UNINIT         = 112,
    GXWARN_MAX                = 113
} GXWarnID;

#define __GX_WARN(id) (__gxVerif->cb (__gxvWarnLev[(id)], (id), __gxvWarnings[(id)]))
#define __GX_WARNF(id, ...)                                                                    \
    do {                                                                                       \
        sprintf (__gxvDummyStr, __gxvWarnings[(id)], __VA_ARGS__);                             \
        __gxVerif->cb (__gxvWarnLev[(id)], (id), __gxvDummyStr);                               \
    }                                                                                          \
    while (0)

#define __GX_WARN2(level, id) (__gxVerif->cb (level, (id), __gxvWarnings[(id)]))
#define __GX_WARN2F(level, id, ...)                                                            \
    do {                                                                                       \
        sprintf (__gxvDummyStr, __gxvWarnings[(id)], __VA_ARGS__);                             \
        __gxVerif->cb (level, (id), __gxvDummyStr);                                            \
    }                                                                                          \
    while (0)

typedef struct __GXVerifyData
{
    GXVerifyCallback cb;
    GXWarningLevel   verifyLevel;
    u32              xfRegs[80];
    u32              xfMtx[256];
    u32              xfNrm[96];
    u32              xfDMtx[256];
    u32              xfLight[128];
    u32              rasRegs[256];
    u8               xfRegsDirty[80];
    u8               xfMtxDirty[256];
    u8               xfNrmDirty[96];
    u8               xfDMtxDirty[256];
    u8               xfLightDirty[128];
} __GXVerifyData;

extern __GXVerifyData* __gxVerif;
extern char*           __gxvWarnings[125];
extern s8              __gxvDummyStr[256];
extern GXWarningLevel  __gxvWarnLev[];

void __GXVerifyGlobal (void);
void __GXVerifyCP (GXVtxFmt fmt);
void __GXVerifyState (GXVtxFmt vtxfmt);

/* GXVerifXF */
void __GXVerifyXF (void);

#ifdef __cplusplus
}
#endif

#endif
