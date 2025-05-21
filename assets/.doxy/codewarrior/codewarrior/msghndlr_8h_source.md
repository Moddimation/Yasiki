

# File msghndlr.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**MetroTRK**](dir_c3a70b8fd2ab33ad27dbbbe9970ceb3e.md) **>** [**Priv**](dir_58866132d53834b5384652e07310e785.md) **>** [**Portable**](dir_209eb07e7fc57e3cf528d8690e13aba6.md) **>** [**msghndlr.h**](msghndlr_8h.md)

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


