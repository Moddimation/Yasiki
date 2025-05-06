

# File OSLC.h

[**File List**](files.md) **>** [**dolphin**](dir_8d73ddf10613ffd25a966cd68a313b8d.md) **>** [**os**](dir_ec7c732b679442ba7b10ef1b15f4b60e.md) **>** [**OSLC.h**](_o_s_l_c_8h.md)

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


