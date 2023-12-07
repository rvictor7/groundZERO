// This file holds the culmination of files for the Ant Program


#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <array>
using std::array;

#include <string>
using std::string;

//#include "Cell.h"
//#include "Organism.h"

int main()
{


// Variables for game board
    const int COLS = 20;
    const int ROWS = 20;

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

    for(int i=0; i<ROWS; i++)
    {
        for(int j=0; j<COLS; j++)

        //string* cell;// = new string(" ");
        //cout << cell << std::endl;
        //cell & = "[ ]";

        objects[i][j] = new string("[ ]");
    }


    for(array<string*, COLS> row : objects)
    {
        for(auto cell : row)
        {
            cout << *cell;
        }
        cout << endl;
    }


    return 0;
}