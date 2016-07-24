#include <iostream>

#define LOG

using namespace std;
const int array[] = {1, 7, 5, 9, 2, 12, 3};
const int arrayLength = 7;
const int k = 2;

int main()
{
    int pairsAmount = 0;
    for (int i = 0; i < arrayLength; ++i)
    {
        for (int ii = 0; ii < arrayLength; ii++)
        {
            if (i == ii)
                continue;
            if (array[i] + 2 == array[ii])
            {
#ifdef LOG
                printf("Pair: %d : %d\n", array[i], array[ii]);
#endif
                pairsAmount++;
                break;
            }
        }
    }
    printf("Found %d pairs.\n", pairsAmount);
    return 0;
}