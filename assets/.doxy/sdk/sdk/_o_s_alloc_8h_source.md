

# File OSAlloc.h

[**File List**](files.md) **>** [**dolphin**](dir_8d73ddf10613ffd25a966cd68a313b8d.md) **>** [**os**](dir_ec7c732b679442ba7b10ef1b15f4b60e.md) **>** [**OSAlloc.h**](_o_s_alloc_8h.md)

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


