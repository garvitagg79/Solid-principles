#include <iostream>

void getInput(int &a, int &b)
{
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
}

int addNumbers(int a, int b)
{
    return a + b;
}

void displayResult(int result)
{
    std::cout << "The sum is: " << result << std::endl;
}

int main()
{
    int x, y;
    getInput(x, y);             
    int sum = addNumbers(x, y); 
    displayResult(sum);        
    return 0;
}
