

# File EnemyTypicalStrategy.cpp

[**File List**](files.md) **>** [**Project**](dir_ffd1f789ec7bd0a45fc6ad92579c5070.md) **>** [**sources**](dir_b8a352f40b7c42104060207e884dd5ae.md) **>** [**Sato**](dir_aa617b6d1af788dd6934c8932112c2c8.md) **>** [**src**](dir_053d3c76e6fe9e24655c9e012270b59c.md) **>** [**EnemyTypicalStrategy.cpp**](_enemy_typical_strategy_8cpp.md)

[Go to the documentation of this file](_enemy_typical_strategy_8cpp.md)


```C++
#include "Sato/EnemyTypicalStrategy.h"

// Required for .data to match.
static float dummy[] = { 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f };
static float dummy2[] = { 1.0f, 0.95f, 0.9f, 0.85f, 1.0f, 0.9f, 0.75f, 0.3f };

bool
EnemyTypicalStrategy::onFishingBegin (Koga::CharacterEvent* msg)
{
    EnemyStrategy* strategy = mTsuriStrategies.createStrategy (
        0); // TODO: The argument here comes from mpZako->mpCharacter->mEntityIndex.
    strategy->mpZako = mpZako;
    strategy->mpUserData = mpUserData;

    strategy->setNextState (0);
    setTsuriStrategy (strategy);

    return true;
}
```


