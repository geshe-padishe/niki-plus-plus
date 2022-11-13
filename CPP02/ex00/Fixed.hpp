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
        Fixed( const Fixed &  );
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        Fixed& operator=( Fixed& );
};
#endif