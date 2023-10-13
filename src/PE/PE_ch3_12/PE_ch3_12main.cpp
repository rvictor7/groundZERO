#include <iostream>
// make sure that the .h file is included and not the .cpp that implements
#include "PE_ch3_12.h"

using std::cout;
int main()
{
    Date aDate = Date(10,12,2023);
    aDate.displayDate();

    Date bDate = Date(0,15,1999);
    bDate.displayDate();

    aDate.setMonth(-12);
    int t = aDate.getMonth();

    aDate.setDay(20);
    int t2 = aDate.getDay();

    aDate.setYear(2015);
    int t3 = aDate.getYear();

    cout << t << t2 << t3 << std::endl;

    aDate.displayDate();
    return 0;
}