void fun()
{
   int a,b=8;
   static int c,d=10;
   a=34;c=9;
   a++;b++;c++;d++;
   printf("%d\t%d\t%d\t%d\t",a,b,c,d);
}

main()
{
   int i;
   for(i=0;i<2;i++)
	   fun();
}