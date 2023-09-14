
#include <iostream>
#include <iomanip>

int main()
{
    int starCount{0};
    std::cout << "Insert how many stars * to output: " << std::endl;
    std::cin >> starCount;

    for (int index = 0; index <= starCount; index++)
    {
        //Use std::setw;      format = setw(<# of spaces>)
        //Use std::setfill;     format = setfill(<characters>)

        ;
        using std::setw;
        using std::setfill;
        std::cout << setw(index+1) << setfill("*");
        std::cout << "*" << std::endl;

    }
std::cout << "clear" << std::endl;
return 0;
}