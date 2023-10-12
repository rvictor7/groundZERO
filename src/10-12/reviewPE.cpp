#include "reviewPE.h"

orderedPair::orderedPair(int x, int y): x{xValue},y{yValue}
{
}

    // x+ = b x ---- singular value
    void addXY(int x, int y)
    {
        int total{};
        total = x + y;
    }
/*
    // adds y2 to y1 and x2 to x1 to create new ordered pair ---- ordered pair
    void addOrderedPairs(int x, int y)
    {

    }
*/
    void subXY(int x, int y);

    void subOps();

    // x * y
    int multiply()
    {
        int mult{};
        mult = xValue * yValue;
        return mult;
    }
    // x ^ y
    int exp()
    {
        int expo{1};
        for (i = yValue, i > 1, i--;)
        {
            expo = expo * xValue;
        }
        return expo;
    }

    void printOP()
    {
        std::cout << "(" << xValue << "," << yValue << ")";
    }