#include <iostream>

void calculateAndDisplay(int a, int b, char operation)
{
    if (operation == '+')
    {
        std::cout << "Result: " << a + b << std::endl;
    }
    else if (operation == '-')
    {
        std::cout << "Result: " << a - b << std::endl;
    }
    else if (operation == '*')
    {
        std::cout << "Result: " << a * b << std::endl;
    }
    else if (operation == '/')
    {
        std::cout << "Result: " << a / b << std::endl;
    }
}

int main()
{
    calculateAndDisplay(10, 5, '+');
    return 0;
}
