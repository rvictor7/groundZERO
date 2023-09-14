#include <iostream>

int ndx{1};

while (ndx <= 10)
{
    std::cout << ndx << " ";
    ++ndx; // aka prefix ===> more efficient

};