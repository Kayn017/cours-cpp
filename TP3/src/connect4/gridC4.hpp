#ifndef _GRID_C4_H
#define _GRID_C4_H

#include "../generic/grid.hpp"

class GridC4 : public Grid
{
    public:
        // constructors
        GridC4(const int nb_lines, const int nb_columns);
        // destructors
        ~GridC4(); 
};

#endif // _GRID_C4_H