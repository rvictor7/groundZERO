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
    string aGameSymbol = "[ ]";

public:
    explicit Cell(bool occupied, string organismType, Organism* organismPtr, string gameSymbol);

    // Getters
    bool getOccupied();
    string getOrganismType();
    Organism* getOrganismPtr();
    string getGameSymbol();

    // Setters
    void setOccupy(bool occupyChoice);
    void setOrganismType(string typeChoice);
    void setOrganismPtr(Organism* ptrChoice);
    void setGameSymbol();

};

#endif