#include <iostream>
#include <iomanip>

int main()
{
    unsigned int num;
    std::cout << "Select # of stars" << std::endl;
    std::cin >> num;
    // setw set...
    for (num > 0; --num;)
    {
        std::string star = "*";
        std::string comboStar = (star + ' ');
        std::cout << comboStar * num;

    }
    return 0;
}