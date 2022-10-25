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
        inline Point GetPointA() const;
        inline Point GetPointB() const;
        inline Point GetPointC() const;
        // setters
        inline void SetPointA(Point a);
        inline void SetPointB(Point b);
        inline void SetPointC(Point c);
        // functions
        float Base() const;
        inline float Heigth() const;
        float Area() const;
        std::array<float, 3> Lengths() const;
        bool Isosceles() const;
        bool Rectangle() const;
        bool Equilateral() const;

    private:
        Point a;
        Point b;
        Point c;
};

#endif