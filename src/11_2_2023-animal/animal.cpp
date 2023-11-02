#include <iostream>

using std::cout;

// Base class
class Animal {
  public:
    void animalSound() {
      cout << "An animal makes a sound \n";
    }
};

// Derived Class
class Bird{
    public:
        void animalSound()
        {
            cout << "The bird says::
        }
};


// Derived class
class Pig : public Animal {
  public:
    void animalSound() {
      cout << "The pig says: oink oink \n";
    }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
      cout << "The dog says: woof woof \n";
    }
};

// Derived class
class Cat : public Animal {
public:
   void animalSound() {
      cout << "The cat says: bring me food servant \n";
   }
};

int main() {
  Animal myAnimal;
  Pig myPig;
  Dog myDog;
  Cat theCat;

  myAnimal.animalSound();
  myPig.animalSound();
  myDog.animalSound();
  theCat.animalSound();
  return 0;
  Dog adog = myDog;
}