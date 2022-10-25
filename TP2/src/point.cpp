#include "point.hpp"
#include <math.h>

float Point::Distance(const Point &point) const
{
    return sqrt( pow(this->x - point.x, 2) + pow(this->y - point.y, 2) );
}