

# File perf.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**perf.h**](perf_8h.md)

[Go to the documentation of this file](perf_8h.md)


```C++
#ifndef _DOLPHIN_PERF_H_
#define _DOLPHIN_PERF_H_

#include <dolphin/gx/GXStruct.h>
#include <types.h>

#ifdef __cplusplus
extern "C"
{
#endif

typedef u8 PERFId;

typedef enum
{
    PERF_CPU_EVENT,
    PERF_CPU_GP_EVENT,
    PERF_GP_EVENT
} PerfType;

typedef struct PerfSample
{
    u8  id;                
    u32 cpuTimeStampStart; 
    u32 cpuTimeStampEnd;   
    u32 gpTimeStampStart;  
    u32 gpTimeStampEnd;    
    int interrupted;       
    u32 origcpuStart;      
    u32 origgpStart;       
    u32 cacheMisses[4];    
    u32 instructions[4];   
    u32 cpReq[2];          
    u32 tcReq[2];          
    u32 cpuRdReq[2];       
    u32 cpuWrReq[2];       
    u32 dspReq[2];         
    u32 ioReq[2];          
    u32 viReq[2];          
    u32 peReq[2];          
    u32 rfReq[2];          
    u32 fiReq[2];          
    u32 xfWaitIn[2];       
    u32 xfWaitOut[2];      
    u32 rasBusy[2];        
    u32 rasClocks[2];      
} PerfSample;

struct Frame
{
    // total size: 0x10
    PerfSample* samples;         // offset 0x0, size 0x4
    s32         lastSample;      // offset 0x4, size 0x4
    u32         end;             // offset 0x8, size 0x4
    u32         cachemisscycles; // offset 0xC, size 0x4
};

struct PerfEvent
{
    // total size: 0x10
    char*    name;                      // offset 0x0, size 0x4
    PerfType type;                      // offset 0x4, size 0x4
    s32      currSample;                // offset 0x8, size 0x4
    GXColor  color;                     // offset 0xC, size 0x4
};

typedef void* (*PERFAllocator) (u32 size);
typedef void  (*PERFDeallocator) (void* block);
typedef void  (*PERFDrawCallback) (void);

extern void (*GameDrawInit)();          // size: 0x4, address: 0x14

u32  PERFInit (u32              numSamples,
               u32              numFramesHistory,
               u32              numTypes,
               PERFAllocator    allocator,
               PERFDeallocator  deallocator,
               PERFDrawCallback initDraw);
void PERFEventStart (PERFId id);
void PERFEventEnd (PERFId id);
void PERFSetEvent (PERFId id, char* name, PerfType type);
void PERFStartFrame (void);
void PERFEndFrame (void);
void PERFStartAutoSampling (f32 msInterval);
void PERFStopAutoSampling (void);

void PERFPreDraw ();
void PERFDumpScreen ();
void PERFPostDraw ();
void PERFSetDrawBWBarKey (int tf);
void PERFSetDrawBWBar (int tf);
void PERFSetDrawCPUBar (int tf);
void PERFSetDrawXFBars (int tf);
void PERFSetDrawRASBar (int tf);
void PERFToggleDrawBWBarKey ();
void PERFToggleDrawBWBar ();
void PERFToggleDrawCPUBar ();
void PERFToggleDrawXFBars ();
void PERFToggleDrawRASBar ();

extern struct Frame*     PERFFrames;    // size: 0x4, address: 0x0
extern u32               PERFCurrFrame; // size: 0x4, address: 0x0
extern struct PerfEvent* PERFEvents;    // size: 0x4, address: 0x0

#ifdef __cplusplus
}
#endif

#endif
```


