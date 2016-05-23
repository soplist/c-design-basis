main()
{
   int m=6,n=8;
   void swap(int x,int y);
   swap(m,n);
   printf("m=%d,n=%d\n",m,n);
}

void swap(int x,int y)
{
	int temp;
	temp=x;x=y;y=temp;
	printf("x=%d,y=%d\n",x,y);
}