

# File EnemyStrategy.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**Project**](dir_b9837e7912a2e62dbadd80ce5876b790.md) **>** [**sources**](dir_e9f5f664b7d8a26223d14dd7fedffb79.md) **>** [**Sato**](dir_db2b09d99d4f302e3c8ada455a38d2b5.md) **>** [**include**](dir_01267fe4f090b7d6fab035c22a09a92f.md) **>** [**EnemyStrategy.h**](_enemy_strategy_8h.md)

[Go to the documentation of this file](_enemy_strategy_8h.md)


```C++
#ifndef ENEMY_STRATEGY_H_
#define ENEMY_STRATEGY_H_

#include "dolphin/types.h"

#include "JSystem/JHostIOD/JORServer.h"

typedef unsigned long size_t;

typedef void*          (*enemyStrategyInitFunc) (void* buf, int bufSize);
enemyStrategyInitFunc* getEnemyStrategyInitFunc (int i_entityIdx);

class EnemyStrategy : public JORReflexible
{
public:
    EnemyStrategy ();
    virtual ~EnemyStrategy ();

    virtual void init ();
    virtual void update ();
    virtual s32  unkEnemyStrategyFunc01 ();
    virtual void unkEnemyStrategyFunc02 ();
    virtual void doBehavior ();
    virtual void doBehaviorInit ();

    void setNextState (s16 i_nextState);
    void changeState ();

    static void* operator new (size_t size, void* mem);
    static void  operator delete (void* mem);

    void* mpZako;                   
    void* mpUserData;               
    u16   mNextState;               
    u16   mCurState;                
    s32   mTimer;                   
};

class EnemyStrategyDecorator : public EnemyStrategy
{
public:
    EnemyStrategyDecorator ();

    virtual void update ();
    s32          setTsuriStrategy (EnemyStrategy* i_tsuriStrategy);

    EnemyStrategy* mpTsuriStrategy; 
    s16            mTsuriState;     
};
#endif
```


