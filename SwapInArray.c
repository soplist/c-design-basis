main()
{
	void swap(int x[2]);
	int a[2]={45,76};
	swap(a);
	printf("%d,%d\n",a[0],a[1]);
}

void swap(int x[2])
{
    int temp;
	temp=x[0];x[0]=x[1];x[1]=temp;
}