

# File EnemyTypicalStrategy.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**Project**](dir_b9837e7912a2e62dbadd80ce5876b790.md) **>** [**sources**](dir_e9f5f664b7d8a26223d14dd7fedffb79.md) **>** [**Sato**](dir_db2b09d99d4f302e3c8ada455a38d2b5.md) **>** [**include**](dir_01267fe4f090b7d6fab035c22a09a92f.md) **>** [**EnemyTypicalStrategy.h**](_enemy_typical_strategy_8h.md)

[Go to the documentation of this file](_enemy_typical_strategy_8h.md)


```C++
#ifndef ENEMY_TYPICAL_STRATEGY_H
#define ENEMY_TYPICAL_STRATEGY_H

#include "Koga/CharacterEventObserver.h"
#include "Sato/EnemyStrategy.h"
#include "Sato/EnStrategy.h"

class EnemyTypicalStrategy : public EnemyStrategyDecorator, public Koga::CharacterEventObserver
{
public:
    virtual ~EnemyTypicalStrategy () {}

    virtual bool onFishingBegin (Koga::CharacterEvent* msg);

    EnTsuriStrategies mTsuriStrategies; 
};
#endif
```


