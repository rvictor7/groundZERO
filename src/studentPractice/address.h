#include <iostream>
#ifndef Address_
#define Address_

class Address
{
private:
    std::string street("");
    std::string city("");
    std::string state("");

public:
    explicit Address(std::string street, std::string city, std::string state);
    ~Address();

    //setters
    setStreet(std::string aStreet);
    setCityaState(std::string aCity, std::string aState);

    //getters
    getStreet();
    getCityaState();

    //print
    addressDisplay();


};
#endif