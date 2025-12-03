

# File mem\_TRK.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**MetroTRK**](dir_25028620cc1a8a9857c414f885e69890.md) **>** [**Src**](dir_6f2d6a2144e1eea12d16d0bd9685bdc9.md) **>** [**Portable**](dir_5cbf840bf773d4847fc83ef20b01209e.md) **>** [**mem\_TRK.c**](mem___t_r_k_8c.md)

[Go to the documentation of this file](mem___t_r_k_8c.md)


```C++
#include "Portable/mem_TRK.h"
#include "dolphin/types.h"

void TRK_fill_mem(void* dst, int val, size_t n)
{
    u32 v, i, j;
    v = (u8)val;

    ((u8*)dst) = ((u8*)dst) - 1;

    if (n >= 32) {
        i = (窶ｾ(u32)dst) & 3;

        if (i) {
            n -= i;

            do {
                *++(((u8*)dst)) = v;
            } while (--i);
        }

        if (v)
            v |= v << 24 | v << 16 | v << 8;

        ((u32*)dst) = ((u32*)(((u8*)dst) + 4)) - 1;
        ((u32*)dst) = ((u32*)(((u8*)dst) + 1)) - 1;

        i = n / 32;

        if (i) {
            do {
                for (j = 0; j < 8; j++)
                    *++((u32*)dst) = v;
            } while (--i);
        }

        i = (n / 4) % 8;

        if (i) {
            do {
                *++((u32*)dst) = v;
            } while (--i);
        }

        ((u8*)dst) = ((u8*)(((u32*)dst) + 1)) - 1;

        n %= 4;
    }

    if (n)
        do {
            *++((u8*)dst) = v;
        } while (--n);
}

__declspec(section ".init") void* TRK_memcpy(void* dst, const void* src,
                                             size_t n)
{
    const char* p;
    char* q;

    for (p = (const char*)src - 1, q = (char*)dst - 1, n++; --n;)
        *++q = *++p;

    return dst;
}

__declspec(section ".init") void* TRK_memset(void* dst, int val, size_t n)
{
    TRK_fill_mem(dst, val, n);
    return dst;
}
```


