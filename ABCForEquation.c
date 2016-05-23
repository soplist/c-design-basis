#include <math.h>

main()
{
   float a,b,c,disc,x1,x2,p,q;
   printf("please input a,b,c:\n");
   scanf("%f,%f,%f",&a,&b,&c);
   if(fabs(a)<1e-6)
	   printf("the equation is not a quadratic\n");
   else
   {
	   disc=b*b-4.0*a*c;
	   if(disc<0)
	   {
		   p=-b/(2.0*a);
		   q=sqrt(-disc)/(2.0*a);
		   printf("x1=%f+%fi\n",p,q);
		   printf("x2=%f-%fi\n",p,q);
	   }
	   else
	   {
		   if(disc<1e-6)
			   printf("the equation has two equal roots:%f\n",-b/(2.0*a));
		   else
		   {
			   p=-b/(2.0*a);
			   q=sqrt(disc)/(2.0*a);
			   x1=p+q;
			   x2=p-q;
			   printf("x1=%5.2f\n",x1);
			   printf("x2=%5.2f\n",x2);
		   }
	   }
   }
	   
}