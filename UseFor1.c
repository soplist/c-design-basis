main()
{
   int j,n;
   long fact=1;
   printf("please input n:\n");
   scanf("%d",&n);
   for(j=1;j<n;j++)
	   fact=fact*j;
   printf("fact=%ld",fact);
}