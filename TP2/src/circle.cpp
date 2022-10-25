#include "circle.hpp"
#include <math.h>
#include <iostream>

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

void Circle::Display() 
{
    std::cout << "Diameter : " << this->diameter << std::endl;

    std::cout << " --- Center ---" << std::endl;
    this->center.Display(); 
    std::cout << " --- Center end ---" << std::endl;

    std::cout << "Perimeter : " << this->Perimeter() << std::endl;
    std::cout << "Area : " << this->Area() << std::endl;
}