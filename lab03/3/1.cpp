#include <iostream>

int main()
{
    int x = 100;
    char y = x;

    std::cout << static_cast<int>(y) << std::endl;

    return 0;
}