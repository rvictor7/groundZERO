// This file holds the culmination of files for the Ant Program


#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <array>
using std::array;

#include "Cell.h"
#include "Organism.h"

int main()
{
// Variables for game board
    const int COLS = 10;
    const int ROWS = 10;

// Create 2D Array
    array<array<string, COLS>, ROWS> gameBoard
    {
        "[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]",
        "[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]",
        "[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]",
        "[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]",
        "[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]",
        "[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]",
        "[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]",
        "[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]",
        "[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]",
        "[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]"
    };
    for(array<string, COLS> row : gameBoard)
    {
        for(string cell : row)
        {
            cout << cell;
        }
        cout << endl;
    }


    array<array<string*, COLS>, ROWS> objects;

    for(int i=0; i<100; i++)
    {
        string* cell = new "[ ]";
        objects[i] = cell;
    }


    for(array<string, COLS> row : objects)
    {
        for(string cell : row)
        {
            cout << cell;
        }
        cout << endl;
    }


    return 0;
}