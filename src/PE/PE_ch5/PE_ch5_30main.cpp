#include <iostream>
#include <iomanip>
#include "PE_ch5_30.h"

using std::cout;
using std::endl;

int main()
{
    DollarAmount aDollarAmount = DollarAmount(135);
    std::string a = aDollarAmount.toString();
    cout << a << endl;

    int b = aDollarAmount.pennyCount(2,34);
    cout << b << endl;

    return 0;
}