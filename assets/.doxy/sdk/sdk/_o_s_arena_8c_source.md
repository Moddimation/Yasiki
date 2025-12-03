

# File OSArena.c

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**os**](dir_c85f9e83f0f4b4374578811cecebda65.md) **>** [**OSArena.c**](_o_s_arena_8c.md)

[Go to the documentation of this file](_o_s_arena_8c.md)


```C++
#include <dolphin/os.h>

#define ROUND(n, a) (((u32)(n) + (a) - 1) & ~((a) - 1))
#define TRUNC(n, a) (((u32)(n)) & ~((a) - 1))

static void* __OSArenaHi;
static void* __OSArenaLo = (void*)-1;

void*
OSGetArenaHi ()
{
    ASSERTMSGLINE (0x37,
                   (u32)__OSArenaLo != -1,
                   "OSGetArenaHi(): OSInit() must be called in advance.");
    ASSERTMSGLINE (0x39,
                   (u32)__OSArenaLo <= (u32)__OSArenaHi,
                   "OSGetArenaHi(): invalid arena (hi < lo).");

    return __OSArenaHi;
}

void*
OSGetArenaLo ()
{
    ASSERTMSGLINE (0x49,
                   (u32)__OSArenaLo != -1,
                   "OSGetArenaLo(): OSInit() must be called in advance.");
    ASSERTMSGLINE (0x4B,
                   (u32)__OSArenaLo <= (u32)__OSArenaHi,
                   "OSGetArenaLo(): invalid arena (hi < lo).");
    return __OSArenaLo;
}

void
OSSetArenaHi (void* newHi)
{
    __OSArenaHi = newHi;
}

void
OSSetArenaLo (void* newLo)
{
    __OSArenaLo = newLo;
}

void*
OSAllocFromArenaLo (u32 size, u32 align)
{
    void* ptr;
    u8*   arenaLo;

    ptr = OSGetArenaLo();
    arenaLo = ptr = (void*)ROUND (ptr, align);
    arenaLo += size;
    arenaLo = (u8*)ROUND (arenaLo, align);
    OSSetArenaLo (arenaLo);

    return ptr;
}

void*
OSAllocFromArenaHi (u32 size, u32 align)
{
    void* ptr;
    u8*   arenaHi;

    arenaHi = OSGetArenaHi();
    arenaHi = (u8*)TRUNC (arenaHi, align);
    arenaHi -= size;
    arenaHi = ptr = (void*)TRUNC (arenaHi, align);
    OSSetArenaHi (arenaHi);

    return ptr;
}
```


