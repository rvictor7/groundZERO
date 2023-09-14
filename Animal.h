#include <string>

class Animal
{
private:
    std::string specie; 
    int age;
    bool isWild;

public:
    Animal(std::string s, int a, bool w);

    std::string getSpecies(); 
    void setSpecie(std::string s);

    int getAge();
    void setAge(int a);

    bool getIsWile(); 
    void setIsWild(bool w);
};
