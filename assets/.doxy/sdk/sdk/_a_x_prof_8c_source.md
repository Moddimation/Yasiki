

# File AXProf.c

[**File List**](files.md) **>** [**ax**](dir_284807f63fc993a939ff676a07eb86c2.md) **>** [**AXProf.c**](_a_x_prof_8c.md)

[Go to the documentation of this file](_a_x_prof_8c.md)


```C++
#include <dolphin/ax.h>

#include <dolphin.h>

#include "AXPrivate.h"

// .sbss
static AXPROFILE* __AXProfile;
static u32        __AXMaxProfiles;
static u32        __AXCurrentProfile;
static u32        __AXProfileInitialized;

AXPROFILE*
__AXGetCurrentProfile (void)
{
    AXPROFILE* profile;

    if (__AXProfileInitialized != 0U)
    {
        profile = &__AXProfile[__AXCurrentProfile];
        __AXCurrentProfile += 1;
        __AXCurrentProfile %= __AXMaxProfiles;
        return profile;
    }
    return 0;
}

void
AXInitProfile (AXPROFILE* profile, u32 maxProfiles)
{
    ASSERTLINE (0x3A, profile);
    ASSERTLINE (0x3B, maxProfiles);

    __AXProfile = profile;
    __AXMaxProfiles = maxProfiles;
    __AXCurrentProfile = 0;
    __AXProfileInitialized = 1;
}

u32
AXGetProfile (void)
{
    int old;
    u32 n;

    old = OSDisableInterrupts();
    n = __AXCurrentProfile;
    if (n != 0)
    {
        n -= 1;
    }
    __AXCurrentProfile = 0;
    OSRestoreInterrupts (old);
    return n;
}
```


