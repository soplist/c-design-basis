#include "math.h"
main()
{
   float a,b,c,disc,x1,x2,p,q;
   printf("please input a,b,c:\n");
   scanf("%f,%f,%f",&a,&b,&c);
   disc=b*b-4.0*a*c;
   p=-b/(2.0*a);
   q=sqrt(disc)/(2.0*a);
   x1=p+q;x2=p-q;
   printf("x1=%5.2f\nx2=%5.2f\n",x1,x2);
}