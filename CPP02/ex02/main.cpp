#include "Fixed.hpp"
#include <limits>

int main( void )
{
   Fixed a;
   Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
   Fixed const c(0);
   Fixed const d( Fixed(13.05f));

   std::cout << a << std::endl;
   std::cout << ++a << std::endl;
   std::cout << a << std::endl;
   std::cout << a++ << std::endl;
   std::cout << a << std::endl;
   std::cout << b << std::endl;
   std::cout << "Max = " << Fixed::max( a, b ) << std::endl;
   std::cout << "Min = " << Fixed::min( a, b ) << std::endl;   
   std::cout << "Max = " << Fixed::max( c, d ) << std::endl;
   std::cout << "Min = " << Fixed::min( c, d ) << std::endl;

   return 0;
}