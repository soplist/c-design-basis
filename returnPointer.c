main()
{
	int score[][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int *search(int(*pointer)[4],int n);
	int *p,i,m;
	printf("enter the number of student:");
	scanf("%d",&m);
	printf("the scores of no.%d are:\n",m);
	p=search(score,m);
	for(i=0;i<4;i++)
		printf("%d\t",*(p+i));
}

int *search(int(*pointer)[4],int n)
{
	int *pt;
	pt=*(pointer+n);
	return (pt);
}