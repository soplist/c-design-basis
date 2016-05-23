main()
{
   float x=-9.86,y=6.54;
   printf("%f+%f=%f\n",x,y,add(x,y));
}
add(int m,int n)
{
   printf("m=%d,n=%d\n",m,n);
   return (m+n);
}