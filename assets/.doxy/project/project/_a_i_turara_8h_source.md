

# File AITurara.h

[**File List**](files.md) **>** [**include**](dir_aae898d1b51427f8be7dcd244b9d0fce.md) **>** [**AITurara.h**](_a_i_turara_8h.md)

[Go to the documentation of this file](_a_i_turara_8h.md)


```C++
#ifndef AI_TURARA_H
#define AI_TURARA_H

#include "dolphin/types.h"

#include "Sato/EnemyTypicalStrategy.h"

class AITurara : public EnemyTypicalStrategy
{
public:
    AITurara ();
    virtual ~AITurara ();

    // EnemyStrategy overrides
    virtual s32  unkEnemyStrategyFunc01 ();
    virtual void doBehavior ();
    virtual void doBehaviorInit ();

    // CharacterEventObserver overrides
    virtual bool onPlayerLeftRoom (Koga::CharacterEvent* msg);
    virtual bool FUN_800ea44c (Koga::CharacterEvent* msg);

    void spawnIcicles ();

    bool procInit_init ();
    bool procInit ();
    bool procWait_init ();
    bool procWait ();

    s32 mRespawnTimer;            

    s32 mIcicleCount;             
    s32 mIcicleCharacterIdxs[10]; 

    u8 mDummy[0x18];              

    float mScale;                 
};
#endif
```


