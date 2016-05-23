int max(int x,int y)
{
   int z;
   if(x<y) z=y;
   else z=x;
   return (z);
}

main()
{
	int a,b,c,t;
	printf("input the datas:\n");
	scanf("%d,%d,%d",&a,&b,&c);
	t=max(a,b);
	t=max(t,c);
	printf("max is %d\n",t);
}