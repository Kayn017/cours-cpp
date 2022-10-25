#ifndef _circle_h
#define _circle_h

#include "point.hpp"

// M_PI n'est pas forcément dispo sous windows
// Dans le doute, je redéfinis ici
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif // M_PI

class Circle 
{
    public:
        // constructors
        Circle(int diameter);
        Circle(int diameter, Point center);
        // destructors
        ~Circle();
        // getters
        // getters
        inline int GetDiameter() const { return this->diameter; }
        inline Point GetCenter() const { return this->center; }
        // setters
        inline void SetDiameter(int diameter) { this->diameter = diameter; }
        inline void SetCenter(const Point &center) { this->center = center; }
        // functions
        float Perimeter() const;
        float Area() const;
        bool OnCircle(const Point &point) const;
        bool InsideCircle(const Point &point) const;
        // display
        void Display();
    private:
        int diameter;
        Point center;
};

#endif // _circle_h