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
        inline int GetLength() const { return this->length; } 
        inline int GetWidth() const { return this->width; } 
        inline Point GetTopLeftCorner() const { return this->topLeftCorner; }
        // setters
        inline void SetLength(int length) { this->length = length; }
        inline void SetWidth(int width) { this->width = width; }
        inline void SetTopLeftCorner(const Point &topLeftCorner) { this->topLeftCorner = topLeftCorner; }
        // functions
        int Perimeter() const;
        float Area() const;
        bool HasALargerPerimeterThan(const Rectangle &rectangle);
        bool HasALargerAreaThan(const Rectangle &rectangle);
        // display
        void Display();

    private:
        int length;
        int width; 
        Point topLeftCorner;
};

#endif