#include <iostream>
#include <iomanip>
using std::cout;

int main()
{
    int star{1};
    int howMany{0};


    std::cout << "enter how many iterations to print : ";
    std::cin >> howMany;

        cout << std::setw(10) << std::setfill('*') << std::endl;
        //cout << "l" << std::endl;
        cout << ' ';
    for (int ndx = 0; ndx <= howMany; ++ndx)
    {
        cout << std::setw(ndx+1) << std::setfill('*') << std::endl;
        cout << "l" << std::endl;
        cout << ' ';
    }

    std::cout << std::endl;

    return 0;
}