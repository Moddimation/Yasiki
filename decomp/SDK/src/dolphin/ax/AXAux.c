#include <dolphin/ax.h>

#include <dolphin.h>

#include "AXPrivate.h"

static s32 __AXBufferAuxA[3][480] ATTRIBUTE_ALIGN(32);
static s32 __AXBufferAuxB[3][480] ATTRIBUTE_ALIGN(32);

static void  (*__AXCallbackAuxA)(void*, void*);
static void  (*__AXCallbackAuxB)(void*, void*);
static void* __AXContextAuxA;
static void* __AXContextAuxB;
static s32*  __AXAuxADspWrite;
static s32*  __AXAuxADspRead;
static s32*  __AXAuxBDspWrite;
static s32*  __AXAuxBDspRead;
static u32   __AXAuxDspWritePosition;
static u32   __AXAuxDspReadPosition;
static u32   __AXAuxCpuReadWritePosition;
void
__AXAuxInit(void)
{
    int  i;
    s32* pA;
    s32* pB;

#ifdef DEBUG
    OSReport("Initializing AXAux code module¥n");
#endif
    __AXCallbackAuxA = NULL;
    __AXCallbackAuxB = NULL;
    __AXContextAuxA = 0;
    __AXContextAuxB = 0;
    __AXAuxDspWritePosition = 0;
    __AXAuxDspReadPosition = 1;
    __AXAuxCpuReadWritePosition = 2;
    pA = (s32*)&__AXBufferAuxA;
    pB = (s32*)&__AXBufferAuxB;
    for (i = 0; i < 0x1E0; i++)
    {
        *(pA) = 0;
        pA += 1;
        *(pB) = 0;
        pB += 1;
    }
}
void
__AXAuxQuit(void)
{
#ifdef DEBUG
    OSReport("Shutting down AXAux code module¥n");
#endif
    __AXCallbackAuxA = NULL;
    __AXCallbackAuxB = NULL;
}
void
__AXGetAuxAInput(u32* p)
{
    *p = (u32)&__AXBufferAuxA[__AXAuxDspWritePosition][0];
}
void
__AXGetAuxAOutput(u32* p)
{
    *p = (u32)&__AXBufferAuxA[__AXAuxDspReadPosition][0];
}
void
__AXGetAuxBInput(u32* p)
{
    *p = (u32)&__AXBufferAuxB[__AXAuxDspWritePosition][0];
}
void
__AXGetAuxBOutput(u32* p)
{
    *p = (u32)&__AXBufferAuxB[__AXAuxDspReadPosition][0];
}
void
__AXProcessAux(void)
{
    struct AX_AUX_DATA auxData;

    __AXAuxADspWrite = &__AXBufferAuxA[__AXAuxDspWritePosition][0];
    __AXAuxADspRead = &__AXBufferAuxA[__AXAuxDspReadPosition][0];
    __AXAuxBDspWrite = &__AXBufferAuxB[__AXAuxDspWritePosition][0];
    __AXAuxBDspRead = &__AXBufferAuxB[__AXAuxDspReadPosition][0];
    if (__AXCallbackAuxA)
    {
        auxData.l = &__AXBufferAuxA[__AXAuxCpuReadWritePosition][0];
        auxData.r = &__AXBufferAuxA[__AXAuxCpuReadWritePosition][160];
        auxData.s = &__AXBufferAuxA[__AXAuxCpuReadWritePosition][320];
        DCInvalidateRange(auxData.l, 0x780);
        __AXCallbackAuxA(&auxData.l, __AXContextAuxA);
        DCFlushRangeNoSync(auxData.l, 0x780);
    }
    if (__AXCallbackAuxB && __AXClMode != 4)
    {
        auxData.l = &__AXBufferAuxB[__AXAuxCpuReadWritePosition][0];
        auxData.r = &__AXBufferAuxB[__AXAuxCpuReadWritePosition][160];
        auxData.s = &__AXBufferAuxB[__AXAuxCpuReadWritePosition][320];
        DCInvalidateRange(auxData.l, 0x780);
        __AXCallbackAuxB(&auxData.l, __AXContextAuxB);
        DCFlushRangeNoSync(auxData.l, 0x780);
    }
    __AXAuxDspWritePosition += 1;
    __AXAuxDspWritePosition %= 3;
    __AXAuxDspReadPosition += 1;
    __AXAuxDspReadPosition %= 3;
    __AXAuxCpuReadWritePosition += 1;
    __AXAuxCpuReadWritePosition %= 3;
}
void
AXRegisterAuxACallback(void (*callback)(void*, void*), void* context)
{
    __AXCallbackAuxA = callback;
    __AXContextAuxA = context;
}
void
AXRegisterAuxBCallback(void (*callback)(void*, void*), void* context)
{
    __AXCallbackAuxB = callback;
    __AXContextAuxB = context;
}
