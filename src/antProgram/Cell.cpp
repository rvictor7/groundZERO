// This is the implementation file of the class cell

#include "Cell.h"

Cell::Cell(bool occupied, string organismType, Organism* organismPtr):aOccupy{occupied}, aOrganismType{organismType}, aOrganismPtr{organismPtr}
{
    // Left empty
}

// Getters
bool Cell::getOccupied()
{
    return this->aOccupy;
}
string Cell::getOrganismType()
{
    return this->aOrganismType;
}
Organism* Cell::getOrganismPtr()
{
    return this->aOrganismPtr;
}

// Setters
void Cell::setOccupy(bool occupyChoice)
{
    aOccupy = occupyChoice;
}

void Cell::setOrganismType(string typeChoice)
{
    aOrganismType = typeChoice;
}
void Cell::setOrganismPtr(Organism* ptrChoice)
{
    aOrganismPtr = ptrChoice;
}