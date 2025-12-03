

# File boot.cpp

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**Project**](dir_b9837e7912a2e62dbadd80ce5876b790.md) **>** [**sources**](dir_e9f5f664b7d8a26223d14dd7fedffb79.md) **>** [**Sequence**](dir_97dc913add40cd0d95713c09792e287f.md) **>** [**src**](dir_931bf6243d3d1186ea5e3b71cb9e5f89.md) **>** [**boot.cpp**](boot_8cpp.md)

[Go to the documentation of this file](boot_8cpp.md)


```C++
#include <types.h>

#ifdef __MWERKS__
extern u8 static_data[] ALIGN (32) = {
#    include "Game/sdata.inc" /*inline sdata.arc bytes*/
};
#endif
```


