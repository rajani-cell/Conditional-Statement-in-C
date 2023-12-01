//*Quadratic Equation Solver*: Implement a program that calculates the roots of a quadratic equation (ax^2 + bx + c = 0) using conditional statements. Be sure to handle cases with real and complex roots.
#include<stdio.h>
#include<math.h>


int main()
{

  
   double a,b,c,d,x1,x2;
   printf("Enter  value a, b, c =");
   scanf("%lf%lf%lf",&a,&b,&c);

   d=sqrt((b*b)-(4*a*c));

   x1=(-b+d)/(2*a);
   x1=(-b-d)/(2*a);

   printf("x1 = %lf\n x2 = %lf",x1,x2);

  return 0;
}
