#include "Unsorted/Timer.h"
int
checkTimeRange (int rangeLower, int rangeUpper)
{
    int totalMinutes;

    totalMinutes = gCurrentMinute + (gCurrentHour * 60);

    if ((totalMinutes >= rangeLower) && (totalMinutes < rangeUpper))
    {
        return 1;
    }
    if (totalMinutes >= rangeUpper)
    {
        return 2;
    }
    return 0;
}
