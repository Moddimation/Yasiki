

# File targcont.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**MetroTRK**](dir_c3a70b8fd2ab33ad27dbbbe9970ceb3e.md) **>** [**Src**](dir_106e46045b07ca5148f57373b702a9f2.md) **>** [**Os**](dir_4173fb6fc9fe4035b4517343d839782c.md) **>** [**dolphin**](dir_c716ae41d14fd6656eaafd1819507468.md) **>** [**targcont.c**](targcont_8c.md)

[Go to the documentation of this file](targcont_8c.md)


```C++
#include "Os/dolphin/targcont.h"
#include "Os/dolphin/dolphin_trk_glue.h"
#include "Processor/ppc/Generic/targimpl.h"

DSError TRKTargetContinue(void)
{
    TRKTargetSetStopped(0);
    UnreserveEXI2Port();
    TRKSwapAndGo();
    ReserveEXI2Port();
    return 0;
}
```


