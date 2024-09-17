#include <iostream>

void calculateSum(int a, int b)
{
    int sum = a + b;
    std::cout << "Sum is: " << sum << std::endl;
}

void performCalculation()
{
    int x = 10, y = 5;
    calculateSum(x, y); 
}

int main()
{
    performCalculation();
    return 0;
}
