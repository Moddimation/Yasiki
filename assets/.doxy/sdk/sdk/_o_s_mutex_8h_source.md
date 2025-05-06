

# File OSMutex.h

[**File List**](files.md) **>** [**dolphin**](dir_8d73ddf10613ffd25a966cd68a313b8d.md) **>** [**os**](dir_ec7c732b679442ba7b10ef1b15f4b60e.md) **>** [**OSMutex.h**](_o_s_mutex_8h.md)

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


