#include "point.hpp"
#include <math.h>

// distance between two points
float Point::Distance(const Point &point) const
{
    return sqrt( pow(this->x - point.x, 2) + pow(this->y - point.y, 2) );
}