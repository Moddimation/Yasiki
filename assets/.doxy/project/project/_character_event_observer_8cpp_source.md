

# File CharacterEventObserver.cpp

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**Project**](dir_b9837e7912a2e62dbadd80ce5876b790.md) **>** [**sources**](dir_e9f5f664b7d8a26223d14dd7fedffb79.md) **>** [**Koga**](dir_9fe0a947080822e90509f3f3e5cdb9ae.md) **>** [**src**](dir_6b2cc7d107823f574901adc6bd381f59.md) **>** [**CharacterEventObserver.cpp**](_character_event_observer_8cpp.md)

[Go to the documentation of this file](_character_event_observer_8cpp.md)


```C++
#include "Koga/CharacterEventObserver.h"

// Required for .data to match.
static float dummy[] = { 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f };

Koga::CharacterEvent::CharacterEvent (const int& message)
{
    mMessage = message;
    mUnk1 = 0;
    mUnk2 = 0;
    mUnk3 = 0;
    mUnk4 = 0;
    mUnk5 = 0;
    mUnk6 = 0;
}

bool
Koga::CharacterEventObserver::receiveMessage (CharacterEvent* msg)
{
    bool bResult;

    switch (msg->mMessage)
    {
        default:
            bResult = false;
            break;
        case 0:
            bResult = true;
            break;
        case 2:
            bResult = onEnteredFlashlightBeam (msg);
            break;
        case 3:
            bResult = onCaptureBegin (msg);
            break;
        case 4:
            bResult = onCaptureEnd (msg);
            break;
        case 8:
            bResult = FUN_800ea380 (msg);
            break;
        case 12:
            bResult = onCollideWithPlayer (msg);
            break;
        case 13:
            bResult = onSprayedWithFire (msg);
            break;
        case 14:
            bResult = onSprayedWithIce (msg);
            break;
        case 15:
            bResult = onSprayedWithWater (msg);
            break;
        case 16:
            bResult = onHitWithFireBall (msg);
            break;
        case 17:
            bResult = onHitWithIceBall (msg);
            break;
        case 18:
            bResult = onHitWithWaterBall (msg);
            break;
        case 9:
            bResult = onFishingBegin (msg);
            break;
        case 10:
            bResult = onPlayerLeftRoom (msg);
            break;
        case 11:
            bResult = onPlayerEnteredRoom (msg);
            break;
        case 19:
            bResult = onPlayerTapped (msg);
            break;
        case 29:
            bResult = FUN_800ea44c (msg);
            break;
    }

    return bResult;
}

/* Called while the actor is inside the flashlight cone. */
bool
Koga::CharacterEventObserver::onEnteredFlashlightBeam (CharacterEvent* msg)
{
    return false;
}

/* Called when the actor's HP hits 0 while being fished. */
bool
Koga::CharacterEventObserver::onCaptureBegin (CharacterEvent* msg)
{
    return false;
}

/* Called when the actor has been sucked into the Poltergust. */
bool
Koga::CharacterEventObserver::onCaptureEnd (CharacterEvent* msg)
{
    return false;
}

/* TODO: What does this do? */
bool
Koga::CharacterEventObserver::FUN_800ea380 (CharacterEvent* msg)
{
    return false;
}

/* Called when the actor collides with the player. */
bool
Koga::CharacterEventObserver::onCollideWithPlayer (CharacterEvent* msg)
{
    return false;
}

/* Called when the actor is exposed to fire. */
bool
Koga::CharacterEventObserver::onSprayedWithFire (CharacterEvent* msg)
{
    return false;
}

/* Called when the actor is exposed to ice. */
bool
Koga::CharacterEventObserver::onSprayedWithIce (CharacterEvent* msg)
{
    return false;
}

/* Called when the actor is exposed to water. */
bool
Koga::CharacterEventObserver::onSprayedWithWater (CharacterEvent* msg)
{
    return false;
}

/* Called when the actor is hit with a fire elemental ball. */
bool
Koga::CharacterEventObserver::onHitWithFireBall (CharacterEvent* msg)
{
    return onSprayedWithFire (msg);
}

/* Called when the actor is hit with an ice elemental ball. */
bool
Koga::CharacterEventObserver::onHitWithIceBall (CharacterEvent* msg)
{
    return onSprayedWithIce (msg);
}

/* Called when the actor is hit with a water elemental ball. */
bool
Koga::CharacterEventObserver::onHitWithWaterBall (CharacterEvent* msg)
{
    return onSprayedWithWater (msg);
}

/* Called when the actor is hooked by the Poltergust. */
bool
Koga::CharacterEventObserver::onFishingBegin (CharacterEvent* msg)
{
    return false;
}

/* Called when the player leaves the actor's current room. */
bool
Koga::CharacterEventObserver::onPlayerLeftRoom (CharacterEvent* msg)
{
    return false;
}

/* Called when the player enters the actor's current room. */
bool
Koga::CharacterEventObserver::onPlayerEnteredRoom (CharacterEvent* msg)
{
    return false;
}

/* Called when the player presses the A button on the actor; treasure chests only? */
bool
Koga::CharacterEventObserver::onPlayerTapped (CharacterEvent* msg)
{
    return false;
}

/* TODO: What does this do? */
bool
Koga::CharacterEventObserver::FUN_800ea44c (CharacterEvent* msg)
{
    return false;
}
```


