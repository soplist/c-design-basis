#include <stdio.h>
#define SIZE 15

main()
{
   int j,flag,data[SIZE];
   flag=0;
   printf("input number:\n");
   for(j=0;j<SIZE;j++)
   {
      scanf("%d",&data[j]);
   }
   for(j=0;j<SIZE;j++)
   {
	   if(data[j]==12)
	   {
           printf("input the nomber 12 in the position %d.\n",j+1);
		   flag=1;
		   break;
	   }
   }
   if(flag==0) printf("12 is not in numbers.");
}