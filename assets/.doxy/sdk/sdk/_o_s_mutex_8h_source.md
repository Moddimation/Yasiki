

# File OSMutex.h

[**File List**](files.md) **>** [**dolphin**](dir_f645f2e507aca82374da44bd9d3eb5ac.md) **>** [**os**](dir_c13ebdd3af764081039ea1aa77ad78f7.md) **>** [**OSMutex.h**](_o_s_mutex_8h.md)

[Go to the documentation of this file](_o_s_mutex_8h.md)


```C++
#ifndef _DOLPHIN_OSMUTEX_H_
#define _DOLPHIN_OSMUTEX_H_

#include <dolphin/os/OSThread.h>

#ifdef __cplusplus
extern "C"
{
#endif
struct OSMutex
{
    OSThreadQueue queue;  
    OSThread*     thread; 
    s32           count;  
    OSMutexLink   link;   
};

struct OSCond
{
    OSThreadQueue queue;
};

void OSInitMutex (OSMutex* mutex);
void OSLockMutex (OSMutex* mutex);
void OSUnlockMutex (OSMutex* mutex);
BOOL OSTryLockMutex (OSMutex* mutex);
void OSInitCond (struct OSCond* cond);
void OSWaitCond (struct OSCond* cond, struct OSMutex* mutex);
void OSSignalCond (struct OSCond* cond);

#ifdef __cplusplus
}
#endif

#endif
```


