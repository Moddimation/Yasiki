

# File AITurara.cpp

[**File List**](files.md) **>** [**Project**](dir_ffd1f789ec7bd0a45fc6ad92579c5070.md) **>** [**sources**](dir_b8a352f40b7c42104060207e884dd5ae.md) **>** [**Sotoike**](dir_79aff6c2cefc2a87fc77b56798541206.md) **>** [**src**](dir_2bd886988b99d3664a978d43c61bcb23.md) **>** [**AITurara.cpp**](_a_i_turara_8cpp.md)

[Go to the documentation of this file](_a_i_turara_8cpp.md)


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


