

# File OSMemory.c

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**os**](dir_c85f9e83f0f4b4374578811cecebda65.md) **>** [**OSMemory.c**](_o_s_memory_8c.md)

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


