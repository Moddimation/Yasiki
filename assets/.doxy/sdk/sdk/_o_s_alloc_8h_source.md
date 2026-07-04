

# File OSAlloc.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**os**](dir_2e13e6cf1d2e2aa91cbc210fef9f68a3.md) **>** [**OSAlloc.h**](_o_s_alloc_8h.md)

[Go to the documentation of this file](_o_s_alloc_8h.md)


```C++
#ifndef _DOLPHIN_OSALLOC_H_
#define _DOLPHIN_OSALLOC_H_

#include <types.h>

typedef int OSHeapHandle;

extern volatile OSHeapHandle __OSCurrHeap;

void* OSAllocFromHeap (int heap, u32 size);
void* OSAllocFixed (void* rstart, void* rend);
void  OSFreeToHeap (int heap, void* ptr);
int   OSSetCurrentHeap (int heap);
void* OSInitAlloc (void* arenaStart, void* arenaEnd, int maxHeaps);
int   OSCreateHeap (void* start, void* end);
void  OSDestroyHeap (int heap);
void  OSAddToHeap (int heap, void* start, void* end);
s32   OSCheckHeap (int heap);
u32   OSReferentSize (void* ptr);
void  OSDumpHeap (int heap);
void  OSVisitAllocated (void (*visitor) (void*, u32));

#define OSAlloc(size) OSAllocFromHeap (__OSCurrHeap, (size))
#define OSFree(ptr)   OSFreeToHeap (__OSCurrHeap, (ptr))

#endif
```


