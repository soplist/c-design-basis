main()
{
   float x,y,min;
   printf("please input two floating point numbers:\n",x,y);
   scanf("%f,%f",&x,&y);
   min=x<y?x:y;
   printf("the min number:%f\n",min);
}