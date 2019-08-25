//Header file for 
//Author: Salah Eddine Ghamri
#ifndef GRID_HPP
#define GRID_HPP

//=====================================================
// include dependencies:
#include <vector>
#include <iostream>
//=====================================================
//type definition:
typedef std::vector<int> GridArray;
//=====================================================
class Grid
{
    private:
        GridArray Data;
        int size_x;
        int size_y;
        
    public:
        Grid(int size_x, int size_y);
        void setter(int x, int y, double value);
        double getter(int x, int y);
        void dispData();
        ~Grid();
};
#endif 