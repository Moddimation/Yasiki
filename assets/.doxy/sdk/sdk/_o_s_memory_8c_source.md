

# File OSMemory.c

[**File List**](files.md) **>** [**dolphin**](dir_8daa6a5f7f30f79e111d6992c13d512c.md) **>** [**os**](dir_8207759a5d5564400a58f6bb524771f0.md) **>** [**OSMemory.c**](_o_s_memory_8c.md)

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


