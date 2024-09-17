#include <iostream>

void process(int a, int b, bool addFlag, bool subtractFlag)
{
    if (addFlag)
    {
        std::cout << "Sum: " << a + b << std::endl;
    }

    if (subtractFlag)
    {
        std::cout << "Difference: " << a - b << std::endl;
    }
}

int main()
{
    process(10, 5, true, false); 
    process(10, 5, true, true);  
    return 0;
}
