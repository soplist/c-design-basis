main()
{
   int i,score[4];
   float ave=0.0;
   for(i=0;i<4;i++)
   {
	   printf("input score=");
	   scanf("%d",&score[i]);
	   ave=ave+score[i];
   }
   ave/=4.0;
   printf("average score=%5.2f\n",ave);
   printf("score with average difference\n");
   for(i=0;i<4;i++)
	   printf("%d\t%5.2f\n",score[i],score[i]-ave);
}