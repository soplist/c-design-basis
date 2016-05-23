main()
{
	int r,k;
	float a,b,c,d;
	printf("please input r,k:\n");
	scanf("%d,%d",&r,&k);
	if(r<k)
    {
		a=fac(k);
		b=fac(r);
		c=fac(k-r);
		d=a/(b*c);
		printf("k!/(r!(k-r)!)=%10.2f",d);
	}
	else
	    printf("r>k,input data error");
}

fac(int n)
{
	int i;
	float t=1.0;
	if(n<0)
	{
		printf("n<0,data error");
		t=-1;
	}
	else
		for(i=2;i<=n;i++)
		   t=t*i;
	return (t);
}