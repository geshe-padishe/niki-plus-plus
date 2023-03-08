#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    _nb = 0;
}

Fixed::Fixed( const Fixed & fixed)
{
    std::cout << "Fixed Copy constructor called" << std::endl;
    _nb = fixed._nb;
}

Fixed::Fixed( const float fl)
{
    std::cout << "Float Copy constructor called" << std::endl;
    _nb = roundf(fl * (1 << _bits));
}

Fixed::Fixed( const int nb)
{
    std::cout << "Int Copy constructor called" << std::endl;
    _nb = roundf(nb * (1 << _bits));
}

Fixed::~Fixed()
{
    std::cout << "Fixed Destroyed" << std::endl;
}

int Fixed::getRawBits() const
{
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

Fixed& Fixed::operator=( const Fixed& B)
{
    this->_nb = B._nb;
    return *this;
}

Fixed Fixed::operator+( const Fixed& B) const
{
    return Fixed(this->toFloat() +  B.toFloat());
}

Fixed Fixed::operator-( const Fixed& B) const
{
    return Fixed(this->toFloat() -  B.toFloat());
}

Fixed Fixed::operator*( const Fixed& B) const
{
    return Fixed(this->toFloat() *  B.toFloat());
}

Fixed Fixed::operator/( const Fixed& B) const
{
    return Fixed(this->toFloat() /  B.toFloat());
}

bool Fixed::operator==( const Fixed& B) const
{
    return (this->toFloat() ==  B.toFloat());
}

bool Fixed::operator>=( const Fixed& B) const
{
    return (this->toFloat() >=  B.toFloat());
}

bool Fixed::operator<=( const Fixed& B) const
{
    return (this->toFloat() <=  B.toFloat());
}

bool Fixed::operator>( const Fixed& B) const
{
    return (this->toFloat() >  B.toFloat());
}

bool Fixed::operator<( const Fixed& B) const
{
    return (this->toFloat() <  B.toFloat());
}

bool Fixed::operator!=( const Fixed& B) const
{
    return (this->toFloat() !=  B.toFloat());
}

std::ostream& operator<< ( std::ostream &out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return (out);
}

const Fixed& Fixed::min (const Fixed & A, const Fixed & B)
{
    if (A < B)
        return (A);
    else if (B < A)
        return (B);
    return (A);
}

Fixed& Fixed::min (Fixed & A, Fixed & B)
{
    if (A < B)
        return (A);
    else if (B < A)
        return (B);
    return (A);
}

const Fixed& Fixed::max (const Fixed & A, const Fixed & B)
{
    if (A > B)
        return (A);
    else if (B > A)
        return (B);
    return (A);
}

Fixed& Fixed::max (Fixed & A, Fixed & B)
{
    if (A > B)
        return (A);
    else if (B > A)
        return (B);
    return (A);
}

Fixed Fixed::operator++(int)
{
    Fixed temp = (*this);
    ++*this;
    return (temp);
}

Fixed& Fixed::operator++()
{
    this->setRawBits(this->getRawBits() + 1);
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed temp = (*this);
    --*this;
    return (temp);
}

Fixed& Fixed::operator--()
{
    _nb--;
    return (*this);
}
