#include "Point.hpp"

int main( void )
{
   Point A(Fixed(10), Fixed(30));
   Point B(Fixed(0), Fixed(0));
   Point C(Fixed(20), Fixed(0));
   Point P(Fixed(10), Fixed(15));

   std::cout << "--------------------" << std::endl;
   if (bsp(A, B, C, P))
      std::cout << "bsp return 1" << std::endl;
   else
      std::cout << "bsp return 0" << std::endl;
}

/*  Fixed a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );
    Fixed y (10);
    a = Fixed( 1234.4321f );
    std::cout << "y is " << y << std::endl;
    y = y * y;
    std::cout << "y is " << y.toInt() << " as integer" << std::endl;
    y = y / y;
    std::cout << "y is " << y << std::endl;
    std::cout << "-----------------------------" << std::endl;
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;
*/
