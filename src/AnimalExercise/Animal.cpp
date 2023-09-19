#include "Animal.h"

Animal::Animal(std::string s, int a, bool w)
{
    species = s; 
    isWild = w;
}

std::string Animal::getSpecies()
{
    return specie; 
}

void Animal::setSpecie(std::string s)
{
    specie = s; 
}

int Animal::getAge()
{
    return age;
}

void Animal::setAge(int a)
{
    age = a;
}

bool Animal::getIsWile()
{ 
    return isWild;
}

void Animal::setIsWild(bool w)
{
    isWild = w;
}
