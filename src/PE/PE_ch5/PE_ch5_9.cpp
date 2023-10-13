// This file holds the exercises for ch5_9
#include <iostream>
using std::cout;
using std::endl;

int main()
{
/* Original: a
    For( unsigned int x = 100, x >= 1, ++x)
        cout << x << endl;

    for( unsigned int x = 100; x >= 1; --x)
        cout << x << endl;
    return 0;
*/


/* Original: b    the following code should print whether integer
value is odd or even

    switch (value % 2)
    {
        case 0:
            cout << "Even integer" << endl;
        case 1:
            cout << "Odd integer" << endl;

    }

    int value{2};
    switch (value % 2)
    {
        case 0:
            cout << "Even integer" << endl;
            break;
        case 1:
            cout << "Odd integer" << endl;
            break;

    }
*/

/* Original: c The following code should output the odd integers
from 19 to 1:

    for (unsigned int x = 19; x >= 1; x+= 2)
        cout << x << endl;


    for ( int x = 19; x >= 1; x -=2)
    {
        cout << x << endl;
    }
*/

/* Original: the following should output the even integers from
 2 to 100:
    unsigned int counter = 2;
    do
    {
        cout << counter << endl;
        counter += 2;
    } While (count < 100);
*/
    unsigned int counter = 2;
    do
    {
        cout << counter << endl;
        counter += 2;
    } while (counter < 100);
}