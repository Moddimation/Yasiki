

# File DEMOInit.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**demo**](dir_331bf99e07843061bc97f5d482e7f04d.md) **>** [**DEMOInit.h**](_d_e_m_o_init_8h.md)

[Go to the documentation of this file](_d_e_m_o_init_8h.md)


```C++
#ifndef _DOLPHIN_DEMOINIT_H_
#define _DOLPHIN_DEMOINIT_H_

#include <dolphin/gx.h>

extern void* DemoFrameBuffer1;
extern void* DemoFrameBuffer2;
extern void* DemoCurrentBuffer;

void                     DEMOInit (struct _GXRenderModeObj* mode);
void                     DEMOBeforeRender ();
void                     DEMODoneRender ();
void                     DEMOSwapBuffers ();
void                     DEMOSetTevColorIn (enum _GXTevStageID  stage,
                                            enum _GXTevColorArg a,
                                            enum _GXTevColorArg b,
                                            enum _GXTevColorArg c,
                                            enum _GXTevColorArg d);
void                     DEMOSetTevOp (enum _GXTevStageID id, enum _GXTevMode mode);
struct _GXRenderModeObj* DEMOGetRenderModeObj ();
u32                      DEMOGetCurrentBuffer (void);
void                     DEMOEnableBypassWorkaround (u32 timeoutFrames);
void                     DEMOReInit (struct _GXRenderModeObj* mode);

#endif // _DOLPHIN_DEMOINIT_H_
```


