

# File nubevent.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**MetroTRK**](dir_25028620cc1a8a9857c414f885e69890.md) **>** [**Src**](dir_6f2d6a2144e1eea12d16d0bd9685bdc9.md) **>** [**Portable**](dir_5cbf840bf773d4847fc83ef20b01209e.md) **>** [**nubevent.c**](nubevent_8c.md)

[Go to the documentation of this file](nubevent_8c.md)


```C++
#include "Portable/nubevent.h"
#include "Portable/mutex_TRK.h"
#include "Portable/msgbuf.h"
#include "Portable/mem_TRK.h"

TRKEventQueue gTRKEventQueue;

DSError TRKInitializeEventQueue()
{
    TRKInitializeMutex(&gTRKEventQueue);
    TRKAcquireMutex(&gTRKEventQueue);
    gTRKEventQueue.count   = 0;
    gTRKEventQueue.next    = 0;
    gTRKEventQueue.eventID = 0x100;
    TRKReleaseMutex(&gTRKEventQueue);
    return DS_NoError;
}

void TRKCopyEvent(TRKEvent* dstEvent, const TRKEvent* srcEvent)
{
    TRK_memcpy(dstEvent, srcEvent, sizeof(TRKEvent));
}

BOOL TRKGetNextEvent(TRKEvent* event)
{
    BOOL status = 0;
    TRKAcquireMutex(&gTRKEventQueue);
    if (0 < gTRKEventQueue.count) {
        TRKCopyEvent(event, &gTRKEventQueue.events[gTRKEventQueue.next]);
        gTRKEventQueue.count--;
        gTRKEventQueue.next++;
        if (gTRKEventQueue.next == 2)
            gTRKEventQueue.next = 0;

        status = 1;
    }
    TRKReleaseMutex(&gTRKEventQueue);
    return status;
}

DSError TRKPostEvent(TRKEvent* event)
{
    DSError ret = DS_NoError;
    int nextEventID;

    TRKAcquireMutex(&gTRKEventQueue);

    if (gTRKEventQueue.count == 2) {
        ret = DS_EventQueueFull;
    } else {
        nextEventID = (gTRKEventQueue.next + gTRKEventQueue.count) % 2;
        TRKCopyEvent(&gTRKEventQueue.events[nextEventID], event);
        gTRKEventQueue.events[nextEventID].eventID = gTRKEventQueue.eventID;
        gTRKEventQueue.eventID++;
        if (gTRKEventQueue.eventID < 0x100)
            gTRKEventQueue.eventID = 0x100;

        gTRKEventQueue.count++;
    }

    TRKReleaseMutex(&gTRKEventQueue);
    return ret;
}

void TRKConstructEvent(TRKEvent* event, NubEventType eventType)
{
    event->eventType = eventType;
    event->eventID   = 0;
    event->msgBufID  = -1;
}

void TRKDestructEvent(TRKEvent* event) { TRKReleaseBuffer(event->msgBufID); }
```


