// program that calculates surface area and volume of cubes with face lengths of 0 to 4 cm
#include <iostream>
using std::cout;
using std::cin;

int main()
{
    cout << "Face length    Surface area    Volume\n" << "of cube (cm)   of cube (cm^2)  of cube(cm^3)\n";
    for (int i=0; i < 5; i++)
    {
        int cubeL = i;

        int cubeSA = i*i*6;
        int cubeV = i*i*i;
        cout << cubeL << "          " << cubeSA << "          " << cubeV << "\n";
    }
    return 0;
}