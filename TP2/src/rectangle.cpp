#include "rectangle.hpp"

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

// getters
int Rectangle::GetLength() const
{
    return this->length;
} 

int Rectangle::GetWidth() const
{
    return this->width;
} 

Point Rectangle::GetTopLeftCorner() const
{
    return this->topLeftCorner;
}

// setters
void Rectangle::SetLength(int length)
{
    this->length = length;
}

void Rectangle::SetWidth(int width)
{
    this->width = width;
}

void Rectangle::SetTopLeftCorner(Point topLeftCorner)
{
    this->topLeftCorner = topLeftCorner;
}

// functions
int Rectangle::Perimeter() const
{
    return (this->length * 2) + (this->width * 2);
}

float Rectangle::Area() const
{
    return this->length * this->width;
}

void Rectangle::Afficher() 
{
    // this->GetTopLeftCorner().Distance(Point{});
}