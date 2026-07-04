

# File OSResetSW.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**include**](dir_9b186dc3f3e3b6d33b9081cb8e685142.md) **>** [**dolphin**](dir_47b271ade99b633966c54f819f725c3c.md) **>** [**os**](dir_2e13e6cf1d2e2aa91cbc210fef9f68a3.md) **>** [**OSResetSW.h**](_o_s_reset_s_w_8h.md)

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


