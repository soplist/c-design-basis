#include <math.h>
main()
{
   float score;
   printf("please input score:\n");
   scanf("%f",&score);
   if(score>=90)
      printf("very good\n");
   else if(score>=80)
      printf("good\n");
   else if(score>=60)
      printf("pass\n");
   else
      printf("fail\n");
}