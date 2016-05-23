main()
{
	int sum,k=3,n=7;
	sum=sub(k,n);
	printf("output the result:%d",sum);
}

sub(int a,int b)
{
   int j,s=0;
   for(j=1;j<=b;j++)
   {
	   s=s+powers(j,a);
   }
   return (s);
}

powers(int m,int n)
{
	int i,product=1;
	for(i=1;i<=n;i++)
	{
		product=product*m;
	}
	return (product);
}