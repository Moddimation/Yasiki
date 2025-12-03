

# File serpoll.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**MetroTRK**](dir_25028620cc1a8a9857c414f885e69890.md) **>** [**Src**](dir_6f2d6a2144e1eea12d16d0bd9685bdc9.md) **>** [**Portable**](dir_5cbf840bf773d4847fc83ef20b01209e.md) **>** [**serpoll.c**](serpoll_8c.md)

[Go to the documentation of this file](serpoll_8c.md)


```C++
#include "Portable/serpoll.h"
#include "Portable/nubevent.h"
#include "Portable/msgbuf.h"
#include "Portable/msghndlr.h"
#include "Os/dolphin/dolphin_trk_glue.h"
#include "trk.h"

static TRKFramingState gTRKFramingState;

void* gTRKInputPendingPtr;

MessageBufferID TRKTestForPacket()
{
    int bytes;
    int batch;
    int err;
    TRKBuffer* b;
    int id;

    bytes = TRKPollUART();
    if (bytes > 0) {
        TRKGetFreeBuffer(&id, &b);
        if (bytes > TRKMSGBUF_SIZE) {
            for (; bytes > 0; bytes -= batch) {
                batch = bytes > TRKMSGBUF_SIZE ? TRKMSGBUF_SIZE : bytes;
                TRKReadUARTN(b->data, batch);
            }
            TRKStandardACK(b, 0xff, 6);
        } else {
            err = TRKReadUARTN(b->data, bytes);
            if (err == 0) {
                b->length = bytes;
                return id;
            }
        }
    }
    if (id != -1) {
        TRKReleaseBuffer(id);
    }
    return -1;
}

void TRKGetInput(void)
{
    MessageBufferID id;
    TRKBuffer* msgBuffer;
    u8 command;

    id = TRKTestForPacket();
    if (id == -1)
        return;

    msgBuffer = TRKGetBuffer(id);
    TRKSetBufferPosition(msgBuffer, 0);
    TRKReadBuffer1_ui8(msgBuffer, &command);
    if (command < DSMSG_ReplyACK) {
        TRKProcessInput(id);
    } else {
        TRKReleaseBuffer(id);
    }
}

void TRKProcessInput(int bufferIdx)
{
    TRKEvent event;

    TRKConstructEvent(&event, NUBEVENT_Request);
    gTRKFramingState.msgBufID = -1;
    event.msgBufID            = bufferIdx;
    TRKPostEvent(&event);
}

DSError TRKInitializeSerialHandler(void)
{
    gTRKFramingState.msgBufID     = -1;
    gTRKFramingState.receiveState = DSRECV_Wait;
    gTRKFramingState.isEscape     = FALSE;

    return DS_NoError;
}

DSError TRKTerminateSerialHandler(void) { return DS_NoError; }
```


