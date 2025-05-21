

# File OSResetSW.h

[**File List**](files.md) **>** [**dolphin**](dir_f645f2e507aca82374da44bd9d3eb5ac.md) **>** [**os**](dir_c13ebdd3af764081039ea1aa77ad78f7.md) **>** [**OSResetSW.h**](_o_s_reset_s_w_8h.md)

[Go to the documentation of this file](_o_s_reset_s_w_8h.md)


```C++
#ifndef _DOLPHIN_OSRESETSW_H_
#define _DOLPHIN_OSRESETSW_H_

#include <types.h>

#ifdef __cplusplus
extern "C"
{
#endif

typedef void (*OSResetCallback) (void);

OSResetCallback OSSetResetCallback (OSResetCallback callback);
BOOL            OSGetResetSwitchState ();
BOOL            OSGetResetButtonState (void);

#ifdef __cplusplus
}
#endif

#endif
```


