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
/*
// Print Board
    for(array<Cell*, COLS> row : boardName)
    {
        for(Cell* cell : row)
        {
            cout << cell->getGameSymbol();
        }
        cout << endl;
    }
*/

// Create Board with Ants and Doodlebugs
    // Place Doodlebugs on the board
    int series = 105972463;
    int series2 = 140564305;
    int seed = 0;
    int randNumber = 0;
    for(int d = 0; d < 5; d++)
    {
        // Create a random number
            //r = 0 + rand()%2;
            seed = series % 10;
            series = series / 10;
            //cout << "seed: " << seed << endl;
            srand(static_cast<unsigned int>(time(0)));

            randNumber = seed + rand()%11;
            //cout << "random num: " << randNumber << endl;

                        // Check if the cell is filled
            Cell* cellPtr = boardName[randNumber][randNumber-2];
            Doodlebug* bugPtr = new Doodlebug("Doodlebug",0);
            //cout << "Failed" << endl;

            if(cellPtr->getOccupied() != true)
            {
                cellPtr->setAll(true,"Doodlebug",bugPtr);
            } else
            {
                cellPtr = boardName[randNumber-1][randNumber-1];
                cellPtr->setAll(true,"Doodlebug",bugPtr);
            }

    }

    for(int d = 0; d < 20; d++)
    {
        // Create a random number
            //r = 0 + rand()%2;
            if(series2<1)
            {
                series2 = 1420385302;
            }
            seed = series2 % 10;
            series2 = series2 / 10;
            //cout << "seed: " << seed << endl;
            srand(static_cast<unsigned int>(time(0)));

            randNumber = seed + rand()%11;
            cout << "random num: " << randNumber << endl;

                        // Check if the cell is filled
            Cell* cellPtr = boardName[randNumber][randNumber-3];
            Ant* bugPtr2 = new Ant("Ant");


            if(cellPtr->getOccupied() != true)
            {
                cellPtr->setAll(true,"Ant",bugPtr2);
                cout << "can't take " << endl;
            } else
            {
                cellPtr = boardName[randNumber-4][randNumber-1];
                cellPtr->setAll(true,"Ant",bugPtr2);
                cout << "take 2" << endl;
            }
    }

// Print Board
    for(array<Cell*, COLS> row : boardName)
    {
        for(Cell* cell : row)
        {
            cout << cell->getGameSymbol();
        }
        cout << endl;
    }

    return 0;
}