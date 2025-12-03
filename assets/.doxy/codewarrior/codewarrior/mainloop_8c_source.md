

# File mainloop.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**MetroTRK**](dir_25028620cc1a8a9857c414f885e69890.md) **>** [**Src**](dir_6f2d6a2144e1eea12d16d0bd9685bdc9.md) **>** [**Portable**](dir_5cbf840bf773d4847fc83ef20b01209e.md) **>** [**mainloop.c**](mainloop_8c.md)

[Go to the documentation of this file](mainloop_8c.md)


```C++
#include "Portable/serpoll.h"
#include "Portable/msgbuf.h"
#include "Portable/dispatch.h"
#include "Os/dolphin/targcont.h"
#include "Processor/ppc/Generic/targimpl.h"

void TRKHandleRequestEvent(TRKEvent* event)
{
    TRKBuffer* buffer = TRKGetBuffer(event->msgBufID);
    TRKDispatchMessage(buffer);
}

void TRKHandleSupportEvent(TRKEvent* event) { TRKTargetSupportRequest(); }

void TRKIdle()
{
    if (TRKTargetStopped() == FALSE) {
        TRKTargetContinue();
    }
}

void TRKNubMainLoop(void)
{
    void* msg;
    TRKEvent event;
    BOOL isShutdownRequested;
    BOOL isNewInput;

    isShutdownRequested = FALSE;
    isNewInput          = FALSE;
    while (isShutdownRequested == FALSE) {
        if (TRKGetNextEvent(&event) != FALSE) {
            isNewInput = FALSE;

            switch (event.eventType) {
            case NUBEVENT_Null:
                break;

            case NUBEVENT_Request:
                TRKHandleRequestEvent(&event);
                break;

            case NUBEVENT_Shutdown:
                isShutdownRequested = TRUE;
                break;

            case NUBEVENT_Breakpoint:
            case NUBEVENT_Exception:
                TRKTargetInterrupt(&event);
                break;

            case NUBEVENT_Support:
                TRKHandleSupportEvent(&event);
                break;
            }

            TRKDestructEvent(&event);
            continue;
        }

        if ((isNewInput == FALSE) || (*(u8*)gTRKInputPendingPtr != 'ﾂ･0')) {
            isNewInput = TRUE;
            TRKGetInput();
            continue;
        }

        TRKIdle();
        isNewInput = FALSE;
    }
}
```


