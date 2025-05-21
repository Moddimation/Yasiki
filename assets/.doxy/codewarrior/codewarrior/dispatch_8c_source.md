

# File dispatch.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**MetroTRK**](dir_c3a70b8fd2ab33ad27dbbbe9970ceb3e.md) **>** [**Src**](dir_106e46045b07ca5148f57373b702a9f2.md) **>** [**Portable**](dir_f12ab36a6648fac4ab89605ba9aeecf6.md) **>** [**dispatch.c**](dispatch_8c.md)

[Go to the documentation of this file](dispatch_8c.md)


```C++
#include "Portable/dispatch.h"
#include "Portable/msgbuf.h"
#include "Portable/msghndlr.h"

u32 gTRKDispatchTableSize;

struct DispatchEntry {
    int (*fn)(TRKBuffer*);
};

struct DispatchEntry gTRKDispatchTable[33] = {
    { &TRKDoUnsupported },   { &TRKDoConnect },        { &TRKDoDisconnect },
    { &TRKDoReset },         { &TRKDoVersions },       { &TRKDoSupportMask },
    { &TRKDoCPUType },       { &TRKDoUnsupported },    { &TRKDoUnsupported },
    { &TRKDoUnsupported },   { &TRKDoUnsupported },    { &TRKDoUnsupported },
    { &TRKDoUnsupported },   { &TRKDoUnsupported },    { &TRKDoUnsupported },
    { &TRKDoUnsupported },   { &TRKDoReadMemory },     { &TRKDoWriteMemory },
    { &TRKDoReadRegisters }, { &TRKDoWriteRegisters }, { &TRKDoUnsupported },
    { &TRKDoUnsupported },   { &TRKDoFlushCache },     { &TRKDoUnsupported },
    { &TRKDoContinue },      { &TRKDoStep },           { &TRKDoStop },
    { &TRKDoUnsupported },   { &TRKDoUnsupported },    { &TRKDoUnsupported },
    { &TRKDoUnsupported },   { &TRKDoUnsupported },
};

DSError TRKInitializeDispatcher()
{
    gTRKDispatchTableSize = 32;
    return DS_NoError;
}

DSError TRKDispatchMessage(TRKBuffer* buffer)
{
    DSError error;
    u8 command;

    error = DS_DispatchError;
    TRKSetBufferPosition(buffer, 0);
    TRKReadBuffer1_ui8(buffer, &command);
    if (command < gTRKDispatchTableSize) {
        error = gTRKDispatchTable[command].fn(buffer);
    }
    return error;
}
```


