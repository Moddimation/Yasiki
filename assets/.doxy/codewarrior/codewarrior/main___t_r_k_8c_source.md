

# File main\_TRK.c

[**File List**](files.md) **>** [**CodeWarrior**](dir_c5aab8d4319c0669f4501cae4cd3ca21.md) **>** [**PowerPC\_EABI\_Support**](dir_7a6c87a887c36ca33135c86474059f07.md) **>** [**MetroTRK**](dir_c3a70b8fd2ab33ad27dbbbe9970ceb3e.md) **>** [**Src**](dir_106e46045b07ca5148f57373b702a9f2.md) **>** [**Portable**](dir_f12ab36a6648fac4ab89605ba9aeecf6.md) **>** [**main\_TRK.c**](main___t_r_k_8c.md)

[Go to the documentation of this file](main___t_r_k_8c.md)


```C++
#include "Portable/main_TRK.h"
#include "Portable/nubinit.h"

static DSError TRK_mainError;

DSError TRK_main(void)
{
    TRK_mainError = TRKInitializeNub();

    if (TRK_mainError == DS_NoError) {
        TRKNubWelcome();
        TRKNubMainLoop();
    }

    TRK_mainError = TRKTerminateNub();
    return TRK_mainError;
}
```


