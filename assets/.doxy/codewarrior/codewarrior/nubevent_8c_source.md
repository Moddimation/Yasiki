

# File nubevent.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**MetroTRK**](dir_c3a70b8fd2ab33ad27dbbbe9970ceb3e.md) **>** [**Src**](dir_106e46045b07ca5148f57373b702a9f2.md) **>** [**Portable**](dir_f12ab36a6648fac4ab89605ba9aeecf6.md) **>** [**nubevent.c**](nubevent_8c.md)

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


