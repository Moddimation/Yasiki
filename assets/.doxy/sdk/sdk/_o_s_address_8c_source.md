

# File OSAddress.c

[**File List**](files.md) **>** [**dolphin**](dir_8daa6a5f7f30f79e111d6992c13d512c.md) **>** [**os**](dir_8207759a5d5564400a58f6bb524771f0.md) **>** [**OSAddress.c**](_o_s_address_8c.md)

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


