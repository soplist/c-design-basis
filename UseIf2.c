#include <math.h>
main()
{
   float x,y;
   printf("please input x:\n");
   scanf("%f",&x);
   y=x>0?sqrt(x):fabs(x);
   printf("x=%f,y=%f\n",x,y);
}