#include "Fixed.hpp"

Fixed::Fixed(): _nb(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed & fixed): _nb(fixed._nb)
{
    std::cout << "Copy constructor called" << std::endl;
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

Fixed& Fixed::operator=( Fixed& B)
{
    std::cout << "Copy assignment of Fixed" << std::endl;
    _nb = B._nb;
    return *this;
}