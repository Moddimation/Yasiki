

# File nubevent.h

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**MetroTRK**](dir_25028620cc1a8a9857c414f885e69890.md) **>** [**Priv**](dir_ecf524e1d45118e058413ae4d34b2285.md) **>** [**Portable**](dir_ce9d0fbd51586ee7cfe465fa88acc648.md) **>** [**nubevent.h**](nubevent_8h.md)

[Go to the documentation of this file](nubevent_8h.md)


```C++
#ifndef METROTRK_PORTABLE_NUBEVENT_H
#define METROTRK_PORTABLE_NUBEVENT_H

#include "trk.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef u32 NubEventID;

typedef struct TRKEvent {
    NubEventType eventType;
    NubEventID eventID;
    MessageBufferID msgBufID;
} TRKEvent;

typedef struct TRKEventQueue {
    int _00;
    int count;
    int next;
    TRKEvent events[2];
    NubEventID eventID;
} TRKEventQueue;
extern TRKEventQueue gTRKEventQueue;

BOOL TRKGetNextEvent(TRKEvent* event);
void TRKDestructEvent(TRKEvent*);
void TRKConstructEvent(TRKEvent*, NubEventType);
DSError TRKPostEvent(TRKEvent*);
DSError TRKInitializeEventQueue();

#ifdef __cplusplus
}
#endif

#endif /* METROTRK_PORTABLE_NUBEVENT_H */
```


