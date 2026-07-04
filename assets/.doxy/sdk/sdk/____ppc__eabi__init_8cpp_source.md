

# File \_\_ppc\_eabi\_init.cpp

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**os**](dir_c85f9e83f0f4b4374578811cecebda65.md) **>** [**init**](dir_2a4304f6eb90ba2fa36075e24b786609.md) **>** [**\_\_ppc\_eabi\_init.cpp**](____ppc__eabi__init_8cpp.md)

[Go to the documentation of this file](____ppc__eabi__init_8cpp.md)


```C++
#include <dolphin/os.h>

#include "OSPrivate.h"

#ifdef __cplusplus
extern "C"
{
#endif
static void __init_cpp (void);
static void __fini_cpp (void);
extern void abort (void);
extern void exit (int status);

__declspec (section ".ctors") extern void (*_ctors[])();
__declspec (section ".dtors") extern void (*_dtors[])();

__declspec (section ".init")

asm void
__init_hardware (void)
{
#ifdef __MWERKS__
    nofralloc;
    mfmsr r0;
    ori   r0, r0, MSR_FP;
    mtmsr r0;
    mflr  r31;
    bl    __OSPSInit;
    bl    __OSCacheInit;
    mtlr  r31;
    blr;
#endif
}

__declspec (section ".init")

asm void
__flush_cache (void* address, u32 size)
{
#pragma unused(address)
#pragma unused(size)

#ifdef __MWERKS__
    nofralloc;
    lis r5, 0xffff;
    ori r5, r5, 0xfff1;
    and r5, r5, r3;
    subf r3, r5, r3;
    add  r4, r4, r3;

rept:
    dcbst 0, r5;
    sync;
    icbi 0, r5;
    addic r5, r5, 0x8;
    subic.r4, r4, 0x8;
    bge rept;
    isync;
    blr;
#endif
}

void
__init_user (void)
{
#if defined(__cplusplus)
    __init_cpp();
#endif
}

static void
__init_cpp (void)
{
    void (**constructor)();

    for (constructor = _ctors; *constructor; constructor++) { (*constructor)(); }
}

static void
__fini_cpp (void)
{
    void (**destructor)();

    for (destructor = _dtors; *destructor; destructor++) { (*destructor)(); }
}

__declspec (weak) void
abort (void)
{
    _ExitProcess();
}

__declspec (weak) void
exit (int status)
{
#pragma unused(status)

#if defined(__cplusplus)
    __fini_cpp();
#endif
    _ExitProcess();
}

void
_ExitProcess (void)
{
    PPCHalt();
}

#ifdef __cplusplus
}
#endif
```


