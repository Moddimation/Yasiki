

# File EnStrategy.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**Project**](dir_b9837e7912a2e62dbadd80ce5876b790.md) **>** [**sources**](dir_e9f5f664b7d8a26223d14dd7fedffb79.md) **>** [**Sato**](dir_db2b09d99d4f302e3c8ada455a38d2b5.md) **>** [**include**](dir_01267fe4f090b7d6fab035c22a09a92f.md) **>** [**EnStrategy.h**](_en_strategy_8h.md)

[Go to the documentation of this file](_en_strategy_8h.md)


```C++
#ifndef EN_STRATEGY_H
#define EN_STRATEGY_H

#include "dolphin/types.h"

class EnemyStrategy;

class EnStrategyContainer
{
    u8             mBuffer[0x180];
    EnemyStrategy* mpStrategy;

public:
    EnStrategyContainer ();
    virtual ~EnStrategyContainer ();

    virtual s32 getStrategyId (int i_entityIdx) = 0;

    void           destroyStrategy ();
    EnemyStrategy* createStrategy (int i_entityIdx);

    void*
    getBuffer ()
    {
        return mBuffer;
    }

    int
    getBufferSize ()
    {
        return 0x180;
    }
};

class EnTsuriStrategies : public EnStrategyContainer
{
public:
    virtual s32 getStrategyId (int i_entityIdx);
};

class EnAttackStrategies : public EnStrategyContainer
{
public:
    virtual s32 getStrategyId (int i_entityIdx);
};

class EnCondStrategies
{
    u8             mBuffer[0x40];
    EnemyStrategy* mpCondStrategy;

public:
    virtual ~EnCondStrategies ();

    void           destroyCondStrategy ();
    EnemyStrategy* createCondStrategy (int i_condType);

    s32 getCondStrategyId (int i_entityIdx);

    void*
    getBuffer ()
    {
        return mBuffer;
    }

    int
    getBufferSize ()
    {
        return 0x40;
    }
};
#endif
```


