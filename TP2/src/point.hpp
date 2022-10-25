#ifndef _point_h
#define _point_h

struct Point
{
    float x;
    float y;

    inline float Distance(const Point &point) const;
};

#endif