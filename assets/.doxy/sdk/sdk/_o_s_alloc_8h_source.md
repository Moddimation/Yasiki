

# File OSAlloc.h

[**File List**](files.md) **>** [**dolphin**](dir_f645f2e507aca82374da44bd9d3eb5ac.md) **>** [**os**](dir_c13ebdd3af764081039ea1aa77ad78f7.md) **>** [**OSAlloc.h**](_o_s_alloc_8h.md)

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


