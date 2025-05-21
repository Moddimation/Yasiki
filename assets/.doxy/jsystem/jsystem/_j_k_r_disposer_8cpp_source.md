

# File JKRDisposer.cpp

[**File List**](files.md) **>** [**JKernel**](dir_3e30b8d68747de64b6669890a2c0061c.md) **>** [**src**](dir_0d5cb2348a4682995b8ca3021f0b7bbf.md) **>** [**JKRDisposer.cpp**](_j_k_r_disposer_8cpp.md)

[Go to the documentation of this file](_j_k_r_disposer_8cpp.md)


```C++
#include <dolphin.h>
#include <macros.h>

#include <JKRDisposer.h>
#include <JKRHeap.h>

#include <stddef.h>

JKRDisposer::JKRDisposer () : mHeapLink (this)
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


