#include <iostream>

int main()
{
    int x = 5, y = 5, z = 10;

    std::cout << ((x == y) + (x == z) == true);

    return 0;
}