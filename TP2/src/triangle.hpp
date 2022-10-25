#ifndef _triangle_h
#define _triangle_h

#include "point.hpp"

#include <array>

class Triangle
{
    public:
        // constructors
        Triangle(Point a, Point b, Point c);
        // destructors
        ~Triangle();
        // getters
        inline Point GetPointA() const { return this->a; }
        inline Point GetPointB() const { return this->b; }
        inline Point GetPointC() const { return this->c; }
        // setters
        inline void SetPointA(const Point &a) { this->a = a; }
        inline void SetPointB(const Point &b) { this->b = b; }
        inline void SetPointC(const Point &c) { this->c = c; }
        // functions
        float Base() const;
        float Heigth() const;
        float Area() const;
        std::array<float, 3> Lengths() const;
        bool Isosceles() const;
        bool Rectangle() const;
        bool Equilateral() const;
        // display
        void Display();
    private:
        Point a;
        Point b;
        Point c;
};

#endif