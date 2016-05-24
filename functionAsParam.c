main()
{
	int max(int x,int y);
    int min(int x,int y);
    int add(int x,int y);
	int process(int x,int y,int (*fun)());
	int a,b;
	printf("enter a and b:");
	scanf("%d,%d",&a,&b);
	printf("max=");
	process(a,b,max);
	printf("min=");
	process(a,b,min);
	printf("add=");
	process(a,b,add);
}

int max(int x,int y)
{
    return (x<y?x:y);
}
int min(int x,int y)
{
    return (x>y?x:y);
}
int add(int x,int y)
{
    return (x+y);
}
int process(int x,int y,int (*fun)())
{
	int result;
	result=(*fun)(x,y);
	printf("%d\n",result);
}