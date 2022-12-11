#include "Point.hpp"

float area(float x1, float y1, float x2, float y2, float x3, float y3)
{
   return my_abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);
}

bool isInside(float x1, float y1, float x2, float y2, float x3, float y3, float x, float y)
{  
   /* Calculate area of triangle ABC */
   float A = area (x1, y1, x2, y2, x3, y3);
  
   /* Calculate area of triangle PBC */ 
   float A1 = area (x, y, x2, y2, x3, y3);
  
   /* Calculate area of triangle PAC */ 
   float A2 = area (x1, y1, x, y, x3, y3);
  
   /* Calculate area of triangle PAB */  
   float A3 = area (x1, y1, x2, y2, x, y);
    
   /* Check if sum of A1, A2 and A3 is same as A */
   return (A == A1 + A2 + A3);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    return (isInside( a.getX().toFloat(), a.getY().toFloat(), b.getX().toFloat(),
    b.getY().toFloat(), c.getX().toFloat(), c.getY().toFloat(),
    point.getX().toFloat(), point.getY().toFloat()));
}

float   my_abs(float nb)
{
    if (nb < 0)
        return (-nb);
    return (nb);
}