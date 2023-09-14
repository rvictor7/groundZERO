#include <string>

class Car
{
private:
    std::string brand;
    int yearMade;
    double mileage;

public:
    explicit Car(std::string b, int y, double m);

    std::string getBrand();
    void setBrand(std::string b);

    int getYear();
    void setYear(int y);

    double getMileage();
    void addMileage(double miles);
};
