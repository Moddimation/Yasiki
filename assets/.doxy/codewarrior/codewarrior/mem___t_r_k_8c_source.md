

# File mem\_TRK.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**MetroTRK**](dir_c3a70b8fd2ab33ad27dbbbe9970ceb3e.md) **>** [**Src**](dir_106e46045b07ca5148f57373b702a9f2.md) **>** [**Portable**](dir_f12ab36a6648fac4ab89605ba9aeecf6.md) **>** [**mem\_TRK.c**](mem___t_r_k_8c.md)

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


