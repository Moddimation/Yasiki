#include <dolphin/gx.h>
#include <dolphin/os.h>

#include "GXPrivate.h"

void
__GXSetDirtyState (void)
{
    if (__GXData->dirtyState & 1)
    {
        __GXSetSUTexRegs();
    }
    if (__GXData->dirtyState & 2)
    {
        __GXUpdateBPMask();
    }
    if (__GXData->dirtyState & 4)
    {
        __GXSetGenMode();
    }
    if (__GXData->dirtyState & 8)
    {
        __GXSetVCD();
    }
    if (__GXData->dirtyState & 0x10)
    {
        __GXSetVAT();
    }
    __GXData->dirtyState = 0;
}

void
GXBegin (GXPrimitive type, GXVtxFmt vtxfmt, u16 nverts)
{
    ASSERTMSGLINE (0x157, vtxfmt < 8, "GXBegin: Format Index is out of range");
    ASSERTMSGLINE (0x158, !__GXinBegin, "GXBegin: called inside another GXBegin/GXEnd");

    if (__GXData->dirtyState != 0)
    {
        __GXSetDirtyState();
    }
#if DEBUG
    if (!__GXData->inDispList)
    {
        __GXVerifyState (vtxfmt);
    }
    __GXinBegin = 1;
#endif
    if (*(u32*)&__GXData->vNum != 0)
    { // checks both vNum and bpSent
        __GXSendFlushPrim();
    }
    GX_WRITE_U8 (vtxfmt | type);
    GX_WRITE_U16 (nverts);
}

void
__GXSendFlushPrim (void)
{
    u32 i;
    u32 numD = __GXData->vNum * __GXData->vLim;

    GX_WRITE_U8 (0x98);
    GX_WRITE_U16 (__GXData->vNum);
    for (i = 0; i < numD; i += 4) { GX_WRITE_U32 (0); }
    __GXData->bpSent = 0;
}

void
GXSetLineWidth (u8 width, GXTexOffset texOffsets)
{
    CHECK_GXBEGIN (0x1A8, "GXSetLineWidth");
    SET_REG_FIELD (0x1A9, __GXData->lpSize, 8, 0, width);
    SET_REG_FIELD (0x1AA, __GXData->lpSize, 3, 16, texOffsets);
    GX_WRITE_RAS_REG (__GXData->lpSize);
    __GXData->bpSent = 1;
}

void
GXGetLineWidth (u8* width, GXTexOffset* texOffsets)
{
    ASSERTMSGLINE (0x1BF, width != NULL && texOffsets != NULL, "GXGet*: invalid null pointer");

    *width      = (u8)GET_REG_FIELD (__GXData->lpSize, 8, 0);
    *texOffsets = (GXTexOffset)GET_REG_FIELD (__GXData->lpSize, 3, 16);
}

void
GXSetPointSize (u8 pointSize, GXTexOffset texOffsets)
{
    CHECK_GXBEGIN (0x1D4, "GXSetPointSize");
    SET_REG_FIELD (0x1D5, __GXData->lpSize, 8, 8, pointSize);
    SET_REG_FIELD (0x1D6, __GXData->lpSize, 3, 19, texOffsets);
    GX_WRITE_RAS_REG (__GXData->lpSize);
    __GXData->bpSent = 1;
}

void
GXGetPointSize (u8* pointSize, GXTexOffset* texOffsets)
{
    ASSERTMSGLINE (0x1EB,
                   pointSize != NULL && texOffsets != NULL,
                   "GXGet*: invalid null pointer");

    *pointSize  = (u8)GET_REG_FIELD (__GXData->lpSize, 8, 8);
    *texOffsets = (GXTexOffset)GET_REG_FIELD (__GXData->lpSize, 3, 19);
}

void
GXEnableTexOffsets (GXTexCoordID coord, u8 line_enable, u8 point_enable)
{
    CHECK_GXBEGIN (0x201, "GXEnableTexOffsets");

    ASSERTMSGLINE (0x203, coord < 8, "GXEnableTexOffsets: Invalid coordinate Id");

    SET_REG_FIELD (0x205, __GXData->suTs0[coord], 1, 18, line_enable);
    SET_REG_FIELD (0x206, __GXData->suTs0[coord], 1, 19, point_enable);
    GX_WRITE_RAS_REG (__GXData->suTs0[coord]);
    __GXData->bpSent = 1;
}

void
GXSetCullMode (GXCullMode mode)
{
    GXCullMode hwMode;

    CHECK_GXBEGIN (0x21D, "GXSetCullMode");
    switch (mode)
    {
        case GX_CULL_FRONT:
            hwMode = GX_CULL_BACK;
            break;
        case GX_CULL_BACK:
            hwMode = GX_CULL_FRONT;
            break;
        default:
            hwMode = mode;
            break;
    }
    SET_REG_FIELD (0x225, __GXData->genMode, 2, 14, hwMode);
    __GXData->dirtyState |= 4;
}

void
GXGetCullMode (GXCullMode* mode)
{
    GXCullMode hwMode = (GXCullMode)GET_REG_FIELD (__GXData->genMode, 2, 14);

    switch (hwMode)
    {
        case GX_CULL_FRONT:
            *mode = GX_CULL_BACK;
            break;
        case GX_CULL_BACK:
            *mode = GX_CULL_FRONT;
            break;
        default:
            *mode = hwMode;
            break;
    }
}

void
GXSetCoPlanar (GXBool enable)
{
    u32 reg;

    CHECK_GXBEGIN (0x24A, "GXSetCoPlanar");

    SET_REG_FIELD (0x24C, __GXData->genMode, 1, 19, enable);
    reg = 0xFE080000;
    GX_WRITE_RAS_REG (reg);
    GX_WRITE_RAS_REG (__GXData->genMode);
}

void
__GXSetGenMode (void)
{
    GX_WRITE_RAS_REG (__GXData->genMode);
    __GXData->bpSent = 1;
}
