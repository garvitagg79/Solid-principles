#include <iostream>

int getSum(int a, int b)
{
    return a + b;
}

int getDifference(int a, int b)
{
    return a - b;
}

void displayResult(int result)
{
    std::cout << "Result: " << result << std::endl;
}

int main()
{
    int x = 10, y = 5;
    displayResult(getSum(x, y));       
    displayResult(getDifference(x, y)); 
    return 0;
}
