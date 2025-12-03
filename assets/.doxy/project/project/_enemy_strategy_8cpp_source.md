

# File EnemyStrategy.cpp

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**Project**](dir_b9837e7912a2e62dbadd80ce5876b790.md) **>** [**sources**](dir_e9f5f664b7d8a26223d14dd7fedffb79.md) **>** [**Sato**](dir_db2b09d99d4f302e3c8ada455a38d2b5.md) **>** [**src**](dir_e93dacfc17a12763ebad92e6054046c7.md) **>** [**EnemyStrategy.cpp**](_enemy_strategy_8cpp.md)

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


