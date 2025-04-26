#include <dolphin/os.h>

#include <dolphin.h>

#include "OSPrivate.h"
s64
__get_clock(void)
{
    return -1;
}
u32
__get_time(void)
{
    return (u32)OSTicksToSeconds(OSGetTime()) - 0x43E83E00;
}
int
__to_gm_time()
{
    return 0;
}
