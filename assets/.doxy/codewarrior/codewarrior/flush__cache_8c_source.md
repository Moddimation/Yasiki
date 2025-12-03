

# File flush\_cache.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**MetroTRK**](dir_25028620cc1a8a9857c414f885e69890.md) **>** [**Src**](dir_6f2d6a2144e1eea12d16d0bd9685bdc9.md) **>** [**Processor**](dir_3f94ce28487c278a20eec907102da23f.md) **>** [**ppc**](dir_3cd1757fc5c55ed777b0117ef4782d6f.md) **>** [**Generic**](dir_1a613ca9a4c46e4fb94e410b208d56c0.md) **>** [**flush\_cache.c**](flush__cache_8c.md)

[Go to the documentation of this file](flush__cache_8c.md)


```C++
#include "Processor/ppc/Generic/flush_cache.h"

asm void TRK_flush_cache(register void* param_1, register int param_2)
{
#ifdef __MWERKS__ // clang-format off
    nofralloc

    lis r5, 0xFFFF
    ori r5, r5, 0xFFF1
    and r5, r5, param_1
    subf r3, r5, param_1
    add r4, param_2, r3

loop:
    dcbst 0, r5
    dcbf 0, r5
    sync
    icbi 0, r5
    addic r5, r5, 8
    addic. r4, r4, -8
    bge loop

    isync
    blr
#endif // clang-format on
}
```


