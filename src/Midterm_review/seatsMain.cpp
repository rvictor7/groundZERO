// Exercise 1 Main Function Here.
#include <iostream>
#include "seats.h"

using std::cout;
int main()
{
    
    int a = totalSeats(2,2,5);
    cout << a << std::endl;

    int b = totalSeats(5,4,5);
    cout << b << std::endl;

    return 0;
}