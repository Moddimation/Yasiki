

# File GXDispList.h

[**File List**](files.md) **>** [**dolphin**](dir_8d73ddf10613ffd25a966cd68a313b8d.md) **>** [**gx**](dir_049675cf3b51aca8087b2c87edff05c3.md) **>** [**GXDispList.h**](_g_x_disp_list_8h.md)

[Go to the documentation of this file](_g_x_disp_list_8h.md)


```C++
#ifndef _DOLPHIN_GX_GXDISPLIST_H_
#define _DOLPHIN_GX_GXDISPLIST_H_

#include <types.h>

#ifdef __cplusplus
extern "C"
{
#endif

void GXBeginDisplayList (void* list, u32 size);
u32  GXEndDisplayList (void);
void GXCallDisplayList (void* list, u32 nbytes);

#ifdef __cplusplus
}
#endif

#endif
```


