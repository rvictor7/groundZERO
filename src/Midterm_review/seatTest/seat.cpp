#include <iostream>
#include "seat.h"

int total{0};
int totalSeats(int rowCount, int increase,int chairCount)
{
    total = 0;
    if(rowCount != 0)
    {
        total = chairCount + totalSeats(rowCount -1, increase, chairCount+increase);
    }
    return total;
}