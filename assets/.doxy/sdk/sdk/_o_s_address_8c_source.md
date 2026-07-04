

# File OSAddress.c

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**os**](dir_c85f9e83f0f4b4374578811cecebda65.md) **>** [**OSAddress.c**](_o_s_address_8c.md)

[Go to the documentation of this file](_o_s_address_8c.md)


```C++
#include <dolphin/os.h>

// undefine the macros so they do not error the file.
#undef OSPhysicalToCached
#undef OSPhysicalToUncached
#undef OSCachedToPhysical
#undef OSUncachedToPhysical
#undef OSCachedToUncached
#undef OSUncachedToCached

void*
OSPhysicalToCached (u32 paddr)
{
    ASSERTMSGLINE (0x2C, paddr < 0x10000000U, "OSPhysicalToCached(): illegal address.");
    return (void*)(paddr + 0x80000000);
}

void*
OSPhysicalToUncached (u32 paddr)
{
    ASSERTMSGLINE (0x3B, paddr < 0x10000000U, "OSPhysicalToUncached(): illegal address.");
    return (void*)(paddr - 0x40000000);
}

u32
OSCachedToPhysical (void* caddr)
{
    ASSERTMSGLINE (0x4A,
                   0x80000000U <= (u32)caddr && (u32)caddr < 0x90000000U,
                   "OSCachedToPhysical(): illegal address.");
    return (u32)caddr + 0x80000000;
}

u32
OSUncachedToPhysical (void* ucaddr)
{
    ASSERTMSGLINE (0x59,
                   0xC0000000U <= (u32)ucaddr && (u32)ucaddr < 0xD0000000U,
                   "OSUncachedToPhysical(): illegal address.");
    return (u32)ucaddr + 0x40000000;
}

void*
OSCachedToUncached (void* caddr)
{
    ASSERTMSGLINE (0x68,
                   0x80000000U <= (u32)caddr && (u32)caddr < 0x90000000U,
                   "OSCachedToUncached(): illegal address.");
    return (void*)((u32)caddr + 0x40000000);
}

void*
OSUncachedToCached (void* ucaddr)
{
    ASSERTMSGLINE (0x77,
                   0xC0000000U <= (u32)ucaddr && (u32)ucaddr < 0xD0000000U,
                   "OSUncachedToCached(): illegal address.");
    return (void*)((u32)ucaddr - 0x40000000);
}
```


