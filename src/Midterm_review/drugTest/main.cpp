#include <iostream>
#include "drug.h"

using std::cout;
using std::endl;

int main()
{
    cout << "The concentration on Day 3 is: " << concentration (3,0.3,0.2) << std::endl;
    cout << "The concentration on Day 0 is: " << concentration (0,0.3,0.2) << std::endl;
    cout << "The concentration on Day 2 is: " << concentration (2,0.3,0.2) << std::endl;


    return 0;
}