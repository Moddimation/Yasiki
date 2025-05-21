

# File boot.cpp

[**File List**](files.md) **>** [**Project**](dir_ffd1f789ec7bd0a45fc6ad92579c5070.md) **>** [**sources**](dir_b8a352f40b7c42104060207e884dd5ae.md) **>** [**Sequence**](dir_069ea159324df66a2e2c8bbda8daeac3.md) **>** [**src**](dir_16484e55db2304538f78b432594aa9a2.md) **>** [**boot.cpp**](boot_8cpp.md)

[Go to the documentation of this file](boot_8cpp.md)


```C++
#include <types.h>

#ifdef __MWERKS__
extern u8 static_data[] ALIGN (32) = {
/*inline sdata.arc bytes*/ #include "Game/sdata.inc"
};
#endif
```


