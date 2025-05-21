

# File OSAddress.c

[**File List**](files.md) **>** [**dolphin**](dir_5daac82a3cf194997369e9388ff34711.md) **>** [**os**](dir_2110adc24753dd29d2ec0361943e7a71.md) **>** [**OSAddress.c**](_o_s_address_8c.md)

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


