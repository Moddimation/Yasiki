

# File OSMessage.c

[**File List**](files.md) **>** [**dolphin**](dir_8daa6a5f7f30f79e111d6992c13d512c.md) **>** [**os**](dir_8207759a5d5564400a58f6bb524771f0.md) **>** [**OSMessage.c**](_o_s_message_8c.md)

[Go to the documentation of this file](_o_s_message_8c.md)


```C++
#include <dolphin/os.h>

void
OSInitMessageQueue (OSMessageQueue* mq, void* msgArray, s32 msgCount)
{
    OSInitThreadQueue (&mq->queueSend);
    OSInitThreadQueue (&mq->queueReceive);
    mq->msgArray = msgArray;
    mq->msgCount = msgCount;
    mq->firstIndex = 0;
    mq->usedCount = 0;
}

int
OSSendMessage (OSMessageQueue* mq, void* msg, s32 flags)
{
    int enabled;
    s32 lastIndex;

    enabled = OSDisableInterrupts();
    while (mq->msgCount <= mq->usedCount)
    {
        if (!(flags & 1))
        {
            OSRestoreInterrupts (enabled);
            return 0;
        }
        OSSleepThread (&mq->queueSend);
    }
    lastIndex = (mq->firstIndex + mq->usedCount) % mq->msgCount;
    ((u32*)mq->msgArray)[lastIndex] = (u32)msg;
    mq->usedCount++;
    OSWakeupThread (&mq->queueReceive);
    OSRestoreInterrupts (enabled);
    return 1;
}

int
OSReceiveMessage (OSMessageQueue* mq, void* msg, s32 flags)
{
    int enabled = OSDisableInterrupts();

    while (mq->usedCount == 0)
    {
        if (!(flags & 1))
        {
            OSRestoreInterrupts (enabled);
            return 0;
        }
        OSSleepThread (&mq->queueReceive);
    }
    if (msg != NULL)
    {
        *(u32*)msg = ((u32*)mq->msgArray)[mq->firstIndex];
    }

    mq->firstIndex = (mq->firstIndex + 1) % mq->msgCount;
    mq->usedCount--;
    OSWakeupThread (&mq->queueSend);
    OSRestoreInterrupts (enabled);
    return 1;
}

int
OSJamMessage (OSMessageQueue* mq, void* msg, s32 flags)
{
    int enabled = OSDisableInterrupts();

    while (mq->msgCount <= mq->usedCount)
    {
        if (!(flags & 1))
        {
            OSRestoreInterrupts (enabled);
            return 0;
        }
        OSSleepThread (&mq->queueSend);
    }
    mq->firstIndex = (mq->firstIndex + mq->msgCount - 1) % mq->msgCount;
    ((u32*)mq->msgArray)[mq->firstIndex] = (u32)msg;
    mq->usedCount++;
    OSWakeupThread (&mq->queueReceive);
    OSRestoreInterrupts (enabled);
    return 1;
}
```


