main()
{
   int j=1,n,k;
   int sum=0;
   printf("input n:");
   scanf("%d",&n);
   do
   {
	   scanf("%d",&k);
	   sum=sum+k;
	   j++;
   }
   while(j<=n);
   printf("sum is %d\n",sum);
}