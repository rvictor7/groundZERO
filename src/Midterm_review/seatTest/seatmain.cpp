/* An arithmetic progression is a sequence of numbers such that the difference
from any succeeding term to its preceding term remains constant throughout the sequence.
The constant difference is called common difference of that arithmetic progression.

For instance, the sequence 5, 9, 13, 17, . . . is an arithmetic progression with a common difference of 4.

Arithmetic progressions occur in several situations in the real world. For instance,
consider the seating of an auditorium, where the first row (the closest to the stage)
has five and each row of seats increases by four seats as you walk away from the stage. Thus, each row seats is given by with
, and thus the total number of seats in an auditorium with five rows is.

ToDo 1 [40 marks]
Write a recursive function totalSeats that implements the given recursion.

A prototype must be included in seats.h and the implementation in seats.cpp.

A non-recursive implementation will give 0 marks.

The function takes three parameters:

totalSeats(rowCount, increase, chairCount)

number of rows in the auditorium (in the formula)
The number of seats each row increases as you move away from the stage (in the example).
The amount of chairs in the first row.
The function returns the total number of seats in the an auditorium with
 rows.
*/

#include <iostream>
#include "seat.h"

int main()
{
    int aSeat = totalSeats(5,5,2);
    std::cout << aSeat << std::endl;

    int bSeat = totalSeats(5,0,5);
    std::cout << bSeat << std::endl;
}