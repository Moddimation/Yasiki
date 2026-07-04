

# File PPCArch.c

[**File List**](files.md) **>** [**base**](dir_0f317a44af729fe0eedb252fe661eec4.md) **>** [**PPCArch.c**](_p_p_c_arch_8c.md)

[Go to the documentation of this file](_p_p_c_arch_8c.md)


```C++
#include <dolphin/base/PPCArch.h>

asm u32
PPCMfmsr ()
{
#ifdef __MWERKS__
    nofralloc;
    mfmsr r3;
    blr;
#else
    return 0;
#endif
}

asm void
PPCMtmsr (register u32 newMSR)
{
#ifdef __MWERKS__
    nofralloc;

    mtmsr newMSR;
    blr;
#endif
}

asm u32
PPCOrMsr (register u32 value)
{
#ifdef __MWERKS__
    nofralloc;
    mfmsr r4;
    or value, r4, value;
    blr;
#else
    return 0;
#endif
}

asm u32
PPCAndMsr (register u32 value)
{
#ifdef __MWERKS__
    nofralloc;
    mfmsr r4;
    and value, r4, value;
    blr;
#else
    return 0;
#endif
}

asm u32
PPCAndCMsr (register u32 value)
{
#ifdef __MWERKS__
    nofralloc;
    mfmsr r4;
    andc  value, r4, value;
    blr;
#else
    return 0;
#endif
}

asm u32
PPCMfhid0 ()
{
#ifdef __MWERKS__
    nofralloc;

    mfspr r3, HID0;
    blr;
#else
    return 0;
#endif
}

asm void
PPCMthid0 (register u32 newHID0)
{
#ifdef __MWERKS__
    nofralloc;

    mtspr HID0, newHID0;
    blr;
#endif
}

asm u32
PPCMfhid1 ()
{
#ifdef __MWERKS__
    nofralloc;

    mfspr r3, HID1;
    blr;
#else
    return 0;
#endif
}

asm u32
PPCMfl2cr ()
{
#ifdef __MWERKS__
    nofralloc;

    mfspr r3, L2CR;
    blr;
#else
    return 0;
#endif
}

asm void
PPCMtl2cr (register u32 newL2cr)
{
#ifdef __MWERKS__
    nofralloc;

    mtspr L2CR, newL2cr;
    blr;
#endif
}

asm void
PPCMtdec (register u32 newDec)
{
#ifdef __MWERKS__
    nofralloc;
    mtdec newDec;
    blr;
#endif
}

asm u32
PPCMfdec ()
{
#ifdef __MWERKS__
    nofralloc;
    mfdec r3;
    blr;
#else
    return 0;
#endif
}

asm void
PPCSync ()
{
#ifdef __MWERKS__
    nofralloc;
    sc;
    blr;
#endif
}

asm void
PPCEieio ()
{
#ifdef __MWERKS__
    nofralloc;
    mfmsr  r5;
    rlwinm r6, r5, 0, 17, 15;
    mtmsr  r6;
    mfspr  r3, HID0;
    ori    r4, r3, 0x8;
    mtspr  HID0, r4;
    isync;
    eieio;
    isync;
    mtspr HID0, r3;
    mtmsr r5;
    isync;
    blr;
#endif
}

asm void
PPCHalt ()
{
#ifdef __MWERKS__
    nofralloc;

    sync;

loop:
    nop;
    li r3, 0;
    nop;
    b loop;
#endif
}

asm u32
PPCMfmmcr0 ()
{
#ifdef __MWERKS__
    nofralloc;

    mfspr r3, MMCR0;
    blr;
#else
    return 0;
#endif
}

asm void
PPCMtmmcr0 (register u32 newMmcr0)
{
#ifdef __MWERKS__
    nofralloc;

    mtspr MMCR0, newMmcr0;
    blr;
#endif
}

asm u32
PPCMfmmcr1 ()
{
#ifdef __MWERKS__
    nofralloc;

    mfspr r3, MMCR1;
    blr;
#else
    return 0;
#endif
}

asm void
PPCMtmmcr1 (register u32 newMmcr1)
{
#ifdef __MWERKS__
    nofralloc;

    mtspr MMCR1, newMmcr1;
    blr;
#endif
}

asm u32
PPCMfpmc1 ()
{
#ifdef __MWERKS__
    nofralloc;

    mfspr r3, PMC1;
    blr;
#else
    return 0;
#endif
}

asm void
PPCMtpmc1 (register u32 newPmc1)
{
#ifdef __MWERKS__
    nofralloc;

    mtspr PMC1, newPmc1;
    blr;
#endif
}

asm u32
PPCMfpmc2 ()
{
#ifdef __MWERKS__
    nofralloc;

    mfspr r3, PMC2;
    blr;
#else
    return 0;
#endif
}

asm void
PPCMtpmc2 (register u32 newPmc2)
{
#ifdef __MWERKS__
    nofralloc;

    mtspr PMC2, newPmc2;
    blr;
#endif
}

asm u32
PPCMfpmc3 ()
{
#ifdef __MWERKS__
    nofralloc;

    mfspr r3, PMC3;
    blr;
#else
    return 0;
#endif
}

asm void
PPCMtpmc3 (register u32 newPmc3)
{
#ifdef __MWERKS__
    nofralloc;

    mtspr PMC3, newPmc3;
    blr;
#endif
}

asm u32
PPCMfpmc4 ()
{
#ifdef __MWERKS__
    nofralloc;

    mfspr r3, PMC4;
    blr;
#else
    return 0;
#endif
}

asm void
PPCMtpmc4 (register u32 newPmc4)
{
#ifdef __MWERKS__
    nofralloc;

    mtspr PMC4, newPmc4;
    blr;
#endif
}

asm u32
PPCMfsia ()
{
#ifdef __MWERKS__
    nofralloc;

    mfspr r3, SIA;
    blr;
#else
    return 0;
#endif
}

asm void
PPCMtsia (register u32 newSia)
{
#ifdef __MWERKS__
    nofralloc;

    mtspr SIA, newSia;
    blr;
#endif
}

asm u32
PPCMfhid2 ()
{
#ifdef __MWERKS__
    nofralloc;

    mfspr r3, HID2;
    blr;
#else
    return 0;
#endif
}

asm void
PPCMthid2 (register u32 newhid2)
{
#ifdef __MWERKS__
    nofralloc;

    mtspr HID2, newhid2;
    blr;
#endif
}

asm u32
PPCMfwpar ()
{
#ifdef __MWERKS__
    nofralloc;
    sync;
    mfspr r3, WPAR;
    blr;
#else
    return 0;
#endif
}

asm void
PPCMtwpar (register u32 newwpar)
{
#ifdef __MWERKS__
    nofralloc;

    mtspr WPAR, newwpar;
    blr;
#endif
}

asm u32
PPCMfdmaU ()
{
#ifdef __MWERKS__
    nofralloc;

    mfspr r3, DMA_U;
    blr;
#else
    return 0;
#endif
}

asm u32
PPCMfdmaL ()
{
#ifdef __MWERKS__
    nofralloc;

    mfspr r3, DMA_L;
    blr;
#else
    return 0;
#endif
}

asm void
PPCMtdmaU (register u32 newdmau)
{
#ifdef __MWERKS__
    nofralloc;

    mtspr DMA_U, newdmau;
    blr;
#endif
}

asm void
PPCMtdmaL (register u32 newdmal)
{
#ifdef __MWERKS__
    nofralloc;

    mtspr DMA_L, newdmal;
    blr;
#endif
}

asm u32
PPCMfpvr ()
{
#ifdef __MWERKS__
    nofralloc;

    mfspr r3, PVR;
    blr;
#else
    return 0;
#endif
}
```


