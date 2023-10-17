#include <iostream>
#include <string>

using std::cout;
using std::endl;

int main()
{
    int var = 123;
    int *varPtr = &var;
    int &varRef = var;

    cout << var << endl << *varPtr << endl << varRef;


    return 0;
}