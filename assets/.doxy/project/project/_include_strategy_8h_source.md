

# File IncludeStrategy.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**Project**](dir_b9837e7912a2e62dbadd80ce5876b790.md) **>** [**sources**](dir_e9f5f664b7d8a26223d14dd7fedffb79.md) **>** [**Koga**](dir_9fe0a947080822e90509f3f3e5cdb9ae.md) **>** [**include**](dir_ac979847baa7fefd28f0aba72629da54.md) **>** [**IncludeStrategy.h**](_include_strategy_8h.md)

[Go to the documentation of this file](_include_strategy_8h.md)


```C++
#ifndef INCLUDE_STRATEGY_H_
#define INCLUDE_STRATEGY_H_

#include "dolphin/types.h"

class EnemyStrategy;

class IncludeStrategy
{
    u8             mStrategyMemory[0x800];
    EnemyStrategy* mpStrategy;

public:
    IncludeStrategy ();

    virtual ~IncludeStrategy ();
    virtual void unknownVirtualFunc () = 0;

    void setStrategy (int i_entityIdx);
    void destroyStrategy ();

    void*
    getBuffer ()
    {
        return mStrategyMemory;
    }
};
#endif
```


