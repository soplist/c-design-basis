main()
{
	int m,n;
	int *p1,*p2,*p;
	printf("please input numbers:\n");
	scanf("%d,%d",&m,&n);
	p1=&m;
	p2=&n;
	if(m>n)
	{
		p=p1;
		p1=p2;
		p2=p;
	}
	printf("m=%d,n=%d\n",m,n);
	printf("*p1=%d,*p2=%d\n",*p1,*p2);
}