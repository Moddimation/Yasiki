

# File assignPlayerRank.cpp

[**File List**](files.md) **>** [**Project**](dir_ffd1f789ec7bd0a45fc6ad92579c5070.md) **>** [**sources**](dir_b8a352f40b7c42104060207e884dd5ae.md) **>** [**unsorted**](dir_1af0957deb6d5272916026384d47f8e4.md) **>** [**src**](dir_6b20f4caa24a6f4bfeb8253f2c659ff4.md) **>** [**assignPlayerRank.cpp**](assign_player_rank_8cpp.md)

[Go to the documentation of this file](assign_player_rank_8cpp.md)


```C++
#include "Unsorted/Rank.h"

void
assignPlayerRank (unsigned int playerMoney)
{
    unsigned int rankValues[7] = { 5000000,  20000000, 40000000, 50000000,
                                   60000000, 70000000, 100000000 };
    playerRank = 7;

    for (int i = 0; i < 7; i++)
    {
        if (playerMoney < rankValues[i])
        {
            playerRank = i;
            break;
        }
    }

    playerRank += 1;

    if (playerMoney == 0)
    {
        playerRank = 0;
    }
    return;
}
```


