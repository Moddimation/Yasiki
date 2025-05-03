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

    void* mpZako;                   ///< 0x04
    void* mpUserData;               ///< 0x08
    u16   mNextState;               ///< 0x0C
    u16   mCurState;                ///< 0x0E
    s32   mTimer;                   ///< 0x10
};
class EnemyStrategyDecorator : public EnemyStrategy
{
public:
    EnemyStrategyDecorator ();

    virtual void update ();
    s32          setTsuriStrategy (EnemyStrategy* i_tsuriStrategy);

    EnemyStrategy* mpTsuriStrategy; ///< 0x14
    s16            mTsuriState;     ///< 0x18
};
#endif
