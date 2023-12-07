// Summary: header file for organism base class

#ifndef ORGANISM_H
#define ORGANISM_H

#include <string>
using std::string;

class Organism
{
private:
    string aOrgType = "no type";
public:
    explicit Organism(string orgType);
    int randomSelection0to3();

    void move();
    virtual void breed();
};

#endif