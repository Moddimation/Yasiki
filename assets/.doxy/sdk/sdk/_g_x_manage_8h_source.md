

# File GXManage.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**gx**](dir_7aad653e595702d688ea3e342b8a405d.md) **>** [**GXManage.h**](_g_x_manage_8h.md)

[Go to the documentation of this file](_g_x_manage_8h.md)


```C++
#ifndef _DOLPHIN_GX_GXMANAGE_H_
#define _DOLPHIN_GX_GXMANAGE_H_

#include <dolphin/gx/GXFifo.h>

#ifdef __cplusplus
extern "C"
{
#endif

typedef void (*GXDrawSyncCallback) (u16 token);
typedef void (*GXDrawDoneCallback) (void);

// Init
BOOL       IsWriteGatherBufferEmpty (void);
GXFifoObj* GXInit (void* base, u32 size);

// Misc
void               GXSetMisc (GXMiscToken token, u32 val);
void               GXFlush (void);
void               GXResetWriteGatherPipe (void);
void               GXAbortFrame (void);
void               GXSetDrawSync (u16 token);
u16                GXReadDrawSync (void);
void               GXSetDrawDone (void);
void               GXWaitDrawDone (void);
void               GXDrawDone (void);
void               GXPixModeSync (void);
void               GXTexModeSync (void);
GXDrawSyncCallback GXSetDrawSyncCallback (GXDrawSyncCallback cb);
GXDrawDoneCallback GXSetDrawDoneCallback (GXDrawDoneCallback cb);

#ifdef __cplusplus
}
#endif

#endif
```


