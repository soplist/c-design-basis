main()
{
   int m;
   long fib,fib1=1,fib2=1;
   printf("%ld\t%ld\n",fib1,fib2);
   for(m=3;m<=12;m++)
   {
	   fib=fib1+fib2;
	   fib2=fib1;
	   fib1=fib;
	   printf("%ld\t",fib);
	   if(m%2==0)
		   printf("\n");
   }
}