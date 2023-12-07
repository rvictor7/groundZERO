// This is the implementation file of the class cell

#include "Cell.h"

Cell::Cell(bool occupied, string organismType, Organism* organismPtr, string gameSymbol):aOccupy{occupied}, aOrganismType{organismType}, aOrganismPtr{organismPtr}, aGameSymbol{gameSymbol}
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
string Cell::getGameSymbol()
{
    return this->aGameSymbol;
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
void Cell::setGameSymbol()
{
    if(aOrganismType == "Doodlebug")
    {
        aGameSymbol = "[X]";
    } else if(aOrganismType == "Ant")
    {
        aGameSymbol = "[O]";
    } else
    {
        aGameSymbol = "[ ]";
    }
}