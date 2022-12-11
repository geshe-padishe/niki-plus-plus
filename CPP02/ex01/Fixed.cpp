#include "Fixed.hpp"

Fixed::Fixed(): _nb(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed & fixed): _nb(fixed._nb)
{
    std::cout << "Fixed Copy constructor called" << std::endl;
}

Fixed::Fixed( const float fl)
{
    std::cout << "Float Copy constructor called" << std::endl;
    _nb = roundf(fl * (1 << _bits));
}

Fixed::Fixed( const int nb)
{
    _nb = roundf(nb * (1 << _bits));
}

Fixed::~Fixed()
{
    std::cout << "Fixed Destroyed" << std::endl;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits function called" << std::endl;
    return (_nb);
}

void Fixed::setRawBits( int const raw )
{
    _nb = raw;
}

float Fixed::toFloat( void ) const
{
    return ((float)_nb / (float)(1 << _bits));
}

int   Fixed::toInt( void ) const
{
    return (roundf(_nb / (1 << _bits)));
}

std::ostream& operator<< ( std::ostream &out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return (out);
}