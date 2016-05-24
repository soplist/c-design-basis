main()
{
	void sub(int *px,int *py);
	int x,y;
	sub(&x,&y);
	printf("x=%d,y=%d\n",x,y);
}
void sub(int *px,int *py)
{
    *px=10;
	*py=20;
}