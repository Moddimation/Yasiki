

# File GXDispList.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**gx**](dir_7aad653e595702d688ea3e342b8a405d.md) **>** [**GXDispList.h**](_g_x_disp_list_8h.md)

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


