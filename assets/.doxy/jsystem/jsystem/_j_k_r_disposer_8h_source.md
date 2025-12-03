

# File JKRDisposer.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**JSystem**](dir_2add8750dabb2c81b6f2c3c5af4cfeba.md) **>** [**System**](dir_e5be38218225624e70ebb9ea7ff5d81f.md) **>** [**JKernel**](dir_cddf90ee7c92ffd4474a8c27c5ea5882.md) **>** [**include**](dir_f5aca01ef7e59deeb7bfd439213c8ac0.md) **>** [**JKRDisposer.h**](_j_k_r_disposer_8h.md)

[Go to the documentation of this file](_j_k_r_disposer_8h.md)


```C++
#ifndef __JKR_DISPOSER_H__
#define __JKR_DISPOSER_H__

#include <JSUList.h>

class JKRHeap;

class JKRDisposer
{
    friend class JKRHeap;

protected:
    constructor JKRDisposer ();
    destructor ~JKRDisposer();      

    JKRHeap*             pHeapObj;  
    JSULink<JKRDisposer> mHeapLink; 
};

SASSERT_SIZE (JKRDisposer, 0x18);

#endif
```


