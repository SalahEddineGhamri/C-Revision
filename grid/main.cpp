// Author: Salah Eddine Ghamri
// Year: 2019

// main for grid class creation.
// code to create a class of a grid in a full interface.
#include "grid.hpp"

int main()
{
    Grid map(10, 10);
    map.setter(4, 5, 2.0);
    map.dispData();
    std::cout << map.getter(4, 5) << std::endl;
    return 0;
}
