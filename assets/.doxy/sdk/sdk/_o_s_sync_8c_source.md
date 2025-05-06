

# File OSSync.c

[**File List**](files.md) **>** [**dolphin**](dir_8daa6a5f7f30f79e111d6992c13d512c.md) **>** [**os**](dir_8207759a5d5564400a58f6bb524771f0.md) **>** [**OSSync.c**](_o_s_sync_8c.md)

[Go to the documentation of this file](_o_s_sync_8c.md)


```C++
#include <dolphin/os.h>

#include "OSPrivate.h"

void __OSSystemCallVectorStart ();
void __OSSystemCallVectorEnd ();

static ASM void
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


