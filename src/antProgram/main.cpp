// This file holds the culmination of files for the Ant Program


#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <array>
using std::array;

#include <string>
using std::string;

#include <cstdlib>

#include "Cell.h"
#include "Organism.h"
#include "Ant.h"
#include "Doodlebug.h"

int main()
{

// Variables for game board
    const int COLS = 20;
    const int ROWS = 20;

// Create the Board
    array<array<Cell*, COLS>, ROWS> boardName;
    cout << "Creating Game Board..." << endl << endl;

    for(int r = 0; r < ROWS; r++)
    {
        for(int c = 0; c < COLS ; c++)
        {
            Cell* cell = new Cell();
            boardName[r][c] = cell;
        }
    }

    {
        for(array<Cell*, COLS> row : boardName)
        {
            for(Cell* cell : row)
            {
                cout << cell->getGameSymbol();
            }
            cout << endl;
        }
    }
// Create Board with Ants and Doodlebugs
    // Place Doodlebugs on the board
    for(int d = 0; d < 5; d++)
    {
        // Create a random number
        srand(static_cast<unsigned int>(time(0)));
        int randNumber = 0 + rand()%399;
        cout << "random num: " << randNumber << endl;

        // Check if the cell is filled
        Cell* cellPtr;
        cellPtr = boardName[][];

        if(cellPtr->getOrganismType() != "Ant" || cellPtr->getOrganismType() != "Doodlebug")
        {
            //Doodlebug* bugPtr = new Doodlebug("Doodlebug",0);
            //bugPtr = nullptr;
            //delete bugPtr;
            //cellPtr->setAll(true,"Doodlebug",bugPtr);
            //boardName[randNumber][randNumber] = cellPtr;
        }

    }


    return 0;
}