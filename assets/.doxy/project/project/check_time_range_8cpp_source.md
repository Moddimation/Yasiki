

# File checkTimeRange.cpp

[**File List**](files.md) **>** [**Project**](dir_ffd1f789ec7bd0a45fc6ad92579c5070.md) **>** [**sources**](dir_b8a352f40b7c42104060207e884dd5ae.md) **>** [**unsorted**](dir_1af0957deb6d5272916026384d47f8e4.md) **>** [**src**](dir_6b20f4caa24a6f4bfeb8253f2c659ff4.md) **>** [**checkTimeRange.cpp**](check_time_range_8cpp.md)

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


