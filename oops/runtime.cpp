#include <iostream>
using namespace std;

// Base class
class Animal
{
public:
    // Virtual function to be overridden in derived classes
    virtual void sound()
    {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class: Dog
class Dog : public Animal
{
public:
    void sound() override
    {
        cout << "Dog barks" << endl;
    }
};

// Derived class: Cat
class Cat : public Animal
{
public:
    void sound() override
    {
        cout << "Cat meows" << endl;
    }
};

int main()
{
    Animal *animal; // Base class pointer

    Dog dog;
    Cat cat;

    // Pointer to Dog object
    animal = &dog;
    animal->sound(); // Calls Dog's sound() at runtime

    // Pointer to Cat object
    animal = &cat;
    animal->sound(); // Calls Cat's sound() at runtime

    return 0;
}
