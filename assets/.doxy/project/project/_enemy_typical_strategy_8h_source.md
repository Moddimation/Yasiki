

# File EnemyTypicalStrategy.h

[**File List**](files.md) **>** [**include**](dir_aae898d1b51427f8be7dcd244b9d0fce.md) **>** [**EnemyTypicalStrategy.h**](_enemy_typical_strategy_8h.md)

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


