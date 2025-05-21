

# File EnemyStrategy.cpp

[**File List**](files.md) **>** [**Project**](dir_ffd1f789ec7bd0a45fc6ad92579c5070.md) **>** [**sources**](dir_b8a352f40b7c42104060207e884dd5ae.md) **>** [**Sato**](dir_aa617b6d1af788dd6934c8932112c2c8.md) **>** [**src**](dir_053d3c76e6fe9e24655c9e012270b59c.md) **>** [**EnemyStrategy.cpp**](_enemy_strategy_8cpp.md)

[Go to the documentation of this file](_enemy_strategy_8cpp.md)


```C++
#include "Sato/EnemyStrategy.h"

// Required for .data to match.
static float dummy[] = { 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f };

extern enemyStrategyInitFunc gEnemyStrategyInitFuncs[187];

enemyStrategyInitFunc*
getEnemyStrategyInitFunc (int i_entityIdx)
{
    return &gEnemyStrategyInitFuncs[i_entityIdx];
}

/* EnemyStrategy */

EnemyStrategy::EnemyStrategy ()
{
    mpZako = NULL;
    mpUserData = NULL;

    mNextState = 0;
    mCurState = 0;
    mTimer = 0;
}

EnemyStrategy::~EnemyStrategy () {}

void
EnemyStrategy::init ()
{
}

void
EnemyStrategy::update ()
{
    if (mNextState != 0xFFFF)
    {
        changeState();
    }

    doBehavior();
    mTimer++;
}

void
EnemyStrategy::doBehavior ()
{
}

void
EnemyStrategy::doBehaviorInit ()
{
}

s32
EnemyStrategy::unkEnemyStrategyFunc01 ()
{
    return FALSE;
}

void
EnemyStrategy::unkEnemyStrategyFunc02 ()
{
}

void
EnemyStrategy::setNextState (s16 i_nextState)
{
    mNextState = i_nextState;
}

void
EnemyStrategy::changeState ()
{
    mCurState = mNextState;
    mNextState = 0xFFFF;
    mTimer = 0;

    doBehaviorInit();
}

void*
EnemyStrategy::operator new (size_t size, void* mem)
{
    return mem;
}

void
EnemyStrategy::operator delete (void* mem)
{
}

/* EnemyStrategyDecorator */

EnemyStrategyDecorator::EnemyStrategyDecorator ()
{
    mpTsuriStrategy = NULL;
    mTsuriState = 0x100;
}

s32
EnemyStrategyDecorator::setTsuriStrategy (EnemyStrategy* i_tsuri)
{
    if (mpTsuriStrategy != NULL)
    {
        return FALSE;
    }

    mpTsuriStrategy = i_tsuri;
    return TRUE;
}

void
EnemyStrategyDecorator::update ()
{
    u32 padding[4];

    if (mpTsuriStrategy == NULL)
    {
        EnemyStrategy::update();
    }
    else
    {
        mpTsuriStrategy->update();

        switch (mpTsuriStrategy->mCurState)
        {
            case 0x100:
            case 0x101:
            case 0x102:
                {
                    mTsuriState = mpTsuriStrategy->mCurState;
                    mpTsuriStrategy = NULL;
                    break;
                }
        }
    }
}
```


