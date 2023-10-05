#include <iostream>
#include <iomanip>
#include <array>

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    std::array <std::array<int,7> , 5 > myArray{};

    for (size_t row{0}; row < myArray.size(); ++row)
    {
        for(size_t column{0}; column <myArray[row].size(); ++column)
        {
            int rand1 = 1 + rand()%5;
            int rand2 = 1 + rand()%5;
            std::cout << myArray[rand1][rand2] << ' ';
        }
        std::cout << std::endl;
    }
    return 0;
}