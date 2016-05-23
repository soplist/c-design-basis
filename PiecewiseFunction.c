main()
{
   int x,y;
   printf("please input x\n");
   scanf("%d",&x);
   if(x>=0)
	   if(x>5) y=3;
       else y=1;
   else
	   if(x<5) y=-3;
       else y=-1;
   printf("y=%d\n",y);
}