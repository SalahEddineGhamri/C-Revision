// implementation for grid_hpp
// Author: Salah Eddine Ghmari

#include "grid.hpp"

//class creator and destructor
Grid::Grid(int size_x, int size_y)
{
    this->size_x = size_x;
    this->size_y = size_y;
    Data.assign((size_x*size_y), 0);
}

Grid::~Grid(){}

void Grid::setter( int x, int y, double value)
{
    std::cout << "Setting  ..." << std::endl;
    this->Data[x * this->size_x + y] = value;
}

double Grid::getter(int x, int y)
{
    double i = 0;
    std::cout << "Getting ..." << std::endl;
    return this->Data[x * this->size_x + y];
}

void Grid::dispData()
{
    for(int i=0; i< this->Data.size(); ++i)
    {
        std::cout << this->Data[i] << " ";
        if((i+1)%this->size_x == 0)
        {
            std::cout<<std::endl;
        }
    }
    std::cout << std::endl;
}