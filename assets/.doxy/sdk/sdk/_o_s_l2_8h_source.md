

# File OSL2.h

[**File List**](files.md) **>** [**dolphin**](dir_f645f2e507aca82374da44bd9d3eb5ac.md) **>** [**os**](dir_c13ebdd3af764081039ea1aa77ad78f7.md) **>** [**OSL2.h**](_o_s_l2_8h.md)

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


