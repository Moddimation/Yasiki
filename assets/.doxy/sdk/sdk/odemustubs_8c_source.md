

# File odemustubs.c

[**File List**](files.md) **>** [**dolphin**](dir_5daac82a3cf194997369e9388ff34711.md) **>** [**odemustubs**](dir_e714c1f9beb349c8f1ac1507912438a5.md) **>** [**odemustubs.c**](odemustubs_8c.md)

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


