main()
{
   int score;
   printf("please input score:\n");
   scanf("%d",&score);
   if(score>=60)
      printf("your score ups to grade:%d\n",score);
   else
      printf("your score doesn't up to grade:%d\n",score);
}