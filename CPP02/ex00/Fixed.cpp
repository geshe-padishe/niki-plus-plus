#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->nb = 0;
}

Fixed::Fixed( const Fixed & fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    this->nb = fixed.nb;
}

Fixed::~Fixed()
{
    std::cout << "Fixed Destroyed" << std::endl;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits function called" << std::endl;
    return (this->nb);
}

void Fixed::setRawBits( int const raw )
{
    this->nb = raw;
}

Fixed& Fixed::operator=( Fixed& B)
{
    std::cout << "Copy assignment of Fixed" << std::endl;
    this->nb = B.nb;
    return *this;
}