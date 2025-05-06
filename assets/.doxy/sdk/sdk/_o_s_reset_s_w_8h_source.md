

# File OSResetSW.h

[**File List**](files.md) **>** [**dolphin**](dir_8d73ddf10613ffd25a966cd68a313b8d.md) **>** [**os**](dir_ec7c732b679442ba7b10ef1b15f4b60e.md) **>** [**OSResetSW.h**](_o_s_reset_s_w_8h.md)

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


