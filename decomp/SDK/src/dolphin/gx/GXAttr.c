#include <macros.h>

#include <dolphin/gx.h>
#include <dolphin/os.h>

#include "GXPrivate.h"

#define CHECK_ATTRPTR(line, attrPtr)                                                               \
    ASSERTMSGLINE (line, (attrPtr) != NULL, "GXSetVtxDescv: attrPtr is NULL")
#define CHECK_ATTRNAME(line, attr)                                                                 \
    ASSERTMSGLINE (line,                                                                           \
                   (attr) >= GX_VA_PNMTXIDX && (attr) < GX_VA_MAX_ATTR,                            \
                   "GXSetVtxDesc: Invalid vertex attribute name")
#define CHECK_ATTRNAME2(line, attr)                                                                \
    ASSERTMSGLINE (line,                                                                           \
                   (attr) >= GX_VA_POS && (attr) <= GX_VA_MAX_ATTR,                                \
                   "GXSetVtxAttrFmt: Invalid vertex attribute name")
#define CHECK_ATTRNAME3(line, attr)                                                                \
    ASSERTMSGLINE (line,                                                                           \
                   (attr) >= GX_VA_POS && (attr) <= GX_LIGHT_ARRAY,                                \
                   "GXSetArray: Invalid vertex attribute name")
#define CHECK_ATTRTYPE(line, type)                                                                 \
    ASSERTMSGLINE (line,                                                                           \
                   (type) >= GX_NONE && (type) <= GX_INDEX16,                                      \
                   "GXSetVtxDesc: Invalid vertex attribute type")
#define CHECK_VTXFMT(line, vtxfmt)                                                                 \
    ASSERTMSGLINE (line, (vtxfmt) < GX_MAX_VTXFMT, "GXSetVtxAttrFmt: Format Index is out of range")
#define CHECK_FRAC(line, frac)                                                                     \
    ASSERTMSGLINE (line, (frac) < 32, "GXSetVtxAttrFmt: Frac value is >= 32")
#define CHECK_LISTPTR(line, list)                                                                  \
    ASSERTMSGLINE (line, (list) != NULL, "GXSetVtxAttrFmt: list pointer is NULL")

static void
__GXXfVtxSpecs (void)
{
    u32 nCols = 0;
    u32 nNrm;
    u32 nTex;
    u32 reg;

    nCols = GET_REG_FIELD (__GXData->vcdLo, 2, 13) ? 1 : 0;
    nCols += GET_REG_FIELD (__GXData->vcdLo, 2, 15) ? 1 : 0;
    nNrm = __GXData->hasBiNrms ? 2 : __GXData->hasNrms ? 1 : 0;
    nTex = 0;
    nTex += GET_REG_FIELD (__GXData->vcdHi, 2, 0) ? 1 : 0;
    nTex += GET_REG_FIELD (__GXData->vcdHi, 2, 2) ? 1 : 0;
    nTex += GET_REG_FIELD (__GXData->vcdHi, 2, 4) ? 1 : 0;
    nTex += GET_REG_FIELD (__GXData->vcdHi, 2, 6) ? 1 : 0;
    nTex += GET_REG_FIELD (__GXData->vcdHi, 2, 8) ? 1 : 0;
    nTex += GET_REG_FIELD (__GXData->vcdHi, 2, 10) ? 1 : 0;
    nTex += GET_REG_FIELD (__GXData->vcdHi, 2, 12) ? 1 : 0;
    nTex += GET_REG_FIELD (__GXData->vcdHi, 2, 14) ? 1 : 0;
    reg = (nCols) | (nNrm << 2) | (nTex << 4);
    GX_WRITE_XF_REG (8, reg);
    __GXData->bpSent = 0;
}

static inline void
SETVCDATTR (GXAttr Attr, GXAttrType Type)
{
    switch (Attr)
    {
        case GX_VA_PNMTXIDX:
            SET_REG_FIELD (0xA8, __GXData->vcdLo, 1, 0, Type);
            break;
        case GX_VA_TEX0MTXIDX:
            SET_REG_FIELD (0xA9, __GXData->vcdLo, 1, 1, Type);
            break;
        case GX_VA_TEX1MTXIDX:
            SET_REG_FIELD (0xAA, __GXData->vcdLo, 1, 2, Type);
            break;
        case GX_VA_TEX2MTXIDX:
            SET_REG_FIELD (0xAB, __GXData->vcdLo, 1, 3, Type);
            break;
        case GX_VA_TEX3MTXIDX:
            SET_REG_FIELD (0xAC, __GXData->vcdLo, 1, 4, Type);
            break;
        case GX_VA_TEX4MTXIDX:
            SET_REG_FIELD (0xAD, __GXData->vcdLo, 1, 5, Type);
            break;
        case GX_VA_TEX5MTXIDX:
            SET_REG_FIELD (0xAE, __GXData->vcdLo, 1, 6, Type);
            break;
        case GX_VA_TEX6MTXIDX:
            SET_REG_FIELD (0xAf, __GXData->vcdLo, 1, 7, Type);
            break;
        case GX_VA_TEX7MTXIDX:
            SET_REG_FIELD (0xB0, __GXData->vcdLo, 1, 8, Type);
            break;
        case GX_VA_POS:
            SET_REG_FIELD (0xB1, __GXData->vcdLo, 2, 9, Type);
            break;
        case GX_VA_NRM:
            __GXData->hasNrms = (Type != 0);
            if (Type != GX_NONE)
            {
                __GXData->nrmType = Type;
            }
            break;
        case GX_VA_NBT:
            __GXData->hasBiNrms = (Type != 0);
            if (Type != GX_NONE)
            {
                __GXData->nrmType = Type;
            }
            break;
        case GX_VA_CLR0:
            SET_REG_FIELD (0xBA, __GXData->vcdLo, 2, 13, Type);
            break;
        case GX_VA_CLR1:
            SET_REG_FIELD (0xBB, __GXData->vcdLo, 2, 15, Type);
            break;
        case GX_VA_TEX0:
            SET_REG_FIELD (0xBC, __GXData->vcdHi, 2, 0, Type);
            break;
        case GX_VA_TEX1:
            SET_REG_FIELD (0xBD, __GXData->vcdHi, 2, 2, Type);
            break;
        case GX_VA_TEX2:
            SET_REG_FIELD (0xBE, __GXData->vcdHi, 2, 4, Type);
            break;
        case GX_VA_TEX3:
            SET_REG_FIELD (0xBF, __GXData->vcdHi, 2, 6, Type);
            break;
        case GX_VA_TEX4:
            SET_REG_FIELD (0xC0, __GXData->vcdHi, 2, 8, Type);
            break;
        case GX_VA_TEX5:
            SET_REG_FIELD (0xC1, __GXData->vcdHi, 2, 10, Type);
            break;
        case GX_VA_TEX6:
            SET_REG_FIELD (0xC2, __GXData->vcdHi, 2, 12, Type);
            break;
        case GX_VA_TEX7:
            SET_REG_FIELD (0xC3, __GXData->vcdHi, 2, 14, Type);
            break;
    }
}

void
GXSetVtxDesc (GXAttr attr, GXAttrType type)
{
    CHECK_GXBEGIN (0xCC, "GXSetVtxDesc");
    CHECK_ATTRNAME (0xCF, attr);
    CHECK_ATTRTYPE (0xD1, type);

    SETVCDATTR (attr, type);
    if (__GXData->hasNrms || __GXData->hasBiNrms)
    {
        SET_REG_FIELD (0xD7, __GXData->vcdLo, 2, 11, __GXData->nrmType);
    }
    else
    {
        SET_REG_FIELD (0x00, __GXData->vcdLo, 2, 11, 0);
    }
    __GXData->dirtyState |= 8;
}

void
GXSetVtxDescv (const GXVtxDescList* attrPtr)
{
    CHECK_GXBEGIN (0xF5, "GXSetVtxDescv");
    CHECK_ATTRPTR (0xF6, attrPtr);
    while (attrPtr->attr != 0xFF)
    {
        CHECK_ATTRNAME (0xFB, attrPtr->attr);
        CHECK_ATTRTYPE (0xFE, attrPtr->type);
        SETVCDATTR (attrPtr->attr, attrPtr->type);
        attrPtr++;
    }
    if (__GXData->hasNrms || __GXData->hasBiNrms)
    {
        SET_REG_FIELD (0x107, __GXData->vcdLo, 2, 11, __GXData->nrmType);
    }
    else
    {
        SET_REG_FIELD (0x107, __GXData->vcdLo, 2, 11, 0);
    }
    __GXData->dirtyState |= 8;
}

void
__GXSetVCD (void)
{
    static u8 tbl1[] = { 0, 4, 1, 2 };
    static u8 tbl2[] = { 0, 8, 1, 2 };
    static u8 tbl3[] = { 0, 12, 1, 2 };
    u32       vlm;
    u32       b;
    u32       vl;
    u32       vh;

    GX_WRITE_SOME_REG4 (8, 0x50, __GXData->vcdLo, -12);
    GX_WRITE_SOME_REG4 (8, 0x60, __GXData->vcdHi, -12);
    __GXXfVtxSpecs();
    if (__GXData->vNum != 0)
    {
        vl = __GXData->vcdLo;
        vh = __GXData->vcdHi;
        vlm = GET_REG_FIELD (vl, 1, 0);
        vlm += (u8)GET_REG_FIELD (vl, 1, 1);
        vlm += (u8)GET_REG_FIELD (vl, 1, 2);
        vlm += (u8)GET_REG_FIELD (vl, 1, 3);
        vlm += (u8)GET_REG_FIELD (vl, 1, 4);
        vlm += (u8)GET_REG_FIELD (vl, 1, 5);
        vlm += (u8)GET_REG_FIELD (vl, 1, 6);
        vlm += (u8)GET_REG_FIELD (vl, 1, 7);
        vlm += (u8)GET_REG_FIELD (vl, 1, 8);
        vlm += tbl3[(u8)GET_REG_FIELD (vl, 2, 9)];
        b = (__GXData->hasBiNrms << 1) + 1;
        vlm += tbl3[(u8)GET_REG_FIELD (vl, 2, 11)] * b;
        vlm += tbl1[(u8)GET_REG_FIELD (vl, 2, 13)];
        vlm += tbl1[(u8)GET_REG_FIELD (vl, 2, 15)];
        vlm += tbl2[(u8)GET_REG_FIELD (vh, 2, 0)];
        vlm += tbl2[(u8)GET_REG_FIELD (vh, 2, 2)];
        vlm += tbl2[(u8)GET_REG_FIELD (vh, 2, 4)];
        vlm += tbl2[(u8)GET_REG_FIELD (vh, 2, 6)];
        vlm += tbl2[(u8)GET_REG_FIELD (vh, 2, 8)];
        vlm += tbl2[(u8)GET_REG_FIELD (vh, 2, 10)];
        vlm += tbl2[(u8)GET_REG_FIELD (vh, 2, 12)];
        vlm += tbl2[(u8)GET_REG_FIELD (vh, 2, 14)];
        __GXData->vLim = vlm;
    }
}

void
GXGetVtxDesc (GXAttr attr, GXAttrType* type)
{
    u32 cpType;

    CHECK_GXBEGIN (0x185, "GXGetVtxDesc");
    CHECK_ATTRNAME (0x187, attr);

    switch (attr)
    {
        case GX_VA_PNMTXIDX:
            cpType = GET_REG_FIELD (__GXData->vcdLo, 1, 0);
            break;
        case GX_VA_TEX0MTXIDX:
            cpType = GET_REG_FIELD (__GXData->vcdLo, 1, 1);
            break;
        case GX_VA_TEX1MTXIDX:
            cpType = GET_REG_FIELD (__GXData->vcdLo, 1, 2);
            break;
        case GX_VA_TEX2MTXIDX:
            cpType = GET_REG_FIELD (__GXData->vcdLo, 1, 3);
            break;
        case GX_VA_TEX3MTXIDX:
            cpType = GET_REG_FIELD (__GXData->vcdLo, 1, 4);
            break;
        case GX_VA_TEX4MTXIDX:
            cpType = GET_REG_FIELD (__GXData->vcdLo, 1, 5);
            break;
        case GX_VA_TEX5MTXIDX:
            cpType = GET_REG_FIELD (__GXData->vcdLo, 1, 6);
            break;
        case GX_VA_TEX6MTXIDX:
            cpType = GET_REG_FIELD (__GXData->vcdLo, 1, 7);
            break;
        case GX_VA_TEX7MTXIDX:
            cpType = GET_REG_FIELD (__GXData->vcdLo, 1, 8);
            break;
        case GX_VA_POS:
            cpType = GET_REG_FIELD (__GXData->vcdLo, 2, 9);
            break;
        case GX_VA_NRM:
            cpType = __GXData->hasNrms ? GET_REG_FIELD (__GXData->vcdLo, 2, 11) : 0;
            break;
        case GX_VA_NBT:
            cpType = __GXData->hasBiNrms ? GET_REG_FIELD (__GXData->vcdLo, 2, 11) : 0;
            break;
        case GX_VA_CLR0:
            cpType = GET_REG_FIELD (__GXData->vcdLo, 2, 13);
            break;
        case GX_VA_CLR1:
            cpType = GET_REG_FIELD (__GXData->vcdLo, 2, 15);
            break;
        case GX_VA_TEX0:
            cpType = GET_REG_FIELD (__GXData->vcdHi, 2, 0);
            break;
        case GX_VA_TEX1:
            cpType = GET_REG_FIELD (__GXData->vcdHi, 2, 2);
            break;
        case GX_VA_TEX2:
            cpType = GET_REG_FIELD (__GXData->vcdHi, 2, 4);
            break;
        case GX_VA_TEX3:
            cpType = GET_REG_FIELD (__GXData->vcdHi, 2, 6);
            break;
        case GX_VA_TEX4:
            cpType = GET_REG_FIELD (__GXData->vcdHi, 2, 8);
            break;
        case GX_VA_TEX5:
            cpType = GET_REG_FIELD (__GXData->vcdHi, 2, 10);
            break;
        case GX_VA_TEX6:
            cpType = GET_REG_FIELD (__GXData->vcdHi, 2, 12);
            break;
        case GX_VA_TEX7:
            cpType = GET_REG_FIELD (__GXData->vcdHi, 2, 14);
            break;
        default:
            cpType = 0;
            break;
    }
    *type = cpType;
}

void
GXGetVtxDescv (GXVtxDescList* vcd)
{
    GXAttr attr;

    CHECK_GXBEGIN (0x1BA, "GXGetVtxDescv");
    CHECK_ATTRPTR (0x1BC, vcd);
    for (attr = 0; attr < GX_VA_MAX_ATTR; attr++)
    {
        vcd[attr].attr = attr;
        GXGetVtxDesc (attr, &vcd[attr].type);
    }
    vcd[attr].attr = 0xFF;
}

void
GXClearVtxDesc (void)
{
    CHECK_GXBEGIN (0x1D3, "GXClearVtxDesc");
    __GXData->vcdLo = 0;
    SET_REG_FIELD (0x00, __GXData->vcdLo, 2, 9, 1);
    __GXData->vcdHi = 0;
    __GXData->hasNrms = 0;
    __GXData->hasBiNrms = 0;
    __GXData->dirtyState |= 8;
}

static inline void
SETVAT (u32* va, u32* vb, u32* vc, GXAttr attr, GXCompCnt cnt, GXCompType type, u8 shft)
{
    switch (attr)
    {
        case GX_VA_POS:
            SET_REG_FIELD (511, *va, 1, 0, cnt);
            SET_REG_FIELD (512, *va, 3, 1, type);
            SET_REG_FIELD (513, *va, 5, 4, shft);
            break;
        case GX_VA_NRM:
        case GX_VA_NBT:
            SET_REG_FIELD (521, *va, 3, 10, type);
            if (cnt == GX_NRM_NBT3)
            {
                SET_REG_FIELD (0, *va, 1, 9, 1);
                SET_REG_FIELD (0, *va, 1, 31, 1);
            }
            else
            {
                SET_REG_FIELD (527, *va, 1, 9, cnt);
                SET_REG_FIELD (528, *va, 1, 31, 0);
            }
            break;
        case GX_VA_CLR0:
            SET_REG_FIELD (0x215, *va, 1, 13, cnt);
            SET_REG_FIELD (0x216, *va, 3, 14, type);
            break;
        case GX_VA_CLR1:
            SET_REG_FIELD (0x219, *va, 1, 0x11, cnt);
            SET_REG_FIELD (0x21A, *va, 3, 18, type);
            break;
        case GX_VA_TEX0:
            SET_REG_FIELD (0x21D, *va, 1, 0x15, cnt);
            SET_REG_FIELD (0x21E, *va, 3, 0x16, type);
            SET_REG_FIELD (0x21F, *va, 5, 0x19, shft);
            break;
        case GX_VA_TEX1:
            SET_REG_FIELD (0x222, *vb, 1, 0, cnt);
            SET_REG_FIELD (0x223, *vb, 3, 1, type);
            SET_REG_FIELD (0x224, *vb, 5, 4, shft);
            break;
        case GX_VA_TEX2:
            SET_REG_FIELD (0x227, *vb, 1, 9, cnt);
            SET_REG_FIELD (0x228, *vb, 3, 10, type);
            SET_REG_FIELD (0x229, *vb, 5, 13, shft);
            break;
        case GX_VA_TEX3:
            SET_REG_FIELD (0x22C, *vb, 1, 18, cnt);
            SET_REG_FIELD (0x22D, *vb, 3, 19, type);
            SET_REG_FIELD (0x22E, *vb, 5, 22, shft);
            break;
        case GX_VA_TEX4:
            SET_REG_FIELD (0x231, *vb, 1, 27, cnt);
            SET_REG_FIELD (0x232, *vb, 3, 28, type);
            SET_REG_FIELD (0x233, *vc, 5, 0, shft);
            break;
        case GX_VA_TEX5:
            SET_REG_FIELD (0x236, *vc, 1, 5, cnt);
            SET_REG_FIELD (0x237, *vc, 3, 6, type);
            SET_REG_FIELD (0x238, *vc, 5, 9, shft);
            break;
        case GX_VA_TEX6:
            SET_REG_FIELD (0x23B, *vc, 1, 14, cnt);
            SET_REG_FIELD (0x23C, *vc, 3, 15, type);
            SET_REG_FIELD (0x23D, *vc, 5, 18, shft);
            break;
        case GX_VA_TEX7:
            SET_REG_FIELD (0x240, *vc, 1, 23, cnt);
            SET_REG_FIELD (0x241, *vc, 3, 24, type);
            SET_REG_FIELD (0x242, *vc, 5, 27, shft);
            break;
    }
}

void
GXSetVtxAttrFmt (GXVtxFmt vtxfmt, GXAttr attr, GXCompCnt cnt, GXCompType type, u8 frac)
{
    u32* va;
    u32* vb;
    u32* vc;

    CHECK_GXBEGIN (0x252, "GXSetVtxAttrFmt");
    CHECK_VTXFMT (0x253, vtxfmt);
    CHECK_ATTRNAME2 (0x255, attr);
    CHECK_FRAC (0x256, frac);
    va = &__GXData->vatA[vtxfmt];
    vb = &__GXData->vatB[vtxfmt];
    vc = &__GXData->vatC[vtxfmt];
    SETVAT (va, vb, vc, attr, cnt, type, frac);
    __GXData->dirtyState |= 0x10;
    __GXData->dirtyVAT |= (u8)(1 << (u8)vtxfmt);
}

void
GXSetVtxAttrFmtv (GXVtxFmt vtxfmt, const GXVtxAttrFmtList* list)
{
    u32* va;
    u32* vb;
    u32* vc;

    CHECK_GXBEGIN (0x27B, "GXSetVtxAttrFmtv");
    CHECK_LISTPTR (0x27C, list);
    CHECK_VTXFMT (0x27D, vtxfmt);
    va = &__GXData->vatA[vtxfmt];
    vb = &__GXData->vatB[vtxfmt];
    vc = &__GXData->vatC[vtxfmt];
    while (list->attr != GX_VA_NULL)
    {
        CHECK_ATTRNAME2 (0x286, list->attr);
        CHECK_FRAC (0x287, list->frac);
        SETVAT (va, vb, vc, list->attr, list->cnt, list->type, list->frac);
        list++;
    }
    __GXData->dirtyState |= 0x10;
    __GXData->dirtyVAT |= (u8)(1 << (u8)vtxfmt);
}

void
__GXSetVAT (void)
{
    u8 i;

    for (i = 0; i < 8; i++)
    {
        if (__GXData->dirtyVAT & (1 << (u8)i))
        {
            GX_WRITE_SOME_REG4 (8, i | 0x70, __GXData->vatA[i], i - 12);
            GX_WRITE_SOME_REG4 (8, i | 0x80, __GXData->vatB[i], i - 12);
            GX_WRITE_SOME_REG4 (8, i | 0x90, __GXData->vatC[i], i - 12);
        }
    }
    __GXData->dirtyVAT = 0;
}

void
GXGetVtxAttrFmt (GXVtxFmt fmt, GXAttr attr, GXCompCnt* cnt, GXCompType* type, u8* frac)
{
    u32* va;
    u32* vb;
    u32* vc;

    CHECK_GXBEGIN (0x2CF, "GXGetVtxAttrFmt");
    CHECK_VTXFMT (0x2D0, fmt);
    va = &__GXData->vatA[fmt];
    vb = &__GXData->vatB[fmt];
    vc = &__GXData->vatC[fmt];
    switch (attr)
    {
        case GX_VA_POS:
            *cnt = GET_REG_FIELD (*va, 1, 0);
            *type = GET_REG_FIELD (*va, 3, 1);
            *frac = (u8)(*va >> 4) & 0x1F; // GET_REG_FIELD(*va, 5, 4)
            return;
        case GX_VA_NRM:
        case GX_VA_NBT:
            *cnt = GET_REG_FIELD (*va, 1, 9);
            if (*cnt == GX_TEX_ST && (u8)(*va >> 0x1F) != 0)
            {
                *cnt = GX_NRM_NBT3;
            }
            *type = GET_REG_FIELD (*va, 3, 10);
            *frac = 0;
            return;
        case GX_VA_CLR0:
            *cnt = GET_REG_FIELD (*va, 1, 13);
            *type = GET_REG_FIELD (*va, 3, 14);
            *frac = 0;
            return;
        case GX_VA_CLR1:
            *cnt = GET_REG_FIELD (*va, 1, 17);
            *type = GET_REG_FIELD (*va, 3, 18);
            *frac = 0;
            return;
        case GX_VA_TEX0:
            *cnt = GET_REG_FIELD (*va, 1, 21);
            *type = GET_REG_FIELD (*va, 3, 22);
            *frac = (u8)(*va >> 0x19U) & 0x1F;
            return;
        case GX_VA_TEX1:
            *cnt = GET_REG_FIELD (*vb, 1, 0);
            *type = GET_REG_FIELD (*vb, 3, 1);
            *frac = (u8)(*vb >> 4U) & 0x1F;
            return;
        case GX_VA_TEX2:
            *cnt = GET_REG_FIELD (*vb, 1, 9);
            *type = GET_REG_FIELD (*vb, 3, 10);
            *frac = (u8)(*vb >> 0xDU) & 0x1F;
            return;
        case GX_VA_TEX3:
            *cnt = GET_REG_FIELD (*vb, 1, 18);
            *type = GET_REG_FIELD (*vb, 3, 19);
            *frac = (u8)(*vb >> 0x16U) & 0x1F;
            return;
        case GX_VA_TEX4:
            *cnt = GET_REG_FIELD (*vb, 1, 27);
            *type = GET_REG_FIELD (*vb, 3, 28);
            *frac = GET_REG_FIELD (*vc, 5, 0);
            return;
        case GX_VA_TEX5:
            *cnt = GET_REG_FIELD (*vc, 1, 5);
            *type = GET_REG_FIELD (*vc, 3, 6);
            *frac = (u8)(*vc >> 9U) & 0x1F;
            return;
        case GX_VA_TEX6:
            *cnt = GET_REG_FIELD (*vc, 1, 14);
            *type = GET_REG_FIELD (*vc, 3, 15);
            *frac = (u8)(*vc >> 0x12) & 0x1F;
            return;
        case GX_VA_TEX7:
            *cnt = GET_REG_FIELD (*vc, 1, 23);
            *type = GET_REG_FIELD (*vc, 3, 24);
            *frac = (int)(*vc >> 0x1BU);
            return;
        default:
            *cnt = GX_TEX_ST;
            *type = GX_RGB565;
            *frac = 0;
            return;
    }
}

void
GXGetVtxAttrFmtv (GXVtxFmt fmt, GXVtxAttrFmtList* vat)
{
    GXAttr attr;

    CHECK_GXBEGIN (0x330, "GXGetVtxAttrFmtv");
    CHECK_LISTPTR (0x331, vat);
    CHECK_VTXFMT (0x332, fmt);
    for (attr = GX_VA_POS; attr < GX_VA_MAX_ATTR; attr++)
    {
        vat->attr = attr;
        GXGetVtxAttrFmt (fmt, attr, &vat->cnt, &vat->type, &vat->frac);
        vat++;
    }
    vat->attr = GX_VA_NULL;
}

void
GXSetArray (GXAttr attr, const void* base_ptr, u8 stride)
{
    GXAttr cpAttr;
    u32    phyAddr;

    CHECK_IN_BEGIN (0x34F, GXSetArray);
    attr = (attr == GX_VA_NBT) ? GX_VA_NRM : attr;

    CHECK_ATTRNAME3 (0x352, attr);

    cpAttr = attr - GX_VA_POS;

    phyAddr = (u32)base_ptr & 0x3FFFFFFF;
    GX_WRITE_SOME_REG2 (8, cpAttr | 0xA0, phyAddr, cpAttr - 12);
    GX_WRITE_SOME_REG3 (8, cpAttr | 0xB0, stride, cpAttr - 12);
}

void
GXInvalidateVtxCache (void)
{
    CHECK_GXBEGIN (0x368, "GXInvalidateVtxCache");
    GX_WRITE_U8 (0x48);
}

void
GXSetTexCoordGen2 (GXTexCoordID dst_coord,
                   GXTexGenType func,
                   GXTexGenSrc  src_param,
                   u32          mtx,
                   GXBool       normalize,
                   u32          pt_texmtx)
{
    u32    reg = 0;
    u32    row;
    u32    bumprow;                        // unused
    u32    form;
    GXAttr mtxIdAttr;

    CHECK_GXBEGIN (0x392, "GXSetTexCoordGen");
    ASSERTMSGLINE (0x393, dst_coord < 8, "GXSetTexCoordGen: Invalid coordinate Id");

    form = 0;
    row = bumprow = 5;

    switch (src_param)
    {
        case GX_TG_POS:
            row = 0;
            form = 1;
            break;
        case GX_TG_NRM:
            row = 1;
            form = 1;
            break;
        case GX_TG_BINRM:
            row = 3;
            form = 1;
            break;
        case GX_TG_TANGENT:
            row = 4;
            form = 1;
            break;
        case GX_TG_COLOR0:
            row = 2;
            break;
        case GX_TG_COLOR1:
            row = 2;
            break;
        case GX_TG_TEX0:
            row = 5;
            break;
        case GX_TG_TEX1:
            row = 6;
            break;
        case GX_TG_TEX2:
            row = 7;
            break;
        case GX_TG_TEX3:
            row = 8;
            break;
        case GX_TG_TEX4:
            row = 9;
            break;
        case GX_TG_TEX5:
            row = 10;
            break;
        case GX_TG_TEX6:
            row = 11;
            break;
        case GX_TG_TEX7:
            row = 12;
            break;
        case GX_TG_TEXCOORD0:
            bumprow = 5;
            break;
        case GX_TG_TEXCOORD1:
            bumprow = 6;
            break;
        case GX_TG_TEXCOORD2:
            bumprow = 7;
            break;
        case GX_TG_TEXCOORD3:
            bumprow = 8;
            break;
        case GX_TG_TEXCOORD4:
            bumprow = 9;
            break;
        case GX_TG_TEXCOORD5:
            bumprow = 10;
            break;
        case GX_TG_TEXCOORD6:
            bumprow = 11;
            break;
        default:
            ASSERTMSGLINE (0x3AF, 0, "GXSetTexCoordGen: Invalid source parameter");
            break;
            ;
    }
    switch (func)
    {
        case GX_TG_MTX2x4:
            SET_REG_FIELD (0x3B8, reg, 1, 1, 0);
            SET_REG_FIELD (0x3B9, reg, 1, 2, form);
            SET_REG_FIELD (0x3BA, reg, 3, 4, 0);
            SET_REG_FIELD (0x3BB, reg, 5, 7, row);
            break;
        case GX_TG_MTX3x4:
            SET_REG_FIELD (0x3BF, reg, 1, 1, 1);
            SET_REG_FIELD (0x3C0, reg, 1, 2, form);
            SET_REG_FIELD (0x3C1, reg, 3, 4, 0);
            SET_REG_FIELD (0x3C2, reg, 5, 7, row);
            break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            ASSERTMSGLINE (0x3CF,
                           src_param >= 12 && src_param <= 18,
                           "GXSetTexCoordGen:  Bump source texture value is invalid");
            SET_REG_FIELD (0x3D0, reg, 1, 1, 0);
            SET_REG_FIELD (0x3D1, reg, 1, 2, form);
            SET_REG_FIELD (0x3D2, reg, 3, 4, 1);
            SET_REG_FIELD (0x3D3, reg, 5, 7, row);
            SET_REG_FIELD (0x3D4, reg, 3, 12, src_param - 12);
            SET_REG_FIELD (0x3D5, reg, 3, 15, func - 2);
            break;
        case GX_TG_SRTG:
            SET_REG_FIELD (0x3D9, reg, 1, 1, 0);
            SET_REG_FIELD (0x3DA, reg, 1, 2, form);
            if (src_param == GX_TG_COLOR0)
            {
                SET_REG_FIELD (0, reg, 3, 4, 2);
            }
            else
            {
                SET_REG_FIELD (0, reg, 3, 4, 3);
            }
            SET_REG_FIELD (0, reg, 5, 7, 2);
            break;
        default:
            ASSERTMSGLINE (0x3E5, 0, "GXSetTexCoordGen:  Invalid function");
            break;
    }
    GX_WRITE_XF_REG (dst_coord + 0x40, reg);
    reg = 0;
    SET_REG_FIELD (0x3F8, reg, 6, 0, pt_texmtx - 64);
    SET_REG_FIELD (0x3F9, reg, 1, 8, normalize);
    GX_WRITE_XF_REG (dst_coord + 0x50, reg);
    switch (dst_coord)
    {
        case GX_TEXCOORD0:
            SET_REG_FIELD (0x402, __GXData->matIdxA, 6, 6, mtx);
            break;
        case GX_TEXCOORD1:
            SET_REG_FIELD (0x403, __GXData->matIdxA, 6, 12, mtx);
            break;
        case GX_TEXCOORD2:
            SET_REG_FIELD (0x404, __GXData->matIdxA, 6, 18, mtx);
            break;
        case GX_TEXCOORD3:
            SET_REG_FIELD (0x405, __GXData->matIdxA, 6, 24, mtx);
            break;
        case GX_TEXCOORD4:
            SET_REG_FIELD (0x406, __GXData->matIdxB, 6, 0, mtx);
            break;
        case GX_TEXCOORD5:
            SET_REG_FIELD (0x407, __GXData->matIdxB, 6, 6, mtx);
            break;
        case GX_TEXCOORD6:
            SET_REG_FIELD (0x408, __GXData->matIdxB, 6, 12, mtx);
            break;
        default:
            SET_REG_FIELD (0x409, __GXData->matIdxB, 6, 18, mtx);
            break;
    }
    mtxIdAttr = dst_coord + 1;
    __GXSetMatrixIndex (mtxIdAttr);
}

void
GXSetNumTexGens (u8 nTexGens)
{
    CHECK_GXBEGIN (0x41B, "GXSetNumTexGens");
    SET_REG_FIELD (0x41D, __GXData->genMode, 4, 0, nTexGens);
    GX_WRITE_XF_REG (0x3F, nTexGens);
    __GXData->dirtyState |= 4;
}
