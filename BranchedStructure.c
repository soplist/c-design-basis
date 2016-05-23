main()
{
   float x,y,t;
   printf("please input x,y:\n");
   scanf("%f,%f",&x,&y);
   if(x<y)
   {
	   t=x;
	   x=y;
	   y=t;
   }
   printf("x=%5.2f\ny=%5.2f\n",x,y);
}