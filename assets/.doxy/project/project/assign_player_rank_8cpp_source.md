

# File assignPlayerRank.cpp

[**File List**](files.md) **>** [**decomp**](dir_0c56b33aa00ddb0e63af648508d6e3f4.md) **>** [**Project**](dir_b9837e7912a2e62dbadd80ce5876b790.md) **>** [**sources**](dir_e9f5f664b7d8a26223d14dd7fedffb79.md) **>** [**unsorted**](dir_46bc65a0b270f088d99cafe01e8d1bf3.md) **>** [**src**](dir_28bf17f0e765410a60eb5b71cb8fac6c.md) **>** [**assignPlayerRank.cpp**](assign_player_rank_8cpp.md)

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


