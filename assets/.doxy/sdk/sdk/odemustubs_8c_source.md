

# File odemustubs.c

[**File List**](files.md) **>** [**dolphin**](dir_8daa6a5f7f30f79e111d6992c13d512c.md) **>** [**odemustubs**](dir_696235f150be0d154e850f20cfd13457.md) **>** [**odemustubs.c**](odemustubs_8c.md)

[Go to the documentation of this file](odemustubs_8c.md)


```C++
#include <dolphin.h>

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
{
}

void
DBInitInterrupts ()
{
}

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
{
}

void
DBClose ()
{
}
```


