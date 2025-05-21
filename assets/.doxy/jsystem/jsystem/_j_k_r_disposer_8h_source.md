

# File JKRDisposer.h

[**File List**](files.md) **>** [**include**](dir_aa4045410c0ff4a0352c8e4463772829.md) **>** [**JKRDisposer.h**](_j_k_r_disposer_8h.md)

[Go to the documentation of this file](_j_k_r_disposer_8h.md)


```C++
#ifndef __JKR_DISPOSER_H__
#define __JKR_DISPOSER_H__

#include <JSUList.h>

class JKRHeap;

class JKRDisposer
{
    friend class JKRHeap;

    constructor JKRDisposer ();
    destructor ~JKRDisposer();      

protected:
    JKRHeap*             pHeapObj;  
    JSULink<JKRDisposer> mHeapLink; 
};

SASSERT_SIZE (JKRDisposer, 0x18);

#endif
```


