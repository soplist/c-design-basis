main()
{
   int j=1,n,k,sum=0;
   printf("input n:");
   scanf("%d",&n);
   while(j<n)
   {
	   scanf("%d",&k);
	   sum=sum+k;
	   j++;
   }
   printf("sum is:%d\n",sum);
}