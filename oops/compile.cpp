#include <iostream>
using namespace std;

// Compile-time polymorphism through function overloading
class Calculator
{
public:
    // Overloaded function to add two integers
    int add(int a, int b)
    {
        return a + b;
    }

    // Overloaded function to add three integers
    int add(int a, int b, int c)
    {
        return a + b + c;
    }
};

int main()
{
    Calculator calc;

    // Function calls are resolved at compile time
    cout << "Sum of 2 and 3: " << calc.add(2, 3) << endl;
    cout << "Sum of 2, 3, and 4: " << calc.add(2, 3, 4) << endl;

    return 0;
}
