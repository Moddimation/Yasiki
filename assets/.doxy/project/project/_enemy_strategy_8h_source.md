

# File EnemyStrategy.h

[**File List**](files.md) **>** [**include**](dir_aae898d1b51427f8be7dcd244b9d0fce.md) **>** [**EnemyStrategy.h**](_enemy_strategy_8h.md)

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


