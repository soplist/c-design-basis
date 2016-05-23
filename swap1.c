int a=10,b=20;
main()
{
   void fun(void);
   printf("a=%d,b=%d\n",a,b);
   fun();
   printf("a=%d,b=%d\n",a,b);
}

void fun(void)
{
   int temp;
   temp=a;
   a=b;
   b=temp;
}