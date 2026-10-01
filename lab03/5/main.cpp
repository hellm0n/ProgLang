#include <iostream>
#include <string>

typedef unsigned long long UserId;

int main()
{
    UserId id = 100;

    auto name = std::string("Alex");

    decltype(id) anotherId = 200;

    double price = 15.8;
    int intPrice = static_cast<int>(price);

    std::cout << id << std::endl;
    std::cout << name << std::endl;
    std::cout << anotherId << std::endl;
    std::cout << intPrice << std::endl;
    std::cout << sizeof(id) << std::endl;

    return 0;
}