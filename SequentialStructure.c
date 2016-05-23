main()
{
   float pi,r,l,s;
   pi=3.14159;
   printf("please input radius:\n");
   scanf("%f",&r);
   l=2*pi*r;
   s=pi*r*r;
   printf("the circle length:l=%.2f\n",l);
   printf("the circle area:s=%.2f\n",s);
}