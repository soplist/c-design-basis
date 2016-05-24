main()
{
	static int a[2][3]={{1,2,3},{4,5,6}};
	static int b[3][2],m,n;
	printf("array a:\n");
	for(m=0;m<2;m++)
	{
		for(n=0;n<3;n++)
		{
			printf("%5d",a[m][n]);
			b[n][m]=a[m][n];
		}
		printf("\n");
	}
	printf("array b:\n");
	for(m=0;m<3;m++)
    {
		for(n=0;n<2;n++)
		{
			printf("%5d",b[m][n]);
		}
		printf("\n");
	}
}