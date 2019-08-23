// implementation for grid_hpp
// Author: Salah Eddine Ghmari

#include "grid.hpp"

//class creator and destructor
Grid::Grid(int size_x, int size_y)
{
    Data.assign((size_x*size_y), 0);
}

Grid::~Grid(){}

void Grid::setter( int x, int y, double value)
{
    std::cout << " setter " << std::endl;

}

double Grid::getter(int x, int y)
{
    double i = 0;
    std::cout << " getter " << std::endl;
    return i;
}