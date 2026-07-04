

# File IncludeStrategy.cpp

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**Project**](dir_b9837e7912a2e62dbadd80ce5876b790.md) **>** [**sources**](dir_e9f5f664b7d8a26223d14dd7fedffb79.md) **>** [**Koga**](dir_9fe0a947080822e90509f3f3e5cdb9ae.md) **>** [**src**](dir_6b2cc7d107823f574901adc6bd381f59.md) **>** [**IncludeStrategy.cpp**](_include_strategy_8cpp.md)

[Go to the documentation of this file](_include_strategy_8cpp.md)


```C++
#include "Unsorted/IncludeStrategy.h"

#include "Sato/EnemyStrategy.h"

IncludeStrategy::IncludeStrategy () : mpStrategy (NULL)
{
    destroyStrategy();
}

IncludeStrategy::~IncludeStrategy ()
{
    destroyStrategy();
}

void
IncludeStrategy::setStrategy (int i_entityIdx)
{
    destroyStrategy();
    mpStrategy = static_cast<EnemyStrategy*> (
        (*getEnemyStrategyInitFunc (i_entityIdx)) (getBuffer(), 0x800));
}

void
IncludeStrategy::destroyStrategy ()
{
    EnemyStrategy* strategy = mpStrategy;

    if (strategy != NULL)
    {
        // This object was initialized via placement new, so we
        // can just call its destructor and invalidate its pointer.
        strategy->~EnemyStrategy();
        mpStrategy = NULL;
    }
}
```


