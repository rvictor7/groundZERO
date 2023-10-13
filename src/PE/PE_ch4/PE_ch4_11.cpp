#include <iostream>
#include <iomanip>

int main()
{
    int age = 63;
/* Original: a
    if (age >= 65);
        cout << "Age is greater than or equal to 65" << endl;
    else
        cout << "Age is less than 65 << endl";

    if (age >= 65)
    {
        std::cout << "Age is greater than or equal to 65" << std::endl;
    }else
    {
        std::cout << "Age is less than 65" << std::endl;
    }
    return 0;
*/



/* Original: d
    unsigned int x = 1;
    unsigned int total;

    while (x <= 10)
    {
        total += x;
        ++x;
    }


    unsigned int x = 1;
    unsigned int total{};

    while (x <= 10)
    {
        total += x;
        std::cout << total<< std::endl; //<< x << std::endl;
        ++x;
    }
*/

/*Original: e
    while (y > 0)
    {
        std::cout << y << endl;
        ++y;
    }


    int y{10};
    while (y > 0)
    {
        std::cout << y << std::endl;
        --y;
    }
*/


}