

# File JKRDisposer.cpp

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**JSystem**](dir_2add8750dabb2c81b6f2c3c5af4cfeba.md) **>** [**System**](dir_e5be38218225624e70ebb9ea7ff5d81f.md) **>** [**JKernel**](dir_cddf90ee7c92ffd4474a8c27c5ea5882.md) **>** [**src**](dir_2af99252d1c483de143a7a3f414b45a2.md) **>** [**JKRDisposer.cpp**](_j_k_r_disposer_8cpp.md)

[Go to the documentation of this file](_j_k_r_disposer_8cpp.md)


```C++
#include <dolphin.h>
#include <macros.h>

#include <JKRDisposer.h>
#include <JKRHeap.h>

#include <stddef.h>

JKRDisposer::JKRDisposer ()
  : mHeapLink (this)
{
    pHeapObj = JKRHeap::findFromRoot (this);
    if (pHeapObj != Nil)
    {
        pHeapObj->appendDisposer (this);
    }
}

JKRDisposer::~JKRDisposer ()
{
    if (pHeapObj != Nil)
    {
        pHeapObj->removeDisposer (this);
    }
}
```


