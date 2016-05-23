int add(int x,int y)
{
   return (x+y);
}

main()
{
	extern int A,B;
	printf("%d",add(A,B));
}
int A=9,B=16;