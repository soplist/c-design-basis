#include <stdio.h>
long sum(register int x,int n)
{
   long s;
   register int t,i;
   t=s=x;
   for(i=2;i<=n;i++)
   {
      t*=x;
	  s+=t;
   }
   return (s);
}

main()
{
   int x,n;
   scanf("%d %d",&x,&n);
   printf("S=%ld\n",sum(x,n));
}