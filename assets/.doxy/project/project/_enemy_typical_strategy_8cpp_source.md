

# File EnemyTypicalStrategy.cpp

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**Project**](dir_b9837e7912a2e62dbadd80ce5876b790.md) **>** [**sources**](dir_e9f5f664b7d8a26223d14dd7fedffb79.md) **>** [**Sato**](dir_db2b09d99d4f302e3c8ada455a38d2b5.md) **>** [**src**](dir_e93dacfc17a12763ebad92e6054046c7.md) **>** [**EnemyTypicalStrategy.cpp**](_enemy_typical_strategy_8cpp.md)

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


