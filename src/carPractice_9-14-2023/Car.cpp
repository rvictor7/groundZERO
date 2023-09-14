#include "Car.h"

Car::Car(std::string b, int y, double m)
{
    brand = b;
    yearMade = y;
    mileage = m;
}

std::string Car::getBrand()
{
    return brand;
}

void Car::setBrand(std::string b)
{
    brand = b;
}

int Car::getYear()
{
    return yearMade;
}

void Car::setYear(int y)
{
    yearMade = y;
}

double Car::getMileage()
{
    return mileage;
}

void Car::addMileage(double miles)
{
    mileage += miles;
}