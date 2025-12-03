

# File AX.c

[**File List**](files.md) **>** [**ax**](dir_284807f63fc993a939ff676a07eb86c2.md) **>** [**AX.c**](_a_x_8c.md)

[Go to the documentation of this file](_a_x_8c.md)


```C++
#include <dolphin/ax.h>

#include <dolphin.h>

#include "AXPrivate.h"

void
AXInit (void)
{
#ifdef DEBUG
    OSReport ("Initializing AX¥n");
#endif
    __AXAllocInit();
    __AXVPBInit();
    __AXSPBInit();
    __AXAuxInit();
    __AXClInit();
    __AXOutInit();
}

void
AXQuit (void)
{
#ifdef DEBUG
    OSReport ("Shutting down AX¥n");
#endif
    __AXAllocQuit();
    __AXVPBQuit();
    __AXSPBQuit();
    __AXAuxQuit();
    __AXClQuit();
    __AXOutQuit();
}
```


