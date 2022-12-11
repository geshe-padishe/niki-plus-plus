#ifndef _POINT_HPP_
# define _POINT_HPP_

#include "Fixed.hpp"

class Point
{
    private:
        Fixed const _x;
        Fixed const _y;

    public:
        Point();
        Point( const Fixed, const Fixed );
        Point( const Point& );
        ~Point();
        Fixed getX() const;
        Fixed getY() const;
        Point& operator=( const Point& );        
};

float area(float x1, float y1, float x2, float y2, float x3, float y3);
bool isInside(float x1, float y1, float x2, float y2, float x3, float y3, float x, float y);
bool bsp( Point const a, Point const b, Point const c, Point const point);
float   my_abs(float nb);

#endif