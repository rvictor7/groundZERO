// Summary: header file for derived Ant class

#ifndef ANT_H
#define ANT_H

#include <string>
#include "Organism.h"
using std::string;

class Ant: public Organism
{
private:
    string aOrgType = "Ant";
public:
    explicit Ant(string orgType);
};

#endif