main()
{
   float add(float m,float n);
   float x=-9.86,y=6.54;
   printf("%f+%f=%f\n",x,y,add(x,y));
}
float add(float m,float n)
{
   printf("m=%d,n=%d\n",m,n);
   return (m+n);
}