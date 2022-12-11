#ifndef _FIXED_HPP_
# define _FIXED_HPP_

#include <iostream>

class Fixed
{
    private:
        int                 _nb;
        static const   int  _bits = 8;

    public:
        Fixed();
        Fixed( Fixed &  );
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        Fixed& operator=( Fixed& );
};
#endif