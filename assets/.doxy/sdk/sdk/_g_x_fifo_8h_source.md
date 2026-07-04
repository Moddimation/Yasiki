

# File GXFifo.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**gx**](dir_7aad653e595702d688ea3e342b8a405d.md) **>** [**GXFifo.h**](_g_x_fifo_8h.md)

[Go to the documentation of this file](_g_x_fifo_8h.md)


```C++
#ifndef _DOLPHIN_GX_GXFIFO_H_
#define _DOLPHIN_GX_GXFIFO_H_

#include <dolphin/gx/GXEnum.h>
#include <dolphin/os/OSThread.h>

#ifdef __cplusplus
extern "C"
{
#endif
typedef struct
{
    u8 pad[128];
} GXFifoObj;

typedef void (*GXBreakPtCallback) (void);

void              GXInitFifoBase (GXFifoObj* fifo, void* base, u32 size);
void              GXInitFifoPtrs (GXFifoObj* fifo, void* readPtr, void* writePtr);
void              GXInitFifoLimits (GXFifoObj* fifo, u32 hiWatermark, u32 loWatermark);
void              GXSetCPUFifo (GXFifoObj* fifo);
void              GXSetGPFifo (GXFifoObj* fifo);
void              GXSaveCPUFifo (GXFifoObj* fifo);
void              GXSaveGPFifo (GXFifoObj* fifo);
void              GXGetGPStatus (GXBool* overhi,
                                 GXBool* underlow,
                                 GXBool* readIdle,
                                 GXBool* cmdIdle,
                                 GXBool* brkpt);
void              GXGetFifoStatus (GXFifoObj* fifo,
                                   GXBool*    overhi,
                                   GXBool*    underflow,
                                   u32*       fifoCount,
                                   GXBool*    cpuWrite,
                                   GXBool*    gpRead,
                                   GXBool*    fifowrap);
void              GXGetFifoPtrs (GXFifoObj* fifo, void** readPtr, void** writePtr);
void*             GXGetFifoBase (GXFifoObj* fifo);
u32               GXGetFifoSize (GXFifoObj* fifo);
void              GXGetFifoLimits (GXFifoObj* fifo, u32* hi, u32* lo);
GXBreakPtCallback GXSetBreakPtCallback (GXBreakPtCallback cb);
void              GXEnableBreakPt (void* break_pt);
void              GXDisableBreakPt (void);
OSThread*         GXSetCurrentGXThread (void);
OSThread*         GXGetCurrentGXThread (void);
GXFifoObj*        GXGetCPUFifo (void);
GXFifoObj*        GXGetGPFifo (void);
u32               GXGetOverflowCount (void);
u32               GXResetOverflowCount (void);
volatile void*    GXRedirectWriteGatherPipe (void* ptr);
void              GXRestoreWriteGatherPipe (void);

#ifdef __cplusplus
}
#endif

#endif
```


