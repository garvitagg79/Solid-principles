#include <iostream>

class Bird
{
public:
    virtual void info()
    {
        std::cout << "I am a bird.\n";
    }
};

class FlyingBird : public Bird
{
public:
    virtual void fly()
    {
        std::cout << "Flying...\n";
    }
};

class Sparrow : public FlyingBird
{
};

class Penguin : public Bird
{
    void info() override
    {
        std::cout << "I am a penguin. I can't fly.\n";
    }
};

int main()
{
    Sparrow sparrow;
    Penguin penguin;

    sparrow.fly(); // Output: "Flying..."

    penguin.info(); // Output: "I am a penguin. I can't fly."
}
