#include "Point.hpp"

Point::~Point() {}

Point::Point(): _x(Fixed(0)), _y(Fixed(0)) {}

Point::Point( const Fixed x, const Fixed y): _x(x), _y(y) {}

Point::Point( const Point& B): _x(B._x), _y(B._y) {}

Fixed Point::getX() const
{
    return (this->_x);
}

Fixed Point::getY() const
{   
    return (this->_y);
}