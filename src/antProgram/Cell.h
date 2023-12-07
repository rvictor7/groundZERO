// This is the header file for the class Cell which will be used to construct the array grid

#ifndef CELL_H
#define CELL_H

#include <string>
#include "Organism.h"

class Cell
{
private:
    bool aOccupy = false;
    string aOrganismType = "";
    Organism* aOrganismPtr = nullptr;

public:
    explicit Cell(bool occupied, string organismType, Organism* organismPtr);

    // Getters
    bool getOccupied();
    string getOrganismType();
    Organism* getOrganismPtr();

    // Setters
    void setOccupy(bool occupyChoice);
    void setOrganismType(string typeChoice);
    void setOrganismPtr(Organism* ptrChoice);

};

#endif