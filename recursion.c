long fac(int n)
{
	long f;
	if(n<0)
		printf("error");
	else if(n==0||n==1)
		f=1;
	else f=n*fac(n-1);
	return (f);
}

main()
{
	int n;
	long f;
	scanf("%d",&n);
	f=fac(n);
	printf("%d!=%ld",n,f);
}