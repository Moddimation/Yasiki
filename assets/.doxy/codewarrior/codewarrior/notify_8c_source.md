

# File notify.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**MetroTRK**](dir_c3a70b8fd2ab33ad27dbbbe9970ceb3e.md) **>** [**Src**](dir_106e46045b07ca5148f57373b702a9f2.md) **>** [**Portable**](dir_f12ab36a6648fac4ab89605ba9aeecf6.md) **>** [**notify.c**](notify_8c.md)

[Go to the documentation of this file](notify_8c.md)


```C++
#include "Portable/notify.h"
#include "Portable/msgbuf.h"
#include "Portable/support.h"
#include "Processor/ppc/Generic/targimpl.h"
#include "trk.h"

DSError TRKDoNotifyStopped(MessageCommandID cmd)
{
    DSError err;
    int reqIdx;
    int bufIdx;
    TRKBuffer* msg;

    err = TRKGetFreeBuffer(&bufIdx, &msg);
    if (err == DS_NoError) {
        if (msg->position >= 0x880) {
            err = DS_MessageBufferOverflow;
        } else {
            msg->data[msg->position++] = cmd;
            ++msg->length;
            err = 0;
        }

        if (err == DS_NoError) {
            if (cmd == DSMSG_NotifyStopped) {
                TRKTargetAddStopInfo(msg);
            } else {
                TRKTargetAddExceptionInfo(msg);
            }
        }

        err = TRKRequestSend(msg, &reqIdx, 2, 3, 1);
        if (err == DS_NoError) {
            TRKReleaseBuffer(reqIdx);
        }
        TRKReleaseBuffer(bufIdx);
    }

    return err;
}
```


