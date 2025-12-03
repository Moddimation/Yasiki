

# File checkTimeRange.cpp

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**Project**](dir_b9837e7912a2e62dbadd80ce5876b790.md) **>** [**sources**](dir_e9f5f664b7d8a26223d14dd7fedffb79.md) **>** [**unsorted**](dir_46bc65a0b270f088d99cafe01e8d1bf3.md) **>** [**src**](dir_28bf17f0e765410a60eb5b71cb8fac6c.md) **>** [**checkTimeRange.cpp**](check_time_range_8cpp.md)

[Go to the documentation of this file](check_time_range_8cpp.md)


```C++
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
```


