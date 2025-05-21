

# File OSCache.h

[**File List**](files.md) **>** [**dolphin**](dir_f645f2e507aca82374da44bd9d3eb5ac.md) **>** [**os**](dir_c13ebdd3af764081039ea1aa77ad78f7.md) **>** [**OSCache.h**](_o_s_cache_8h.md)

[Go to the documentation of this file](_o_s_cache_8h.md)


```C++
#ifndef _DOLPHIN_OSCACHE_H_
#define _DOLPHIN_OSCACHE_H_

#include <types.h>

void DCInvalidateRange (void* addr, u32 nBytes);
void DCFlushRange (void* addr, u32 nBytes);
void DCStoreRange (void* addr, u32 nBytes);
void DCFlushRangeNoSync (void* addr, u32 nBytes);
void DCStoreRangeNoSync (void* addr, u32 nBytes);
void DCZeroRange (void* addr, u32 nBytes);
void DCTouchRange (void* addr, u32 nBytes);
void ICInvalidateRange (void* addr, u32 nBytes);

#define LC_BASE_PREFIX 0xE000
#define LC_BASE        (LC_BASE_PREFIX << 16)
#define LCGetBase()    ((void*)LC_BASE)

void LCEnable (void);
void LCDisable (void);
void LCLoadBlocks (void* destTag, void* srcAddr, u32 numBlocks);
void LCStoreBlocks (void* destAddr, void* srcTag, u32 numBlocks);
u32  LCLoadData (void* destAddr, void* srcAddr, u32 nBytes);
u32  LCStoreData (void* destAddr, void* srcAddr, u32 nBytes);
u32  LCQueueLength (void);
void LCQueueWait (u32 len);
void LCFlushQueue (void);
void __OSCacheInit (void);

#endif
```


