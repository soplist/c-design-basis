#include<stdio.h>
#include<conio.h>

main()
{
   int year,month,days,leap;
   printf("year.month\n");
   scanf("%4d.%2d",&year,&month);
   switch(month)
   {
      case 1:
	  case 3:
	  case 5:
	  case 7:
	  case 8:
	  case 10:
	  case 12:days=31;break;
	  case 4:
	  case 6:
      case 9:
	  case 11:days=30;break;
	  case 2:if(year%400==0) leap=1;
	         else
			    if(year%4==0&&year%100!=0) leap=1;
			    else leap=0;
			 if(leap) days=29;
			 else days=28;
   }
   printf("%d year %d month of day %d days.\n",year,month,days);
}