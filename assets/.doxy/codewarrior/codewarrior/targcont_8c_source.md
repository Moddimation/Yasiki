

# File targcont.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_5331e34b666a7435d77010d6d501c7d4.md) **>** [**PowerPC\_EABI\_Support**](dir_5715a3597842aab210f9a54cf5907db0.md) **>** [**MetroTRK**](dir_25028620cc1a8a9857c414f885e69890.md) **>** [**Src**](dir_6f2d6a2144e1eea12d16d0bd9685bdc9.md) **>** [**Os**](dir_c356d50d36c69ac9e068ee6cfcebacd1.md) **>** [**dolphin**](dir_620a2d14b5c78596f4b6e2cb4db579d5.md) **>** [**targcont.c**](targcont_8c.md)

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


