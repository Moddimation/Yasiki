

# File OSL2.h

[**File List**](files.md) **>** [**dolphin**](dir_8d73ddf10613ffd25a966cd68a313b8d.md) **>** [**os**](dir_ec7c732b679442ba7b10ef1b15f4b60e.md) **>** [**OSL2.h**](_o_s_l2_8h.md)

[Go to the documentation of this file](_o_s_l2_8h.md)


```C++
#ifndef _DOLPHIN_OSL2_H_
#define _DOLPHIN_OSL2_H_

#include <types.h>

#ifdef __cplusplus
extern "C"
{
#endif

void L2Enable (void);
void L2Disable (void);
void L2GlobalInvalidate (void);
void L2SetDataOnly (BOOL dataOnly);
void L2SetWriteThrough (BOOL writeThrough);

#ifdef __cplusplus
}
#endif

#endif
```


