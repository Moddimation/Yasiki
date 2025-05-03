#include <dolphin/dvd.h>
#include <dolphin/os.h>

#include <dolphin.h>

#ifdef __MWERKS__
u32 __OSPhysicalMemSize : (OS_BASE_CACHED | 0x0028);
u32 __OSSimulatedMemSize : (OS_BASE_CACHED | 0x00F0);
#endif
u32
OSGetPhysicalMemSize (void)
{
#if DEBUG
    OSBootInfo* BootInfo = (OSBootInfo*)OSPhysicalToCached (0);

    return BootInfo->memorySize;
#else
    return __OSPhysicalMemSize;
#endif
}
u32
OSGetConsoleSimulatedMemSize (void)
{
#if DEBUG
    u32* memSize = (u32*)OSPhysicalToCached (0xF0);

    return *memSize;
#else
    return __OSSimulatedMemSize;
#endif
}
