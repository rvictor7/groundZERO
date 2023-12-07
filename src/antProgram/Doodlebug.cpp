// This is the implementation of the Ant class

#include <string>
using std::string;
#include "Doodlebug.h"

Doodlebug::Doodlebug(string orgType, int time):aOrgType{orgType}, aTime{time}
{
    // Left empty
}

void Doodlebug::setTime(int time)
{
    aTime = time;
}