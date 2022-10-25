#include "circle.hpp"
#include <math.h>

// constructors
Circle::Circle(int diameter): diameter(diameter)
{}

Circle::Circle(int diameter, Point center): diameter(diameter)
{
    this->center.x = center.x;
    this->center.y = center.y;
}

// destructors
Circle::~Circle() 
{}

// functions
float Circle::Perimeter() const
{
    return 2 * M_PI * (this->diameter / 2);
}

float Circle::Area() const
{
    return M_PI * pow( this->diameter / 2, 2 );
}

bool Circle::OnCircle(const Point &point) const
{
    return this->center.Distance(point) == (this->diameter / 2);
}

bool Circle::InsideCircle(const Point &point) const
{
    return this->center.Distance(point) < (this->diameter / 2);
}