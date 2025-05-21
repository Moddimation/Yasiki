

# File OSMessage.h

[**File List**](files.md) **>** [**dolphin**](dir_f645f2e507aca82374da44bd9d3eb5ac.md) **>** [**os**](dir_c13ebdd3af764081039ea1aa77ad78f7.md) **>** [**OSMessage.h**](_o_s_message_8h.md)

[Go to the documentation of this file](_o_s_message_8h.md)


```C++
#ifndef _DOLPHIN_OSMESSAGE_H_
#define _DOLPHIN_OSMESSAGE_H_

#include <dolphin/os/OSThread.h>

#ifdef __cplusplus
extern "C"
{
#endif
typedef struct OSMessageQueue
{
    OSThreadQueue queueSend;    
    OSThreadQueue queueReceive; 
    void*         msgArray;     
    s32           msgCount;     
    s32           firstIndex;   
    s32           usedCount;    
} OSMessageQueue;

void OSInitMessageQueue (OSMessageQueue* mq, void* msgArray, s32 msgCount);
int  OSSendMessage (OSMessageQueue* mq, void* msg, s32 flags);
int  OSReceiveMessage (OSMessageQueue* mq, void* msg, s32 flags);
int  OSJamMessage (OSMessageQueue* mq, void* msg, s32 flags);

#ifdef __cplusplus
}
#endif

#endif                          // _DOLPHIN_OSMESSAGE_H_
```


