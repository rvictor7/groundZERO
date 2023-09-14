#include <iostream>
#include "Car.h"

int main()
{
    Car myCar("Toyota", 2022, 0.0);

    myCar.addMileage(150);

    std::cout << "Brand: " << myCar.getBrand() << std::endl;
    std::cout << "Year: " << myCar.getYear() << std::endl;
    std::cout << "Mileage: " << myCar.getMileage() << " miles" << std::endl;

    return 0;
}