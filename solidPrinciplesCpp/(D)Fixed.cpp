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
    Operation op = add;   
    calculate(op, 10, 5); 

    op = subtract;
    calculate(op, 10, 5);
    return 0;
}
