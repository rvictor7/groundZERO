// This practice exercise (ch4_28) prints a decimal
// equivalent of a binary number

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    // Send Output and attain user input
    int input{};
    cout << "Input a binary number" << endl;

    cin >> input;

    // Create variable for decimal number
    int decNum{0};

    // for loop that stops when the input is 0
    for (int i = 1; input != 0;)
    {
        // create remainder variable that gets the single bit
        int remainder{};
        remainder = input % 2;

        // create bitNum variable that multiples the remainder
        // bit with its matching number
        int bitNum = remainder * i;
        cout << bitNum << endl;
        decNum = decNum + bitNum;
        input = input / 10;
        i = i*2;
    }
    cout << decNum << endl;



    return 0;
}