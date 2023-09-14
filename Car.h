#include <string>

class Car
{
private:
    std::string brand;
    int yearMade;
    double mileage;

public:
    Car(std::string b, int y, double m);

    std::string getBrand();
    void setbrand(std::string b);

    int getYear();
    void setYear(int y);

    double getMileage()
    void addMileage(double miles);
};
