
#ifndef ENGINE_H
#define ENGINE_H
#include <string>
using std::string;
class Engine
{
public:
Engine(); // default constructor

explicit Engine(string); // constructor

~Engine(); // destructor

// Setters
void setModel(string);
void setBigBlock(bool);

// Getters
string getModel() const;
bool getBigBlock() const;


private:
// Variables
string model;
bool bigBlock;
string engineCyl;


};
#endif
