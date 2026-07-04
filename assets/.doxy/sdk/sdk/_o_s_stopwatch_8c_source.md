

# File OSStopwatch.c

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**DolphinSDK**](dir_7403dcf2df2f5392613493bf2b736904.md) **>** [**src**](dir_84dd7f8d193350365bcacfbd02904e42.md) **>** [**dolphin**](dir_099eac09ed7894d1733885fc00e718ed.md) **>** [**os**](dir_c85f9e83f0f4b4374578811cecebda65.md) **>** [**OSStopwatch.c**](_o_s_stopwatch_8c.md)

[Go to the documentation of this file](_o_s_stopwatch_8c.md)


```C++
#include <dolphin/os.h>

void
OSInitStopwatch (struct OSStopwatch* sw, char* name)
{
    sw->name = name;
    sw->total = 0;
    sw->hits = 0;
    sw->min = 0x00000000FFFFFFFF;
    sw->max = 0;
}

void
OSStartStopwatch (struct OSStopwatch* sw)
{
    sw->running = 1;
    sw->last = OSGetTime();
}

void
OSStopStopwatch (struct OSStopwatch* sw)
{
    s64 interval;

    if (sw->running != 0)
    {
        interval = OSGetTime() - sw->last;
        sw->total += interval;
        sw->running = 0;
        sw->hits++;
        if (sw->max < interval)
        {
            sw->max = interval;
        }
        if (interval < sw->min)
        {
            sw->min = interval;
        }
    }
}

s64
OSCheckStopwatch (struct OSStopwatch* sw)
{
    s64 currTotal;

    currTotal = sw->total;
    if (sw->running != 0)
    {
        currTotal += OSGetTime() - sw->last;
    }
    return currTotal;
}

void
OSResetStopwatch (struct OSStopwatch* sw)
{
    OSInitStopwatch (sw, sw->name);
}

void
OSDumpStopwatch (struct OSStopwatch* sw)
{
    OSReport ("Stopwatch [%s]   :\n", sw->name);
    OSReport ("\tTotal= %lld us\n", OSTicksToMicroseconds (sw->total));
    OSReport ("\tHits = %d \n", sw->hits);
    OSReport ("\tMin  = %lld us\n", OSTicksToMicroseconds (sw->min));
    OSReport ("\tMax  = %lld us\n", OSTicksToMicroseconds (sw->max));
    OSReport ("\tMean = %lld us\n", OSTicksToMicroseconds (sw->total / sw->hits));
}
```


