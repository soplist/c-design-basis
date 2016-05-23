main()
{
   float a,b,c,s,area;
   printf("please input a,b,c:\n");
   scanf("%f,%f,%f",&a,&b,&c);
   s=1.0/2*(a+b+c);
   area=sqrt(s*(s-a)*(s-b)*(s-c));
   printf("a=%7.2f\nb=%7.2f\nc=%7.2f\ns=%7.2f\n",a,b,c,s);
   printf("area=%7.2f\n",area);
}