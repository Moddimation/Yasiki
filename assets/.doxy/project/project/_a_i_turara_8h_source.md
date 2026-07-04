

# File AITurara.h

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**Project**](dir_b9837e7912a2e62dbadd80ce5876b790.md) **>** [**sources**](dir_e9f5f664b7d8a26223d14dd7fedffb79.md) **>** [**Sato**](dir_db2b09d99d4f302e3c8ada455a38d2b5.md) **>** [**include**](dir_01267fe4f090b7d6fab035c22a09a92f.md) **>** [**AITurara.h**](_a_i_turara_8h.md)

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


