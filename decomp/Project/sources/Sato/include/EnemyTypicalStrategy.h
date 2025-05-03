#ifndef ENEMY_TYPICAL_STRATEGY_H
#define ENEMY_TYPICAL_STRATEGY_H

#include "Koga/CharacterEventObserver.h"
#include "Sato/EnemyStrategy.h"
#include "Sato/EnStrategy.h"
class EnemyTypicalStrategy : public EnemyStrategyDecorator,
                             public Koga::CharacterEventObserver
{
public:
    virtual ~EnemyTypicalStrategy () {}
    virtual bool onFishingBegin (Koga::CharacterEvent* msg);

    EnTsuriStrategies mTsuriStrategies; ///< 0x20
};
#endif
