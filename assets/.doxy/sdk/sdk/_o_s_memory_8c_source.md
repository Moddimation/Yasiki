

# File OSMemory.c

[**File List**](files.md) **>** [**dolphin**](dir_5daac82a3cf194997369e9388ff34711.md) **>** [**os**](dir_2110adc24753dd29d2ec0361943e7a71.md) **>** [**OSMemory.c**](_o_s_memory_8c.md)

[Go to the documentation of this file](_o_s_memory_8c.md)


```C++
#include "dolphin/types.h"
#include <dolphin/dvd.h>
#include <dolphin/os.h>

u32 __OSPhysicalMemSize  AT_ADDRESS (OS_BASE_CACHED | 0x0028);
u32 __OSSimulatedMemSize AT_ADDRESS (OS_BASE_CACHED | 0x00F0);

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
```


