#include "triangle.hpp"
#include <math.h>
#include <iostream>

// constructor
Triangle::Triangle(Point a, Point b, Point c)
{
    this->a = a;
    this->b = b;
    this->c = c;
}

// destructor 
Triangle::~Triangle()
{}

// functions
std::array<float, 3> Triangle::Lengths() const
{
    std::array<float, 3> lengths;

    lengths[0] = this->a.Distance(this->b);
    lengths[1] = this->a.Distance(this->c);
    lengths[2] = this->b.Distance(this->c);

    return lengths;
} 

float Triangle::Base() const
{
    std::array<float, 3> lengths = this->Lengths();

    float maxLength = lengths[0];

    for(int i = 1; i < 3; i++)
    {
        if(lengths[i] > maxLength)
            maxLength = lengths[i];
    }

    return maxLength;
}

float Triangle::Area() const
{
    std::array<float, 3> lengths = this->Lengths();

    int p = ( lengths[0] + lengths[1] + lengths[2] ) / 2; // half perimeter

    return sqrt(p * (p - lengths[0]) * (p - lengths[1]) * (p - lengths[2]));
}

bool Triangle::Isosceles() const
{
    std::array<float, 3> lengths = this->Lengths();

    for(int i = 0; i < 2; i++)
    {
        if(lengths[i] == lengths[i + 1])
            return true;
    }

    return false;
}
 
bool Triangle::Equilateral() const
{
    std::array<float, 3> lengths = this->Lengths();

    return (
        lengths[0] == lengths[1] &&
        lengths[1] == lengths[2] &&
        lengths[2] == lengths[0]
    );
}

float Triangle::Heigth() const
{
    return (2 * this->Area()) / this->Base();
}

bool Triangle::Rectangle() const
{
    std::array<float, 3> lengths = this->Lengths();

    return (
        std::pow(lengths[0], 2) == (std::pow(lengths[1], 2) + std::pow(lengths[2], 2)) ||
        std::pow(lengths[1], 2) == (std::pow(lengths[0], 2) + std::pow(lengths[2], 2)) ||
        std::pow(lengths[2], 2) == (std::pow(lengths[1], 2) + std::pow(lengths[0], 2))
    );
}

void Triangle::Display()
{
    std::cout << " --- Point a ---" << std::endl;
    this->a.Display();
    std::cout << " --- Point a end ---" << std::endl;
    std::cout << " --- Point b ---" << std::endl;
    this->b.Display();
    std::cout << " --- Point b end ---" << std::endl;
    std::cout << " --- Point c ---" << std::endl;
    this->c.Display();
    std::cout << " --- Point c end ---" << std::endl;

    std::cout << "Base : " << this->Base() << std::endl;
    std::cout << "Heigth : " << this->Heigth() << std::endl;
    std::cout << "Isosceles : " << this->Isosceles() << std::endl;
    std::cout << "Rectangle : " << this->Rectangle() << std::endl;
    std::cout << "Equilateral : " << this->Equilateral() << std::endl;
}