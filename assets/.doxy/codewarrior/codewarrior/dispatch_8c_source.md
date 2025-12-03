

# File dispatch.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**MetroTRK**](dir_25028620cc1a8a9857c414f885e69890.md) **>** [**Src**](dir_6f2d6a2144e1eea12d16d0bd9685bdc9.md) **>** [**Portable**](dir_5cbf840bf773d4847fc83ef20b01209e.md) **>** [**dispatch.c**](dispatch_8c.md)

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


