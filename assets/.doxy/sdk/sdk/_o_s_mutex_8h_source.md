

# File OSMutex.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**os**](dir_2e13e6cf1d2e2aa91cbc210fef9f68a3.md) **>** [**OSMutex.h**](_o_s_mutex_8h.md)

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


