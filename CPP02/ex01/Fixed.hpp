#ifndef _FIXED_HPP_
# define _FIXED_HPP_

#include <iostream>

class Fixed
{
    private:
        int         nb;
        static const   int bits = 8;

    public:
        Fixed();
        Fixed( const int nb );
        Fixed( const float fl_nb);
        Fixed( const Fixed &  );
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        Fixed& operator=( Fixed& );
        Fixed& operator<<( Fixed& );
        float toFloat( void ) const;
        int   toInt( void ) const;
};
#endif