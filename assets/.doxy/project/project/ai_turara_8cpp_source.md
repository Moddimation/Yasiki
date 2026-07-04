

# File aiTurara.cpp

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**Project**](dir_b9837e7912a2e62dbadd80ce5876b790.md) **>** [**sources**](dir_e9f5f664b7d8a26223d14dd7fedffb79.md) **>** [**sotoike**](dir_588f12229f86c3f2fa7350d59c3aa35e.md) **>** [**src**](dir_140902fe932dc0528f07b51ac7694816.md) **>** [**aiTurara.cpp**](ai_turara_8cpp.md)

[Go to the documentation of this file](ai_turara_8cpp.md)


```C++
#include "Sotoike/AITurara.h"

extern void freeCharacterByIndex (int i_idx);

// Required for .data to match.
static float dummy[] = { 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f };
static float dummy2[] = { 1.0f, 0.95f, 0.9f, 0.85f, 1.0f, 0.9f, 0.75f, 0.3f };

typedef bool (AITurara::*behaviorFunc) (void);

struct AITurara_State
{
    u16          StateId;
    behaviorFunc InitFunc;
    behaviorFunc ExecFunc;
};

static AITurara_State AITurara_Behaviors[] = {
    { 0, &AITurara::procInit_init, &AITurara::procInit },
    { 1, &AITurara::procWait_init, &AITurara::procWait }
};

AITurara::AITurara () : mRespawnTimer (0), mScale (1.0f) {}

AITurara::~AITurara ()
{
    for (int i = 0; i < mIcicleCount; i++)
    {
        freeCharacterByIndex (mIcicleCharacterIdxs[i]);
    }
}

void
AITurara::doBehaviorInit ()
{
    AITurara_State* state = AITurara_Behaviors;
    AITurara_State* end = AITurara_Behaviors + 2;

    AITurara_State* t;

    while (true)
    {
        if (state->StateId == mCurState)
        {
            t = state;
            break;
        }

        state++;

        if (state == end)
        {
            t = NULL;
            break;
        }
    }

    if (t != NULL)
    {
        (this->*t->InitFunc)();
    }
}

void
AITurara::doBehavior ()
{
}

bool
AITurara::FUN_800ea44c (Koga::CharacterEvent* msg)
{
    msg->mUnknownEntityBools[0xD8] = true;
    return true;
}

s32
AITurara::unkEnemyStrategyFunc01 ()
{
    return FALSE;
}

bool
AITurara::onPlayerLeftRoom (Koga::CharacterEvent* msg)
{
    return true;
}

void
AITurara::spawnIcicles ()
{
}

bool
AITurara::procInit_init ()
{
    spawnIcicles();
    setNextState (1);

    return true;
}

bool
AITurara::procInit ()
{
    return true;
}

bool
AITurara::procWait_init ()
{
}

bool
AITurara::procWait ()
{
}
```


