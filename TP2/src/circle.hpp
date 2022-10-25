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
        inline int GetDiameter() const;
        inline Point GetCenter() const;
        // setters
        void SetDiameter(int diameter);
        void SetCenter(const Point &center);
        // functions
        inline float Perimeter() const;
        inline float Area() const;
        inline bool OnCircle(const Point &point) const;
        inline bool InsideCircle(const Point &point) const;

    private:
        int diameter;
        Point center;
};

#endif // _circle_h