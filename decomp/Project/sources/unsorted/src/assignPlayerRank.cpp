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
