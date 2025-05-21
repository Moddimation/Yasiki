

# File flush\_cache.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**MetroTRK**](dir_c3a70b8fd2ab33ad27dbbbe9970ceb3e.md) **>** [**Src**](dir_106e46045b07ca5148f57373b702a9f2.md) **>** [**Processor**](dir_5e2470d5a2e9c1fe412cce1dc95066ef.md) **>** [**ppc**](dir_2907991c457a64f2feba231cad2bae37.md) **>** [**Generic**](dir_2a1d7e99c80da236aadcfe5e4900549f.md) **>** [**flush\_cache.c**](flush__cache_8c.md)

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


