

# File OSExiAd16.c

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**os**](dir_c85f9e83f0f4b4374578811cecebda65.md) **>** [**OSExiAd16.c**](_o_s_exi_ad16_8c.md)

[Go to the documentation of this file](_o_s_exi_ad16_8c.md)


```C++
#include <dolphin/exi.h>
#include <dolphin/os.h>

static int Initialized;

int AD16Init (void);
int AD16WriteReg (u32 word);
int AD16ReadReg (u32* word);

int
AD16Init (void)
{
    int err;
    u32 cmd;
    u32 id;

    if (Initialized != 0)
    {
        return 1;
    }
    if (EXILock (2, 0, 0) == 0)
    {
        return 0;
    }
    if (EXISelect (2, 0, 0) == 0)
    {
        EXIUnlock (2);
        return 0;
    }
    cmd = 0;
    err = 0;
    err |= !EXIImm (2, &cmd, 2, 1, 0);
    err |= !EXISync (2);
    err |= !EXIImm (2, &id, 4, 0, 0);
    err |= !EXISync (2);
    err |= !EXIDeselect (2);
    EXIUnlock (2);
    if (err != 0 || id != 0x4120000)
    {
        return 0;
    }
    Initialized = 1;
    return 1;
}

int
AD16WriteReg (u32 word)
{
    int err;
    u32 cmd;

    if (Initialized == 0 || EXILock (2, 0, 0) == 0)
    {
        return 0;
    }
    if (EXISelect (2, 0, 3) == 0)
    {
        EXIUnlock (2);
        return 0;
    }
    cmd = 0xA0000000;
    err = 0;
    err |= !EXIImm (2, &cmd, 1, 1, 0);
    err |= !EXISync (2);
    err |= !EXIImm (2, &word, 4, 1, 0);
    err |= !EXISync (2);
    err |= !EXIDeselect (2);
    EXIUnlock (2);
    if (err)
    {
        return 0;
    }
    return 1;
}

int
AD16ReadReg (u32* word)
{
    int err;
    u32 cmd;

    if (Initialized == 0 || EXILock (2, 0, 0) == 0)
    {
        return 0;
    }
    if (EXISelect (2, 0, 3) == 0)
    {
        EXIUnlock (2);
        return 0;
    }
    cmd = 0xA2000000;
    err = 0;
    err |= !EXIImm (2, &cmd, 1, 1, 0);
    err |= !EXISync (2);
    err |= !EXIImm (2, word, 4, 0, 0);
    err |= !EXISync (2);
    err |= !EXIDeselect (2);
    EXIUnlock (2);
    if (err)
    {
        return 0;
    }
    return 1;
}
```


