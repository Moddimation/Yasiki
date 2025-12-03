

# File OSSync.c

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**os**](dir_c85f9e83f0f4b4374578811cecebda65.md) **>** [**OSSync.c**](_o_s_sync_8c.md)

[Go to the documentation of this file](_o_s_sync_8c.md)


```C++
#include <dolphin/os.h>

#include <string.h>

#include "OSPrivate.h"

void __OSSystemCallVectorStart ();
void __OSSystemCallVectorEnd ();

static asm void
SystemCallVector (void)
{
#ifdef __MWERKS__
    entry __OSSystemCallVectorStart;
    nofralloc;
    mfspr r9, HID0;
    ori   r10, r9, 0x8;
    mtspr HID0, r10;
    isync;
    sync;
    mtspr HID0, r9;
    rfi;
    entry __OSSystemCallVectorEnd;
    nop;
#endif
}

void
__OSInitSystemCall (void)
{
    void* addr = (void*)OSPhysicalToCached (0xC00);

    memcpy (addr,
            __OSSystemCallVectorStart,
            (u32)&__OSSystemCallVectorEnd - (u32)&__OSSystemCallVectorStart);
    DCFlushRangeNoSync (addr, 0x100);
    __sync();
    ICInvalidateRange (addr, 0x100);
}
```


