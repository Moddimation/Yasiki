

# File odemustubs.c

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**odemustubs**](dir_d62956aadbd5559cb3594b91e5ff03d5.md) **>** [**odemustubs.c**](odemustubs_8c.md)

[Go to the documentation of this file](odemustubs_8c.md)


```C++
#include <dolphin/os.h>

s32  Hu_IsStub ();
void DBInitInterrupts ();
s32  DBQueryData ();
u32  DBRead (const u32* data, s32 size);
u32  DBWrite (const s32* data, u32 size);
void DBOpen ();
void DBClose ();

s32
Hu_IsStub ()
{
    return 1;
}

void
DBInitComm (u8** a, MTRCallbackType b)
{}

void
DBInitInterrupts ()
{}

s32
DBQueryData ()
{
    return 0;
}

u32
DBRead (const u32* data, s32 size)
{
    return 0;
}

u32
DBWrite (const s32* data, u32 size)
{
    return 0;
}

void
DBOpen ()
{}

void
DBClose ()
{}
```


