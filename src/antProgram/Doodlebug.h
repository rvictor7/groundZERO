// Summary: header file for derived Doodlebug class

#ifndef DOODLEBUG_H
#define DOODLEBUG_H

#include <string>
#include "Organism.h"
using std::string;

class Doodlebug: public Organism
{
private:
    string aOrgType = "Doodlebug";
    int aTime {0};
public:
    explicit Doodlebug(string orgType, int time);

    void setTime(int time);
};

#endif