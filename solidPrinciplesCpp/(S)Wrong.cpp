#include <iostream>

void handleUserInputAndCalculate()
{
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    int sum = a + b;

    std::cout << "The sum is: " << sum << std::endl;
}

int main()
{
    handleUserInputAndCalculate();
    return 0;
}
