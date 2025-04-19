#include <macros.h>

#include "dolphin/gx/GXFifo.h"
#include <dolphin/gx.h>
#include <dolphin/os.h>

#include "GXPrivate.h"
#include <string.h>

static __GXFifoObj           DIsplayListFifo;
static volatile __GXFifoObj* OldCPUFifo;
static GXData                __savedGXdata;

void                         GXBeginDisplayList(void* list, u32 size)
{
    GXFifoObj* fifo = (GXFifoObj*)GXGetCPUFifo();

    CHECK_GXBEGIN(137, "GXBeginDisplayList");
    ASSERTMSGLINE(138, ! __GXData->inDispList, "GXBeginDisplayList: display list already in progress");
    ASSERTMSGLINE(139, (size & 0x1F) == 0, "GXBeginDisplayList: size is not 32 byte aligned");
    ASSERTMSGLINE(140, ((u32)list & 0x1F) == 0, "GXBeginDisplayList: list is not 32 byte aligned");

    if (__GXData->dirtyState != 0)
    {
        __GXSetDirtyState();
    }
    if (__GXData->dlSaveContext != 0)
    {
        memcpy(&__savedGXdata, __GXData, sizeof(__savedGXdata));
    }
}

u32 GXEndDisplayList(void)
{
    return 0;
}

void GXCallDisplayList(void* list, u32 nbytes)
{
    CHECK_GXBEGIN(0xEC, "GXCallDisplayList");

    if (__GXData->dirtyState != 0)
    {
        __GXSetDirtyState();
    }

    if (*(u32*)&__GXData->vNum != 0) // checks both vNum and bpSent
    {
        __GXSendFlushPrim();
    }
    GX_WRITE_U8(0x40);
    GX_WRITE_U32(list);
    GX_WRITE_U32(nbytes);
}
