#include <iostream>

typedef int (*Operation)(int, int);

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

void calculate(Operation op, int a, int b)
{
    int result = op(a, b);
    std::cout << "Result: " << result << std::endl;
}

int main()
{
    int x = 10, y = 5;
    calculate(add, x, y);     
    calculate(subtract, x, y); 
    return 0;
}
