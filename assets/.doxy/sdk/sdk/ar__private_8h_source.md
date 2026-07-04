

# File ar\_private.h

[**File List**](files.md) **>** [**ar**](dir_1f6a6668d55aa42931fc4b14e0914ad0.md) **>** [**ar\_private.h**](ar__private_8h.md)

[Go to the documentation of this file](ar__private_8h.md)


```C++
#ifndef _DOLPHIN_AR_INTERNAL_H_
#define _DOLPHIN_AR_INTERNAL_H_

#include <dolphin/ar.h>

void __ARQPopTaskQueueHi (void);
void __ARQServiceQueueLo (void);
void __ARQCallbackHack (u32 pointerToARQRequest);
void __ARQInterruptServiceRoutine (void);
void __ARQInitTempQueue (void);
void __ARQPushTempQueue (struct ARQRequest* task);

#endif // _DOLPHIN_AR_INTERNAL_H_
```


