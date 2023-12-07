// Summary: implemetation file for organism base class
//

#include "Organism.h"

Organism::Organism(string orgType): aOrgType{orgType}
{
    // Left Empty
}

int Organism::randomSelection0to3()
{
    srand(static_cast<unsigned int>(time(0)));
    int randNumber = 0 + rand()%3;
    return randNumber;
}

void Organism::move()
{
    // Direction Selection
    int direction;
    direction = randomSelection0to3();
    if(direction == 0)
    {

    }
}
void Organism::breed()
{
    // left empty
}

