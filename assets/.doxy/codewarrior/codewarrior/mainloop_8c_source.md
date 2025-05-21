

# File mainloop.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**MetroTRK**](dir_c3a70b8fd2ab33ad27dbbbe9970ceb3e.md) **>** [**Src**](dir_106e46045b07ca5148f57373b702a9f2.md) **>** [**Portable**](dir_f12ab36a6648fac4ab89605ba9aeecf6.md) **>** [**mainloop.c**](mainloop_8c.md)

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


