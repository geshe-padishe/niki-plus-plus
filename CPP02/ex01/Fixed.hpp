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
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const );
        Fixed( Fixed& );
        friend std::ostream& operator<< ( std::ostream &out, const Fixed&);

        float toFloat( void ) const;
        int   toInt( void ) const;

};
#endif