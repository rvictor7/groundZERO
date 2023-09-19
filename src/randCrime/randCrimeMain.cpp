#include <iostream>
#include <cmath>
#include <cstdlib>


int main()
{
    srand(static_cast<unsigned int>(time(0)));
    int randNum = 1 + rand()%5;
    std::cout << "Random #: " << randNum << std::endl;

    std::cout << "Your fine/punishment is: " << std::endl;
    switch(randNum)
    {
        case 1:
        {
            int randPowerNum = 0 + rand()%3;
            std::cout << "Random Power #: " << randPowerNum << std::endl;
            int fee = pow(randPowerNum, 10);
            std::cout << "The fee is: $" << fee << std::endl;
            break;
        }

        case 2:
        {
            std::cout << "Loss of driving privileges" << std::endl;
            break;
        }

        case 3:
        {
            std::cout << "night in jail" << std::endl;
            break;
        }

        case 4:
        {
            std::cout << "week in jail" << std::endl;
            break;
        }

        case 5:
        {
            std::cout << "week of sorting recycling" << std::endl;
            break;
        }
    }


}