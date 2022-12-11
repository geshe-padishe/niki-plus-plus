#ifndef _FIXED_HPP_
# define _FIXED_HPP_

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int                 _nb;
        static const   int  _bits = 8;

    public:
        Fixed();
        Fixed( const int );
        Fixed( const float );
        Fixed( const Fixed & );
        Fixed( Fixed & );
        ~Fixed();
        void setNb(int nb);
        int getRawBits( void ) const;
        void setRawBits( int const );
        const static Fixed& min (const Fixed&, const Fixed&);
        static Fixed& min (Fixed &, Fixed &);
        const static Fixed& max (const Fixed&, const Fixed&);
        static Fixed& max (Fixed &, Fixed &);
        friend std::ostream& operator<< ( std::ostream &out, const Fixed&);
        Fixed& operator=( Fixed& );
        Fixed& operator=( const Fixed& );
        Fixed operator+( const Fixed& ) const;
        Fixed operator-( const Fixed& B) const;
        Fixed operator/( const Fixed& B) const;
        Fixed operator*( const Fixed& B) const;
        bool operator==( const Fixed& B) const;
        bool operator>=( const Fixed& B) const;
        bool operator<=( const Fixed& B) const;
        bool operator>( const Fixed& B) const;
        bool operator<( const Fixed& B) const;
        bool operator!=( const Fixed& B) const;
        Fixed& operator++();
        Fixed operator++(int);
        Fixed& operator--();
        Fixed operator--(int);
        float toFloat( void ) const;
        int   toInt( void ) const;

};
#endif