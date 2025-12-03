

# File notify.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**MetroTRK**](dir_25028620cc1a8a9857c414f885e69890.md) **>** [**Src**](dir_6f2d6a2144e1eea12d16d0bd9685bdc9.md) **>** [**Portable**](dir_5cbf840bf773d4847fc83ef20b01209e.md) **>** [**notify.c**](notify_8c.md)

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


