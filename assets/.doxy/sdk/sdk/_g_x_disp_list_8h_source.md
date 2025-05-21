

# File GXDispList.h

[**File List**](files.md) **>** [**dolphin**](dir_f645f2e507aca82374da44bd9d3eb5ac.md) **>** [**gx**](dir_9c5d6c2893da168c7817d80a53db0c8c.md) **>** [**GXDispList.h**](_g_x_disp_list_8h.md)

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


