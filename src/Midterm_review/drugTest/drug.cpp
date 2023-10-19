#include <iostream>
#include "drug.h"

float concentration(int n, float percentage, float drugAmount)
{
    if(n==0){
        return 0;
    } else
    {
        // C_n = 0.3 * C_n + 0.2
        return (percentage * concentration(n-1, percentage, drugAmount)) + drugAmount;
    }
}