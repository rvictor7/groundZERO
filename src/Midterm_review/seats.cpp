// This file implements the totalSeats function

#include <iostream>
#include "seats.h"

using std::cout;
using std::endl;

int rowCount= 0;
int total= 0;
int totalSeats(int rows, int rowIncrease, int chairNum)
{
    total = 0;
    if(rowCount != rows)
    {

        rowCount = rowCount+1;
        cout << rowCount << " " << chairNum << endl;
        return total = chairNum + totalSeats(rows, rowIncrease, chairNum + rowIncrease);
    //    return total;

    }
    rowCount = 0;
    return total;
}
/*
    for (int i=0; i <= rows; i++)
    {
        cout << i << endl;
        cout << chairNum << endl << rowIncrease << endl;
        int newChairNum {0};
        newChairNum = chairNum + (rowIncrease * i);
        seats = seats + totalSeats(i, rowIncrease, newChairNum);

    }
    return seats;
}
*/