

# File OSLC.h

[**File List**](files.md) **>** [**dolphin**](dir_f645f2e507aca82374da44bd9d3eb5ac.md) **>** [**os**](dir_c13ebdd3af764081039ea1aa77ad78f7.md) **>** [**OSLC.h**](_o_s_l_c_8h.md)

[Go to the documentation of this file](_o_s_l_c_8h.md)


```C++
#ifndef _DOLPHIN_OSLC_H_
#define _DOLPHIN_OSLC_H_

#include <types.h>

#ifdef __cplusplus
extern "C"
{
#endif

void LCAllocOneTag (BOOL invalidate, void* tag);
void LCAllocTags (BOOL invalidate, void* startTag, u32 numBlocks);
void LCAlloc (void* addr, u32 nBytes);
void LCAllocNoInvalidate (void* addr, u32 nBytes);

#ifdef __cplusplus
}
#endif

#endif
```


