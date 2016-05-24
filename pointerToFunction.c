int max(int m,int n)
{
	if(m>=n)
		return (m);
	else
		return (n);
}

main()
{
    int a,b,c;
	int (*p)();
	printf("please input numbers:\n");
	scanf("%d,%d",&a,&b);
	p=max;
	c=(*p)(a,b);
	printf("a=%d,b=%d\nmax=%d",a,b,c);
}