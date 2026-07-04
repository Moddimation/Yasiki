

# File PPCPm.c

[**File List**](files.md) **>** [**base**](dir_0f317a44af729fe0eedb252fe661eec4.md) **>** [**PPCPm.c**](_p_p_c_pm_8c.md)

[Go to the documentation of this file](_p_p_c_pm_8c.md)


```C++
#include <dolphin/base/PPCArch.h>

#include <dolphin.h>

void
PMBegin (void)
{
    PPCMtmmcr0 (0);
    PPCMtmmcr1 (0);
    PPCMtpmc1 (0);
    PPCMtpmc2 (0);
    PPCMtpmc3 (0);
    PPCMtpmc4 (0);
    PPCMtmmcr0 (0x4F);
    PPCMtmmcr1 (0x78800000);
}

void
PMEnd (void)
{
    PPCMtmmcr0 (0);
    PPCMtmmcr1 (0);
}

void
PMCycles (void)
{
    PPCMfpmc1();
}

void
PML1FetchMisses (void)
{
    PPCMfpmc2();
}

void
PML1MissCycles (void)
{
    PPCMfpmc3();
}

void
PMInstructions (void)
{
    PPCMfpmc4();
}
```


