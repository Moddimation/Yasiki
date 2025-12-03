

# File msghndlr.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**MetroTRK**](dir_25028620cc1a8a9857c414f885e69890.md) **>** [**Priv**](dir_ecf524e1d45118e058413ae4d34b2285.md) **>** [**Portable**](dir_ce9d0fbd51586ee7cfe465fa88acc648.md) **>** [**msghndlr.h**](msghndlr_8h.md)

[Go to the documentation of this file](msghndlr_8h.md)


```C++
#ifndef METROTRK_PORTABLE_MSGHNDLR_H
#define METROTRK_PORTABLE_MSGHNDLR_H

#include "trk.h"

void SetTRKConnected(BOOL);
BOOL GetTRKConnected(void);
DSError TRKDoUnsupported(TRKBuffer*);
DSError TRKDoSetOption(TRKBuffer*);
DSError TRKDoStop(TRKBuffer*);
DSError TRKDoStep(TRKBuffer*);
DSError TRKDoContinue(TRKBuffer*);
DSError TRKDoWriteRegisters(TRKBuffer*);
DSError TRKDoReadRegisters(TRKBuffer*);
DSError TRKDoFlushCache(TRKBuffer*);
DSError TRKDoWriteMemory(TRKBuffer*);
DSError TRKDoReadMemory(TRKBuffer*);
DSError TRKDoSupportMask(TRKBuffer*);
DSError TRKDoVersions(TRKBuffer*);
DSError TRKDoSupportMask(TRKBuffer*);
DSError TRKDoCPUType(TRKBuffer*);
DSError TRKDoOverride(TRKBuffer*);
DSError TRKDoReset(TRKBuffer*);
DSError TRKDoDisconnect(TRKBuffer*);
DSError TRKDoConnect(TRKBuffer*);
DSError TRKStandardACK(TRKBuffer* buffer, MessageCommandID commandID,
                       DSReplyError replyError);

void OutputData(void* data, int length);

#endif /* METROTRK_PORTABLE_MSGHNDLR_H */
```


