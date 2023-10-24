#include <iostream>
#include <string>
using std::string;

class Student
{
private:
    string name();
    int sID{};

public:
    explicit Student(string name, int sID, string address);
    ~Student();

    

}