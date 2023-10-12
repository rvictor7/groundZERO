#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
int main()
{
    //Print V-Z in pairs in 3 ways


    //one statement with two stream insertion operators
    cout << "vx " << "yz\n";

    //one statement with four stream insertion operators
    cout << "v" << "x " << "y" << "z\n";

    //two statements with one stream insertion operators each
    cout << "vx yz\n";
    return 0;
}