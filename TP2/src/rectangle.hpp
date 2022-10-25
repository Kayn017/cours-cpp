#ifndef _rectangle_h
#define _rectangle_h

#include "point.hpp"

class Rectangle 
{
    public:
        // constructor
        Rectangle();
        Rectangle(int length, int width);
        Rectangle(int length, int width, Point point);
        //destructor
        ~Rectangle();
        // getters
        inline int GetLength() const;
        inline int GetWidth() const;
        inline Point GetTopLeftCorner() const;
        // setters
        inline void SetLength(int length);
        inline void SetWidth(int width);
        inline void SetTopLeftCorner(Point topLeftCorner);
        // functions
        inline int Perimeter() const;
        inline float Area() const;
        void Afficher();

    private:
        int length;
        int width; 
        Point topLeftCorner;
};

#endif