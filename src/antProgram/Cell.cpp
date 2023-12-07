// This is the implementation file of the class cell

#include "Cell.h"
#include "Organism.h"
#include "Ant.h"
#include "Doodlebug.h"

Cell::Cell(bool occupied, string organismType, Organism* organismPtr, string gameSymbol):aOccupy{occupied}, aOrganismType{organismType}, aOrganismPtr{organismPtr}, aGameSymbol{gameSymbol}
{
    // Left empty
}
Cell::Cell()
{
    aOccupy = false;
    aOrganismType = "";
    aOrganismPtr = nullptr;
    aGameSymbol = "[ ]";
}

Cell::~Cell()
{
    aOrganismPtr = nullptr;
    delete aOrganismPtr;
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
    if(aOrganismType == "Doodlebug")
    {
        aOrganismPtr = dynamic_cast<Doodlebug*>(ptrChoice);

    } else if(aOrganismType == "Ant")
    {
        aOrganismPtr = dynamic_cast<Ant*>(ptrChoice);
    } else
    {
        aOrganismPtr = nullptr;
    }
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

void Cell::setAll(bool occupyChoice, string typeChoice, Organism* ptrChoice)
{
    setOccupy(occupyChoice);
    setOrganismType(typeChoice);
    setOrganismPtr(ptrChoice);
    setGameSymbol();
}