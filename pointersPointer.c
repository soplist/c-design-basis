main()
{
    int **p1,*p2,a=318;
	p2=&a;
	p1=&p2;
	printf("a=%d",**p1);
}