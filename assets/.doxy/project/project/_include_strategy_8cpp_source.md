

# File IncludeStrategy.cpp

[**File List**](files.md) **>** [**Koga**](dir_42076aff8d504897cb4cad3adaddc429.md) **>** [**src**](dir_fc1e9127bf4a231b8b0d290bf46c60f4.md) **>** [**IncludeStrategy.cpp**](_include_strategy_8cpp.md)

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


