#include <iostream>
#ifndef Student_
#define Student_

Class Student
{
private:
    std::string name("");
    int SID{0};
    std::string address("");

public:
    explicit Student(std::string name, int studentID, std::string address);
    ~Student();

    //setters
    setName(std::string aName);
    setSid(int aSID);
    setAddress(int aAddress);

    //getters
    getName();
    getSid();
    getAddress();

    //print
    studentDisplay();
};
#endif