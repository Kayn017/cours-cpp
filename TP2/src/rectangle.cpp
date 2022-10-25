#include "rectangle.hpp"
#include <iostream>

// constructors
Rectangle::Rectangle(): length(0), width(0), topLeftCorner( )
{
    this->topLeftCorner.x = 0;
    this->topLeftCorner.y = 0;
}

Rectangle::Rectangle(int length, int width): length(length), width(width)
{
    this->topLeftCorner.x = 0;
    this->topLeftCorner.y = 0;
}

Rectangle::Rectangle(int length, int width, Point corner): length(length), width(width)
{
    this->topLeftCorner.x = corner.x;
    this->topLeftCorner.y = corner.y;
}

// destructor
Rectangle::~Rectangle()
{}

// functions
int Rectangle::Perimeter() const
{
    return (this->length * 2) + (this->width * 2);
}

float Rectangle::Area() const
{
    return this->length * this->width;
}

void Rectangle::Display()
{
    std::cout << "Length : " << this->length << std::endl;
    std::cout << "Width : " << this->width << std::endl;
    std::cout << " --- topLeftCorner ---" << std::endl;
    this->topLeftCorner.Display();
    std::cout << " --- topLeftCorner end ---" << std::endl;
    std::cout << "Perimeter : " << this->Perimeter() << std::endl;
    std::cout << "Area : " << this->Area() << std::endl;
}