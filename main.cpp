#include "add.h"
#include <iostream>

// int add(int x, int y); // Forward declaration of add()

// Command to properly link compile and link files
// g++ main.cpp add.cpp -o main

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';
    return 0;
}
